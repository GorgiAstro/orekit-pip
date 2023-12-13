#ifndef org_hipparchus_geometry_euclidean_oned_Vector1D_H
#define org_hipparchus_geometry_euclidean_oned_Vector1D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      class Point;
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
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
              mid_init$_8ba9fe7a847cecad,
              mid_init$_b62632bf7f12bf63,
              mid_init$_87203da900040693,
              mid_init$_9e4d5abe567c03fa,
              mid_init$_3e524dedce3a0db6,
              mid_add_b1d2ab531c8e2a03,
              mid_add_26e53c497cdf67ce,
              mid_distance_f0dd8cb59ea09794,
              mid_distance_5b45e835420176cf,
              mid_distance1_2f915fa9762130df,
              mid_distanceInf_2f915fa9762130df,
              mid_distanceInf_5b45e835420176cf,
              mid_distanceSq_2f915fa9762130df,
              mid_distanceSq_5b45e835420176cf,
              mid_dotProduct_2f915fa9762130df,
              mid_equals_460c5e2d9d51c6cc,
              mid_equalsIeee754_460c5e2d9d51c6cc,
              mid_getNorm_b74f83833fdad017,
              mid_getNorm1_b74f83833fdad017,
              mid_getNormInf_b74f83833fdad017,
              mid_getNormSq_b74f83833fdad017,
              mid_getSpace_9afbccb68c8e9ef8,
              mid_getX_b74f83833fdad017,
              mid_getZero_62608abb8b57a58e,
              mid_hashCode_55546ef6a647f39b,
              mid_isInfinite_9ab94ac1dc23b105,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_62608abb8b57a58e,
              mid_scalarMultiply_eb2d794943b6c0f5,
              mid_subtract_b1d2ab531c8e2a03,
              mid_subtract_26e53c497cdf67ce,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toString_a9120cb5e83d0986,
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
