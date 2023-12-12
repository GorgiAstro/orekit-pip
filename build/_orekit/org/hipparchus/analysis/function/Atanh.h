#ifndef org_hipparchus_analysis_function_Atanh_H
#define org_hipparchus_analysis_function_Atanh_H

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

        class Atanh : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_value_7e960cd6eee376d8,
            mid_value_3eb2b84dba0ab7d2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Atanh(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Atanh(const Atanh& obj) : ::java::lang::Object(obj) {}

          Atanh();

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
        extern PyType_Def PY_TYPE_DEF(Atanh);
        extern PyTypeObject *PY_TYPE(Atanh);

        class t_Atanh {
        public:
          PyObject_HEAD
          Atanh object;
          static PyObject *wrap_Object(const Atanh&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
