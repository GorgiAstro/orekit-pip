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
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
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
        namespace threed {

          class FieldVector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4c337e4c1ec6f647,
              mid_init$_e374b5b67eb31d56,
              mid_init$_28d2e63284f478a9,
              mid_init$_e557ab7861ec00ef,
              mid_init$_a651cce8974e738f,
              mid_init$_46c20bc1304e9cc4,
              mid_init$_5b191078c5a85105,
              mid_init$_af4d414625f043d5,
              mid_init$_7e156e7c81332423,
              mid_init$_63626756dee3b73a,
              mid_init$_7d0dc0ba9dd5e66a,
              mid_init$_d87ce86302ad73a3,
              mid_init$_8a88423916495b27,
              mid_init$_5b54afcd6d70763a,
              mid_init$_2787625ea479c9e3,
              mid_init$_b0a48e37fefe939b,
              mid_add_8ff2edc0ecba4b6e,
              mid_add_89718cf054290f11,
              mid_add_2c84db90addb49ea,
              mid_add_fe7cfe54af0f98e9,
              mid_add_164cf969d0cc5992,
              mid_add_2d47fae29783a957,
              mid_angle_58fb8a4f78602c1f,
              mid_angle_7e4981d8fe7bfeef,
              mid_angle_126ffc68bc5f01b4,
              mid_blendArithmeticallyWith_e924de5c5bb207b6,
              mid_crossProduct_8ff2edc0ecba4b6e,
              mid_crossProduct_89718cf054290f11,
              mid_crossProduct_5ff6d50248c66b4d,
              mid_crossProduct_764ae5b7ae58b01f,
              mid_crossProduct_525ce17d197a32fe,
              mid_distance_561f21e3ac14fa34,
              mid_distance_5f51423dbe425445,
              mid_distance_58fb8a4f78602c1f,
              mid_distance_126ffc68bc5f01b4,
              mid_distance_7e4981d8fe7bfeef,
              mid_distance1_561f21e3ac14fa34,
              mid_distance1_5f51423dbe425445,
              mid_distance1_58fb8a4f78602c1f,
              mid_distance1_7e4981d8fe7bfeef,
              mid_distance1_126ffc68bc5f01b4,
              mid_distanceInf_561f21e3ac14fa34,
              mid_distanceInf_5f51423dbe425445,
              mid_distanceInf_58fb8a4f78602c1f,
              mid_distanceInf_7e4981d8fe7bfeef,
              mid_distanceInf_126ffc68bc5f01b4,
              mid_distanceSq_561f21e3ac14fa34,
              mid_distanceSq_5f51423dbe425445,
              mid_distanceSq_58fb8a4f78602c1f,
              mid_distanceSq_126ffc68bc5f01b4,
              mid_distanceSq_7e4981d8fe7bfeef,
              mid_dotProduct_561f21e3ac14fa34,
              mid_dotProduct_5f51423dbe425445,
              mid_dotProduct_58fb8a4f78602c1f,
              mid_dotProduct_126ffc68bc5f01b4,
              mid_dotProduct_7e4981d8fe7bfeef,
              mid_equals_229c87223f486349,
              mid_getAlpha_e6d4d3215c30992a,
              mid_getDelta_e6d4d3215c30992a,
              mid_getMinusI_dc29118b4d22b28d,
              mid_getMinusJ_dc29118b4d22b28d,
              mid_getMinusK_dc29118b4d22b28d,
              mid_getNaN_dc29118b4d22b28d,
              mid_getNegativeInfinity_dc29118b4d22b28d,
              mid_getNorm_e6d4d3215c30992a,
              mid_getNorm1_e6d4d3215c30992a,
              mid_getNormInf_e6d4d3215c30992a,
              mid_getNormSq_e6d4d3215c30992a,
              mid_getPlusI_dc29118b4d22b28d,
              mid_getPlusJ_dc29118b4d22b28d,
              mid_getPlusK_dc29118b4d22b28d,
              mid_getPositiveInfinity_dc29118b4d22b28d,
              mid_getX_e6d4d3215c30992a,
              mid_getY_e6d4d3215c30992a,
              mid_getZ_e6d4d3215c30992a,
              mid_getZero_dc29118b4d22b28d,
              mid_hashCode_f2f64475e4580546,
              mid_isInfinite_e470b6d9e0d979db,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_5791f80683b5227e,
              mid_normalize_5791f80683b5227e,
              mid_orthogonal_5791f80683b5227e,
              mid_scalarMultiply_14b0f58c06667f17,
              mid_scalarMultiply_3023f195d3eecf7e,
              mid_subtract_8ff2edc0ecba4b6e,
              mid_subtract_89718cf054290f11,
              mid_subtract_2c84db90addb49ea,
              mid_subtract_164cf969d0cc5992,
              mid_subtract_fe7cfe54af0f98e9,
              mid_subtract_2d47fae29783a957,
              mid_toArray_01c7d10e96d5cf94,
              mid_toString_0090f7797e403f43,
              mid_toString_aed149be89fb33b9,
              mid_toVector3D_17a952530a808943,
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
            static ::org::hipparchus::CalculusFieldElement angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement angle(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            FieldVector3D blendArithmeticallyWith(const FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &) const;
            FieldVector3D crossProduct(const FieldVector3D &) const;
            FieldVector3D crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static FieldVector3D crossProduct(const FieldVector3D &, const FieldVector3D &);
            static FieldVector3D crossProduct(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static FieldVector3D crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
            ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &) const;
            ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const FieldVector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
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
            static ::org::hipparchus::CalculusFieldElement dotProduct(const FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ::org::hipparchus::CalculusFieldElement dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const FieldVector3D &);
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
            FieldVector3D subtract(const ::org::hipparchus::CalculusFieldElement &, const FieldVector3D &) const;
            FieldVector3D subtract(jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
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
