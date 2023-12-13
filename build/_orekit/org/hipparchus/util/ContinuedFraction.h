#ifndef org_hipparchus_util_ContinuedFraction_H
#define org_hipparchus_util_ContinuedFraction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class ContinuedFraction : public ::java::lang::Object {
       public:
        enum {
          mid_evaluate_04fd0666b613d2ab,
          mid_evaluate_99e3200dafc19573,
          mid_evaluate_2eeda88661ae34d3,
          mid_evaluate_c35488bf93c357d0,
          mid_getA_98e10c261c066ee7,
          mid_getB_98e10c261c066ee7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ContinuedFraction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ContinuedFraction(const ContinuedFraction& obj) : ::java::lang::Object(obj) {}

        jdouble evaluate(jdouble) const;
        jdouble evaluate(jdouble, jdouble) const;
        jdouble evaluate(jdouble, jint) const;
        jdouble evaluate(jdouble, jdouble, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(ContinuedFraction);
      extern PyTypeObject *PY_TYPE(ContinuedFraction);

      class t_ContinuedFraction {
      public:
        PyObject_HEAD
        ContinuedFraction object;
        static PyObject *wrap_Object(const ContinuedFraction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
