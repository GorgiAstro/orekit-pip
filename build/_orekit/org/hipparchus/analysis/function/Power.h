#ifndef org_hipparchus_analysis_function_Power_H
#define org_hipparchus_analysis_function_Power_H

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

        class Power : public ::java::lang::Object {
         public:
          enum {
            mid_init$_17db3a65980d3441,
            mid_value_dcbc7ce2902fa136,
            mid_value_73d6acaa8ebd2b7d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Power(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Power(const Power& obj) : ::java::lang::Object(obj) {}

          Power(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(Power);
        extern PyTypeObject *PY_TYPE(Power);

        class t_Power {
        public:
          PyObject_HEAD
          Power object;
          static PyObject *wrap_Object(const Power&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
