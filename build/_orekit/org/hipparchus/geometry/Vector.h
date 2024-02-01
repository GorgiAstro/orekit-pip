#ifndef org_hipparchus_geometry_Vector_H
#define org_hipparchus_geometry_Vector_H

#include "org/hipparchus/geometry/Point.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
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
          mid_add_915b156072ff5abe,
          mid_add_af8073295450304e,
          mid_blendArithmeticallyWith_b75e0be2b07534de,
          mid_distance1_54eca2a6b3ac81a2,
          mid_distanceInf_54eca2a6b3ac81a2,
          mid_distanceSq_54eca2a6b3ac81a2,
          mid_dotProduct_54eca2a6b3ac81a2,
          mid_getNorm_9981f74b2d109da6,
          mid_getNorm1_9981f74b2d109da6,
          mid_getNormInf_9981f74b2d109da6,
          mid_getNormSq_9981f74b2d109da6,
          mid_getZero_98aa02e65b0cf19e,
          mid_isInfinite_eee3de00fe971136,
          mid_negate_98aa02e65b0cf19e,
          mid_normalize_98aa02e65b0cf19e,
          mid_scalarMultiply_5d9eb024afba2a13,
          mid_subtract_915b156072ff5abe,
          mid_subtract_af8073295450304e,
          mid_toString_aeac32100fe35ffe,
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
