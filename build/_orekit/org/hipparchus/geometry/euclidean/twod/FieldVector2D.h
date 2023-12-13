#ifndef org_hipparchus_geometry_euclidean_twod_FieldVector2D_H
#define org_hipparchus_geometry_euclidean_twod_FieldVector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class FieldVector2D;
        }
      }
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
              mid_init$_8b0f7facc8a6a46e,
              mid_init$_e092330a3cb18383,
              mid_init$_8cd1d38fb24395b1,
              mid_init$_06b31aba3d9cf9b6,
              mid_init$_9d0e66f5351834a8,
              mid_init$_e337ae7145f7989c,
              mid_init$_11fbfd88fc245e05,
              mid_init$_b0a421f7dbeaed0f,
              mid_init$_9037b64010093e7a,
              mid_init$_b48a0e1d40bd38d0,
              mid_init$_df12b4a2f331dd1c,
              mid_init$_3f6696ed5fcdb619,
              mid_init$_75474ee55105ddaf,
              mid_init$_368e18fe3cf4d9c7,
              mid_init$_380aba02f510ab2c,
              mid_add_352489997a01ac70,
              mid_add_31710f0c4eb8aef4,
              mid_add_d32f883885561b31,
              mid_add_4b66fb4f5e817fcb,
              mid_add_7d38e0441e838830,
              mid_add_b55179abf30de838,
              mid_angle_e99932ffda9acd7f,
              mid_angle_438cf30c67841384,
              mid_angle_4687371cee9ba77e,
              mid_crossProduct_e99932ffda9acd7f,
              mid_crossProduct_0f13ba5caeaa83d4,
              mid_distance_b4f5e0115d69a846,
              mid_distance_14d7a7c35a3db44a,
              mid_distance_e99932ffda9acd7f,
              mid_distance_438cf30c67841384,
              mid_distance_4687371cee9ba77e,
              mid_distance1_b4f5e0115d69a846,
              mid_distance1_14d7a7c35a3db44a,
              mid_distance1_e99932ffda9acd7f,
              mid_distance1_438cf30c67841384,
              mid_distance1_4687371cee9ba77e,
              mid_distanceInf_b4f5e0115d69a846,
              mid_distanceInf_14d7a7c35a3db44a,
              mid_distanceInf_e99932ffda9acd7f,
              mid_distanceInf_4687371cee9ba77e,
              mid_distanceInf_438cf30c67841384,
              mid_distanceSq_b4f5e0115d69a846,
              mid_distanceSq_14d7a7c35a3db44a,
              mid_distanceSq_e99932ffda9acd7f,
              mid_distanceSq_438cf30c67841384,
              mid_distanceSq_4687371cee9ba77e,
              mid_dotProduct_b4f5e0115d69a846,
              mid_dotProduct_14d7a7c35a3db44a,
              mid_equals_460c5e2d9d51c6cc,
              mid_getMinusI_94a569d6057bef26,
              mid_getMinusJ_94a569d6057bef26,
              mid_getNaN_94a569d6057bef26,
              mid_getNegativeInfinity_94a569d6057bef26,
              mid_getNorm_81520b552cb3fa26,
              mid_getNorm1_81520b552cb3fa26,
              mid_getNormInf_81520b552cb3fa26,
              mid_getNormSq_81520b552cb3fa26,
              mid_getPlusI_94a569d6057bef26,
              mid_getPlusJ_94a569d6057bef26,
              mid_getPositiveInfinity_94a569d6057bef26,
              mid_getX_81520b552cb3fa26,
              mid_getY_81520b552cb3fa26,
              mid_getZero_94a569d6057bef26,
              mid_hashCode_55546ef6a647f39b,
              mid_isInfinite_9ab94ac1dc23b105,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_6cf625db6271ad65,
              mid_normalize_6cf625db6271ad65,
              mid_orientation_67cdb0b92c146205,
              mid_scalarMultiply_d397b0a1d0379da7,
              mid_scalarMultiply_f3d6fa340bb755f8,
              mid_subtract_352489997a01ac70,
              mid_subtract_31710f0c4eb8aef4,
              mid_subtract_d32f883885561b31,
              mid_subtract_4b66fb4f5e817fcb,
              mid_subtract_7d38e0441e838830,
              mid_subtract_b55179abf30de838,
              mid_toArray_883be608cfc68c26,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toString_a9120cb5e83d0986,
              mid_toVector2D_9cb1572c1d4936cf,
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
            FieldVector2D add(jdouble, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            FieldVector2D add(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &) const;
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
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &) const;
            ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
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
