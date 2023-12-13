#ifndef org_orekit_estimation_measurements_modifiers_BistaticRangeRateTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BistaticRangeRateTroposphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class BistaticRangeRate;
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
      }
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
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

          class BistaticRangeRateTroposphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier {
           public:
            enum {
              mid_init$_516bd20115aa9d9d,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BistaticRangeRateTroposphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BistaticRangeRateTroposphericDelayModifier(const BistaticRangeRateTroposphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(obj) {}

            BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(BistaticRangeRateTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(BistaticRangeRateTroposphericDelayModifier);

          class t_BistaticRangeRateTroposphericDelayModifier {
          public:
            PyObject_HEAD
            BistaticRangeRateTroposphericDelayModifier object;
            static PyObject *wrap_Object(const BistaticRangeRateTroposphericDelayModifier&);
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
