#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class CssiSpaceWeatherDataLoader;
            class CssiSpaceWeatherDataLoader$LineParameters;
          }
        }
      }
    }
    namespace data {
      class DataSource;
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
        namespace atmosphere {
          namespace data {

            class CssiSpaceWeatherData : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_f5ffdf29129ef90a,
                mid_init$_562a84d0b1d0d772,
                mid_init$_91b8fb16a2e11747,
                mid_init$_d9583ee7d0032c60,
                mid_init$_d8fcbe65f280bc96,
                mid_init$_93ac7533027960c3,
                mid_init$_d0c6f8bbb58807dc,
                mid_init$_812a3752cbeebcf7,
                mid_get24HoursKp_b0b988f941da47d8,
                mid_getAp_89e8b78e4211e023,
                mid_getAverageFlux_b0b988f941da47d8,
                mid_getDailyFlux_b0b988f941da47d8,
                mid_getInstantFlux_b0b988f941da47d8,
                mid_getMeanFlux_b0b988f941da47d8,
                mid_getThreeHourlyKP_b0b988f941da47d8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CssiSpaceWeatherData(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CssiSpaceWeatherData(const CssiSpaceWeatherData& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {}

              static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

              CssiSpaceWeatherData(const ::java::lang::String &);
              CssiSpaceWeatherData(const ::org::orekit::data::DataSource &);
              CssiSpaceWeatherData(const ::org::orekit::data::DataSource &, const ::org::orekit::time::TimeScale &);
              CssiSpaceWeatherData(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader &, const ::org::orekit::time::TimeScale &);
              CssiSpaceWeatherData(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);
              CssiSpaceWeatherData(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);
              CssiSpaceWeatherData(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble);
              CssiSpaceWeatherData(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble);

              jdouble get24HoursKp(const ::org::orekit::time::AbsoluteDate &) const;
              JArray< jdouble > getAp(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getAverageFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getDailyFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getInstantFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getMeanFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate &) const;
            };
          }
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
        namespace atmosphere {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(CssiSpaceWeatherData);
            extern PyTypeObject *PY_TYPE(CssiSpaceWeatherData);

            class t_CssiSpaceWeatherData {
            public:
              PyObject_HEAD
              CssiSpaceWeatherData object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_CssiSpaceWeatherData *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CssiSpaceWeatherData&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CssiSpaceWeatherData&, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
