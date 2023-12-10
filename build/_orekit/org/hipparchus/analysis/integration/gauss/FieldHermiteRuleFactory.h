#ifndef org_hipparchus_analysis_integration_gauss_FieldHermiteRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldHermiteRuleFactory_H

#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"

namespace org {
  namespace hipparchus {
    class Field;
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

          class FieldHermiteRuleFactory : public ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory {
           public:
            enum {
              mid_init$_484998d88974267b,
              mid_computeRule_e670405dd33862ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldHermiteRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldHermiteRuleFactory(const FieldHermiteRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(obj) {}

            FieldHermiteRuleFactory(const ::org::hipparchus::Field &);
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
          extern PyType_Def PY_TYPE_DEF(FieldHermiteRuleFactory);
          extern PyTypeObject *PY_TYPE(FieldHermiteRuleFactory);

          class t_FieldHermiteRuleFactory {
          public:
            PyObject_HEAD
            FieldHermiteRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldHermiteRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldHermiteRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldHermiteRuleFactory&, PyTypeObject *);
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
