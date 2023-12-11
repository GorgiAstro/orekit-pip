#ifndef org_orekit_estimation_measurements_modifiers_InterSatellitesPhaseAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_InterSatellitesPhaseAmbiguityModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurement;
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

          class InterSatellitesPhaseAmbiguityModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier {
           public:
            enum {
              mid_init$_89aad365fb0ed8da,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modify_0054a497255e8220,
              mid_modifyWithoutDerivatives_e471490df8741b73,
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
