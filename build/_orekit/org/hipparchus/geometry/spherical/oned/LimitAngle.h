#ifndef org_hipparchus_geometry_spherical_oned_LimitAngle_H
#define org_hipparchus_geometry_spherical_oned_LimitAngle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class ArcsSet;
          class SubLimitAngle;
          class LimitAngle;
          class S1Point;
          class Sphere1D;
        }
      }
      namespace partitioning {
        class Hyperplane;
      }
      class Point;
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
      namespace spherical {
        namespace oned {

          class LimitAngle : public ::java::lang::Object {
           public:
            enum {
              mid_init$_39313936c125a556,
              mid_copySelf_807c3bb8feb16dcb,
              mid_emptyHyperplane_b29bbbd3e1177b40,
              mid_getLocation_b43e2632e40c5b1c,
              mid_getOffset_726dc963fac3505e,
              mid_getReverse_807c3bb8feb16dcb,
              mid_getTolerance_456d9a2f64d6b28d,
              mid_isDirect_e470b6d9e0d979db,
              mid_project_ac445dfe898b403a,
              mid_sameOrientationAs_b99f508aafd89c77,
              mid_wholeHyperplane_b29bbbd3e1177b40,
              mid_wholeSpace_5473122695b414ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitAngle(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitAngle(const LimitAngle& obj) : ::java::lang::Object(obj) {}

            LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point &, jboolean, jdouble);

            LimitAngle copySelf() const;
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle emptyHyperplane() const;
            ::org::hipparchus::geometry::spherical::oned::S1Point getLocation() const;
            jdouble getOffset(const ::org::hipparchus::geometry::Point &) const;
            LimitAngle getReverse() const;
            jdouble getTolerance() const;
            jboolean isDirect() const;
            ::org::hipparchus::geometry::Point project(const ::org::hipparchus::geometry::Point &) const;
            jboolean sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle wholeHyperplane() const;
            ::org::hipparchus::geometry::spherical::oned::ArcsSet wholeSpace() const;
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
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(LimitAngle);
          extern PyTypeObject *PY_TYPE(LimitAngle);

          class t_LimitAngle {
          public:
            PyObject_HEAD
            LimitAngle object;
            static PyObject *wrap_Object(const LimitAngle&);
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
