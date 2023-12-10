#ifndef org_hipparchus_optim_nonlinear_scalar_MultivariateFunctionMappingAdapter_H
#define org_hipparchus_optim_nonlinear_scalar_MultivariateFunctionMappingAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateFunction;
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

          class MultivariateFunctionMappingAdapter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_895e8ed7d2e6e8f8,
              mid_boundedToUnbounded_ac3d742ccc742f22,
              mid_unboundedToBounded_ac3d742ccc742f22,
              mid_value_9dc1ec0bcc0a9a29,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultivariateFunctionMappingAdapter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultivariateFunctionMappingAdapter(const MultivariateFunctionMappingAdapter& obj) : ::java::lang::Object(obj) {}

            MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction &, const JArray< jdouble > &, const JArray< jdouble > &);

            JArray< jdouble > boundedToUnbounded(const JArray< jdouble > &) const;
            JArray< jdouble > unboundedToBounded(const JArray< jdouble > &) const;
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
          extern PyType_Def PY_TYPE_DEF(MultivariateFunctionMappingAdapter);
          extern PyTypeObject *PY_TYPE(MultivariateFunctionMappingAdapter);

          class t_MultivariateFunctionMappingAdapter {
          public:
            PyObject_HEAD
            MultivariateFunctionMappingAdapter object;
            static PyObject *wrap_Object(const MultivariateFunctionMappingAdapter&);
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
