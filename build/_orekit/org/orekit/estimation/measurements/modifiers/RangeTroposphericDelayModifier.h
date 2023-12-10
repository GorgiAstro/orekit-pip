#ifndef org_orekit_estimation_measurements_modifiers_RangeTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_RangeTroposphericDelayModifier_H

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
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class Range;
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

          class RangeTroposphericDelayModifier : public ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier {
           public:
            enum {
              mid_init$_8171254277c9834a,
              mid_modify_a5896dbcbe782924,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RangeTroposphericDelayModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RangeTroposphericDelayModifier(const RangeTroposphericDelayModifier& obj) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(obj) {}

            RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(RangeTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(RangeTroposphericDelayModifier);

          class t_RangeTroposphericDelayModifier {
          public:
            PyObject_HEAD
            RangeTroposphericDelayModifier object;
            static PyObject *wrap_Object(const RangeTroposphericDelayModifier&);
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
