#ifndef org_orekit_estimation_measurements_modifiers_TDOAIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_TDOAIonosphericDelayModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
        }
      }
    }
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class TDOA;
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriver;
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
              mid_init$_c3c7040adbf9e5f8,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
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
