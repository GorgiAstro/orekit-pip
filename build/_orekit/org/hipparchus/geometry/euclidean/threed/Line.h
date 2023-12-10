#ifndef org_hipparchus_geometry_euclidean_threed_Line_H
#define org_hipparchus_geometry_euclidean_threed_Line_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace partitioning {
        class Embedding;
      }
      class Point;
      namespace euclidean {
        namespace threed {
          class SubLine;
          class Vector3D;
          class Line;
          class Euclidean3D;
        }
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
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
              mid_init$_5da06482a46416aa,
              mid_closestPoint_cdaae38017a00464,
              mid_contains_ab4ed00ccf0defd6,
              mid_distance_e41f841ed79f933c,
              mid_distance_bf473e7c74e5ce2b,
              mid_fromDirection_b436cebd67c93f56,
              mid_getAbscissa_bf473e7c74e5ce2b,
              mid_getDirection_d52645e0d4c07563,
              mid_getOrigin_d52645e0d4c07563,
              mid_getTolerance_dff5885c2c873297,
              mid_intersection_cdaae38017a00464,
              mid_isSimilarTo_6639e54dacc07051,
              mid_pointAt_9137bba253a33d9c,
              mid_reset_8f7d2a24ef2ff591,
              mid_revert_9fb9cdc35bfe2f74,
              mid_toSpace_25054c2060d7aee4,
              mid_toSpace_84b1343e67eeaa7b,
              mid_toSubSpace_d43a3b6426dc1754,
              mid_toSubSpace_b46f57fa6217d00f,
              mid_wholeLine_a538b105c8caf09b,
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
