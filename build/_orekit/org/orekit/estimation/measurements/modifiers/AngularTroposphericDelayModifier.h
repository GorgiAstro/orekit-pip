#ifndef org_orekit_estimation_measurements_modifiers_AngularTroposphericDelayModifier_H
#define org_orekit_estimation_measurements_modifiers_AngularTroposphericDelayModifier_H

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
        class AngularAzEl;
        class EstimationModifier;
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

          class AngularTroposphericDelayModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b6cf54f3c9220bc7,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AngularTroposphericDelayModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AngularTroposphericDelayModifier(const AngularTroposphericDelayModifier& obj) : ::java::lang::Object(obj) {}

            AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel &);

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
          extern PyType_Def PY_TYPE_DEF(AngularTroposphericDelayModifier);
          extern PyTypeObject *PY_TYPE(AngularTroposphericDelayModifier);

          class t_AngularTroposphericDelayModifier {
          public:
            PyObject_HEAD
            AngularTroposphericDelayModifier object;
            static PyObject *wrap_Object(const AngularTroposphericDelayModifier&);
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
