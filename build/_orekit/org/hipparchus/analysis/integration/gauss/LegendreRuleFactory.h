#ifndef org_hipparchus_analysis_integration_gauss_LegendreRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_LegendreRuleFactory_H

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

          class LegendreRuleFactory : public ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_computeRule_c07c8b9364272960,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegendreRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegendreRuleFactory(const LegendreRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {}

            LegendreRuleFactory();
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
          extern PyType_Def PY_TYPE_DEF(LegendreRuleFactory);
          extern PyTypeObject *PY_TYPE(LegendreRuleFactory);

          class t_LegendreRuleFactory {
          public:
            PyObject_HEAD
            LegendreRuleFactory object;
            static PyObject *wrap_Object(const LegendreRuleFactory&);
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
