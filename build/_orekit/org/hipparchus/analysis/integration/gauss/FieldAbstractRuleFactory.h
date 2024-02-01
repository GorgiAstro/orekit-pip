#ifndef org_hipparchus_analysis_integration_gauss_FieldAbstractRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldAbstractRuleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    namespace util {
      class Pair;
    }
    namespace analysis {
      namespace integration {
        namespace gauss {
          class FieldRuleFactory;
        }
      }
    }
    class CalculusFieldElement;
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

          class FieldAbstractRuleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a44abdd035f01345,
              mid_getField_577649682b9910c1,
              mid_getRule_c07c8b9364272960,
              mid_computeRule_c07c8b9364272960,
              mid_findRoots_607be8730ac51032,
              mid_enforceSymmetry_77e61a645c496adc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldAbstractRuleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldAbstractRuleFactory(const FieldAbstractRuleFactory& obj) : ::java::lang::Object(obj) {}

            FieldAbstractRuleFactory(const ::org::hipparchus::Field &);

            ::org::hipparchus::Field getField() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldAbstractRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldAbstractRuleFactory);

          class t_FieldAbstractRuleFactory {
          public:
            PyObject_HEAD
            FieldAbstractRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldAbstractRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldAbstractRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldAbstractRuleFactory&, PyTypeObject *);
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
