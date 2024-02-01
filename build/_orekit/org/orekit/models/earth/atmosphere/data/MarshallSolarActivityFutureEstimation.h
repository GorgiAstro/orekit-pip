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
            class MarshallSolarActivityFutureEstimationLoader;
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class DateComponents;
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

            class MarshallSolarActivityFutureEstimation : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_7bbacdad8b0eb1d6,
                mid_init$_ca908e3bd6515c6a,
                mid_init$_3ed6ed4fd1891c42,
                mid_init$_25914fdff8407a44,
                mid_init$_abdc0e22a4059f05,
                mid_init$_0b03362c4f3de3ae,
                mid_get24HoursKp_209f08246d708042,
                mid_getAp_9b63d19c31941c0f,
                mid_getAverageFlux_209f08246d708042,
                mid_getDailyFlux_209f08246d708042,
                mid_getFileDate_f30b9f87adcfe94a,
                mid_getInstantFlux_209f08246d708042,
                mid_getMeanFlux_209f08246d708042,
                mid_getStrengthLevel_04adabe90c843f39,
                mid_getThreeHourlyKP_209f08246d708042,
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
