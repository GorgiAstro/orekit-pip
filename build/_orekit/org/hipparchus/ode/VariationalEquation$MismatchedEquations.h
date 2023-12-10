#ifndef org_hipparchus_ode_VariationalEquation$MismatchedEquations_H
#define org_hipparchus_ode_VariationalEquation$MismatchedEquations_H

#include "org/hipparchus/exception/MathIllegalArgumentException.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class VariationalEquation$MismatchedEquations : public ::org::hipparchus::exception::MathIllegalArgumentException {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VariationalEquation$MismatchedEquations(jobject obj) : ::org::hipparchus::exception::MathIllegalArgumentException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VariationalEquation$MismatchedEquations(const VariationalEquation$MismatchedEquations& obj) : ::org::hipparchus::exception::MathIllegalArgumentException(obj) {}

        VariationalEquation$MismatchedEquations();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(VariationalEquation$MismatchedEquations);
      extern PyTypeObject *PY_TYPE(VariationalEquation$MismatchedEquations);

      class t_VariationalEquation$MismatchedEquations {
      public:
        PyObject_HEAD
        VariationalEquation$MismatchedEquations object;
        static PyObject *wrap_Object(const VariationalEquation$MismatchedEquations&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
