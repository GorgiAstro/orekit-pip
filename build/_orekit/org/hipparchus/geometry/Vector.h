#ifndef org_hipparchus_geometry_Vector_H
#define org_hipparchus_geometry_Vector_H

#include "org/hipparchus/geometry/Point.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Space;
      class Vector;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
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
          mid_add_3f686c47147ab48a,
          mid_add_56102f789d856c67,
          mid_blendArithmeticallyWith_3b0c7c9516ccca41,
          mid_distance1_2f915fa9762130df,
          mid_distanceInf_2f915fa9762130df,
          mid_distanceSq_2f915fa9762130df,
          mid_dotProduct_2f915fa9762130df,
          mid_getNorm_b74f83833fdad017,
          mid_getNorm1_b74f83833fdad017,
          mid_getNormInf_b74f83833fdad017,
          mid_getNormSq_b74f83833fdad017,
          mid_getZero_5567482e203105d0,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_negate_5567482e203105d0,
          mid_normalize_5567482e203105d0,
          mid_scalarMultiply_69250424ea4f6edf,
          mid_subtract_3f686c47147ab48a,
          mid_subtract_56102f789d856c67,
          mid_toString_a9120cb5e83d0986,
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
