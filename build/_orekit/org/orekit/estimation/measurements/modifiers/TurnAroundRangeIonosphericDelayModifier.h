#ifndef org_orekit_estimation_measurements_modifiers_TurnAroundRangeIonosphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_TurnAroundRangeIonosphericDelayModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class TurnAroundRange;
        class EstimationModifier;
      }
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class IonosphericModel;
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

          class TurnAroundRangeIonosphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_88af61602f29e4c4,
              mid_getParametersDrivers_2afa36052df4765d,
              mid_modify_e4935e9a55e01fd8,
              mid_modifyWithoutDerivatives_d1815d998cba71e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TurnAroundRangeIonosphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TurnAroundRangeIonosphericDelayModifier(const TurnAroundRangeIonosphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel &, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier);
          extern PyTypeObject *PY_TYPE(TurnAroundRangeIonosphericDelayModifier);

          class t_TurnAroundRangeIonosphericDelayModifier {
          public:
            PyObject_HEAD
            TurnAroundRangeIonosphericDelayModifier object;
            static PyObject *wrap_Object(const TurnAroundRangeIonosphericDelayModifier&);
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
