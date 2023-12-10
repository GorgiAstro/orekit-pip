#ifndef org_hipparchus_geometry_euclidean_oned_OrientedPoint_H
#define org_hipparchus_geometry_euclidean_oned_OrientedPoint_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class SubOrientedPoint;
          class OrientedPoint;
          class IntervalsSet;
          class Euclidean1D;
          class Vector1D;
        }
      }
      class Vector;
      class Point;
      namespace partitioning {
        class Hyperplane;
      }
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
        namespace oned {

          class OrientedPoint : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a0148f2b1e7b1fe0,
              mid_copySelf_1e8b5c1f5bf2f0dc,
              mid_emptyHyperplane_26f436423bdf9c0a,
              mid_getLocation_90d24faee21188ef,
              mid_getOffset_07bb97c2794cf6b1,
              mid_getOffset_b4822d5266bca26e,
              mid_getTolerance_dff5885c2c873297,
              mid_isDirect_b108b35ef48e27bd,
              mid_project_c48805c2dda937c6,
              mid_revertSelf_0fa09c18fee449d5,
              mid_sameOrientationAs_5bc340c02d9ac484,
              mid_wholeHyperplane_26f436423bdf9c0a,
              mid_wholeSpace_c5f122d639184cd2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrientedPoint(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrientedPoint(const OrientedPoint& obj) : ::java::lang::Object(obj) {}

            OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D &, jboolean, jdouble);

            OrientedPoint copySelf() const;
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint emptyHyperplane() const;
            ::org::hipparchus::geometry::euclidean::oned::Vector1D getLocation() const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            jdouble getOffset(const ::org::hipparchus::geometry::Vector &) const;
            jdouble getTolerance() const;
            jboolean isDirect() const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            void revertSelf() const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint wholeHyperplane() const;
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet wholeSpace() const;
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
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(OrientedPoint);
          extern PyTypeObject *PY_TYPE(OrientedPoint);

          class t_OrientedPoint {
          public:
            PyObject_HEAD
            OrientedPoint object;
            static PyObject *wrap_Object(const OrientedPoint&);
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
