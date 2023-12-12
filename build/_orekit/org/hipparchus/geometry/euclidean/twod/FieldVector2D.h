#ifndef org_hipparchus_geometry_euclidean_twod_FieldVector2D_H
#define org_hipparchus_geometry_euclidean_twod_FieldVector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class FieldVector2D;
          class Vector2D;
        }
      }
    }
    class CalculusFieldElement;
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
              mid_init$_5d9c9afaca2e497c,
              mid_init$_bcf9f009055fa7cf,
              mid_init$_89c5e29654abd357,
              mid_init$_8381bf74b93207e9,
              mid_init$_4dc8c7bdeaed6301,
              mid_init$_b38c15e176684020,
              mid_init$_86b038dc2a3b6951,
              mid_init$_a31bf3c66cdfcc6d,
              mid_init$_e70afecea812649d,
              mid_init$_5a4f763679ba8e13,
              mid_init$_3d1493cfe84e2173,
              mid_init$_f2c0b506c01822e1,
              mid_init$_74e431c9f301b967,
              mid_init$_524a8197793700f9,
              mid_init$_5daf53e791529d67,
              mid_add_453f66131fc0f21f,
              mid_add_5d2579297fa8ffe5,
              mid_add_e6c1bfb19c40c9b2,
              mid_add_44c6c5fc3911075a,
              mid_add_558b19a8fae74bdd,
              mid_add_77f323f07b8bd168,
              mid_angle_8bf9ac6d5af9093e,
              mid_angle_81433ab386107ae4,
              mid_angle_d4c11fd1bc877351,
              mid_crossProduct_8bf9ac6d5af9093e,
              mid_crossProduct_446ef994e3ff29c5,
              mid_distance_b9b7f079c8a99b84,
              mid_distance_b397c28438b136a0,
              mid_distance_8bf9ac6d5af9093e,
              mid_distance_d4c11fd1bc877351,
              mid_distance_81433ab386107ae4,
              mid_distance1_b9b7f079c8a99b84,
              mid_distance1_b397c28438b136a0,
              mid_distance1_8bf9ac6d5af9093e,
              mid_distance1_d4c11fd1bc877351,
              mid_distance1_81433ab386107ae4,
              mid_distanceInf_b9b7f079c8a99b84,
              mid_distanceInf_b397c28438b136a0,
              mid_distanceInf_8bf9ac6d5af9093e,
              mid_distanceInf_d4c11fd1bc877351,
              mid_distanceInf_81433ab386107ae4,
              mid_distanceSq_b9b7f079c8a99b84,
              mid_distanceSq_b397c28438b136a0,
              mid_distanceSq_8bf9ac6d5af9093e,
              mid_distanceSq_d4c11fd1bc877351,
              mid_distanceSq_81433ab386107ae4,
              mid_dotProduct_b9b7f079c8a99b84,
              mid_dotProduct_b397c28438b136a0,
              mid_equals_221e8e85cb385209,
              mid_getMinusI_a1c9723a4641abb2,
              mid_getMinusJ_a1c9723a4641abb2,
              mid_getNaN_a1c9723a4641abb2,
              mid_getNegativeInfinity_a1c9723a4641abb2,
              mid_getNorm_613c8f46c659f636,
              mid_getNorm1_613c8f46c659f636,
              mid_getNormInf_613c8f46c659f636,
              mid_getNormSq_613c8f46c659f636,
              mid_getPlusI_a1c9723a4641abb2,
              mid_getPlusJ_a1c9723a4641abb2,
              mid_getPositiveInfinity_a1c9723a4641abb2,
              mid_getX_613c8f46c659f636,
              mid_getY_613c8f46c659f636,
              mid_getZero_a1c9723a4641abb2,
              mid_hashCode_412668abc8d889e9,
              mid_isInfinite_89b302893bdbe1f1,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_71d34b83d8e1fc5a,
              mid_normalize_71d34b83d8e1fc5a,
              mid_orientation_6b0a5db023ff2b0f,
              mid_scalarMultiply_fd7065394a41d234,
              mid_scalarMultiply_f4e8712141e606db,
              mid_subtract_453f66131fc0f21f,
              mid_subtract_5d2579297fa8ffe5,
              mid_subtract_e6c1bfb19c40c9b2,
              mid_subtract_558b19a8fae74bdd,
              mid_subtract_44c6c5fc3911075a,
              mid_subtract_77f323f07b8bd168,
              mid_toArray_41762fd4377ff26e,
              mid_toString_3cffd47377eca18a,
              mid_toString_8d9667e91d8ffa97,
              mid_toVector2D_f681f2fc9cdfab57,
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
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
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
