#ifndef org_hipparchus_filtering_kalman_linear_LinearProcess_H
#define org_hipparchus_filtering_kalman_linear_LinearProcess_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {
          class LinearEvolution;
        }
        class Measurement;
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
    namespace filtering {
      namespace kalman {
        namespace linear {

          class LinearProcess : public ::java::lang::Object {
           public:
            enum {
              mid_getEvolution_2138a21d0289f4f7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LinearProcess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LinearProcess(const LinearProcess& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::filtering::kalman::linear::LinearEvolution getEvolution(const ::org::hipparchus::filtering::kalman::Measurement &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {
          extern PyType_Def PY_TYPE_DEF(LinearProcess);
          extern PyTypeObject *PY_TYPE(LinearProcess);

          class t_LinearProcess {
          public:
            PyObject_HEAD
            LinearProcess object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LinearProcess *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LinearProcess&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LinearProcess&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
