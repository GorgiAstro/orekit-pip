#ifndef org_hipparchus_geometry_spherical_twod_S2Point_H
#define org_hipparchus_geometry_spherical_twod_S2Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace geometry {
      namespace spherical {
        namespace twod {
          class Sphere2D;
          class S2Point;
        }
      }
      class Point;
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
              mid_init$_2810d2bec90e7b1c,
              mid_init$_ab23f4ae0fb33968,
              mid_distance_cf1fec2b7b1c0efe,
              mid_distance_8531a7312d9da5ba,
              mid_equals_221e8e85cb385209,
              mid_equalsIeee754_221e8e85cb385209,
              mid_getPhi_557b8123390d8d0c,
              mid_getSpace_cf9410d213a7cbb9,
              mid_getTheta_557b8123390d8d0c,
              mid_getVector_f88961cca75a2c0a,
              mid_hashCode_412668abc8d889e9,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_0ba7e0560ff59fd8,
              mid_toString_3cffd47377eca18a,
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
