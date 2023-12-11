#ifndef org_hipparchus_analysis_integration_gauss_AbstractRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_AbstractRuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class Pair;
    }
    namespace analysis {
      namespace integration {
        namespace gauss {
          class RuleFactory;
        }
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
    namespace analysis {
      namespace integration {
        namespace gauss {

          class AbstractRuleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_getRule_9a5adfb225849173,
              mid_computeRule_9a5adfb225849173,
              mid_findRoots_a458920118f0992d,
              mid_enforceSymmetry_cc18240f4a737f14,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractRuleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractRuleFactory(const AbstractRuleFactory& obj) : ::java::lang::Object(obj) {}

            AbstractRuleFactory();

            ::org::hipparchus::util::Pair getRule(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractRuleFactory);
          extern PyTypeObject *PY_TYPE(AbstractRuleFactory);

          class t_AbstractRuleFactory {
          public:
            PyObject_HEAD
            AbstractRuleFactory object;
            static PyObject *wrap_Object(const AbstractRuleFactory&);
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
