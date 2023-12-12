#ifndef org_orekit_estimation_measurements_modifiers_ShapiroInterSatelliteRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_ShapiroInterSatelliteRangeModifier_H

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
        class InterSatellitesRange;
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

          class ShapiroInterSatelliteRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier {
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

            explicit ShapiroInterSatelliteRangeModifier(jobject obj) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ShapiroInterSatelliteRangeModifier(const ShapiroInterSatelliteRangeModifier& obj) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(obj) {}

            ShapiroInterSatelliteRangeModifier(jdouble);

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
          extern PyType_Def PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier);
          extern PyTypeObject *PY_TYPE(ShapiroInterSatelliteRangeModifier);

          class t_ShapiroInterSatelliteRangeModifier {
          public:
            PyObject_HEAD
            ShapiroInterSatelliteRangeModifier object;
            static PyObject *wrap_Object(const ShapiroInterSatelliteRangeModifier&);
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
