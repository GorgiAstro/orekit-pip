#ifndef org_orekit_estimation_measurements_modifiers_RangeRateTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeRateTroposphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class GroundStation;
        class RangeRate;
        class EstimationModifier;
      }
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class RangeRateTroposphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier {
           public:
            enum {
              mid_init$_2b1e044f2f09ecad,
              mid_modify_e4935e9a55e01fd8,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
              mid_rangeRateErrorTroposphericModel_08d2a35aee39232b,
              mid_rangeRateErrorTroposphericModel_03cd5a2e88a0f0f6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeRateTroposphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeRateTroposphericDelayModifier(const RangeRateTroposphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(obj) {}

            RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &, jboolean);

            void modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
            void modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
            jdouble rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::CalculusFieldElement rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation &, const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
          extern PyType_Def PY_TYPE_DEF(RangeRateTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(RangeRateTroposphericDelayModifier);

          class t_RangeRateTroposphericDelayModifier {
          public:
            PyObject_HEAD
            RangeRateTroposphericDelayModifier object;
            static PyObject *wrap_Object(const RangeRateTroposphericDelayModifier&);
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
