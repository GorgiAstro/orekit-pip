#ifndef org_hipparchus_geometry_spherical_twod_S2Point_H
#define org_hipparchus_geometry_spherical_twod_S2Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace geometry {
      class Point;
      namespace spherical {
        namespace twod {
          class S2Point;
          class Sphere2D;
        }
      }
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      class Space;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          class S2Point : public ::java::lang::Object {
           public:
            enum {
              mid_init$_029ff0cbf68ea054,
              mid_init$_8f2e782d5278b131,
              mid_distance_07bb97c2794cf6b1,
              mid_distance_7906933611969296,
              mid_equals_65c7d273e80d497a,
              mid_equalsIeee754_65c7d273e80d497a,
              mid_getPhi_dff5885c2c873297,
              mid_getSpace_ebbd6b2d39ab0e4f,
              mid_getTheta_dff5885c2c873297,
              mid_getVector_d52645e0d4c07563,
              mid_hashCode_570ce0828f81a2c1,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_fe1c7ad511d8448b,
              mid_toString_11b109bd155ca898,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit S2Point(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            S2Point(const S2Point& obj) : ::java::lang::Object(obj) {}

            static S2Point *MINUS_I;
            static S2Point *MINUS_J;
            static S2Point *MINUS_K;
            static S2Point *NaN;
            static S2Point *PLUS_I;
            static S2Point *PLUS_J;
            static S2Point *PLUS_K;

            S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            S2Point(jdouble, jdouble);

            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const S2Point &, const S2Point &);
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getPhi() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            jdouble getTheta() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getVector() const;
            jint hashCode() const;
            jboolean isNaN() const;
            S2Point negate() const;
            ::java::lang::String toString() const;
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
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(S2Point);
          extern PyTypeObject *PY_TYPE(S2Point);

          class t_S2Point {
          public:
            PyObject_HEAD
            S2Point object;
            static PyObject *wrap_Object(const S2Point&);
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
