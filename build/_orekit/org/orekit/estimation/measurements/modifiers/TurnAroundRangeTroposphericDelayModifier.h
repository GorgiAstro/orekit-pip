#ifndef org_orekit_estimation_measurements_modifiers_TurnAroundRangeTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_TurnAroundRangeTroposphericDelayModifier_H

#include "java/lang/Object.h"

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
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class TurnAroundRange;
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
      }
    }
    namespace models {
      namespace earth {
        namespace troposphere {
          class DiscreteTroposphericModel;
        }
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class TurnAroundRangeTroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_516bd20115aa9d9d,
              mid_getParametersDrivers_e62d3bb06d56d7e3,
              mid_modify_f784f7724d44a90a,
              mid_modifyWithoutDerivatives_308087fabc1d7f66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TurnAroundRangeTroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TurnAroundRangeTroposphericDelayModifier(const TurnAroundRangeTroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(TurnAroundRangeTroposphericDelayModifier);

          class t_TurnAroundRangeTroposphericDelayModifier {
          public:
            PyObject_HEAD
            TurnAroundRangeTroposphericDelayModifier object;
            static PyObject *wrap_Object(const TurnAroundRangeTroposphericDelayModifier&);
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
