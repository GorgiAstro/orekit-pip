#ifndef org_orekit_estimation_measurements_modifiers_ShapiroInterSatelliteRangeModifier_H
#define org_orekit_estimation_measurements_modifiers_ShapiroInterSatelliteRangeModifier_H

#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class InterSatellitesRange;
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

          class ShapiroInterSatelliteRangeModifier : public ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier {
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
