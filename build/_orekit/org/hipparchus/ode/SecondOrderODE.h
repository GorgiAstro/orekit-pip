#ifndef org_hipparchus_ode_SecondOrderODE_H
#define org_hipparchus_ode_SecondOrderODE_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class SecondOrderODE : public ::java::lang::Object {
       public:
        enum {
          mid_computeSecondDerivatives_d93437b20bfdf32a,
          mid_getDimension_f2f64475e4580546,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SecondOrderODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SecondOrderODE(const SecondOrderODE& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > computeSecondDerivatives(jdouble, const JArray< jdouble > &, const JArray< jdouble > &) const;
        jint getDimension() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(SecondOrderODE);
      extern PyTypeObject *PY_TYPE(SecondOrderODE);

      class t_SecondOrderODE {
      public:
        PyObject_HEAD
        SecondOrderODE object;
        static PyObject *wrap_Object(const SecondOrderODE&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
