#ifndef org_hipparchus_geometry_spherical_oned_S1Point_H
#define org_hipparchus_geometry_spherical_oned_S1Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
      class Point;
      namespace spherical {
        namespace oned {
          class Sphere1D;
          class S1Point;
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
              mid_init$_1ad26e8c8c0cd65b,
              mid_distance_277cb62c4ec87155,
              mid_distance_ef4e9de8d5b8dce6,
              mid_equals_72faff9b05f5ed5e,
              mid_equalsIeee754_72faff9b05f5ed5e,
              mid_getAlpha_9981f74b2d109da6,
              mid_getSpace_a30bf0b437744017,
              mid_getVector_0490d0574aafb07c,
              mid_hashCode_d6ab429752e7c267,
              mid_isNaN_eee3de00fe971136,
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
