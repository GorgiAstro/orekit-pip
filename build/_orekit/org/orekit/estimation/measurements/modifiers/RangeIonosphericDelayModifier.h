#ifndef org_orekit_estimation_measurements_modifiers_RangeIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"

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
        class Range;
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

          class RangeIonosphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier {
           public:
            enum {
              mid_init$_c3c7040adbf9e5f8,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeIonosphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeIonosphericDelayModifier(const RangeIonosphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(obj) {}

            RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(RangeIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(RangeIonosphericDelayModifier);

          class t_RangeIonosphericDelayModifier {
          public:
            PyObject_HEAD
            RangeIonosphericDelayModifier object;
            static PyObject *wrap_Object(const RangeIonosphericDelayModifier&);
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
