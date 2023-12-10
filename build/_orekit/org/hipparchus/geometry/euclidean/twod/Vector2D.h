#ifndef org_hipparchus_geometry_euclidean_twod_Vector2D_H
#define org_hipparchus_geometry_euclidean_twod_Vector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Point;
      class Vector;
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
  namespace text {
    class NumberFormat;
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
              mid_init$_ebc26dcaf4761286,
              mid_init$_f99c97f1de58893e,
              mid_init$_1d715fa3b7b756e1,
              mid_init$_260f828910f0d217,
              mid_init$_1eb5059c70d52300,
              mid_init$_0ad7d4e3605105c3,
              mid_add_6698e195f6e5dfff,
              mid_add_f4ada383aea98827,
              mid_angle_0fbdabd0a8745d93,
              mid_crossProduct_0fbdabd0a8745d93,
              mid_distance_726dc963fac3505e,
              mid_distance_0fbdabd0a8745d93,
              mid_distance1_05fa5f52db18503d,
              mid_distance1_0fbdabd0a8745d93,
              mid_distanceInf_05fa5f52db18503d,
              mid_distanceInf_0fbdabd0a8745d93,
              mid_distanceSq_05fa5f52db18503d,
              mid_distanceSq_0fbdabd0a8745d93,
              mid_dotProduct_05fa5f52db18503d,
              mid_equals_229c87223f486349,
              mid_equalsIeee754_229c87223f486349,
              mid_getNorm_456d9a2f64d6b28d,
              mid_getNorm1_456d9a2f64d6b28d,
              mid_getNormInf_456d9a2f64d6b28d,
              mid_getNormSq_456d9a2f64d6b28d,
              mid_getSpace_0438ef5f9a5edb53,
              mid_getX_456d9a2f64d6b28d,
              mid_getY_456d9a2f64d6b28d,
              mid_getZero_6d781af269bebe5e,
              mid_hashCode_f2f64475e4580546,
              mid_isInfinite_e470b6d9e0d979db,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_6d781af269bebe5e,
              mid_orientation_065804d1672f0d09,
              mid_scalarMultiply_395c0d14fc31fa5e,
              mid_subtract_6698e195f6e5dfff,
              mid_subtract_f4ada383aea98827,
              mid_toArray_7cdc325af0834901,
              mid_toString_0090f7797e403f43,
              mid_toString_aed149be89fb33b9,
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
