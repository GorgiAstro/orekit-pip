#ifndef org_orekit_models_earth_ionosphere_SingleLayerModelMappingFunction_H
#define org_orekit_models_earth_ionosphere_SingleLayerModelMappingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericMappingFunction;
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
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class SingleLayerModelMappingFunction : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_1ad26e8c8c0cd65b,
              mid_mappingFactor_bf28ed64d6e8576b,
              mid_mappingFactor_a3b854adede8eaaa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SingleLayerModelMappingFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SingleLayerModelMappingFunction(const SingleLayerModelMappingFunction& obj) : ::java::lang::Object(obj) {}

            SingleLayerModelMappingFunction();
            SingleLayerModelMappingFunction(jdouble);

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
          extern PyType_Def PY_TYPE_DEF(SingleLayerModelMappingFunction);
          extern PyTypeObject *PY_TYPE(SingleLayerModelMappingFunction);

          class t_SingleLayerModelMappingFunction {
          public:
            PyObject_HEAD
            SingleLayerModelMappingFunction object;
            static PyObject *wrap_Object(const SingleLayerModelMappingFunction&);
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
