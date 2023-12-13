#ifndef org_hipparchus_geometry_euclidean_threed_Vector3D_H
#define org_hipparchus_geometry_euclidean_threed_Vector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Euclidean3D;
        }
      }
      class Point;
      class Vector;
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
              mid_init$_ab69da052b88f50c,
              mid_init$_688418a8dded8238,
              mid_init$_369b4c97255d5afa,
              mid_init$_b5167f35b2521627,
              mid_init$_4d03b5a4b38cf571,
              mid_init$_7dc05483761fd9c8,
              mid_init$_a2197b94a4469cd6,
              mid_add_e21381ba36e4ea13,
              mid_add_945415de2cc916d6,
              mid_angle_4d0eb4d30dbd9ad9,
              mid_crossProduct_e21381ba36e4ea13,
              mid_crossProduct_301a09f2b4c627de,
              mid_distance_f0dd8cb59ea09794,
              mid_distance_4d0eb4d30dbd9ad9,
              mid_distance1_2f915fa9762130df,
              mid_distance1_4d0eb4d30dbd9ad9,
              mid_distanceInf_2f915fa9762130df,
              mid_distanceInf_4d0eb4d30dbd9ad9,
              mid_distanceSq_2f915fa9762130df,
              mid_distanceSq_4d0eb4d30dbd9ad9,
              mid_dotProduct_2f915fa9762130df,
              mid_dotProduct_4d0eb4d30dbd9ad9,
              mid_equals_460c5e2d9d51c6cc,
              mid_equalsIeee754_460c5e2d9d51c6cc,
              mid_getAlpha_b74f83833fdad017,
              mid_getDelta_b74f83833fdad017,
              mid_getNorm_b74f83833fdad017,
              mid_getNorm1_b74f83833fdad017,
              mid_getNormInf_b74f83833fdad017,
              mid_getNormSq_b74f83833fdad017,
              mid_getSpace_9afbccb68c8e9ef8,
              mid_getX_b74f83833fdad017,
              mid_getY_b74f83833fdad017,
              mid_getZ_b74f83833fdad017,
              mid_getZero_8b724f8b4fdad1a2,
              mid_hashCode_55546ef6a647f39b,
              mid_isInfinite_9ab94ac1dc23b105,
              mid_isNaN_9ab94ac1dc23b105,
              mid_negate_8b724f8b4fdad1a2,
              mid_orthogonal_8b724f8b4fdad1a2,
              mid_scalarMultiply_498f52cd8e5a7072,
              mid_subtract_e21381ba36e4ea13,
              mid_subtract_945415de2cc916d6,
              mid_toArray_25e1757a36c4dde2,
              mid_toString_1c1fa1e935d6cdcf,
              mid_toString_a9120cb5e83d0986,
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
