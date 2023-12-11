#ifndef org_hipparchus_geometry_euclidean_threed_FieldVector3D_H
#define org_hipparchus_geometry_euclidean_threed_FieldVector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldBlendable;
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
    class Field;
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
              mid_init$_5d9c9afaca2e497c,
              mid_init$_4ea57b8955861cbb,
              mid_init$_bc0c6bda4a59e038,
              mid_init$_4142f6924f1f81fb,
              mid_init$_52bcf1c5b3478cb0,
              mid_init$_b38c15e176684020,
              mid_init$_0f27b0249abd6c51,
              mid_init$_bca4ff95970563f9,
              mid_init$_6f0634e3ee51bb3e,
              mid_init$_7b969e4da6cc4136,
              mid_init$_8edd1eff6f15a7c2,
              mid_init$_d90e2ced59b917c6,
              mid_init$_2c9e38b3c432a2c9,
              mid_init$_7274e5e957723949,
              mid_init$_89931b09a784eeb2,
              mid_init$_f7558bf7dd953508,
              mid_add_588ed0f09550adb9,
              mid_add_3d90e30d4cb13513,
              mid_add_01f8748861408877,
              mid_add_9f1e70a913d9854e,
              mid_add_6ad46ee21af765b8,
              mid_add_5cca2623551fee28,
              mid_angle_fb1db732a84425d6,
              mid_angle_e6c9453d30211335,
              mid_angle_b464f829e6652655,
              mid_blendArithmeticallyWith_9516ec66c1860ea9,
              mid_crossProduct_588ed0f09550adb9,
              mid_crossProduct_3d90e30d4cb13513,
              mid_crossProduct_b3579c1d2113481e,
              mid_crossProduct_e57ac48e00d242d1,
              mid_crossProduct_78da4381685dcd75,
              mid_distance_b2798c156647508e,
              mid_distance_a22927126b45d148,
              mid_distance_fb1db732a84425d6,
              mid_distance_e6c9453d30211335,
              mid_distance_b464f829e6652655,
              mid_distance1_b2798c156647508e,
              mid_distance1_a22927126b45d148,
              mid_distance1_fb1db732a84425d6,
              mid_distance1_e6c9453d30211335,
              mid_distance1_b464f829e6652655,
              mid_distanceInf_b2798c156647508e,
              mid_distanceInf_a22927126b45d148,
              mid_distanceInf_fb1db732a84425d6,
              mid_distanceInf_e6c9453d30211335,
              mid_distanceInf_b464f829e6652655,
              mid_distanceSq_b2798c156647508e,
              mid_distanceSq_a22927126b45d148,
              mid_distanceSq_fb1db732a84425d6,
              mid_distanceSq_e6c9453d30211335,
              mid_distanceSq_b464f829e6652655,
              mid_dotProduct_b2798c156647508e,
              mid_dotProduct_a22927126b45d148,
              mid_dotProduct_fb1db732a84425d6,
              mid_dotProduct_b464f829e6652655,
              mid_dotProduct_e6c9453d30211335,
              mid_equals_221e8e85cb385209,
              mid_getAlpha_613c8f46c659f636,
              mid_getDelta_613c8f46c659f636,
              mid_getMinusI_3a465a0c08d1dbdf,
              mid_getMinusJ_3a465a0c08d1dbdf,
              mid_getMinusK_3a465a0c08d1dbdf,
              mid_getNaN_3a465a0c08d1dbdf,
              mid_getNegativeInfinity_3a465a0c08d1dbdf,
              mid_getNorm_613c8f46c659f636,
              mid_getNorm1_613c8f46c659f636,
              mid_getNormInf_613c8f46c659f636,
              mid_getNormSq_613c8f46c659f636,
              mid_getPlusI_3a465a0c08d1dbdf,
              mid_getPlusJ_3a465a0c08d1dbdf,
              mid_getPlusK_3a465a0c08d1dbdf,
              mid_getPositiveInfinity_3a465a0c08d1dbdf,
              mid_getX_613c8f46c659f636,
              mid_getY_613c8f46c659f636,
              mid_getZ_613c8f46c659f636,
              mid_getZero_3a465a0c08d1dbdf,
              mid_hashCode_412668abc8d889e9,
              mid_isInfinite_89b302893bdbe1f1,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_2d64addf4c3391d9,
              mid_normalize_2d64addf4c3391d9,
              mid_orthogonal_2d64addf4c3391d9,
              mid_scalarMultiply_9465a023313b1d29,
              mid_scalarMultiply_68e9ce281b70d410,
              mid_subtract_588ed0f09550adb9,
              mid_subtract_3d90e30d4cb13513,
              mid_subtract_01f8748861408877,
              mid_subtract_6ad46ee21af765b8,
              mid_subtract_9f1e70a913d9854e,
              mid_subtract_5cca2623551fee28,
              mid_toArray_41762fd4377ff26e,
              mid_toString_3cffd47377eca18a,
              mid_toString_8d9667e91d8ffa97,
              mid_toVector3D_f88961cca75a2c0a,
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
            static FieldVector3D crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static FieldVector3D crossProduct(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
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
