#ifndef org_orekit_estimation_measurements_modifiers_BistaticRangeTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BistaticRangeTroposphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class BistaticRange;
        class EstimationModifier;
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

          class BistaticRangeTroposphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier {
           public:
            enum {
              mid_init$_1f42633debde232b,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeTroposphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeTroposphericDelayModifier(const BistaticRangeTroposphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(obj) {}

            BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BistaticRangeTroposphericDelayModifier);

          class t_BistaticRangeTroposphericDelayModifier {
          public:
            PyObject_HEAD
            BistaticRangeTroposphericDelayModifier object;
            static PyObject *wrap_Object(const BistaticRangeTroposphericDelayModifier&);
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
