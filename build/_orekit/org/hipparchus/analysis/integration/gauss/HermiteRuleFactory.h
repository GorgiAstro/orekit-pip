#ifndef org_hipparchus_analysis_integration_gauss_HermiteRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_HermiteRuleFactory_H

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

          class HermiteRuleFactory : public ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_computeRule_9a5adfb225849173,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HermiteRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HermiteRuleFactory(const HermiteRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {}

            HermiteRuleFactory();
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
          extern PyType_Def PY_TYPE_DEF(HermiteRuleFactory);
          extern PyTypeObject *PY_TYPE(HermiteRuleFactory);

          class t_HermiteRuleFactory {
          public:
            PyObject_HEAD
            HermiteRuleFactory object;
            static PyObject *wrap_Object(const HermiteRuleFactory&);
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
