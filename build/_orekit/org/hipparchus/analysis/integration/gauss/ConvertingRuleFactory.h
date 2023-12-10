#ifndef org_hipparchus_analysis_integration_gauss_ConvertingRuleFactory_H
#define org_hipparchus_analysis_integration_gauss_ConvertingRuleFactory_H

#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          class FieldRuleFactory;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          class ConvertingRuleFactory : public ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory {
           public:
            enum {
              mid_init$_b58fecf01070c2b0,
              mid_computeRule_086dd68d091255ed,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConvertingRuleFactory(jobject obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConvertingRuleFactory(const ConvertingRuleFactory& obj) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(obj) {}

            ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory &);
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
          extern PyType_Def PY_TYPE_DEF(ConvertingRuleFactory);
          extern PyTypeObject *PY_TYPE(ConvertingRuleFactory);

          class t_ConvertingRuleFactory {
          public:
            PyObject_HEAD
            ConvertingRuleFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ConvertingRuleFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ConvertingRuleFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ConvertingRuleFactory&, PyTypeObject *);
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
