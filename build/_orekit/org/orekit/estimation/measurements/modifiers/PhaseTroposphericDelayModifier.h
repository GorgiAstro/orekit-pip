#ifndef org_orekit_estimation_measurements_modifiers_PhaseTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseTroposphericDelayModifier_H

#include "java/lang/Object.h"

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
        namespace gnss {
          class Phase;
        }
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

          class PhaseTroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8171254277c9834a,
              mid_getParametersDrivers_a6156df500549a58,
              mid_modify_a5896dbcbe782924,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseTroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseTroposphericDelayModifier(const PhaseTroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(PhaseTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(PhaseTroposphericDelayModifier);

          class t_PhaseTroposphericDelayModifier {
          public:
            PyObject_HEAD
            PhaseTroposphericDelayModifier object;
            static PyObject *wrap_Object(const PhaseTroposphericDelayModifier&);
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
