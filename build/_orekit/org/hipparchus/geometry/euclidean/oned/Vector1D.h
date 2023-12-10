#ifndef org_hipparchus_geometry_euclidean_oned_Vector1D_H
#define org_hipparchus_geometry_euclidean_oned_Vector1D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      class Point;
      class Space;
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
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
              mid_init$_17db3a65980d3441,
              mid_init$_7757c3d40a86ae4d,
              mid_init$_90fba1d39ff2c19f,
              mid_init$_bb464d8a47dffde9,
              mid_init$_6eba53664f74ff3a,
              mid_add_b46f57fa6217d00f,
              mid_add_733d0ab0dc2eba13,
              mid_distance_07bb97c2794cf6b1,
              mid_distance_e14b0b079d61a875,
              mid_distance1_b4822d5266bca26e,
              mid_distanceInf_b4822d5266bca26e,
              mid_distanceInf_e14b0b079d61a875,
              mid_distanceSq_b4822d5266bca26e,
              mid_distanceSq_e14b0b079d61a875,
              mid_dotProduct_b4822d5266bca26e,
              mid_equals_65c7d273e80d497a,
              mid_equalsIeee754_65c7d273e80d497a,
              mid_getNorm_dff5885c2c873297,
              mid_getNorm1_dff5885c2c873297,
              mid_getNormInf_dff5885c2c873297,
              mid_getNormSq_dff5885c2c873297,
              mid_getSpace_ebbd6b2d39ab0e4f,
              mid_getX_dff5885c2c873297,
              mid_getZero_90d24faee21188ef,
              mid_hashCode_570ce0828f81a2c1,
              mid_isInfinite_b108b35ef48e27bd,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_90d24faee21188ef,
              mid_scalarMultiply_45a3480a9fbf5253,
              mid_subtract_b46f57fa6217d00f,
              mid_subtract_733d0ab0dc2eba13,
              mid_toString_11b109bd155ca898,
              mid_toString_7b429db583278c20,
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
