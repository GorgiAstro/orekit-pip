#ifndef org_hipparchus_geometry_euclidean_threed_Vector3D_H
#define org_hipparchus_geometry_euclidean_threed_Vector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      class Point;
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Euclidean3D;
        }
      }
      class Space;
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
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

          class Vector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa9d415d19f69361,
              mid_init$_b8001d8c3e32b808,
              mid_init$_8f2e782d5278b131,
              mid_init$_2c56b6dd4d4b1dec,
              mid_init$_fd4f6f77e2c9c2bc,
              mid_init$_e7a168c41301bc86,
              mid_init$_7860fb8ee9cfe845,
              mid_add_84b1343e67eeaa7b,
              mid_add_6c46082a7ea5a2f0,
              mid_angle_2814c71be939a588,
              mid_crossProduct_84b1343e67eeaa7b,
              mid_crossProduct_e2a27ed5c4e12f6f,
              mid_distance_07bb97c2794cf6b1,
              mid_distance_2814c71be939a588,
              mid_distance1_b4822d5266bca26e,
              mid_distance1_2814c71be939a588,
              mid_distanceInf_b4822d5266bca26e,
              mid_distanceInf_2814c71be939a588,
              mid_distanceSq_b4822d5266bca26e,
              mid_distanceSq_2814c71be939a588,
              mid_dotProduct_b4822d5266bca26e,
              mid_dotProduct_2814c71be939a588,
              mid_equals_65c7d273e80d497a,
              mid_equalsIeee754_65c7d273e80d497a,
              mid_getAlpha_dff5885c2c873297,
              mid_getDelta_dff5885c2c873297,
              mid_getNorm_dff5885c2c873297,
              mid_getNorm1_dff5885c2c873297,
              mid_getNormInf_dff5885c2c873297,
              mid_getNormSq_dff5885c2c873297,
              mid_getSpace_ebbd6b2d39ab0e4f,
              mid_getX_dff5885c2c873297,
              mid_getY_dff5885c2c873297,
              mid_getZ_dff5885c2c873297,
              mid_getZero_d52645e0d4c07563,
              mid_hashCode_570ce0828f81a2c1,
              mid_isInfinite_b108b35ef48e27bd,
              mid_isNaN_b108b35ef48e27bd,
              mid_negate_d52645e0d4c07563,
              mid_orthogonal_d52645e0d4c07563,
              mid_scalarMultiply_9137bba253a33d9c,
              mid_subtract_84b1343e67eeaa7b,
              mid_subtract_6c46082a7ea5a2f0,
              mid_toArray_60c7040667a7dc5c,
              mid_toString_11b109bd155ca898,
              mid_toString_7b429db583278c20,
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
