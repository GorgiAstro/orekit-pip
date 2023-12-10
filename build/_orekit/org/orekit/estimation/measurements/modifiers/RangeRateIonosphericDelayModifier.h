#ifndef org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class RangeRate;
        class EstimationModifier;
      }
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

          class RangeRateIonosphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier {
           public:
            enum {
              mid_init$_c6707a208a39c405,
              mid_modify_e4935e9a55e01fd8,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
              mid_rangeRateErrorIonosphericModel_03cd5a2e88a0f0f6,
              mid_rangeRateErrorIonosphericModel_08d2a35aee39232b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeRateIonosphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeRateIonosphericDelayModifier(const RangeRateIonosphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(obj) {}

            RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble, jboolean);

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
          extern PyType_Def PY_TYPE_DEF(RangeRateIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(RangeRateIonosphericDelayModifier);

          class t_RangeRateIonosphericDelayModifier {
          public:
            PyObject_HEAD
            RangeRateIonosphericDelayModifier object;
            static PyObject *wrap_Object(const RangeRateIonosphericDelayModifier&);
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
