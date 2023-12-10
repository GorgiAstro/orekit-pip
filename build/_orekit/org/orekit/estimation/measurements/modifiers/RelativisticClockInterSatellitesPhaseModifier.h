#ifndef org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class InterSatellitesPhase;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class RelativisticClockInterSatellitesPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_getParametersDrivers_a6156df500549a58,
              mid_modifyWithoutDerivatives_811f96960c94c1de,
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