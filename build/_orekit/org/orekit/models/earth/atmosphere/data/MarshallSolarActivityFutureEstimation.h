#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H

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
      class DateComponents;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimationLoader;
            class MarshallSolarActivityFutureEstimationLoader$LineParameters;
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
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

            class MarshallSolarActivityFutureEstimation : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_4bd4e55a4a09ee78,
                mid_init$_bc37664884b68042,
                mid_init$_accd1abae4481614,
                mid_init$_c635d45ddabaf0f1,
                mid_init$_94e3788cacb1954b,
                mid_init$_a60010eee41f239f,
                mid_get24HoursKp_e912d21057defe63,
                mid_getAp_e586dea4c0bad69b,
                mid_getAverageFlux_e912d21057defe63,
                mid_getDailyFlux_e912d21057defe63,
                mid_getFileDate_e6fc0227ed371052,
                mid_getInstantFlux_e912d21057defe63,
                mid_getMeanFlux_e912d21057defe63,
                mid_getStrengthLevel_a653ffabf45c0f1b,
                mid_getThreeHourlyKP_e912d21057defe63,
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
