#ifndef org_hipparchus_geometry_spherical_twod_S2Point_H
#define org_hipparchus_geometry_spherical_twod_S2Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
              mid_init$_30f8886dfb88a63c,
              mid_init$_13edac039e8cc967,
              mid_distance_277cb62c4ec87155,
              mid_distance_6a34f228015871ea,
              mid_equals_72faff9b05f5ed5e,
              mid_equalsIeee754_72faff9b05f5ed5e,
              mid_getPhi_9981f74b2d109da6,
              mid_getSpace_a30bf0b437744017,
              mid_getTheta_9981f74b2d109da6,
              mid_getVector_032312bdeb3f2f93,
              mid_hashCode_d6ab429752e7c267,
              mid_isNaN_eee3de00fe971136,
              mid_negate_e080ae8a5cf76560,
              mid_toString_d2c8eb4129821f0e,
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
