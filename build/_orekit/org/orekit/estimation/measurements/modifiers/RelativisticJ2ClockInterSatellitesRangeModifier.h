#ifndef org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockInterSatellitesRangeModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class InterSatellitesRange;
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

          class RelativisticJ2ClockInterSatellitesRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier {
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

            explicit RelativisticJ2ClockInterSatellitesRangeModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticJ2ClockInterSatellitesRangeModifier(const RelativisticJ2ClockInterSatellitesRangeModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {}

            RelativisticJ2ClockInterSatellitesRangeModifier(jdouble, jdouble, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesRangeModifier);
          extern PyTypeObject *PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier);

          class t_RelativisticJ2ClockInterSatellitesRangeModifier {
          public:
            PyObject_HEAD
            RelativisticJ2ClockInterSatellitesRangeModifier object;
            static PyObject *wrap_Object(const RelativisticJ2ClockInterSatellitesRangeModifier&);
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
