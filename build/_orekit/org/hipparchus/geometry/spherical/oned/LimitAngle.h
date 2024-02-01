#ifndef org_hipparchus_geometry_spherical_oned_LimitAngle_H
#define org_hipparchus_geometry_spherical_oned_LimitAngle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Hyperplane;
      }
      namespace spherical {
        namespace oned {
          class ArcsSet;
          class Sphere1D;
          class LimitAngle;
          class S1Point;
          class SubLimitAngle;
        }
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
              mid_init$_3444d777ecc41f4a,
              mid_copySelf_80ab8fd71540f6fc,
              mid_emptyHyperplane_ed9ca9b2055841e0,
              mid_getLocation_17e56b7fbf0cddb5,
              mid_getOffset_277cb62c4ec87155,
              mid_getReverse_80ab8fd71540f6fc,
              mid_getTolerance_9981f74b2d109da6,
              mid_isDirect_eee3de00fe971136,
              mid_project_ff0c84956c63705d,
              mid_sameOrientationAs_51737f919fe0cf72,
              mid_wholeHyperplane_ed9ca9b2055841e0,
              mid_wholeSpace_04cfacb89407dcdc,
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
