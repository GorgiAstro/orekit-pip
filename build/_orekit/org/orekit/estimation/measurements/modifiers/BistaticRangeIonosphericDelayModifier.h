#ifndef org_orekit_estimation_measurements_modifiers_BistaticRangeIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BistaticRangeIonosphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class BistaticRange;
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

          class BistaticRangeIonosphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier {
           public:
            enum {
              mid_init$_88af61602f29e4c4,
              mid_modify_e4935e9a55e01fd8,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeIonosphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeIonosphericDelayModifier(const BistaticRangeIonosphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(obj) {}

            BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(BistaticRangeIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BistaticRangeIonosphericDelayModifier);

          class t_BistaticRangeIonosphericDelayModifier {
          public:
            PyObject_HEAD
            BistaticRangeIonosphericDelayModifier object;
            static PyObject *wrap_Object(const BistaticRangeIonosphericDelayModifier&);
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
