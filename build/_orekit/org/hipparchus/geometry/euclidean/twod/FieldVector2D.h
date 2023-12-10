#ifndef org_hipparchus_geometry_euclidean_twod_FieldVector2D_H
#define org_hipparchus_geometry_euclidean_twod_FieldVector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class FieldVector2D;
          class Vector2D;
        }
      }
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    class Field;
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

          class FieldVector2D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_72479ee08453ef97,
              mid_init$_133d042863f38dc1,
              mid_init$_8fc19fb4c3aa3506,
              mid_init$_c1e25539da4155bf,
              mid_init$_fbcda3e5524e5f6f,
              mid_init$_eee0c82b0b9e16e9,
              mid_init$_d0c8a91ec3365370,
              mid_init$_2990470a681a6fd7,
              mid_init$_a4747dc5dc0590ce,
              mid_init$_7af5cf37751d129a,
              mid_init$_7902b72a1201d31a,
              mid_init$_ea3c5af3ab3de50d,
              mid_init$_4d719dcd77fca638,
              mid_init$_8ec100a083bf25bf,
              mid_init$_d5117a1d5b837ceb,
              mid_add_516439063b85838d,
              mid_add_7c97c078e4f5b294,
              mid_add_1a764c7720bceac7,
              mid_add_b941a06cef684e5a,
              mid_add_02cb7ac1cca2de5a,
              mid_add_7a7342fcb0451653,
              mid_angle_aa8d6081bcf1b465,
              mid_angle_730f1b42d89fdf28,
              mid_angle_ad3bc5282fcc27ea,
              mid_crossProduct_aa8d6081bcf1b465,
              mid_crossProduct_f7f56afb1ca3e540,
              mid_distance_99a534c1d1eea8b3,
              mid_distance_e55037f57b16b7ae,
              mid_distance_aa8d6081bcf1b465,
              mid_distance_730f1b42d89fdf28,
              mid_distance_ad3bc5282fcc27ea,
              mid_distance1_99a534c1d1eea8b3,
              mid_distance1_e55037f57b16b7ae,
              mid_distance1_aa8d6081bcf1b465,
              mid_distance1_ad3bc5282fcc27ea,
              mid_distance1_730f1b42d89fdf28,
              mid_distanceInf_99a534c1d1eea8b3,
              mid_distanceInf_e55037f57b16b7ae,
              mid_distanceInf_aa8d6081bcf1b465,
              mid_distanceInf_730f1b42d89fdf28,
              mid_distanceInf_ad3bc5282fcc27ea,
              mid_distanceSq_99a534c1d1eea8b3,
              mid_distanceSq_e55037f57b16b7ae,
              mid_distanceSq_aa8d6081bcf1b465,
              mid_distanceSq_730f1b42d89fdf28,
              mid_distanceSq_ad3bc5282fcc27ea,
              mid_dotProduct_99a534c1d1eea8b3,
              mid_dotProduct_e55037f57b16b7ae,
              mid_equals_65c7d273e80d497a,
              mid_getMinusI_99de8f9cf7d34cdc,
              mid_getMinusJ_99de8f9cf7d34cdc,
              mid_getNaN_99de8f9cf7d34cdc,
              mid_getNegativeInfinity_99de8f9cf7d34cdc,
              mid_getNorm_eba8e72a22c984ac,
              mid_getNorm1_eba8e72a22c984ac,
              mid_getNormInf_eba8e72a22c984ac,
              mid_getNormSq_eba8e72a22c984ac,
              mid_getPlusI_99de8f9cf7d34cdc,
              mid_getPlusJ_99de8f9cf7d34cdc,
              mid_getPositiveInfinity_99de8f9cf7d34cdc,
              mid_getX_eba8e72a22c984ac,
              mid_getY_eba8e72a22c984ac,
              mid_getZero_99de8f9cf7d34cdc,
              mid_hashCode_570ce0828f81a2c1,
              mid_isInfinite_b108b35ef48e27bd,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_a55106adcf9f2022,
              mid_normalize_a55106adcf9f2022,
              mid_orientation_3082ff2f8e3c4a8a,
              mid_scalarMultiply_a91b9a6749fb5a00,
              mid_scalarMultiply_8f5040fbd8415e13,
              mid_subtract_516439063b85838d,
              mid_subtract_7c97c078e4f5b294,
              mid_subtract_1a764c7720bceac7,
              mid_subtract_02cb7ac1cca2de5a,
              mid_subtract_b941a06cef684e5a,
              mid_subtract_7a7342fcb0451653,
              mid_toArray_226a0b2040b1d2e1,
              mid_toString_11b109bd155ca898,
              mid_toString_7b429db583278c20,
              mid_toVector2D_73f627838730c264,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldVector2D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldVector2D(const FieldVector2D& obj) : ::java::lang::Object(obj) {}

            FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > &);
            FieldVector2D(jdouble, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            FieldVector2D(const ::org::hipparchus::Field &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            FieldVector2D(jdouble, const FieldVector2D &, jdouble, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            FieldVector2D(jdouble, const FieldVector2D &, jdouble, const FieldVector2D &, jdouble, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            FieldVector2D(jdouble, const FieldVector2D &, jdouble, const FieldVector2D &, jdouble, const FieldVector2D &, jdouble, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &);
            FieldVector2D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);

            FieldVector2D add(const FieldVector2D &) const;
            FieldVector2D add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            FieldVector2D add(jdouble, const FieldVector2D &) const;
            FieldVector2D add(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &) const;
            FieldVector2D add(jdouble, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            FieldVector2D add(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            ::org::hipparchus::CalculusFieldElement crossProduct(const FieldVector2D &, const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            ::org::hipparchus::CalculusFieldElement dotProduct(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            jboolean equals(const ::java::lang::Object &) const;
            static FieldVector2D getMinusI(const ::org::hipparchus::Field &);
            static FieldVector2D getMinusJ(const ::org::hipparchus::Field &);
            static FieldVector2D getNaN(const ::org::hipparchus::Field &);
            static FieldVector2D getNegativeInfinity(const ::org::hipparchus::Field &);
            ::org::hipparchus::CalculusFieldElement getNorm() const;
            ::org::hipparchus::CalculusFieldElement getNorm1() const;
            ::org::hipparchus::CalculusFieldElement getNormInf() const;
            ::org::hipparchus::CalculusFieldElement getNormSq() const;
            static FieldVector2D getPlusI(const ::org::hipparchus::Field &);
            static FieldVector2D getPlusJ(const ::org::hipparchus::Field &);
            static FieldVector2D getPositiveInfinity(const ::org::hipparchus::Field &);
            ::org::hipparchus::CalculusFieldElement getX() const;
            ::org::hipparchus::CalculusFieldElement getY() const;
            static FieldVector2D getZero(const ::org::hipparchus::Field &);
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            FieldVector2D negate() const;
            FieldVector2D normalize() const;
            static ::org::hipparchus::CalculusFieldElement orientation(const FieldVector2D &, const FieldVector2D &, const FieldVector2D &);
            FieldVector2D scalarMultiply(jdouble) const;
            FieldVector2D scalarMultiply(const ::org::hipparchus::CalculusFieldElement &) const;
            FieldVector2D subtract(const FieldVector2D &) const;
            FieldVector2D subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            FieldVector2D subtract(jdouble, const FieldVector2D &) const;
            FieldVector2D subtract(jdouble, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            FieldVector2D subtract(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &) const;
            FieldVector2D subtract(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > toArray() const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::java::text::NumberFormat &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D toVector2D() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldVector2D);
          extern PyTypeObject *PY_TYPE(FieldVector2D);

          class t_FieldVector2D {
          public:
            PyObject_HEAD
            FieldVector2D object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldVector2D *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldVector2D&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldVector2D&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
