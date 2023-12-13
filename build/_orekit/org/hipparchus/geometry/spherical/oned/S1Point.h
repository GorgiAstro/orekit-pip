#ifndef org_hipparchus_geometry_spherical_oned_S1Point_H
#define org_hipparchus_geometry_spherical_oned_S1Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      class Point;
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class S1Point;
        }
      }
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
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
              mid_init$_8ba9fe7a847cecad,
              mid_distance_f0dd8cb59ea09794,
              mid_distance_8c97327622272adf,
              mid_equals_460c5e2d9d51c6cc,
              mid_equalsIeee754_460c5e2d9d51c6cc,
              mid_getAlpha_b74f83833fdad017,
              mid_getSpace_9afbccb68c8e9ef8,
              mid_getVector_9cb1572c1d4936cf,
              mid_hashCode_55546ef6a647f39b,
              mid_isNaN_9ab94ac1dc23b105,
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
