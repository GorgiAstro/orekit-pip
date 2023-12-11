#ifndef org_hipparchus_geometry_euclidean_threed_Line_H
#define org_hipparchus_geometry_euclidean_threed_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
        namespace threed {
          class Line;
          class Vector3D;
          class Euclidean3D;
          class SubLine;
        }
      }
      class Point;
      namespace partitioning {
        class Embedding;
      }
      class Vector;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class Line : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8a3775c012d81228,
              mid_closestPoint_915d07ea0c621755,
              mid_contains_7ccf3b3f40d5fcd3,
              mid_distance_4aa316f686c1a1eb,
              mid_distance_8ddca7bd73e586da,
              mid_fromDirection_d19a50c1011094cf,
              mid_getAbscissa_8ddca7bd73e586da,
              mid_getDirection_f88961cca75a2c0a,
              mid_getOrigin_f88961cca75a2c0a,
              mid_getTolerance_557b8123390d8d0c,
              mid_intersection_915d07ea0c621755,
              mid_isSimilarTo_78ea6c7fe91873db,
              mid_pointAt_20de5f9d51c6611f,
              mid_reset_be9548a8a583a03d,
              mid_revert_50dd992767fffc25,
              mid_toSpace_78d94b5fd2b1ad0c,
              mid_toSpace_5d6b94fad5d111c4,
              mid_toSubSpace_42ff1f7fd4bd45c4,
              mid_toSubSpace_be3d5e0f525cd980,
              mid_wholeLine_40fe3d99fdc690cd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Line(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Line(const Line& obj) : ::java::lang::Object(obj) {}

            Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D closestPoint(const Line &) const;
            jboolean contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            jdouble distance(const Line &) const;
            jdouble distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static Line fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
            jdouble getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getDirection() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getOrigin() const;
            jdouble getTolerance() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D intersection(const Line &) const;
            jboolean isSimilarTo(const Line &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D pointAt(jdouble) const;
            void reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            Line revert() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Point &) const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D toSubSpace(const ::org::hipparchus::geometry::Vector &) const;
            ::org::hipparchus::geometry::euclidean::threed::SubLine wholeLine() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(Line);
          extern PyTypeObject *PY_TYPE(Line);

          class t_Line {
          public:
            PyObject_HEAD
            Line object;
            static PyObject *wrap_Object(const Line&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
