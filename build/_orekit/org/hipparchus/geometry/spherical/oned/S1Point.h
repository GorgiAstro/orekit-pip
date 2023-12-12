#ifndef org_hipparchus_geometry_spherical_oned_S1Point_H
#define org_hipparchus_geometry_spherical_oned_S1Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class S1Point;
        }
      }
      class Point;
      namespace euclidean {
        namespace twod {
          class Vector2D;
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
              mid_init$_10f281d777284cea,
              mid_distance_cf1fec2b7b1c0efe,
              mid_distance_0ae4679e4e35d729,
              mid_equals_221e8e85cb385209,
              mid_equalsIeee754_221e8e85cb385209,
              mid_getAlpha_557b8123390d8d0c,
              mid_getSpace_cf9410d213a7cbb9,
              mid_getVector_f681f2fc9cdfab57,
              mid_hashCode_412668abc8d889e9,
              mid_isNaN_89b302893bdbe1f1,
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
