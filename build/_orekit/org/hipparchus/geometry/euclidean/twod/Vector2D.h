#ifndef org_hipparchus_geometry_euclidean_twod_Vector2D_H
#define org_hipparchus_geometry_euclidean_twod_Vector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      class Point;
      namespace euclidean {
        namespace twod {
          class Euclidean2D;
          class Vector2D;
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
  namespace text {
    class NumberFormat;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          class Vector2D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa9d415d19f69361,
              mid_init$_43c9ba22c547cbd5,
              mid_init$_8f2e782d5278b131,
              mid_init$_168dc3d77e3245ed,
              mid_init$_46062026ee9fbbf5,
              mid_init$_2d0bba3ca271f687,
              mid_add_8144ab28b67d94ff,
              mid_add_33b3b958740706ea,
              mid_angle_7e41f0ef8aa2109d,
              mid_crossProduct_7e41f0ef8aa2109d,
              mid_distance_07bb97c2794cf6b1,
              mid_distance_7e41f0ef8aa2109d,
              mid_distance1_b4822d5266bca26e,
              mid_distance1_7e41f0ef8aa2109d,
              mid_distanceInf_b4822d5266bca26e,
              mid_distanceInf_7e41f0ef8aa2109d,
              mid_distanceSq_b4822d5266bca26e,
              mid_distanceSq_7e41f0ef8aa2109d,
              mid_dotProduct_b4822d5266bca26e,
              mid_equals_65c7d273e80d497a,
              mid_equalsIeee754_65c7d273e80d497a,
              mid_getNorm_dff5885c2c873297,
              mid_getNorm1_dff5885c2c873297,
              mid_getNormInf_dff5885c2c873297,
              mid_getNormSq_dff5885c2c873297,
              mid_getSpace_ebbd6b2d39ab0e4f,
              mid_getX_dff5885c2c873297,
              mid_getY_dff5885c2c873297,
              mid_getZero_73f627838730c264,
              mid_hashCode_570ce0828f81a2c1,
              mid_isInfinite_b108b35ef48e27bd,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_73f627838730c264,
              mid_orientation_86e6d5e84ec305f0,
              mid_scalarMultiply_1d94587a4ec1fe0f,
              mid_subtract_8144ab28b67d94ff,
              mid_subtract_33b3b958740706ea,
              mid_toArray_60c7040667a7dc5c,
              mid_toString_11b109bd155ca898,
              mid_toString_7b429db583278c20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector2D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector2D(const Vector2D& obj) : ::java::lang::Object(obj) {}

            static Vector2D *MINUS_I;
            static Vector2D *MINUS_J;
            static Vector2D *NEGATIVE_INFINITY;
            static Vector2D *NaN;
            static Vector2D *PLUS_I;
            static Vector2D *PLUS_J;
            static Vector2D *POSITIVE_INFINITY;
            static Vector2D *ZERO;

            Vector2D(const JArray< jdouble > &);
            Vector2D(jdouble, const Vector2D &);
            Vector2D(jdouble, jdouble);
            Vector2D(jdouble, const Vector2D &, jdouble, const Vector2D &);
            Vector2D(jdouble, const Vector2D &, jdouble, const Vector2D &, jdouble, const Vector2D &);
            Vector2D(jdouble, const Vector2D &, jdouble, const Vector2D &, jdouble, const Vector2D &, jdouble, const Vector2D &);

            Vector2D add(const ::org::hipparchus::geometry::Vector &) const;
            Vector2D add(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            static jdouble angle(const Vector2D &, const Vector2D &);
            jdouble crossProduct(const Vector2D &, const Vector2D &) const;
            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const Vector2D &, const Vector2D &);
            jdouble distance1(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distance1(const Vector2D &, const Vector2D &);
            jdouble distanceInf(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceInf(const Vector2D &, const Vector2D &);
            jdouble distanceSq(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceSq(const Vector2D &, const Vector2D &);
            jdouble dotProduct(const ::org::hipparchus::geometry::Vector &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getNorm() const;
            jdouble getNorm1() const;
            jdouble getNormInf() const;
            jdouble getNormSq() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            jdouble getX() const;
            jdouble getY() const;
            Vector2D getZero() const;
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            Vector2D negate() const;
            static jdouble orientation(const Vector2D &, const Vector2D &, const Vector2D &);
            Vector2D scalarMultiply(jdouble) const;
            Vector2D subtract(const ::org::hipparchus::geometry::Vector &) const;
            Vector2D subtract(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            JArray< jdouble > toArray() const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::java::text::NumberFormat &) const;
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
      namespace euclidean {
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Vector2D);
          extern PyTypeObject *PY_TYPE(Vector2D);

          class t_Vector2D {
          public:
            PyObject_HEAD
            Vector2D object;
            static PyObject *wrap_Object(const Vector2D&);
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
