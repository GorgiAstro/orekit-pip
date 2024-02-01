#ifndef org_hipparchus_geometry_euclidean_twod_FieldVector2D_H
#define org_hipparchus_geometry_euclidean_twod_FieldVector2D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class FieldVector2D;
        }
      }
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
              mid_init$_77e61a645c496adc,
              mid_init$_9de897098cc4fc51,
              mid_init$_03cc98c26e4bc2f3,
              mid_init$_a414bd4abe1a01ac,
              mid_init$_209fcdd831417cb9,
              mid_init$_bab44dcbad09a0fe,
              mid_init$_6d69d39ede98961c,
              mid_init$_57792df6518b6cbb,
              mid_init$_6a174b750b8ff4dd,
              mid_init$_c9375daef59d217d,
              mid_init$_614c0bea0d23deb7,
              mid_init$_3094ca3420387466,
              mid_init$_de342bcdedd80e86,
              mid_init$_8910ab47d3946516,
              mid_init$_e68043fb008b727a,
              mid_add_7942696c79200ea4,
              mid_add_e9f831185f725939,
              mid_add_ce2a08ee78bdea1c,
              mid_add_1de84f30ff815e36,
              mid_add_c3406f0e361e3c5e,
              mid_add_a352159691fd6884,
              mid_angle_88210a0f92666f78,
              mid_angle_1e522e275c6cd552,
              mid_angle_a873d18c5b331b2a,
              mid_crossProduct_88210a0f92666f78,
              mid_crossProduct_8285f2af445596a9,
              mid_distance_5463010749bace4d,
              mid_distance_155ae89e89847f4f,
              mid_distance_88210a0f92666f78,
              mid_distance_1e522e275c6cd552,
              mid_distance_a873d18c5b331b2a,
              mid_distance1_5463010749bace4d,
              mid_distance1_155ae89e89847f4f,
              mid_distance1_88210a0f92666f78,
              mid_distance1_a873d18c5b331b2a,
              mid_distance1_1e522e275c6cd552,
              mid_distanceInf_5463010749bace4d,
              mid_distanceInf_155ae89e89847f4f,
              mid_distanceInf_88210a0f92666f78,
              mid_distanceInf_1e522e275c6cd552,
              mid_distanceInf_a873d18c5b331b2a,
              mid_distanceSq_5463010749bace4d,
              mid_distanceSq_155ae89e89847f4f,
              mid_distanceSq_88210a0f92666f78,
              mid_distanceSq_a873d18c5b331b2a,
              mid_distanceSq_1e522e275c6cd552,
              mid_dotProduct_5463010749bace4d,
              mid_dotProduct_155ae89e89847f4f,
              mid_equals_72faff9b05f5ed5e,
              mid_getMinusI_3989eebec94e3b0f,
              mid_getMinusJ_3989eebec94e3b0f,
              mid_getNaN_3989eebec94e3b0f,
              mid_getNegativeInfinity_3989eebec94e3b0f,
              mid_getNorm_08d37e3f77b7239d,
              mid_getNorm1_08d37e3f77b7239d,
              mid_getNormInf_08d37e3f77b7239d,
              mid_getNormSq_08d37e3f77b7239d,
              mid_getPlusI_3989eebec94e3b0f,
              mid_getPlusJ_3989eebec94e3b0f,
              mid_getPositiveInfinity_3989eebec94e3b0f,
              mid_getX_08d37e3f77b7239d,
              mid_getY_08d37e3f77b7239d,
              mid_getZero_3989eebec94e3b0f,
              mid_hashCode_d6ab429752e7c267,
              mid_isInfinite_eee3de00fe971136,
              mid_isNaN_eee3de00fe971136,
              mid_negate_da02c7b325187877,
              mid_normalize_da02c7b325187877,
              mid_orientation_6189d195f58c2f32,
              mid_scalarMultiply_a95623cddc5b1016,
              mid_scalarMultiply_a693c897c7425550,
              mid_subtract_7942696c79200ea4,
              mid_subtract_e9f831185f725939,
              mid_subtract_ce2a08ee78bdea1c,
              mid_subtract_c3406f0e361e3c5e,
              mid_subtract_1de84f30ff815e36,
              mid_subtract_a352159691fd6884,
              mid_toArray_94ed2e0620f8833d,
              mid_toString_d2c8eb4129821f0e,
              mid_toString_aeac32100fe35ffe,
              mid_toVector2D_0490d0574aafb07c,
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
            FieldVector2D subtract(const ::org::hipparchus::CalculusFieldElement &, const FieldVector2D &) const;
            FieldVector2D subtract(jdouble, const ::org::hipparchus::geometry::euclidean::twod::Vector2D &) const;
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
