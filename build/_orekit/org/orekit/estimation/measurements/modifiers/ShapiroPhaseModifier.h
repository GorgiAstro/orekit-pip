#ifndef org_orekit_estimation_measurements_modifiers_ShapiroPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_ShapiroPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"

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

          class ShapiroPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier {
           public:
            enum {
              mid_init$_10f281d777284cea,
              mid_getParametersDrivers_0d9551367f7ecdef,
              mid_modifyWithoutDerivatives_e471490df8741b73,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ShapiroPhaseModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShapiroPhaseModifier(const ShapiroPhaseModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(obj) {}

            ShapiroPhaseModifier(jdouble);

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
          extern PyType_Def PY_TYPE_DEF(ShapiroPhaseModifier);
          extern PyTypeObject *PY_TYPE(ShapiroPhaseModifier);

          class t_ShapiroPhaseModifier {
          public:
            PyObject_HEAD
            ShapiroPhaseModifier object;
            static PyObject *wrap_Object(const ShapiroPhaseModifier&);
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
