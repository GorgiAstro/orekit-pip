#ifndef org_orekit_estimation_measurements_modifiers_PhaseCentersPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseCentersPhaseModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        namespace gnss {
          class Phase;
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

          class PhaseCentersPhaseModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4f6a2e827b6dec38,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseCentersPhaseModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseCentersPhaseModifier(const PhaseCentersPhaseModifier& obj) : ::java::lang::Object(obj) {}

            PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern &, const ::org::orekit::gnss::antenna::FrequencyPattern &);

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
          extern PyType_Def PY_TYPE_DEF(PhaseCentersPhaseModifier);
          extern PyTypeObject *PY_TYPE(PhaseCentersPhaseModifier);

          class t_PhaseCentersPhaseModifier {
          public:
            PyObject_HEAD
            PhaseCentersPhaseModifier object;
            static PyObject *wrap_Object(const PhaseCentersPhaseModifier&);
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
