#ifndef org_orekit_estimation_measurements_modifiers_PhaseTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseTroposphericDelayModifier_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
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
        namespace gnss {
          class Phase;
        }
      }
    }
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
              mid_init$_b6cf54f3c9220bc7,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modify_0054a497255e8220,
              mid_modifyWithoutDerivatives_e471490df8741b73,
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
