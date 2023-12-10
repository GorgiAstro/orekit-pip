#ifndef org_hipparchus_geometry_Vector_H
#define org_hipparchus_geometry_Vector_H

#include "org/hipparchus/geometry/Point.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      class Space;
    }
    namespace util {
      class Blendable;
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
          mid_add_9ced07f072dfcaa7,
          mid_add_64eba3c66e57a4a3,
          mid_blendArithmeticallyWith_645b75c05542df02,
          mid_distance1_b4822d5266bca26e,
          mid_distanceInf_b4822d5266bca26e,
          mid_distanceSq_b4822d5266bca26e,
          mid_dotProduct_b4822d5266bca26e,
          mid_getNorm_dff5885c2c873297,
          mid_getNorm1_dff5885c2c873297,
          mid_getNormInf_dff5885c2c873297,
          mid_getNormSq_dff5885c2c873297,
          mid_getZero_2bc1acacbc156182,
          mid_isInfinite_b108b35ef48e27bd,
          mid_negate_2bc1acacbc156182,
          mid_normalize_2bc1acacbc156182,
          mid_scalarMultiply_a2f435d4493cecfc,
          mid_subtract_9ced07f072dfcaa7,
          mid_subtract_64eba3c66e57a4a3,
          mid_toString_7b429db583278c20,
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
