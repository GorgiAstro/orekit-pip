#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
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
                mid_init$_e939c6558ae8d313,
                mid_init$_178426610ec237d4,
                mid_init$_b4e6e392672e7dfd,
                mid_init$_4782a728e14f2f6e,
                mid_init$_c3298cacdeeaf7cf,
                mid_init$_0cdfbdc326d8269d,
                mid_init$_5801c42bbd9a703a,
                mid_init$_cadc3689caf920c4,
                mid_get24HoursKp_e912d21057defe63,
                mid_getAp_e586dea4c0bad69b,
                mid_getAverageFlux_e912d21057defe63,
                mid_getDailyFlux_e912d21057defe63,
                mid_getInstantFlux_e912d21057defe63,
                mid_getMeanFlux_e912d21057defe63,
                mid_getThreeHourlyKP_e912d21057defe63,
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
