#ifndef org_hipparchus_geometry_euclidean_threed_FieldVector3D_H
#define org_hipparchus_geometry_euclidean_threed_FieldVector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace util {
      class FieldBlendable;
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
  namespace io {
    class Serializable;
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
        namespace threed {

          class FieldVector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_72479ee08453ef97,
              mid_init$_ad32522e5930a207,
              mid_init$_a10b3e52820c4332,
              mid_init$_0f8ae3b7a8c2efe4,
              mid_init$_53343a27568c8665,
              mid_init$_eee0c82b0b9e16e9,
              mid_init$_82fa7e789a6ae1f6,
              mid_init$_dd5e6f81820c071a,
              mid_init$_0d386383f9d751b1,
              mid_init$_952ae6ca33b5ca7b,
              mid_init$_787507660b5345da,
              mid_init$_2a7620523897e25e,
              mid_init$_1a3e2f5679cdf6cc,
              mid_init$_a7e0c5fb28eb8bfe,
              mid_init$_0900299079acfdca,
              mid_init$_3b1182b8003be140,
              mid_add_a173408e2b1f78b2,
              mid_add_7a9aa2e8b906f1a5,
              mid_add_36f09bdcd3459c44,
              mid_add_0a08f5ab3829235f,
              mid_add_be17efda88c8b2a8,
              mid_add_582f02609e2e5273,
              mid_angle_664dcb5ef2f7cc2b,
              mid_angle_dafa2886884c755a,
              mid_angle_659f5a2caf346aee,
              mid_blendArithmeticallyWith_8611389cf23e9404,
              mid_crossProduct_a173408e2b1f78b2,
              mid_crossProduct_7a9aa2e8b906f1a5,
              mid_crossProduct_9dc4d243618c0821,
              mid_crossProduct_a32a7e5b76d39058,
              mid_crossProduct_13c107d11bb0484c,
              mid_distance_11b158fbf85bdc54,
              mid_distance_2f5dcdf943d50d31,
              mid_distance_664dcb5ef2f7cc2b,
              mid_distance_659f5a2caf346aee,
              mid_distance_dafa2886884c755a,
              mid_distance1_11b158fbf85bdc54,
              mid_distance1_2f5dcdf943d50d31,
              mid_distance1_664dcb5ef2f7cc2b,
              mid_distance1_659f5a2caf346aee,
              mid_distance1_dafa2886884c755a,
              mid_distanceInf_11b158fbf85bdc54,
              mid_distanceInf_2f5dcdf943d50d31,
              mid_distanceInf_664dcb5ef2f7cc2b,
              mid_distanceInf_659f5a2caf346aee,
              mid_distanceInf_dafa2886884c755a,
              mid_distanceSq_11b158fbf85bdc54,
              mid_distanceSq_2f5dcdf943d50d31,
              mid_distanceSq_664dcb5ef2f7cc2b,
              mid_distanceSq_dafa2886884c755a,
              mid_distanceSq_659f5a2caf346aee,
              mid_dotProduct_11b158fbf85bdc54,
              mid_dotProduct_2f5dcdf943d50d31,
              mid_dotProduct_664dcb5ef2f7cc2b,
              mid_dotProduct_659f5a2caf346aee,
              mid_dotProduct_dafa2886884c755a,
              mid_equals_65c7d273e80d497a,
              mid_getAlpha_eba8e72a22c984ac,
              mid_getDelta_eba8e72a22c984ac,
              mid_getMinusI_202e7b3b5ed01afc,
              mid_getMinusJ_202e7b3b5ed01afc,
              mid_getMinusK_202e7b3b5ed01afc,
              mid_getNaN_202e7b3b5ed01afc,
              mid_getNegativeInfinity_202e7b3b5ed01afc,
              mid_getNorm_eba8e72a22c984ac,
              mid_getNorm1_eba8e72a22c984ac,
              mid_getNormInf_eba8e72a22c984ac,
              mid_getNormSq_eba8e72a22c984ac,
              mid_getPlusI_202e7b3b5ed01afc,
              mid_getPlusJ_202e7b3b5ed01afc,
              mid_getPlusK_202e7b3b5ed01afc,
              mid_getPositiveInfinity_202e7b3b5ed01afc,
              mid_getX_eba8e72a22c984ac,
              mid_getY_eba8e72a22c984ac,
              mid_getZ_eba8e72a22c984ac,
              mid_getZero_202e7b3b5ed01afc,
              mid_hashCode_570ce0828f81a2c1,
              mid_isInfinite_b108b35ef48e27bd,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_716f50c86ffc8da7,
              mid_normalize_716f50c86ffc8da7,
              mid_orthogonal_716f50c86ffc8da7,
              mid_scalarMultiply_3e101a58a2527fdf,
              mid_scalarMultiply_e0e563985265c470,
              mid_subtract_a173408e2b1f78b2,
              mid_subtract_7a9aa2e8b906f1a5,
              mid_subtract_36f09bdcd3459c44,
              mid_subtract_0a08f5ab3829235f,
              mid_subtract_be17efda88c8b2a8,
              mid_subtract_582f02609e2e5273,
              mid_toArray_226a0b2040b1d2e1,
              mid_toString_11b109bd155ca898,
              mid_toString_7b429db583278c20,
              mid_toVector3D_d52645e0d4c07563,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldVector3D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldVector3D(const FieldVector3D& obj) : ::java::lang::Object(obj) {}

            FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > &);
            FieldVector3D(jdouble, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            FieldVector3D(const ::org::hipparchus::Field &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
            FieldVector3D(jdouble, const FieldVector3D &, jdouble, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            FieldVector3D(jdouble, const FieldVector3D &, jdouble, const FieldVector3D &, jdouble, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            FieldVector3D(jdouble, const FieldVector3D &, jdouble, const FieldVector3D &, jdouble, const FieldVector3D &, jdouble, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &);
            FieldVector3D(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

            FieldVector3D add(const FieldVector3D &) const;
            FieldVector3D add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            FieldVector3D add(jdouble, const FieldVector3D &) const;
            FieldVector3D add(jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            FieldVector3D add(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &) const;
            FieldVector3D add(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            FieldVector3D blendArithmeticallyWith(const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &) const;
            FieldVector3D crossProduct(const FieldVector3D &) const;
            FieldVector3D crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static FieldVector3D crossProduct(const FieldVector3D &, const FieldVector3D &);
            static FieldVector3D crossProduct(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static FieldVector3D crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::hipparchus::CalculusFieldElement distance1(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            ::org::hipparchus::CalculusFieldElement dotProduct(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement dotProduct(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement dotProduct(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            jboolean equals(const ::java::lang::Object &) const;
            ::org::hipparchus::CalculusFieldElement getAlpha() const;
            ::org::hipparchus::CalculusFieldElement getDelta() const;
            static FieldVector3D getMinusI(const ::org::hipparchus::Field &);
            static FieldVector3D getMinusJ(const ::org::hipparchus::Field &);
            static FieldVector3D getMinusK(const ::org::hipparchus::Field &);
            static FieldVector3D getNaN(const ::org::hipparchus::Field &);
            static FieldVector3D getNegativeInfinity(const ::org::hipparchus::Field &);
            ::org::hipparchus::CalculusFieldElement getNorm() const;
            ::org::hipparchus::CalculusFieldElement getNorm1() const;
            ::org::hipparchus::CalculusFieldElement getNormInf() const;
            ::org::hipparchus::CalculusFieldElement getNormSq() const;
            static FieldVector3D getPlusI(const ::org::hipparchus::Field &);
            static FieldVector3D getPlusJ(const ::org::hipparchus::Field &);
            static FieldVector3D getPlusK(const ::org::hipparchus::Field &);
            static FieldVector3D getPositiveInfinity(const ::org::hipparchus::Field &);
            ::org::hipparchus::CalculusFieldElement getX() const;
            ::org::hipparchus::CalculusFieldElement getY() const;
            ::org::hipparchus::CalculusFieldElement getZ() const;
            static FieldVector3D getZero(const ::org::hipparchus::Field &);
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            FieldVector3D negate() const;
            FieldVector3D normalize() const;
            FieldVector3D orthogonal() const;
            FieldVector3D scalarMultiply(jdouble) const;
            FieldVector3D scalarMultiply(const ::org::hipparchus::CalculusFieldElement &) const;
            FieldVector3D subtract(const FieldVector3D &) const;
            FieldVector3D subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            FieldVector3D subtract(jdouble, const FieldVector3D &) const;
            FieldVector3D subtract(jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            FieldVector3D subtract(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &) const;
            FieldVector3D subtract(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            JArray< ::org::hipparchus::CalculusFieldElement > toArray() const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::java::text::NumberFormat &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D toVector3D() const;
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
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(FieldVector3D);
          extern PyTypeObject *PY_TYPE(FieldVector3D);

          class t_FieldVector3D {
          public:
            PyObject_HEAD
            FieldVector3D object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldVector3D *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldVector3D&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldVector3D&, PyTypeObject *);
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
