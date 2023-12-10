#ifndef org_orekit_models_earth_ionosphere_IonosphericMappingFunction_H
#define org_orekit_models_earth_ionosphere_IonosphericMappingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class IonosphericMappingFunction : public ::java::lang::Object {
           public:
            enum {
              mid_mappingFactor_0ba5fed9597b693e,
              mid_mappingFactor_d3398190482814dc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphericMappingFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphericMappingFunction(const IonosphericMappingFunction& obj) : ::java::lang::Object(obj) {}

            jdouble mappingFactor(jdouble) const;
            ::org::hipparchus::CalculusFieldElement mappingFactor(const ::org::hipparchus::CalculusFieldElement &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          extern PyType_Def PY_TYPE_DEF(IonosphericMappingFunction);
          extern PyTypeObject *PY_TYPE(IonosphericMappingFunction);

          class t_IonosphericMappingFunction {
          public:
            PyObject_HEAD
            IonosphericMappingFunction object;
            static PyObject *wrap_Object(const IonosphericMappingFunction&);
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
