#ifndef org_hipparchus_geometry_Vector_H
#define org_hipparchus_geometry_Vector_H

#include "org/hipparchus/geometry/Point.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace geometry {
      class Space;
      class Vector;
    }
    namespace util {
      class Blendable;
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

      class Vector : public ::org::hipparchus::geometry::Point {
       public:
        enum {
          mid_add_f7a4efaba53779c7,
          mid_add_6b34b40fdcec0c86,
          mid_blendArithmeticallyWith_5c22e92d5e6381f9,
          mid_distance1_b540ea36818b5810,
          mid_distanceInf_b540ea36818b5810,
          mid_distanceSq_b540ea36818b5810,
          mid_dotProduct_b540ea36818b5810,
          mid_getNorm_557b8123390d8d0c,
          mid_getNorm1_557b8123390d8d0c,
          mid_getNormInf_557b8123390d8d0c,
          mid_getNormSq_557b8123390d8d0c,
          mid_getZero_4a9532ebbfbd85bb,
          mid_isInfinite_89b302893bdbe1f1,
          mid_negate_4a9532ebbfbd85bb,
          mid_normalize_4a9532ebbfbd85bb,
          mid_scalarMultiply_ec102594070df17d,
          mid_subtract_f7a4efaba53779c7,
          mid_subtract_6b34b40fdcec0c86,
          mid_toString_8d9667e91d8ffa97,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Vector(jobject obj) : ::org::hipparchus::geometry::Point(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Vector(const Vector& obj) : ::org::hipparchus::geometry::Point(obj) {}

        Vector add(const Vector &) const;
        Vector add(jdouble, const Vector &) const;
        Vector blendArithmeticallyWith(const Vector &, jdouble) const;
        jdouble distance1(const Vector &) const;
        jdouble distanceInf(const Vector &) const;
        jdouble distanceSq(const Vector &) const;
        jdouble dotProduct(const Vector &) const;
        jdouble getNorm() const;
        jdouble getNorm1() const;
        jdouble getNormInf() const;
        jdouble getNormSq() const;
        Vector getZero() const;
        jboolean isInfinite() const;
        Vector negate() const;
        Vector normalize() const;
        Vector scalarMultiply(jdouble) const;
        Vector subtract(const Vector &) const;
        Vector subtract(jdouble, const Vector &) const;
        ::java::lang::String toString(const ::java::text::NumberFormat &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(Vector);
      extern PyTypeObject *PY_TYPE(Vector);

      class t_Vector {
      public:
        PyObject_HEAD
        Vector object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_Vector *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Vector&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Vector&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
