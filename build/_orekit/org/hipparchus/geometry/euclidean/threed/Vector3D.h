#ifndef org_hipparchus_geometry_euclidean_threed_Vector3D_H
#define org_hipparchus_geometry_euclidean_threed_Vector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace geometry {
      class Point;
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Euclidean3D;
        }
      }
      class Space;
      class Vector;
    }
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

          class Vector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cc18240f4a737f14,
              mid_init$_21f1e6966e389807,
              mid_init$_ab23f4ae0fb33968,
              mid_init$_87096e3fd8086100,
              mid_init$_336207a03eeebc8b,
              mid_init$_c62c5c4c5070c190,
              mid_init$_f0b1c357dc320d67,
              mid_add_5d6b94fad5d111c4,
              mid_add_f50db6977d079eea,
              mid_angle_80610bac160dfa0e,
              mid_crossProduct_5d6b94fad5d111c4,
              mid_crossProduct_720ad0a891308b00,
              mid_distance_cf1fec2b7b1c0efe,
              mid_distance_80610bac160dfa0e,
              mid_distance1_b540ea36818b5810,
              mid_distance1_80610bac160dfa0e,
              mid_distanceInf_b540ea36818b5810,
              mid_distanceInf_80610bac160dfa0e,
              mid_distanceSq_b540ea36818b5810,
              mid_distanceSq_80610bac160dfa0e,
              mid_dotProduct_b540ea36818b5810,
              mid_dotProduct_80610bac160dfa0e,
              mid_equals_221e8e85cb385209,
              mid_equalsIeee754_221e8e85cb385209,
              mid_getAlpha_557b8123390d8d0c,
              mid_getDelta_557b8123390d8d0c,
              mid_getNorm_557b8123390d8d0c,
              mid_getNorm1_557b8123390d8d0c,
              mid_getNormInf_557b8123390d8d0c,
              mid_getNormSq_557b8123390d8d0c,
              mid_getSpace_cf9410d213a7cbb9,
              mid_getX_557b8123390d8d0c,
              mid_getY_557b8123390d8d0c,
              mid_getZ_557b8123390d8d0c,
              mid_getZero_f88961cca75a2c0a,
              mid_hashCode_412668abc8d889e9,
              mid_isInfinite_89b302893bdbe1f1,
              mid_isNaN_89b302893bdbe1f1,
              mid_negate_f88961cca75a2c0a,
              mid_orthogonal_f88961cca75a2c0a,
              mid_scalarMultiply_20de5f9d51c6611f,
              mid_subtract_5d6b94fad5d111c4,
              mid_subtract_f50db6977d079eea,
              mid_toArray_a53a7513ecedada2,
              mid_toString_3cffd47377eca18a,
              mid_toString_8d9667e91d8ffa97,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector3D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector3D(const Vector3D& obj) : ::java::lang::Object(obj) {}

            static Vector3D *MINUS_I;
            static Vector3D *MINUS_J;
            static Vector3D *MINUS_K;
            static Vector3D *NEGATIVE_INFINITY;
            static Vector3D *NaN;
            static Vector3D *PLUS_I;
            static Vector3D *PLUS_J;
            static Vector3D *PLUS_K;
            static Vector3D *POSITIVE_INFINITY;
            static Vector3D *ZERO;

            Vector3D(const JArray< jdouble > &);
            Vector3D(jdouble, const Vector3D &);
            Vector3D(jdouble, jdouble);
            Vector3D(jdouble, jdouble, jdouble);
            Vector3D(jdouble, const Vector3D &, jdouble, const Vector3D &);
            Vector3D(jdouble, const Vector3D &, jdouble, const Vector3D &, jdouble, const Vector3D &);
            Vector3D(jdouble, const Vector3D &, jdouble, const Vector3D &, jdouble, const Vector3D &, jdouble, const Vector3D &);

            Vector3D add(const ::org::hipparchus::geometry::Vector &) const;
            Vector3D add(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            static jdouble angle(const Vector3D &, const Vector3D &);
            Vector3D crossProduct(const ::org::hipparchus::geometry::Vector &) const;
            static Vector3D crossProduct(const Vector3D &, const Vector3D &);
            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const Vector3D &, const Vector3D &);
            jdouble distance1(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distance1(const Vector3D &, const Vector3D &);
            jdouble distanceInf(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceInf(const Vector3D &, const Vector3D &);
            jdouble distanceSq(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceSq(const Vector3D &, const Vector3D &);
            jdouble dotProduct(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble dotProduct(const Vector3D &, const Vector3D &);
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getAlpha() const;
            jdouble getDelta() const;
            jdouble getNorm() const;
            jdouble getNorm1() const;
            jdouble getNormInf() const;
            jdouble getNormSq() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            jdouble getX() const;
            jdouble getY() const;
            jdouble getZ() const;
            Vector3D getZero() const;
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            Vector3D negate() const;
            Vector3D orthogonal() const;
            Vector3D scalarMultiply(jdouble) const;
            Vector3D subtract(const ::org::hipparchus::geometry::Vector &) const;
            Vector3D subtract(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            JArray< jdouble > toArray() const;
            ::java::lang::String toString() const;
            ::java::lang::String toString(const ::java::text::NumberFormat &) const;
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
          extern PyType_Def PY_TYPE_DEF(Vector3D);
          extern PyTypeObject *PY_TYPE(Vector3D);

          class t_Vector3D {
          public:
            PyObject_HEAD
            Vector3D object;
            static PyObject *wrap_Object(const Vector3D&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
