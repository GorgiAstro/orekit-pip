#ifndef org_orekit_estimation_measurements_modifiers_OneWayGNSSPhaseAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_OneWayGNSSPhaseAmbiguityModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        namespace gnss {
          class OneWayGNSSPhase;
        }
        class EstimationModifier;
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

          class OneWayGNSSPhaseAmbiguityModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier {
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

            explicit OneWayGNSSPhaseAmbiguityModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OneWayGNSSPhaseAmbiguityModifier(const OneWayGNSSPhaseAmbiguityModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {}

            OneWayGNSSPhaseAmbiguityModifier(jint, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier);
          extern PyTypeObject *PY_TYPE(OneWayGNSSPhaseAmbiguityModifier);

          class t_OneWayGNSSPhaseAmbiguityModifier {
          public:
            PyObject_HEAD
            OneWayGNSSPhaseAmbiguityModifier object;
            static PyObject *wrap_Object(const OneWayGNSSPhaseAmbiguityModifier&);
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
