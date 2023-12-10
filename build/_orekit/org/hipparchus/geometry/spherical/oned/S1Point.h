#ifndef org_hipparchus_geometry_spherical_oned_S1Point_H
#define org_hipparchus_geometry_spherical_oned_S1Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Point;
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
      namespace spherical {
        namespace oned {
          class S1Point;
          class Sphere1D;
        }
      }
      class Space;
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

          class S1Point : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_distance_726dc963fac3505e,
              mid_distance_5bb41e4cdd049545,
              mid_equals_229c87223f486349,
              mid_equalsIeee754_229c87223f486349,
              mid_getAlpha_456d9a2f64d6b28d,
              mid_getSpace_0438ef5f9a5edb53,
              mid_getVector_6d781af269bebe5e,
              mid_hashCode_f2f64475e4580546,
              mid_isNaN_e470b6d9e0d979db,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit S1Point(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            S1Point(const S1Point& obj) : ::java::lang::Object(obj) {}

            static S1Point *NaN;

            S1Point(jdouble);

            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const S1Point &, const S1Point &);
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getAlpha() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D getVector() const;
            jint hashCode() const;
            jboolean isNaN() const;
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
          extern PyType_Def PY_TYPE_DEF(S1Point);
          extern PyTypeObject *PY_TYPE(S1Point);

          class t_S1Point {
          public:
            PyObject_HEAD
            S1Point object;
            static PyObject *wrap_Object(const S1Point&);
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
