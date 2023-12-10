#ifndef org_hipparchus_geometry_spherical_oned_S1Point_H
#define org_hipparchus_geometry_spherical_oned_S1Point_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class S1Point;
          class Sphere1D;
        }
      }
      class Point;
      class Space;
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
              mid_init$_17db3a65980d3441,
              mid_distance_07bb97c2794cf6b1,
              mid_distance_f60f567ab8f0d599,
              mid_equals_65c7d273e80d497a,
              mid_equalsIeee754_65c7d273e80d497a,
              mid_getAlpha_dff5885c2c873297,
              mid_getSpace_ebbd6b2d39ab0e4f,
              mid_getVector_73f627838730c264,
              mid_hashCode_570ce0828f81a2c1,
              mid_isNaN_b108b35ef48e27bd,
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
