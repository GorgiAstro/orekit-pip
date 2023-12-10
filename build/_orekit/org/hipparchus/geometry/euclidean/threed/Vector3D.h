#ifndef org_hipparchus_geometry_euclidean_threed_Vector3D_H
#define org_hipparchus_geometry_euclidean_threed_Vector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
          class Vector3D;
        }
      }
      class Point;
      class Vector;
      class Space;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
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

          class Vector3D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ebc26dcaf4761286,
              mid_init$_6396b2b628f2a4f4,
              mid_init$_1d715fa3b7b756e1,
              mid_init$_d0d6094fbd7015c5,
              mid_init$_751bf0b5ceb330cd,
              mid_init$_d0a713a4687418d4,
              mid_init$_27da48ed94d263cb,
              mid_add_7a21411cb28c8c28,
              mid_add_2acd0f562b727d04,
              mid_angle_5fd980386f9c0459,
              mid_crossProduct_7a21411cb28c8c28,
              mid_crossProduct_ccf2ee059c93e01e,
              mid_distance_726dc963fac3505e,
              mid_distance_5fd980386f9c0459,
              mid_distance1_05fa5f52db18503d,
              mid_distance1_5fd980386f9c0459,
              mid_distanceInf_05fa5f52db18503d,
              mid_distanceInf_5fd980386f9c0459,
              mid_distanceSq_05fa5f52db18503d,
              mid_distanceSq_5fd980386f9c0459,
              mid_dotProduct_05fa5f52db18503d,
              mid_dotProduct_5fd980386f9c0459,
              mid_equals_229c87223f486349,
              mid_equalsIeee754_229c87223f486349,
              mid_getAlpha_456d9a2f64d6b28d,
              mid_getDelta_456d9a2f64d6b28d,
              mid_getNorm_456d9a2f64d6b28d,
              mid_getNorm1_456d9a2f64d6b28d,
              mid_getNormInf_456d9a2f64d6b28d,
              mid_getNormSq_456d9a2f64d6b28d,
              mid_getSpace_0438ef5f9a5edb53,
              mid_getX_456d9a2f64d6b28d,
              mid_getY_456d9a2f64d6b28d,
              mid_getZ_456d9a2f64d6b28d,
              mid_getZero_17a952530a808943,
              mid_hashCode_f2f64475e4580546,
              mid_isInfinite_e470b6d9e0d979db,
              mid_isNaN_e470b6d9e0d979db,
              mid_negate_17a952530a808943,
              mid_orthogonal_17a952530a808943,
              mid_scalarMultiply_5f993a721a1d8c59,
              mid_subtract_7a21411cb28c8c28,
              mid_subtract_2acd0f562b727d04,
              mid_toArray_7cdc325af0834901,
              mid_toString_0090f7797e403f43,
              mid_toString_aed149be89fb33b9,
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
