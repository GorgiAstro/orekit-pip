#ifndef org_hipparchus_geometry_euclidean_threed_FieldVector3D_H
#define org_hipparchus_geometry_euclidean_threed_FieldVector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class Field;
    namespace util {
      class FieldBlendable;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
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
        namespace threed {

          class FieldVector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_77e61a645c496adc,
              mid_init$_2547c8b008203199,
              mid_init$_2ca3d0f9cc0458ff,
              mid_init$_cbbe0ea7153e8243,
              mid_init$_c528a40acb311d63,
              mid_init$_bab44dcbad09a0fe,
              mid_init$_f9ea60a8dc2d69fb,
              mid_init$_53eb1eaa7d486337,
              mid_init$_fbdfce0abbc6ec97,
              mid_init$_715ae0b53a545e50,
              mid_init$_7f36d00502b1a411,
              mid_init$_3600fc826b0bf516,
              mid_init$_5e5f436da030f07b,
              mid_init$_3dc52d8ed8f08220,
              mid_init$_a33657dd2c7fdf46,
              mid_init$_37bd77cc55bb6394,
              mid_add_df37e4d755ff0467,
              mid_add_f577b57448bfefd2,
              mid_add_285bb51f11eca050,
              mid_add_b202d3872c3dcaec,
              mid_add_9c9f11b7c428777c,
              mid_add_749028f45aac6597,
              mid_angle_76ae169de4d66af2,
              mid_angle_78466cd3f373c8f1,
              mid_angle_7c8d4944669ef839,
              mid_blendArithmeticallyWith_5f54bfbc5ca211f5,
              mid_crossProduct_df37e4d755ff0467,
              mid_crossProduct_f577b57448bfefd2,
              mid_crossProduct_1b84772486fb83f9,
              mid_crossProduct_21f6734482fee228,
              mid_crossProduct_5857e16b641c47d0,
              mid_distance_aa19eca086a185fe,
              mid_distance_1cfc77d18e0355ee,
              mid_distance_76ae169de4d66af2,
              mid_distance_7c8d4944669ef839,
              mid_distance_78466cd3f373c8f1,
              mid_distance1_aa19eca086a185fe,
              mid_distance1_1cfc77d18e0355ee,
              mid_distance1_76ae169de4d66af2,
              mid_distance1_78466cd3f373c8f1,
              mid_distance1_7c8d4944669ef839,
              mid_distanceInf_aa19eca086a185fe,
              mid_distanceInf_1cfc77d18e0355ee,
              mid_distanceInf_76ae169de4d66af2,
              mid_distanceInf_78466cd3f373c8f1,
              mid_distanceInf_7c8d4944669ef839,
              mid_distanceSq_aa19eca086a185fe,
              mid_distanceSq_1cfc77d18e0355ee,
              mid_distanceSq_76ae169de4d66af2,
              mid_distanceSq_78466cd3f373c8f1,
              mid_distanceSq_7c8d4944669ef839,
              mid_dotProduct_aa19eca086a185fe,
              mid_dotProduct_1cfc77d18e0355ee,
              mid_dotProduct_76ae169de4d66af2,
              mid_dotProduct_7c8d4944669ef839,
              mid_dotProduct_78466cd3f373c8f1,
              mid_equals_72faff9b05f5ed5e,
              mid_getAlpha_08d37e3f77b7239d,
              mid_getDelta_08d37e3f77b7239d,
              mid_getMinusI_10f9413c61ea347a,
              mid_getMinusJ_10f9413c61ea347a,
              mid_getMinusK_10f9413c61ea347a,
              mid_getNaN_10f9413c61ea347a,
              mid_getNegativeInfinity_10f9413c61ea347a,
              mid_getNorm_08d37e3f77b7239d,
              mid_getNorm1_08d37e3f77b7239d,
              mid_getNormInf_08d37e3f77b7239d,
              mid_getNormSq_08d37e3f77b7239d,
              mid_getPlusI_10f9413c61ea347a,
              mid_getPlusJ_10f9413c61ea347a,
              mid_getPlusK_10f9413c61ea347a,
              mid_getPositiveInfinity_10f9413c61ea347a,
              mid_getX_08d37e3f77b7239d,
              mid_getY_08d37e3f77b7239d,
              mid_getZ_08d37e3f77b7239d,
              mid_getZero_10f9413c61ea347a,
              mid_hashCode_d6ab429752e7c267,
              mid_isInfinite_eee3de00fe971136,
              mid_isNaN_eee3de00fe971136,
              mid_negate_d1b42a6748e907f9,
              mid_normalize_d1b42a6748e907f9,
              mid_orthogonal_d1b42a6748e907f9,
              mid_scalarMultiply_9fc2ffdb71a4cfdb,
              mid_scalarMultiply_c2b058e1eb7a8988,
              mid_subtract_df37e4d755ff0467,
              mid_subtract_f577b57448bfefd2,
              mid_subtract_285bb51f11eca050,
              mid_subtract_9c9f11b7c428777c,
              mid_subtract_b202d3872c3dcaec,
              mid_subtract_749028f45aac6597,
              mid_toArray_94ed2e0620f8833d,
              mid_toString_d2c8eb4129821f0e,
              mid_toString_aeac32100fe35ffe,
              mid_toVector3D_032312bdeb3f2f93,
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
            FieldVector3D add(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &) const;
            FieldVector3D add(jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
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
