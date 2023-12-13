#ifndef org_hipparchus_geometry_euclidean_threed_FieldVector3D_H
#define org_hipparchus_geometry_euclidean_threed_FieldVector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    namespace util {
      class FieldBlendable;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class Field;
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
              mid_init$_8b0f7facc8a6a46e,
              mid_init$_d060b2b32c85260a,
              mid_init$_0602f39e097cca02,
              mid_init$_c444820624e1b64e,
              mid_init$_855fef2df88fcdd5,
              mid_init$_e337ae7145f7989c,
              mid_init$_baa1ed35ace5d036,
              mid_init$_948fa9c9c487e23d,
              mid_init$_2798ba7a942a5ffc,
              mid_init$_ca508b772f55d7a5,
              mid_init$_329cb7beeb5dfe9e,
              mid_init$_ee573b6483f71595,
              mid_init$_1496b3dd3cf8d362,
              mid_init$_0fcce8dd8894011e,
              mid_init$_e6812b3ad67e78a6,
              mid_init$_9cf8e3f2f92992c1,
              mid_add_49157187b00e5904,
              mid_add_356b02aa715afa02,
              mid_add_e6412b26eb8f79ad,
              mid_add_304381b29cf06a58,
              mid_add_e8e3047ae0b7ae3f,
              mid_add_2beceb62ee48f448,
              mid_angle_07cc087c385a99ad,
              mid_angle_1651606e28c48c1e,
              mid_angle_b71939b8275fb620,
              mid_blendArithmeticallyWith_0eb73ffa34a8bbf6,
              mid_crossProduct_49157187b00e5904,
              mid_crossProduct_356b02aa715afa02,
              mid_crossProduct_f9c086f1066c613d,
              mid_crossProduct_16314175123ed0e2,
              mid_crossProduct_ef06fbca397b6e8d,
              mid_distance_f475fa22e4944acc,
              mid_distance_40bcacaf1f5c8f3e,
              mid_distance_07cc087c385a99ad,
              mid_distance_b71939b8275fb620,
              mid_distance_1651606e28c48c1e,
              mid_distance1_f475fa22e4944acc,
              mid_distance1_40bcacaf1f5c8f3e,
              mid_distance1_07cc087c385a99ad,
              mid_distance1_1651606e28c48c1e,
              mid_distance1_b71939b8275fb620,
              mid_distanceInf_f475fa22e4944acc,
              mid_distanceInf_40bcacaf1f5c8f3e,
              mid_distanceInf_07cc087c385a99ad,
              mid_distanceInf_1651606e28c48c1e,
              mid_distanceInf_b71939b8275fb620,
              mid_distanceSq_f475fa22e4944acc,
              mid_distanceSq_40bcacaf1f5c8f3e,
              mid_distanceSq_07cc087c385a99ad,
              mid_distanceSq_b71939b8275fb620,
              mid_distanceSq_1651606e28c48c1e,
              mid_dotProduct_f475fa22e4944acc,
              mid_dotProduct_40bcacaf1f5c8f3e,
              mid_dotProduct_07cc087c385a99ad,
              mid_dotProduct_b71939b8275fb620,
              mid_dotProduct_1651606e28c48c1e,
              mid_equals_460c5e2d9d51c6cc,
              mid_getAlpha_81520b552cb3fa26,
              mid_getDelta_81520b552cb3fa26,
              mid_getMinusI_98221d2e63674019,
              mid_getMinusJ_98221d2e63674019,
              mid_getMinusK_98221d2e63674019,
              mid_getNaN_98221d2e63674019,
              mid_getNegativeInfinity_98221d2e63674019,
              mid_getNorm_81520b552cb3fa26,
              mid_getNorm1_81520b552cb3fa26,
              mid_getNormInf_81520b552cb3fa26,
              mid_getNormSq_81520b552cb3fa26,
              mid_getPlusI_98221d2e63674019,
              mid_getPlusJ_98221d2e63674019,
              mid_getPlusK_98221d2e63674019,
              mid_getPositiveInfinity_98221d2e63674019,
              mid_getX_81520b552cb3fa26,
              mid_getY_81520b552cb3fa26,
              mid_getZ_81520b552cb3fa26,
              mid_getZero_98221d2e63674019,
              mid_hashCode_55546ef6a647f39b,
              mid_isInfinite_9ab94ac1dc23b105,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_ff5ac73a7b43eddd,
              mid_normalize_ff5ac73a7b43eddd,
              mid_orthogonal_ff5ac73a7b43eddd,
              mid_scalarMultiply_c6e22cf5a7df5c99,
              mid_scalarMultiply_0e25f993119a02fa,
              mid_subtract_49157187b00e5904,
              mid_subtract_356b02aa715afa02,
              mid_subtract_e6412b26eb8f79ad,
              mid_subtract_304381b29cf06a58,
              mid_subtract_e8e3047ae0b7ae3f,
              mid_subtract_2beceb62ee48f448,
              mid_toArray_883be608cfc68c26,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toString_a9120cb5e83d0986,
              mid_toVector3D_8b724f8b4fdad1a2,
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
            static ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
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
