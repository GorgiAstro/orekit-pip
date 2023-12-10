#ifndef org_hipparchus_geometry_euclidean_threed_Line_H
#define org_hipparchus_geometry_euclidean_threed_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
          class Vector3D;
          class SubLine;
          class Line;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
      namespace partitioning {
        class Embedding;
      }
      class Point;
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
              mid_init$_7b3ba1964c11031c,
              mid_closestPoint_26c38ef25f8d6fd7,
              mid_contains_c8fb5394ceb559de,
              mid_distance_9631d63e1e207976,
              mid_distance_80b2470b9511edd1,
              mid_fromDirection_d50cb83cce4f328e,
              mid_getAbscissa_80b2470b9511edd1,
              mid_getDirection_17a952530a808943,
              mid_getOrigin_17a952530a808943,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_intersection_26c38ef25f8d6fd7,
              mid_isSimilarTo_d51b9d9c9584654a,
              mid_pointAt_5f993a721a1d8c59,
              mid_reset_bedd188d9f399c34,
              mid_revert_927626ac26078f4f,
              mid_toSpace_a49086d4148c0139,
              mid_toSpace_7a21411cb28c8c28,
              mid_toSubSpace_f56ff726ce04194f,
              mid_toSubSpace_32bf1487354a978b,
              mid_wholeLine_6979bc19b5e872ae,
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
