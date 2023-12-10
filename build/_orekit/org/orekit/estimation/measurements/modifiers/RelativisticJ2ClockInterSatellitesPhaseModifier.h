#ifndef org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesPhaseModifier_H

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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class RelativisticJ2ClockInterSatellitesPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier {
           public:
            enum {
              mid_init$_2c56b6dd4d4b1dec,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
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
