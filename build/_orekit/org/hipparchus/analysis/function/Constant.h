#ifndef org_hipparchus_analysis_function_Constant_H
#define org_hipparchus_analysis_function_Constant_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
      }
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
    namespace analysis {
      namespace function {

        class Constant : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8ba9fe7a847cecad,
            mid_value_04fd0666b613d2ab,
            mid_value_a5332de4d4d64b08,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Constant(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Constant(const Constant& obj) : ::java::lang::Object(obj) {}

          Constant(jdouble);

          jdouble value(jdouble) const;
          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        extern PyType_Def PY_TYPE_DEF(Constant);
        extern PyTypeObject *PY_TYPE(Constant);

        class t_Constant {
        public:
          PyObject_HEAD
          Constant object;
          static PyObject *wrap_Object(const Constant&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
