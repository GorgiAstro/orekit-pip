#ifndef org_orekit_estimation_measurements_modifiers_BistaticRangeRateIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BistaticRangeRateIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class BistaticRangeRate;
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

          class BistaticRangeRateIonosphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier {
           public:
            enum {
              mid_init$_70ec985998eac326,
              mid_modify_a5896dbcbe782924,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeRateIonosphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeRateIonosphericDelayModifier(const BistaticRangeRateIonosphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(obj) {}

            BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(BistaticRangeRateIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BistaticRangeRateIonosphericDelayModifier);

          class t_BistaticRangeRateIonosphericDelayModifier {
          public:
            PyObject_HEAD
            BistaticRangeRateIonosphericDelayModifier object;
            static PyObject *wrap_Object(const BistaticRangeRateIonosphericDelayModifier&);
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
