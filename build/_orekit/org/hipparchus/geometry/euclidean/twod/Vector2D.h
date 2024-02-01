#ifndef org_hipparchus_geometry_euclidean_twod_Vector2D_H
#define org_hipparchus_geometry_euclidean_twod_Vector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace geometry {
      class Vector;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Point;
      class Space;
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
              mid_init$_a71c45509eaf92d1,
              mid_init$_17caf3ea31472651,
              mid_init$_13edac039e8cc967,
              mid_init$_208d350da024ec62,
              mid_init$_c408028e80098f1b,
              mid_init$_9333c632f204af9c,
              mid_add_bf5660dd5343a17c,
              mid_add_128d62dd1c6c0a55,
              mid_angle_36879f891eec9695,
              mid_crossProduct_36879f891eec9695,
              mid_distance_277cb62c4ec87155,
              mid_distance_36879f891eec9695,
              mid_distance1_54eca2a6b3ac81a2,
              mid_distance1_36879f891eec9695,
              mid_distanceInf_54eca2a6b3ac81a2,
              mid_distanceInf_36879f891eec9695,
              mid_distanceSq_54eca2a6b3ac81a2,
              mid_distanceSq_36879f891eec9695,
              mid_dotProduct_54eca2a6b3ac81a2,
              mid_equals_72faff9b05f5ed5e,
              mid_equalsIeee754_72faff9b05f5ed5e,
              mid_getNorm_9981f74b2d109da6,
              mid_getNorm1_9981f74b2d109da6,
              mid_getNormInf_9981f74b2d109da6,
              mid_getNormSq_9981f74b2d109da6,
              mid_getSpace_a30bf0b437744017,
              mid_getX_9981f74b2d109da6,
              mid_getY_9981f74b2d109da6,
              mid_getZero_0490d0574aafb07c,
              mid_hashCode_d6ab429752e7c267,
              mid_isInfinite_eee3de00fe971136,
              mid_isNaN_eee3de00fe971136,
              mid_negate_0490d0574aafb07c,
              mid_orientation_143a69c4b35f658a,
              mid_scalarMultiply_22e63043f272734b,
              mid_subtract_bf5660dd5343a17c,
              mid_subtract_128d62dd1c6c0a55,
              mid_toArray_be783177b060994b,
              mid_toString_d2c8eb4129821f0e,
              mid_toString_aeac32100fe35ffe,
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
