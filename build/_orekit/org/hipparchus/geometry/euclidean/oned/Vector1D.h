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
        namespace oned {

          class Vector1D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_10f281d777284cea,
              mid_init$_6660e0e219ae6305,
              mid_init$_930cbfef52871ef4,
              mid_init$_e450a5f39d2b7fe6,
              mid_init$_7c81f54288af27f7,
              mid_add_be3d5e0f525cd980,
              mid_add_08732e6f726f426f,
              mid_distance_cf1fec2b7b1c0efe,
              mid_distance_6ca3078378362c71,
              mid_distance1_b540ea36818b5810,
              mid_distanceInf_b540ea36818b5810,
              mid_distanceInf_6ca3078378362c71,
              mid_distanceSq_b540ea36818b5810,
              mid_distanceSq_6ca3078378362c71,
              mid_dotProduct_b540ea36818b5810,
              mid_equals_221e8e85cb385209,
              mid_equalsIeee754_221e8e85cb385209,
              mid_getNorm_557b8123390d8d0c,
              mid_getNorm1_557b8123390d8d0c,
              mid_getNormInf_557b8123390d8d0c,
              mid_getNormSq_557b8123390d8d0c,
              mid_getSpace_cf9410d213a7cbb9,
              mid_getX_557b8123390d8d0c,
              mid_getZero_466c0ad242ce3f41,
              mid_hashCode_412668abc8d889e9,
              mid_isInfinite_89b302893bdbe1f1,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_466c0ad242ce3f41,
              mid_scalarMultiply_5dbe0d73eb008e74,
              mid_subtract_be3d5e0f525cd980,
              mid_subtract_08732e6f726f426f,
              mid_toString_3cffd47377eca18a,
              mid_toString_8d9667e91d8ffa97,
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
