#ifndef org_orekit_estimation_measurements_modifiers_OneWayGNSSPhaseAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_OneWayGNSSPhaseAmbiguityModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
        namespace gnss {
          class OneWayGNSSPhase;
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

          class OneWayGNSSPhaseAmbiguityModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier {
           public:
            enum {
              mid_init$_bb79ca80d85d0a66,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_modify_e4935e9a55e01fd8,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
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
