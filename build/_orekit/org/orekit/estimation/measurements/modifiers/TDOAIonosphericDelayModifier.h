#ifndef org_orekit_estimation_measurements_modifiers_TDOAIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_TDOAIonosphericDelayModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class TDOA;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class TDOAIonosphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_69c6b2cabec159dd,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modify_0054a497255e8220,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TDOAIonosphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TDOAIonosphericDelayModifier(const TDOAIonosphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble);

            ::java::util::List getParametersDrivers() const;
            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(TDOAIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(TDOAIonosphericDelayModifier);

          class t_TDOAIonosphericDelayModifier {
          public:
            PyObject_HEAD
            TDOAIonosphericDelayModifier object;
            static PyObject *wrap_Object(const TDOAIonosphericDelayModifier&);
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
