#ifndef org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockOneWayGNSSPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockOneWayGNSSPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"

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
        class EstimationModifier;
        namespace gnss {
          class OneWayGNSSPhase;
        }
        class EstimatedMeasurementBase;
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

          class RelativisticJ2ClockOneWayGNSSPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier {
           public:
            enum {
              mid_init$_b5167f35b2521627,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticJ2ClockOneWayGNSSPhaseModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticJ2ClockOneWayGNSSPhaseModifier(const RelativisticJ2ClockOneWayGNSSPhaseModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {}

            RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble, jdouble, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSPhaseModifier);
          extern PyTypeObject *PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier);

          class t_RelativisticJ2ClockOneWayGNSSPhaseModifier {
          public:
            PyObject_HEAD
            RelativisticJ2ClockOneWayGNSSPhaseModifier object;
            static PyObject *wrap_Object(const RelativisticJ2ClockOneWayGNSSPhaseModifier&);
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
