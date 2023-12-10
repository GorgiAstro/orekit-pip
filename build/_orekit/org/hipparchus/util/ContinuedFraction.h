#ifndef org_hipparchus_util_ContinuedFraction_H
#define org_hipparchus_util_ContinuedFraction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class ContinuedFraction : public ::java::lang::Object {
       public:
        enum {
          mid_evaluate_dcbc7ce2902fa136,
          mid_evaluate_86ffecc08a63eff0,
          mid_evaluate_948617e69b66e15d,
          mid_evaluate_aa604e695a59526c,
          mid_getA_60d7624725a52590,
          mid_getB_60d7624725a52590,
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
