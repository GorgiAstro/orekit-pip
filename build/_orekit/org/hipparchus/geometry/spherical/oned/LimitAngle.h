#ifndef org_hipparchus_geometry_spherical_oned_LimitAngle_H
#define org_hipparchus_geometry_spherical_oned_LimitAngle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class SubLimitAngle;
          class ArcsSet;
          class Sphere1D;
          class S1Point;
          class LimitAngle;
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
              mid_init$_3124af4883917e47,
              mid_copySelf_0d8f45c3f1b74855,
              mid_emptyHyperplane_4a61f36b44575d3c,
              mid_getLocation_0b0acc7251a8d339,
              mid_getOffset_cf1fec2b7b1c0efe,
              mid_getReverse_0d8f45c3f1b74855,
              mid_getTolerance_557b8123390d8d0c,
              mid_isDirect_89b302893bdbe1f1,
              mid_project_328d0d966eeb9668,
              mid_sameOrientationAs_cb9274a363000a77,
              mid_wholeHyperplane_4a61f36b44575d3c,
              mid_wholeSpace_75597f9ad249cb08,
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
