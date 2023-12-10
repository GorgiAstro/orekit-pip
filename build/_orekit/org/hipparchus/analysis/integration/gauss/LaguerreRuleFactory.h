#ifndef org_hipparchus_analysis_integration_gauss_LaguerreRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_LaguerreRuleFactory_H

#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          class LaguerreRuleFactory : public ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_computeRule_e670405dd33862ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LaguerreRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LaguerreRuleFactory(const LaguerreRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {}

            LaguerreRuleFactory();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          extern PyType_Def PY_TYPE_DEF(LaguerreRuleFactory);
          extern PyTypeObject *PY_TYPE(LaguerreRuleFactory);

          class t_LaguerreRuleFactory {
          public:
            PyObject_HEAD
            LaguerreRuleFactory object;
            static PyObject *wrap_Object(const LaguerreRuleFactory&);
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
