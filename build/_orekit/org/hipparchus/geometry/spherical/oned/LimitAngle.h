#ifndef org_hipparchus_geometry_spherical_oned_LimitAngle_H
#define org_hipparchus_geometry_spherical_oned_LimitAngle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class S1Point;
          class LimitAngle;
          class ArcsSet;
          class SubLimitAngle;
          class Sphere1D;
        }
      }
      class Point;
      namespace partitioning {
        class Hyperplane;
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
      namespace spherical {
        namespace oned {

          class LimitAngle : public ::java::lang::Object {
           public:
            enum {
              mid_init$_82536b2cb42ed7f9,
              mid_copySelf_01001ad942f10976,
              mid_emptyHyperplane_21c05dc3dd28ffae,
              mid_getLocation_ad9f612e40949328,
              mid_getOffset_07bb97c2794cf6b1,
              mid_getReverse_01001ad942f10976,
              mid_getTolerance_dff5885c2c873297,
              mid_isDirect_b108b35ef48e27bd,
              mid_project_c48805c2dda937c6,
              mid_sameOrientationAs_5bc340c02d9ac484,
              mid_wholeHyperplane_21c05dc3dd28ffae,
              mid_wholeSpace_9a4d6a36c117a959,
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
