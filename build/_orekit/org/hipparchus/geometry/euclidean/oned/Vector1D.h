#ifndef org_hipparchus_geometry_euclidean_oned_Vector1D_H
#define org_hipparchus_geometry_euclidean_oned_Vector1D_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      class Point;
      namespace euclidean {
        namespace oned {
          class Euclidean1D;
          class Vector1D;
        }
      }
      class Space;
    }
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
        namespace oned {

          class Vector1D : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1ad26e8c8c0cd65b,
              mid_init$_019ccca59a692ed4,
              mid_init$_4d972016844dc9c6,
              mid_init$_c5455ea0fb40ead3,
              mid_init$_2f05e16d5bc3445f,
              mid_add_0184a754d67728b4,
              mid_add_b27957fc94d65e02,
              mid_distance_277cb62c4ec87155,
              mid_distance_ea79b40fdf1a3436,
              mid_distance1_54eca2a6b3ac81a2,
              mid_distanceInf_54eca2a6b3ac81a2,
              mid_distanceInf_ea79b40fdf1a3436,
              mid_distanceSq_54eca2a6b3ac81a2,
              mid_distanceSq_ea79b40fdf1a3436,
              mid_dotProduct_54eca2a6b3ac81a2,
              mid_equals_72faff9b05f5ed5e,
              mid_equalsIeee754_72faff9b05f5ed5e,
              mid_getNorm_9981f74b2d109da6,
              mid_getNorm1_9981f74b2d109da6,
              mid_getNormInf_9981f74b2d109da6,
              mid_getNormSq_9981f74b2d109da6,
              mid_getSpace_a30bf0b437744017,
              mid_getX_9981f74b2d109da6,
              mid_getZero_dfd07178ba1b5f7f,
              mid_hashCode_d6ab429752e7c267,
              mid_isInfinite_eee3de00fe971136,
              mid_isNaN_eee3de00fe971136,
              mid_negate_dfd07178ba1b5f7f,
              mid_scalarMultiply_25cb5a9c7842cdb1,
              mid_subtract_0184a754d67728b4,
              mid_subtract_b27957fc94d65e02,
              mid_toString_d2c8eb4129821f0e,
              mid_toString_aeac32100fe35ffe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector1D(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector1D(const Vector1D& obj) : ::java::lang::Object(obj) {}

            static Vector1D *NEGATIVE_INFINITY;
            static Vector1D *NaN;
            static Vector1D *ONE;
            static Vector1D *POSITIVE_INFINITY;
            static Vector1D *ZERO;

            Vector1D(jdouble);
            Vector1D(jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &);
            Vector1D(jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &, jdouble, const Vector1D &);

            Vector1D add(const ::org::hipparchus::geometry::Vector &) const;
            Vector1D add(jdouble, const ::org::hipparchus::geometry::Vector &) const;
            jdouble distance(const ::org::hipparchus::geometry::Point &) const;
            static jdouble distance(const Vector1D &, const Vector1D &);
            jdouble distance1(const ::org::hipparchus::geometry::Vector &) const;
            jdouble distanceInf(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceInf(const Vector1D &, const Vector1D &);
            jdouble distanceSq(const ::org::hipparchus::geometry::Vector &) const;
            static jdouble distanceSq(const Vector1D &, const Vector1D &);
            jdouble dotProduct(const ::org::hipparchus::geometry::Vector &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jboolean equalsIeee754(const ::java::lang::Object &) const;
            jdouble getNorm() const;
            jdouble getNorm1() const;
            jdouble getNormInf() const;
            jdouble getNormSq() const;
            ::org::hipparchus::geometry::Space getSpace() const;
            jdouble getX() const;
            Vector1D getZero() const;
            jint hashCode() const;
            jboolean isInfinite() const;
            jboolean isNaN() const;
            Vector1D negate() const;
            Vector1D scalarMultiply(jdouble) const;
            Vector1D subtract(const ::org::hipparchus::geometry::Vector &) const;
            Vector1D subtract(jdouble, const ::org::hipparchus::geometry::Vector &) const;
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
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(Vector1D);
          extern PyTypeObject *PY_TYPE(Vector1D);

          class t_Vector1D {
          public:
            PyObject_HEAD
            Vector1D object;
            static PyObject *wrap_Object(const Vector1D&);
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
