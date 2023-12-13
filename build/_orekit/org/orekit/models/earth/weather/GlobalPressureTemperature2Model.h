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
              mid_init$_c448a2cd99d96cb1,
              mid_init$_b06417268b599627,
              mid_init$_f2826778d522c000,
              mid_getA_25e1757a36c4dde2,
              mid_getPressure_b74f83833fdad017,
              mid_getTemperature_b74f83833fdad017,
              mid_getWaterVaporPressure_b74f83833fdad017,
              mid_weatherParameters_98ef3c02384a4218,
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
