#ifndef org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurementBase;
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

          class RelativisticJ2ClockInterSatellitesPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier {
           public:
            enum {
              mid_init$_87096e3fd8086100,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticJ2ClockInterSatellitesPhaseModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticJ2ClockInterSatellitesPhaseModifier(const RelativisticJ2ClockInterSatellitesPhaseModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {}

            RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble, jdouble, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier);
          extern PyTypeObject *PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier);

          class t_RelativisticJ2ClockInterSatellitesPhaseModifier {
          public:
            PyObject_HEAD
            RelativisticJ2ClockInterSatellitesPhaseModifier object;
            static PyObject *wrap_Object(const RelativisticJ2ClockInterSatellitesPhaseModifier&);
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
