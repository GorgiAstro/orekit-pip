#ifndef org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class EstimatedMeasurement;
        class RangeRate;
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
              mid_init$_512394ca5b2ba8c6,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              mid_rangeRateErrorIonosphericModel_e648598eaaa5f94d,
              mid_rangeRateErrorIonosphericModel_29b53a0d2fc3b115,
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
