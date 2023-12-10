#ifndef org_hipparchus_geometry_Vector_H
#define org_hipparchus_geometry_Vector_H

#include "org/hipparchus/geometry/Point.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace util {
      class Blendable;
    }
    namespace geometry {
      class Vector;
      class Space;
    }
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

      class Vector : public ::org::hipparchus::geometry::Point {
       public:
        enum {
          mid_add_a4e9d5f25d954f5d,
          mid_add_d5eedea4a7ae5c23,
          mid_blendArithmeticallyWith_dddc3b09788b0767,
          mid_distance1_05fa5f52db18503d,
          mid_distanceInf_05fa5f52db18503d,
          mid_distanceSq_05fa5f52db18503d,
          mid_dotProduct_05fa5f52db18503d,
          mid_getNorm_456d9a2f64d6b28d,
          mid_getNorm1_456d9a2f64d6b28d,
          mid_getNormInf_456d9a2f64d6b28d,
          mid_getNormSq_456d9a2f64d6b28d,
          mid_getZero_d4a8fa15ffc65842,
          mid_isInfinite_e470b6d9e0d979db,
          mid_negate_d4a8fa15ffc65842,
          mid_normalize_d4a8fa15ffc65842,
          mid_scalarMultiply_8c76e50884ebab3b,
          mid_subtract_a4e9d5f25d954f5d,
          mid_subtract_d5eedea4a7ae5c23,
          mid_toString_aed149be89fb33b9,
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
