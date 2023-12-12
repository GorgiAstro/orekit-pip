#ifndef org_hipparchus_analysis_function_Identity_H
#define org_hipparchus_analysis_function_Identity_H

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

        class Identity : public ::java::lang::Object {
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

          explicit Identity(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Identity(const Identity& obj) : ::java::lang::Object(obj) {}

          Identity();

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
        extern PyType_Def PY_TYPE_DEF(Identity);
        extern PyTypeObject *PY_TYPE(Identity);

        class t_Identity {
        public:
          PyObject_HEAD
          Identity object;
          static PyObject *wrap_Object(const Identity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
