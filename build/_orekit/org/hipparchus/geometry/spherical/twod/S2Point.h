#ifndef org_hipparchus_geometry_spherical_twod_S2Point_H
#define org_hipparchus_geometry_spherical_twod_S2Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      class Point;
      namespace spherical {
        namespace twod {
          class Sphere2D;
          class S2Point;
        }
      }
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
              mid_init$_1844f891addbac57,
              mid_init$_369b4c97255d5afa,
              mid_distance_f0dd8cb59ea09794,
              mid_distance_76f75333fe7fe00c,
              mid_equals_460c5e2d9d51c6cc,
              mid_equalsIeee754_460c5e2d9d51c6cc,
              mid_getPhi_b74f83833fdad017,
              mid_getSpace_9afbccb68c8e9ef8,
              mid_getTheta_b74f83833fdad017,
              mid_getVector_8b724f8b4fdad1a2,
              mid_hashCode_55546ef6a647f39b,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_cf0fa877996d1fcc,
              mid_toString_1c1fa1e935d6cdcf,
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
