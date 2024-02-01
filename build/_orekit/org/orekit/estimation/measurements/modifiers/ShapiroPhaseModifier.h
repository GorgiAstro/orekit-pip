#ifndef org_orekit_estimation_measurements_modifiers_ShapiroPhaseModifier_H
#define org_orekit_estimation_measurements_modifiers_ShapiroPhaseModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"

namespace org {
  namespace orekit {
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

          class ShapiroPhaseModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier {
           public:
            enum {
              mid_init$_1ad26e8c8c0cd65b,
              mid_getParametersDrivers_d751c1a57012b438,
              mid_modifyWithoutDerivatives_ecce216dce506020,
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
