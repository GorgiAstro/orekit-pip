#ifndef org_orekit_estimation_measurements_modifiers_PhaseAmbiguityModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseAmbiguityModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"

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
    namespace utils {
      class ParameterDriver;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
        namespace gnss {
          class Phase;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class PhaseAmbiguityModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier {
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

            explicit PhaseAmbiguityModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseAmbiguityModifier(const PhaseAmbiguityModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(obj) {}

            PhaseAmbiguityModifier(jint, jdouble);

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
          extern PyType_Def PY_TYPE_DEF(PhaseAmbiguityModifier);
          extern PyTypeObject *PY_TYPE(PhaseAmbiguityModifier);

          class t_PhaseAmbiguityModifier {
          public:
            PyObject_HEAD
            PhaseAmbiguityModifier object;
            static PyObject *wrap_Object(const PhaseAmbiguityModifier&);
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
