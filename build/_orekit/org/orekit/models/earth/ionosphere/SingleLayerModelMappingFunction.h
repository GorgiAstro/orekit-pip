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
              mid_init$_7ae3461a92a43152,
              mid_init$_77e0f9a1f260e2e5,
              mid_mappingFactor_0ba5fed9597b693e,
              mid_mappingFactor_d3398190482814dc,
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
