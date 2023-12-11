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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
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
              mid_init$_77eb4a8c540c1776,
              mid_init$_f5cca62652e4a820,
              mid_getPressure_557b8123390d8d0c,
              mid_getTemperature_557b8123390d8d0c,
              mid_weatherParameters_4ca6118c75b70100,
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
