#ifndef org_hipparchus_geometry_euclidean_threed_Vector3D_H
#define org_hipparchus_geometry_euclidean_threed_Vector3D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace geometry {
      class Vector;
      class Point;
      namespace euclidean {
        namespace threed {
          class Euclidean3D;
          class Vector3D;
        }
      }
      class Space;
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
              mid_init$_a71c45509eaf92d1,
              mid_init$_7447d4fd1b9b171b,
              mid_init$_13edac039e8cc967,
              mid_init$_bd28dc6055dc5bbd,
              mid_init$_3e3751134d06855f,
              mid_init$_e6b7408e37ec3021,
              mid_init$_966a8e0bf93eced1,
              mid_add_8e71f2ea9c6b3602,
              mid_add_3bdd114c6f443cfe,
              mid_angle_855cbb355cce7dd8,
              mid_crossProduct_8e71f2ea9c6b3602,
              mid_crossProduct_ff0107f3aab86815,
              mid_distance_277cb62c4ec87155,
              mid_distance_855cbb355cce7dd8,
              mid_distance1_54eca2a6b3ac81a2,
              mid_distance1_855cbb355cce7dd8,
              mid_distanceInf_54eca2a6b3ac81a2,
              mid_distanceInf_855cbb355cce7dd8,
              mid_distanceSq_54eca2a6b3ac81a2,
              mid_distanceSq_855cbb355cce7dd8,
              mid_dotProduct_54eca2a6b3ac81a2,
              mid_dotProduct_855cbb355cce7dd8,
              mid_equals_72faff9b05f5ed5e,
              mid_equalsIeee754_72faff9b05f5ed5e,
              mid_getAlpha_9981f74b2d109da6,
              mid_getDelta_9981f74b2d109da6,
              mid_getNorm_9981f74b2d109da6,
              mid_getNorm1_9981f74b2d109da6,
              mid_getNormInf_9981f74b2d109da6,
              mid_getNormSq_9981f74b2d109da6,
              mid_getSpace_a30bf0b437744017,
              mid_getX_9981f74b2d109da6,
              mid_getY_9981f74b2d109da6,
              mid_getZ_9981f74b2d109da6,
              mid_getZero_032312bdeb3f2f93,
              mid_hashCode_d6ab429752e7c267,
              mid_isInfinite_eee3de00fe971136,
              mid_isNaN_eee3de00fe971136,
              mid_negate_032312bdeb3f2f93,
              mid_orthogonal_032312bdeb3f2f93,
              mid_scalarMultiply_98a3eeef43dce47a,
              mid_subtract_8e71f2ea9c6b3602,
              mid_subtract_3bdd114c6f443cfe,
              mid_toArray_be783177b060994b,
              mid_toString_d2c8eb4129821f0e,
              mid_toString_aeac32100fe35ffe,
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
