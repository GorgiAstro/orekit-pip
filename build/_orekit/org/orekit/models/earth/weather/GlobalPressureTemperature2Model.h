#ifndef org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H
#define org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {
          class WeatherModel;
        }
        class Geoid;
      }
    }
    namespace data {
      class DataProvidersManager;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          class GlobalPressureTemperature2Model : public ::java::lang::Object {
           public:
            enum {
              mid_init$_19e8fabe7fac9f6f,
              mid_init$_b0686cbcd452eabf,
              mid_init$_9192b414c25d017b,
              mid_getA_60c7040667a7dc5c,
              mid_getPressure_dff5885c2c873297,
              mid_getTemperature_dff5885c2c873297,
              mid_getWaterVaporPressure_dff5885c2c873297,
              mid_weatherParameters_a7786d9d355d3792,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GlobalPressureTemperature2Model(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GlobalPressureTemperature2Model(const GlobalPressureTemperature2Model& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

            GlobalPressureTemperature2Model(jdouble, jdouble, const ::org::orekit::models::earth::Geoid &);
            GlobalPressureTemperature2Model(const ::java::lang::String &, jdouble, jdouble, const ::org::orekit::models::earth::Geoid &);
            GlobalPressureTemperature2Model(const ::java::lang::String &, jdouble, jdouble, const ::org::orekit::models::earth::Geoid &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);

            JArray< jdouble > getA() const;
            jdouble getPressure() const;
            jdouble getTemperature() const;
            jdouble getWaterVaporPressure() const;
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
          extern PyType_Def PY_TYPE_DEF(GlobalPressureTemperature2Model);
          extern PyTypeObject *PY_TYPE(GlobalPressureTemperature2Model);

          class t_GlobalPressureTemperature2Model {
          public:
            PyObject_HEAD
            GlobalPressureTemperature2Model object;
            static PyObject *wrap_Object(const GlobalPressureTemperature2Model&);
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
