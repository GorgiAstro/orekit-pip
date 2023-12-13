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
      class DateComponents;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimationLoader;
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
            class MarshallSolarActivityFutureEstimationLoader$LineParameters;
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
                mid_init$_7e72ad6eafa6d582,
                mid_init$_ef802e0c23b66f0d,
                mid_init$_e66f71105553a75f,
                mid_init$_61bbdd830b8c197a,
                mid_init$_73226d27f976c826,
                mid_init$_1b3a268b601b1d33,
                mid_get24HoursKp_fd347811007a6ba3,
                mid_getAp_27b701db396ade01,
                mid_getAverageFlux_fd347811007a6ba3,
                mid_getDailyFlux_fd347811007a6ba3,
                mid_getFileDate_5f414e4f345d9daa,
                mid_getInstantFlux_fd347811007a6ba3,
                mid_getMeanFlux_fd347811007a6ba3,
                mid_getStrengthLevel_f490cf9edac89aac,
                mid_getThreeHourlyKP_fd347811007a6ba3,
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
