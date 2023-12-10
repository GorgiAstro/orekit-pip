#ifndef org_hipparchus_analysis_integration_gauss_AbstractRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_AbstractRuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          class RuleFactory;
        }
      }
    }
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
              mid_init$_0fa09c18fee449d5,
              mid_getRule_e670405dd33862ee,
              mid_computeRule_e670405dd33862ee,
              mid_findRoots_5052ee4f5e957843,
              mid_enforceSymmetry_fa9d415d19f69361,
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
