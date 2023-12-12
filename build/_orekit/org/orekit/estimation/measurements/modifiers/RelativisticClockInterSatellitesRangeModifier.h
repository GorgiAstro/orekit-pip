#ifndef org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticClockInterSatellitesRangeModifier_H

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
    namespace utils {
      class ParameterDriver;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class InterSatellitesRange;
        class EstimationModifier;
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

          class RelativisticClockInterSatellitesRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticClockInterSatellitesRangeModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticClockInterSatellitesRangeModifier(const RelativisticClockInterSatellitesRangeModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {}

            RelativisticClockInterSatellitesRangeModifier();

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
          extern PyType_Def PY_TYPE_DEF(RelativisticClockInterSatellitesRangeModifier);
          extern PyTypeObject *PY_TYPE(RelativisticClockInterSatellitesRangeModifier);

          class t_RelativisticClockInterSatellitesRangeModifier {
          public:
            PyObject_HEAD
            RelativisticClockInterSatellitesRangeModifier object;
            static PyObject *wrap_Object(const RelativisticClockInterSatellitesRangeModifier&);
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
