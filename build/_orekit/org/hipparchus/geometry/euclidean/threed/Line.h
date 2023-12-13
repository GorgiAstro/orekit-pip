#ifndef org_hipparchus_geometry_euclidean_threed_Line_H
#define org_hipparchus_geometry_euclidean_threed_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Line;
          class SubLine;
          class Euclidean3D;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
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
              mid_init$_4fbea8fa1cddeb2d,
              mid_closestPoint_e47e722c2bd142aa,
              mid_contains_82d995e738c9e027,
              mid_distance_cb550ea413e10fd7,
              mid_distance_f75a63670951da8a,
              mid_fromDirection_487b9a2b26b45ed4,
              mid_getAbscissa_f75a63670951da8a,
              mid_getDirection_8b724f8b4fdad1a2,
              mid_getOrigin_8b724f8b4fdad1a2,
              mid_getTolerance_b74f83833fdad017,
              mid_intersection_e47e722c2bd142aa,
              mid_isSimilarTo_7d2e2ef084bda0c9,
              mid_pointAt_498f52cd8e5a7072,
              mid_reset_b651b5ef96594ce8,
              mid_revert_26296f26a05c4026,
              mid_toSpace_c015d3ffc61ff7f9,
              mid_toSpace_e21381ba36e4ea13,
              mid_toSubSpace_b2178ad896cd2546,
              mid_toSubSpace_b1d2ab531c8e2a03,
              mid_wholeLine_1ad4fd5d973aaf15,
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
