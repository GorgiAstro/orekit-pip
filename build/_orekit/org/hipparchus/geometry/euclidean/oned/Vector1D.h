#ifndef org_hipparchus_geometry_euclidean_oned_Vector1D_H
#define org_hipparchus_geometry_euclidean_oned_Vector1D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
      class Point;
      class Vector;
      class Space;
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
        namespace oned {

          class Vector1D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77e0f9a1f260e2e5,
              mid_init$_03dd098f08b4f4ff,
              mid_init$_d25dc2555f575e2b,
              mid_init$_555b98837dfb0fae,
              mid_init$_8cb10ee617a1d889,
              mid_add_32bf1487354a978b,
              mid_add_1ed27204db57dfd6,
              mid_distance_726dc963fac3505e,
              mid_distance_cb473262c0a1553e,
              mid_distance1_05fa5f52db18503d,
              mid_distanceInf_05fa5f52db18503d,
              mid_distanceInf_cb473262c0a1553e,
              mid_distanceSq_05fa5f52db18503d,
              mid_distanceSq_cb473262c0a1553e,
              mid_dotProduct_05fa5f52db18503d,
              mid_equals_229c87223f486349,
              mid_equalsIeee754_229c87223f486349,
              mid_getNorm_456d9a2f64d6b28d,
              mid_getNorm1_456d9a2f64d6b28d,
              mid_getNormInf_456d9a2f64d6b28d,
              mid_getNormSq_456d9a2f64d6b28d,
              mid_getSpace_0438ef5f9a5edb53,
              mid_getX_456d9a2f64d6b28d,
              mid_getZero_382bf37547292fb5,
              mid_hashCode_f2f64475e4580546,
              mid_isInfinite_e470b6d9e0d979db,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_382bf37547292fb5,
              mid_scalarMultiply_a3ba998b0d5666a9,
              mid_subtract_32bf1487354a978b,
              mid_subtract_1ed27204db57dfd6,
              mid_toString_0090f7797e403f43,
              mid_toString_aed149be89fb33b9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector1D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector1D(const Vector1D& obj) : ::java::lang::Object(obj) {}

            static Vector1D *NEGATIVE_INFINITY;
            static Vector1D *NaN;
            static Vector1D *ONE;
            static Vector1D *POSITIVE_INFINITY;
            static Vector1D *ZERO;

            Vector1D(jdouble);
            Vector1D(jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &);

            Vector1D add(const ::org::hipparchus::geometry::Vector &) const;
            Vector1D add(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const Vector1D &, const Vector1D &);
            jdouble distance1(const ::org::hipparchus::geometry::Vector &) const;
            jdouble distanceInf(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceInf(const Vector1D &, const Vector1D &);
            jdouble distanceSq(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceSq(const Vector1D &, const Vector1D &);
            jdouble dotProduct(const ::org::hipparchus::geometry::Vector &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getNorm() const;
            jdouble getNorm1() const;
            jdouble getNormInf() const;
            jdouble getNormSq() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            jdouble getX() const;
            Vector1D getZero() const;
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            Vector1D negate() const;
            Vector1D scalarMultiply(jdouble) const;
            Vector1D subtract(const ::org::hipparchus::geometry::Vector &) const;
            Vector1D subtract(jdouble, const ::org::hipparchus::geometry::Vector &) const;
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
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Vector1D);
          extern PyTypeObject *PY_TYPE(Vector1D);

          class t_Vector1D {
          public:
            PyObject_HEAD
            Vector1D object;
            static PyObject *wrap_Object(const Vector1D&);
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
