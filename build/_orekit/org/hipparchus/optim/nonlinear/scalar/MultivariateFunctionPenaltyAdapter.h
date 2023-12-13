#ifndef org_hipparchus_optim_nonlinear_scalar_MultivariateFunctionPenaltyAdapter_H
#define org_hipparchus_optim_nonlinear_scalar_MultivariateFunctionPenaltyAdapter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateFunction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          class MultivariateFunctionPenaltyAdapter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5ad498a9f61006ff,
              mid_value_b060e4326765ccf1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultivariateFunctionPenaltyAdapter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultivariateFunctionPenaltyAdapter(const MultivariateFunctionPenaltyAdapter& obj) : ::java::lang::Object(obj) {}

            MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const JArray< jdouble > &);

            jdouble value(const JArray< jdouble > &) const;
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
          extern PyType_Def PY_TYPE_DEF(MultivariateFunctionPenaltyAdapter);
          extern PyTypeObject *PY_TYPE(MultivariateFunctionPenaltyAdapter);

          class t_MultivariateFunctionPenaltyAdapter {
          public:
            PyObject_HEAD
            MultivariateFunctionPenaltyAdapter object;
            static PyObject *wrap_Object(const MultivariateFunctionPenaltyAdapter&);
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
