#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
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
                mid_init$_734b91ac30d5f9b4,
                mid_init$_4345325324782fee,
                mid_init$_e81bfdc1c9755e45,
                mid_init$_6e4602706fa15bb8,
                mid_init$_41d9572e040b2cb7,
                mid_init$_0b1b38f7a574edd9,
                mid_init$_50c1be3b32e426fc,
                mid_init$_542b9091dd152c5f,
                mid_get24HoursKp_fd347811007a6ba3,
                mid_getAp_27b701db396ade01,
                mid_getAverageFlux_fd347811007a6ba3,
                mid_getDailyFlux_fd347811007a6ba3,
                mid_getInstantFlux_fd347811007a6ba3,
                mid_getMeanFlux_fd347811007a6ba3,
                mid_getThreeHourlyKP_fd347811007a6ba3,
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
