#ifndef org_orekit_estimation_measurements_modifiers_RelativisticClockRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticClockRangeModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class Range;
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

          class RelativisticClockRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticClockRangeModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticClockRangeModifier(const RelativisticClockRangeModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(obj) {}

            RelativisticClockRangeModifier();

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
          extern PyType_Def PY_TYPE_DEF(RelativisticClockRangeModifier);
          extern PyTypeObject *PY_TYPE(RelativisticClockRangeModifier);

          class t_RelativisticClockRangeModifier {
          public:
            PyObject_HEAD
            RelativisticClockRangeModifier object;
            static PyObject *wrap_Object(const RelativisticClockRangeModifier&);
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
