#ifndef org_hipparchus_analysis_integration_gauss_FieldRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldRuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    class FieldElement;
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

          class FieldRuleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_getRule_e670405dd33862ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldRuleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldRuleFactory(const FieldRuleFactory& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(FieldRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldRuleFactory);

          class t_FieldRuleFactory {
          public:
            PyObject_HEAD
            FieldRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldRuleFactory&, PyTypeObject *);
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
