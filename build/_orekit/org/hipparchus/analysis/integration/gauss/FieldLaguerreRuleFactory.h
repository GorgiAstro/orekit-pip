#ifndef org_hipparchus_analysis_integration_gauss_FieldLaguerreRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldLaguerreRuleFactory_H

#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
    class Field;
    class CalculusFieldElement;
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

          class FieldLaguerreRuleFactory : public ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory {
           public:
            enum {
              mid_init$_02ab84aa7626616d,
              mid_computeRule_acde278e36767299,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldLaguerreRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldLaguerreRuleFactory(const FieldLaguerreRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {}

            FieldLaguerreRuleFactory(const ::org::hipparchus::Field &);

            ::org::hipparchus::util::Pair computeRule(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldLaguerreRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldLaguerreRuleFactory);

          class t_FieldLaguerreRuleFactory {
          public:
            PyObject_HEAD
            FieldLaguerreRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldLaguerreRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldLaguerreRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldLaguerreRuleFactory&, PyTypeObject *);
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
