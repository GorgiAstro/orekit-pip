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
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class NumberFormat;
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
              mid_init$_4c337e4c1ec6f647,
              mid_init$_352b9889038d9b4f,
              mid_init$_2454bc47ff933675,
              mid_init$_3b51f6f0524dc15c,
              mid_init$_04434637f7791999,
              mid_init$_46c20bc1304e9cc4,
              mid_init$_fdb7ea9b391c22af,
              mid_init$_82ef4dc03b7bbbf0,
              mid_init$_eb64c6bbf65d0b65,
              mid_init$_6701311ba7899490,
              mid_init$_0bca9fd4561b2d94,
              mid_init$_802ae5b6f3a3fa6e,
              mid_init$_ecb72a20903bd71e,
              mid_init$_39c3653311c40b8b,
              mid_init$_324ec1bfa7639cb3,
              mid_add_5e94b047a6786e99,
              mid_add_c7bae57a1efc1bdd,
              mid_add_7848c18b62deaa43,
              mid_add_04e0d6e6888c483a,
              mid_add_89098438b575a3c6,
              mid_add_aa6e21563b39f139,
              mid_angle_ab10bcaaac58dd2b,
              mid_angle_9ff49b796eed98bd,
              mid_angle_ebe56a56c0533052,
              mid_crossProduct_ab10bcaaac58dd2b,
              mid_crossProduct_d5358eb2501e5e91,
              mid_distance_2ebef2324cf6257f,
              mid_distance_93a2ffa1cffda1aa,
              mid_distance_ab10bcaaac58dd2b,
              mid_distance_9ff49b796eed98bd,
              mid_distance_ebe56a56c0533052,
              mid_distance1_2ebef2324cf6257f,
              mid_distance1_93a2ffa1cffda1aa,
              mid_distance1_ab10bcaaac58dd2b,
              mid_distance1_ebe56a56c0533052,
              mid_distance1_9ff49b796eed98bd,
              mid_distanceInf_2ebef2324cf6257f,
              mid_distanceInf_93a2ffa1cffda1aa,
              mid_distanceInf_ab10bcaaac58dd2b,
              mid_distanceInf_ebe56a56c0533052,
              mid_distanceInf_9ff49b796eed98bd,
              mid_distanceSq_2ebef2324cf6257f,
              mid_distanceSq_93a2ffa1cffda1aa,
              mid_distanceSq_ab10bcaaac58dd2b,
              mid_distanceSq_ebe56a56c0533052,
              mid_distanceSq_9ff49b796eed98bd,
              mid_dotProduct_2ebef2324cf6257f,
              mid_dotProduct_93a2ffa1cffda1aa,
              mid_equals_229c87223f486349,
              mid_getMinusI_9fe036a7c29d9f42,
              mid_getMinusJ_9fe036a7c29d9f42,
              mid_getNaN_9fe036a7c29d9f42,
              mid_getNegativeInfinity_9fe036a7c29d9f42,
              mid_getNorm_e6d4d3215c30992a,
              mid_getNorm1_e6d4d3215c30992a,
              mid_getNormInf_e6d4d3215c30992a,
              mid_getNormSq_e6d4d3215c30992a,
              mid_getPlusI_9fe036a7c29d9f42,
              mid_getPlusJ_9fe036a7c29d9f42,
              mid_getPositiveInfinity_9fe036a7c29d9f42,
              mid_getX_e6d4d3215c30992a,
              mid_getY_e6d4d3215c30992a,
              mid_getZero_9fe036a7c29d9f42,
              mid_hashCode_f2f64475e4580546,
              mid_isInfinite_e470b6d9e0d979db,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_1f4b20c9530c3106,
              mid_normalize_1f4b20c9530c3106,
              mid_orientation_1b7e5cf328ba7c9d,
              mid_scalarMultiply_d585e03ae746190d,
              mid_scalarMultiply_8343509e74a2a7e1,
              mid_subtract_5e94b047a6786e99,
              mid_subtract_c7bae57a1efc1bdd,
              mid_subtract_7848c18b62deaa43,
              mid_subtract_89098438b575a3c6,
              mid_subtract_04e0d6e6888c483a,
              mid_subtract_aa6e21563b39f139,
              mid_toArray_01c7d10e96d5cf94,
              mid_toString_0090f7797e403f43,
              mid_toString_aed149be89fb33b9,
              mid_toVector2D_6d781af269bebe5e,
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
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
            static ::org::hipparchus::CalculusFieldElement angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
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
            static ::org::hipparchus::CalculusFieldElement distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const FieldVector2D &);
            static ::org::hipparchus::CalculusFieldElement distance1(const FieldVector2D &, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &);
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
