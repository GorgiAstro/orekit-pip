#ifndef org_orekit_estimation_measurements_modifiers_InterSatellitesPhaseAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_InterSatellitesPhaseAmbiguityModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        namespace gnss {
          class InterSatellitesPhase;
        }
        class EstimatedMeasurement;
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

          class InterSatellitesPhaseAmbiguityModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier {
           public:
            enum {
              mid_init$_4320462275d66e78,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InterSatellitesPhaseAmbiguityModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InterSatellitesPhaseAmbiguityModifier(const InterSatellitesPhaseAmbiguityModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {}

            InterSatellitesPhaseAmbiguityModifier(jint, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier);
          extern PyTypeObject *PY_TYPE(InterSatellitesPhaseAmbiguityModifier);

          class t_InterSatellitesPhaseAmbiguityModifier {
          public:
            PyObject_HEAD
            InterSatellitesPhaseAmbiguityModifier object;
            static PyObject *wrap_Object(const InterSatellitesPhaseAmbiguityModifier&);
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
