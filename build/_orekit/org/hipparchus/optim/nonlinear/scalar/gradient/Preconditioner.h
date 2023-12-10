#ifndef org_hipparchus_optim_nonlinear_scalar_gradient_Preconditioner_H
#define org_hipparchus_optim_nonlinear_scalar_gradient_Preconditioner_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            class Preconditioner : public ::java::lang::Object {
             public:
              enum {
                mid_precondition_0f29b7d9f77b462e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Preconditioner(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Preconditioner(const Preconditioner& obj) : ::java::lang::Object(obj) {}

              JArray< jdouble > precondition(const JArray< jdouble > &, const JArray< jdouble > &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            extern PyType_Def PY_TYPE_DEF(Preconditioner);
            extern PyTypeObject *PY_TYPE(Preconditioner);

            class t_Preconditioner {
            public:
              PyObject_HEAD
              Preconditioner object;
              static PyObject *wrap_Object(const Preconditioner&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
