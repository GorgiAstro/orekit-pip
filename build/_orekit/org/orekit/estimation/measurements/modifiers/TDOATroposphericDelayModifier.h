#ifndef org_orekit_estimation_measurements_modifiers_TDOATroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_TDOATroposphericDelayModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class TDOA;
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

          class TDOATroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1f42633debde232b,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modify_0f0ae9411e47b72e,
              mid_modifyWithoutDerivatives_ecce216dce506020,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TDOATroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TDOATroposphericDelayModifier(const TDOATroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(TDOATroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(TDOATroposphericDelayModifier);

          class t_TDOATroposphericDelayModifier {
          public:
            PyObject_HEAD
            TDOATroposphericDelayModifier object;
            static PyObject *wrap_Object(const TDOATroposphericDelayModifier&);
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
