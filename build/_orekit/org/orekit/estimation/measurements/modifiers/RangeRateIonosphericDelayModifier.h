#ifndef org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeRateIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"

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
        class EstimatedMeasurementBase;
        class RangeRate;
        class EstimatedMeasurement;
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
              mid_init$_390b3fe3a43dc939,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              mid_rangeRateErrorIonosphericModel_9a2cbda6eb51ddd8,
              mid_rangeRateErrorIonosphericModel_b8971448fff75978,
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
