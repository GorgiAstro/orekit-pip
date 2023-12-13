#ifndef org_orekit_estimation_measurements_modifiers_BistaticRangeTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_BistaticRangeTroposphericDelayModifier_H

#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class BistaticRange;
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

          class BistaticRangeTroposphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier {
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
