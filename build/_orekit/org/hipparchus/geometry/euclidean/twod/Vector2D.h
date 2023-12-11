#ifndef org_hipparchus_geometry_euclidean_twod_Vector2D_H
#define org_hipparchus_geometry_euclidean_twod_Vector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace geometry {
      class Point;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Space;
      class Vector;
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
              mid_init$_cc18240f4a737f14,
              mid_init$_4eefe7c484d8847c,
              mid_init$_ab23f4ae0fb33968,
              mid_init$_a1092cb450852e45,
              mid_init$_b693e8f38c5ecbd9,
              mid_init$_8fc99b32a74d08c2,
              mid_add_adc34d508fd7001c,
              mid_add_fd976f5dd924d367,
              mid_angle_19de0be8ef7116ef,
              mid_crossProduct_19de0be8ef7116ef,
              mid_distance_cf1fec2b7b1c0efe,
              mid_distance_19de0be8ef7116ef,
              mid_distance1_b540ea36818b5810,
              mid_distance1_19de0be8ef7116ef,
              mid_distanceInf_b540ea36818b5810,
              mid_distanceInf_19de0be8ef7116ef,
              mid_distanceSq_b540ea36818b5810,
              mid_distanceSq_19de0be8ef7116ef,
              mid_dotProduct_b540ea36818b5810,
              mid_equals_221e8e85cb385209,
              mid_equalsIeee754_221e8e85cb385209,
              mid_getNorm_557b8123390d8d0c,
              mid_getNorm1_557b8123390d8d0c,
              mid_getNormInf_557b8123390d8d0c,
              mid_getNormSq_557b8123390d8d0c,
              mid_getSpace_cf9410d213a7cbb9,
              mid_getX_557b8123390d8d0c,
              mid_getY_557b8123390d8d0c,
              mid_getZero_f681f2fc9cdfab57,
              mid_hashCode_412668abc8d889e9,
              mid_isInfinite_89b302893bdbe1f1,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_f681f2fc9cdfab57,
              mid_orientation_53cef8ac1ce9cfba,
              mid_scalarMultiply_1b4c0a5fd68f3ffb,
              mid_subtract_adc34d508fd7001c,
              mid_subtract_fd976f5dd924d367,
              mid_toArray_a53a7513ecedada2,
              mid_toString_3cffd47377eca18a,
              mid_toString_8d9667e91d8ffa97,
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
