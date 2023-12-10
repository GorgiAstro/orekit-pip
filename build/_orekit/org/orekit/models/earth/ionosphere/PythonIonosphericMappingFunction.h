#ifndef org_orekit_models_earth_ionosphere_PythonIonosphericMappingFunction_H
#define org_orekit_models_earth_ionosphere_PythonIonosphericMappingFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericMappingFunction;
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          class PythonIonosphericMappingFunction : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_finalize_0fa09c18fee449d5,
              mid_mappingFactor_dcbc7ce2902fa136,
              mid_mappingFactor_a4b1871f4d29e58b,
              mid_mappingFactor_T_a4b1871f4d29e58b,
              mid_pythonDecRef_0fa09c18fee449d5,
              mid_pythonExtension_492808a339bfa35f,
              mid_pythonExtension_3a8e7649f31fdb20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonIonosphericMappingFunction(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonIonosphericMappingFunction(const PythonIonosphericMappingFunction& obj) : ::java::lang::Object(obj) {}

            PythonIonosphericMappingFunction();

            void finalize() const;
            jdouble mappingFactor(jdouble) const;
            ::org::hipparchus::CalculusFieldElement mappingFactor(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement mappingFactor_T(const ::org::hipparchus::CalculusFieldElement &) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PythonIonosphericMappingFunction);
          extern PyTypeObject *PY_TYPE(PythonIonosphericMappingFunction);

          class t_PythonIonosphericMappingFunction {
          public:
            PyObject_HEAD
            PythonIonosphericMappingFunction object;
            static PyObject *wrap_Object(const PythonIonosphericMappingFunction&);
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
