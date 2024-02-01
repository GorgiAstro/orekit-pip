#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
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
    namespace data {
      class DataSource;
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
        namespace atmosphere {
          namespace data {

            class CssiSpaceWeatherData : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_105e1eadb709d9ac,
                mid_init$_023df3a7dca17c03,
                mid_init$_b9046d0be8f2b6e0,
                mid_init$_bb4f7a68dbb10dc1,
                mid_init$_ab02e9635eee86ad,
                mid_init$_47fdbe1391664d0d,
                mid_init$_572f119b81cef4a6,
                mid_init$_f3a367214324f82d,
                mid_get24HoursKp_209f08246d708042,
                mid_getAp_9b63d19c31941c0f,
                mid_getAverageFlux_209f08246d708042,
                mid_getDailyFlux_209f08246d708042,
                mid_getInstantFlux_209f08246d708042,
                mid_getMeanFlux_209f08246d708042,
                mid_getThreeHourlyKP_209f08246d708042,
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
