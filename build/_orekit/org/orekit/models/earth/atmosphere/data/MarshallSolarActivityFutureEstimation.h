#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimation_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
            class MarshallSolarActivityFutureEstimationLoader$LineParameters;
            class MarshallSolarActivityFutureEstimationLoader;
          }
        }
      }
    }
    namespace time {
      class DateComponents;
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

            class MarshallSolarActivityFutureEstimation : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_3ec7eea9830771ac,
                mid_init$_e392516865664de5,
                mid_init$_c4c299c8a306aef5,
                mid_init$_689592c643358bb5,
                mid_init$_476b77da02fe834a,
                mid_init$_0456b112dff413d3,
                mid_get24HoursKp_b0b988f941da47d8,
                mid_getAp_89e8b78e4211e023,
                mid_getAverageFlux_b0b988f941da47d8,
                mid_getDailyFlux_b0b988f941da47d8,
                mid_getFileDate_cbc22955a45bd9a2,
                mid_getInstantFlux_b0b988f941da47d8,
                mid_getMeanFlux_b0b988f941da47d8,
                mid_getStrengthLevel_ca23ece2c9c96552,
                mid_getThreeHourlyKP_b0b988f941da47d8,
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
