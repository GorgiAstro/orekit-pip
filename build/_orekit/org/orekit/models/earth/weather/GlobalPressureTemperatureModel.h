#ifndef org_orekit_models_earth_weather_GlobalPressureTemperatureModel_H
#define org_orekit_models_earth_weather_GlobalPressureTemperatureModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {
          class WeatherModel;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          class GlobalPressureTemperatureModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b0fb2e2980abbca2,
              mid_init$_9bb7aba3503e2aef,
              mid_getPressure_dff5885c2c873297,
              mid_getTemperature_dff5885c2c873297,
              mid_weatherParameters_a7786d9d355d3792,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlobalPressureTemperatureModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlobalPressureTemperatureModel(const GlobalPressureTemperatureModel& obj) : ::java::lang::Object(obj) {}

            GlobalPressureTemperatureModel(jdouble, jdouble, const ::org::orekit::frames::Frame &);
            GlobalPressureTemperatureModel(jdouble, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::data::DataContext &);

            jdouble getPressure() const;
            jdouble getTemperature() const;
            void weatherParameters(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {
          extern PyType_Def PY_TYPE_DEF(GlobalPressureTemperatureModel);
          extern PyTypeObject *PY_TYPE(GlobalPressureTemperatureModel);

          class t_GlobalPressureTemperatureModel {
          public:
            PyObject_HEAD
            GlobalPressureTemperatureModel object;
            static PyObject *wrap_Object(const GlobalPressureTemperatureModel&);
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
