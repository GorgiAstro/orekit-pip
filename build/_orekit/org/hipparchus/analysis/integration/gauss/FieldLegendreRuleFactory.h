#ifndef org_hipparchus_analysis_integration_gauss_FieldLegendreRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldLegendreRuleFactory_H

#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    namespace util {
      class Pair;
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

          class FieldLegendreRuleFactory : public ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory {
           public:
            enum {
              mid_init$_a44abdd035f01345,
              mid_computeRule_c07c8b9364272960,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldLegendreRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldLegendreRuleFactory(const FieldLegendreRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {}

            FieldLegendreRuleFactory(const ::org::hipparchus::Field &);

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
          extern PyType_Def PY_TYPE_DEF(FieldLegendreRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldLegendreRuleFactory);

          class t_FieldLegendreRuleFactory {
          public:
            PyObject_HEAD
            FieldLegendreRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldLegendreRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldLegendreRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldLegendreRuleFactory&, PyTypeObject *);
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
