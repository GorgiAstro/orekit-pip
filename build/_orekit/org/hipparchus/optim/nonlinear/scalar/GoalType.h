#ifndef org_hipparchus_optim_nonlinear_scalar_GoalType_H
#define org_hipparchus_optim_nonlinear_scalar_GoalType_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          class GoalType;
        }
      }
      class OptimizationData;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          class GoalType : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_aed5e2c523d11e5a,
              mid_values_a2c1a8eec5ec2bd7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GoalType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GoalType(const GoalType& obj) : ::java::lang::Enum(obj) {}

            static GoalType *MAXIMIZE;
            static GoalType *MINIMIZE;

            static GoalType valueOf(const ::java::lang::String &);
            static JArray< GoalType > values();
          };
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
          extern PyType_Def PY_TYPE_DEF(GoalType);
          extern PyTypeObject *PY_TYPE(GoalType);

          class t_GoalType {
          public:
            PyObject_HEAD
            GoalType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GoalType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GoalType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GoalType&, PyTypeObject *);
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
