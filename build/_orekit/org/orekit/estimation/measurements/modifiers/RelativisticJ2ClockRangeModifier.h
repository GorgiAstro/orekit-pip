#ifndef org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_RelativisticJ2ClockRangeModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"

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

          class RelativisticJ2ClockRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier {
           public:
            enum {
              mid_init$_bd28dc6055dc5bbd,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RelativisticJ2ClockRangeModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RelativisticJ2ClockRangeModifier(const RelativisticJ2ClockRangeModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(obj) {}

            RelativisticJ2ClockRangeModifier(jdouble, jdouble, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(RelativisticJ2ClockRangeModifier);
          extern PyTypeObject *PY_TYPE(RelativisticJ2ClockRangeModifier);

          class t_RelativisticJ2ClockRangeModifier {
          public:
            PyObject_HEAD
            RelativisticJ2ClockRangeModifier object;
            static PyObject *wrap_Object(const RelativisticJ2ClockRangeModifier&);
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
