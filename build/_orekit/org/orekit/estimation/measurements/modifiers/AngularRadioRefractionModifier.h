#ifndef org_orekit_estimation_measurements_modifiers_AngularRadioRefractionModifier_H
#define org_orekit_estimation_measurements_modifiers_AngularRadioRefractionModifier_H

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
    namespace utils {
      class ParameterDriver;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class AngularAzEl;
        class EstimationModifier;
      }
    }
    namespace models {
      class AtmosphericRefractionModel;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class AngularRadioRefractionModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6d9d05db5ec5612f,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AngularRadioRefractionModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AngularRadioRefractionModifier(const AngularRadioRefractionModifier& obj) : ::java::lang::Object(obj) {}

            AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel &);

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
          extern PyType_Def PY_TYPE_DEF(AngularRadioRefractionModifier);
          extern PyTypeObject *PY_TYPE(AngularRadioRefractionModifier);

          class t_AngularRadioRefractionModifier {
          public:
            PyObject_HEAD
            AngularRadioRefractionModifier object;
            static PyObject *wrap_Object(const AngularRadioRefractionModifier&);
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
