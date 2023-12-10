#ifndef org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H
#define org_orekit_models_earth_weather_GlobalPressureTemperature2Model_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class AbsoluteDate;
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
              mid_init$_59b52385712e2119,
              mid_init$_e6884b0e87afb0fe,
              mid_init$_8ad78bbe55a6bdaf,
              mid_getA_7cdc325af0834901,
              mid_getPressure_456d9a2f64d6b28d,
              mid_getTemperature_456d9a2f64d6b28d,
              mid_getWaterVaporPressure_456d9a2f64d6b28d,
              mid_weatherParameters_82dcc83e88ee1b1f,
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
