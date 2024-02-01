#ifndef org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        namespace gnss {
          class InterSatellitesPhase;
        }
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

          class RelativisticClockInterSatellitesPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticClockInterSatellitesPhaseModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticClockInterSatellitesPhaseModifier(const RelativisticClockInterSatellitesPhaseModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {}

            RelativisticClockInterSatellitesPhaseModifier();

            ::java::util::List getParametersDrivers() const;
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
          extern PyType_Def PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier);
          extern PyTypeObject *PY_TYPE(RelativisticClockInterSatellitesPhaseModifier);

          class t_RelativisticClockInterSatellitesPhaseModifier {
          public:
            PyObject_HEAD
            RelativisticClockInterSatellitesPhaseModifier object;
            static PyObject *wrap_Object(const RelativisticClockInterSatellitesPhaseModifier&);
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
