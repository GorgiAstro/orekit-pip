#ifndef org_hipparchus_geometry_euclidean_twod_Vector2D_H
#define org_hipparchus_geometry_euclidean_twod_Vector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      class Point;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Vector;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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
              mid_init$_ab69da052b88f50c,
              mid_init$_d8b88b24b02865b1,
              mid_init$_369b4c97255d5afa,
              mid_init$_a0bb1dda4d070321,
              mid_init$_7fb6bfd21f9324eb,
              mid_init$_4ef6123990113253,
              mid_add_4f90fdb34b7d1107,
              mid_add_12bf5e1b264beb0a,
              mid_angle_00cbd9690bb8a91b,
              mid_crossProduct_00cbd9690bb8a91b,
              mid_distance_f0dd8cb59ea09794,
              mid_distance_00cbd9690bb8a91b,
              mid_distance1_2f915fa9762130df,
              mid_distance1_00cbd9690bb8a91b,
              mid_distanceInf_2f915fa9762130df,
              mid_distanceInf_00cbd9690bb8a91b,
              mid_distanceSq_2f915fa9762130df,
              mid_distanceSq_00cbd9690bb8a91b,
              mid_dotProduct_2f915fa9762130df,
              mid_equals_460c5e2d9d51c6cc,
              mid_equalsIeee754_460c5e2d9d51c6cc,
              mid_getNorm_b74f83833fdad017,
              mid_getNorm1_b74f83833fdad017,
              mid_getNormInf_b74f83833fdad017,
              mid_getNormSq_b74f83833fdad017,
              mid_getSpace_9afbccb68c8e9ef8,
              mid_getX_b74f83833fdad017,
              mid_getY_b74f83833fdad017,
              mid_getZero_9cb1572c1d4936cf,
              mid_hashCode_55546ef6a647f39b,
              mid_isInfinite_9ab94ac1dc23b105,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_9cb1572c1d4936cf,
              mid_orientation_4cb54b5cd3974eb4,
              mid_scalarMultiply_32a32febf6739dcf,
              mid_subtract_4f90fdb34b7d1107,
              mid_subtract_12bf5e1b264beb0a,
              mid_toArray_25e1757a36c4dde2,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toString_a9120cb5e83d0986,
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
