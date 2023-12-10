#ifndef org_hipparchus_geometry_spherical_twod_S2Point_H
#define org_hipparchus_geometry_spherical_twod_S2Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace spherical {
        namespace twod {
          class Sphere2D;
          class S2Point;
        }
      }
      class Point;
      class Space;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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
              mid_init$_a94622407b723689,
              mid_init$_1d715fa3b7b756e1,
              mid_distance_726dc963fac3505e,
              mid_distance_8bb7ccdc6246d177,
              mid_equals_229c87223f486349,
              mid_equalsIeee754_229c87223f486349,
              mid_getPhi_456d9a2f64d6b28d,
              mid_getSpace_0438ef5f9a5edb53,
              mid_getTheta_456d9a2f64d6b28d,
              mid_getVector_17a952530a808943,
              mid_hashCode_f2f64475e4580546,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_71b7da0eb14488b0,
              mid_toString_0090f7797e403f43,
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
