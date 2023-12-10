#ifndef org_hipparchus_analysis_integration_gauss_RuleFactory_H
#define org_hipparchus_analysis_integration_gauss_RuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class Pair;
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

          class RuleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_getRule_086dd68d091255ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RuleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RuleFactory(const RuleFactory& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(RuleFactory);
          extern PyTypeObject *PY_TYPE(RuleFactory);

          class t_RuleFactory {
          public:
            PyObject_HEAD
            RuleFactory object;
            static PyObject *wrap_Object(const RuleFactory&);
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
