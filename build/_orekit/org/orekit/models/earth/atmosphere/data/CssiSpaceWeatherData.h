#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
      class DataSource;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class CssiSpaceWeatherDataLoader$LineParameters;
            class CssiSpaceWeatherDataLoader;
          }
        }
      }
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
                mid_init$_d0bc48d5b00dc40c,
                mid_init$_579dcb2bf229954b,
                mid_init$_63a3364c21ade86b,
                mid_init$_377ee8b1596a9f80,
                mid_init$_c9696a3ab5455033,
                mid_init$_9ac58a50c4aae2c3,
                mid_init$_4ed07469b7177e6c,
                mid_init$_02e45cd6a94091ba,
                mid_get24HoursKp_bf1d7732f1acb697,
                mid_getAp_2b9aa40de0a696a4,
                mid_getAverageFlux_bf1d7732f1acb697,
                mid_getDailyFlux_bf1d7732f1acb697,
                mid_getInstantFlux_bf1d7732f1acb697,
                mid_getMeanFlux_bf1d7732f1acb697,
                mid_getThreeHourlyKP_bf1d7732f1acb697,
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
