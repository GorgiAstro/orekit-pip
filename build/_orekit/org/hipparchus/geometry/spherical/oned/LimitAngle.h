#ifndef org_hipparchus_geometry_spherical_oned_LimitAngle_H
#define org_hipparchus_geometry_spherical_oned_LimitAngle_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class S1Point;
          class ArcsSet;
          class LimitAngle;
          class SubLimitAngle;
        }
      }
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
              mid_init$_3aa41fceed3d883d,
              mid_copySelf_cf577dee4ce85ae5,
              mid_emptyHyperplane_791f9e0d98b5141b,
              mid_getLocation_633b3f99682591ac,
              mid_getOffset_f0dd8cb59ea09794,
              mid_getReverse_cf577dee4ce85ae5,
              mid_getTolerance_b74f83833fdad017,
              mid_isDirect_9ab94ac1dc23b105,
              mid_project_2214f7ad5b6ca158,
              mid_sameOrientationAs_806ecfbca1984226,
              mid_wholeHyperplane_791f9e0d98b5141b,
              mid_wholeSpace_7d64add151265ba7,
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
