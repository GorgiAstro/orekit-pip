#ifndef org_hipparchus_analysis_function_Subtract_H
#define org_hipparchus_analysis_function_Subtract_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class BivariateFunction;
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

        class Subtract : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_value_2268d18be49a6087,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Subtract(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Subtract(const Subtract& obj) : ::java::lang::Object(obj) {}

          Subtract();

          jdouble value(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(Subtract);
        extern PyTypeObject *PY_TYPE(Subtract);

        class t_Subtract {
        public:
          PyObject_HEAD
          Subtract object;
          static PyObject *wrap_Object(const Subtract&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
