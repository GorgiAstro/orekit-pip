#ifndef org_hipparchus_optim_nonlinear_scalar_ObjectiveFunctionGradient_H
#define org_hipparchus_optim_nonlinear_scalar_ObjectiveFunctionGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateVectorFunction;
    }
    namespace optim {
      class OptimizationData;
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          class ObjectiveFunctionGradient : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b318c17b3682075c,
              mid_getObjectiveFunctionGradient_72c2cddd79f92b83,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ObjectiveFunctionGradient(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ObjectiveFunctionGradient(const ObjectiveFunctionGradient& obj) : ::java::lang::Object(obj) {}

            ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction &);

            ::org::hipparchus::analysis::MultivariateVectorFunction getObjectiveFunctionGradient() const;
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
          extern PyType_Def PY_TYPE_DEF(ObjectiveFunctionGradient);
          extern PyTypeObject *PY_TYPE(ObjectiveFunctionGradient);

          class t_ObjectiveFunctionGradient {
          public:
            PyObject_HEAD
            ObjectiveFunctionGradient object;
            static PyObject *wrap_Object(const ObjectiveFunctionGradient&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
