#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimationLoader$LineParameters;
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
            class MarshallSolarActivityFutureEstimationLoader;
          }
        }
      }
    }
    namespace data {
      class DataProvidersManager;
      class DataSource;
    }
    namespace time {
      class AbsoluteDate;
      class DateComponents;
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

            class MarshallSolarActivityFutureEstimation : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_63237fb16192c43e,
                mid_init$_49087018f9ef4b50,
                mid_init$_1def1b70c873513f,
                mid_init$_10d47b13d66f2d64,
                mid_init$_d5e607b5def59a14,
                mid_init$_cc5ba78e41fbaf15,
                mid_get24HoursKp_bf1d7732f1acb697,
                mid_getAp_2b9aa40de0a696a4,
                mid_getAverageFlux_bf1d7732f1acb697,
                mid_getDailyFlux_bf1d7732f1acb697,
                mid_getFileDate_21e8cae7789f5d8a,
                mid_getInstantFlux_bf1d7732f1acb697,
                mid_getMeanFlux_bf1d7732f1acb697,
                mid_getStrengthLevel_d8093aa01452ce71,
                mid_getThreeHourlyKP_bf1d7732f1acb697,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MarshallSolarActivityFutureEstimation(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MarshallSolarActivityFutureEstimation(const MarshallSolarActivityFutureEstimation& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {}

              static ::java::lang::String *DEFAULT_SUPPORTED_NAMES;

              MarshallSolarActivityFutureEstimation(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &);
              MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &);
              MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &, const ::org::orekit::time::TimeScale &);
              MarshallSolarActivityFutureEstimation(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);
              MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble, jdouble);
              MarshallSolarActivityFutureEstimation(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble, jdouble);

              jdouble get24HoursKp(const ::org::orekit::time::AbsoluteDate &) const;
              JArray< jdouble > getAp(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getAverageFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getDailyFlux(const ::org::orekit::time::AbsoluteDate &) const;
              ::org::orekit::time::DateComponents getFileDate(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getInstantFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getMeanFlux(const ::org::orekit::time::AbsoluteDate &) const;
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel getStrengthLevel() const;
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
            extern PyType_Def PY_TYPE_DEF(MarshallSolarActivityFutureEstimation);
            extern PyTypeObject *PY_TYPE(MarshallSolarActivityFutureEstimation);

            class t_MarshallSolarActivityFutureEstimation {
            public:
              PyObject_HEAD
              MarshallSolarActivityFutureEstimation object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_MarshallSolarActivityFutureEstimation *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimation&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimation&, PyTypeObject *, PyTypeObject *);
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
