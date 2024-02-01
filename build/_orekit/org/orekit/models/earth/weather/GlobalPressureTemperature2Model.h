#ifndef org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H
#define org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        class Geoid;
        namespace weather {
          class WeatherModel;
        }
      }
    }
    namespace data {
      class DataProvidersManager;
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
              mid_init$_c1da53fcf22e801d,
              mid_init$_4db0b7c5261bb3ef,
              mid_init$_253074503d2950e9,
              mid_getA_be783177b060994b,
              mid_getPressure_9981f74b2d109da6,
              mid_getTemperature_9981f74b2d109da6,
              mid_getWaterVaporPressure_9981f74b2d109da6,
              mid_weatherParameters_281401e03841f11f,
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
