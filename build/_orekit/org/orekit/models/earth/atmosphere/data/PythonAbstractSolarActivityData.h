#ifndef org_orekit_models_earth_atmosphere_data_PythonAbstractSolarActivityData_H
#define org_orekit_models_earth_atmosphere_data_PythonAbstractSolarActivityData_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class AbstractSolarActivityDataLoader;
          }
        }
      }
    }
    namespace data {
      class DataProvidersManager;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class PythonAbstractSolarActivityData : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData {
             public:
              enum {
                mid_init$_ae5a3c6dd7a6713f,
                mid_finalize_0640e6acf969ed28,
                mid_get24HoursKp_b0b988f941da47d8,
                mid_getAp_89e8b78e4211e023,
                mid_getAverageFlux_b0b988f941da47d8,
                mid_getDailyFlux_b0b988f941da47d8,
                mid_getInstantFlux_b0b988f941da47d8,
                mid_getMeanFlux_b0b988f941da47d8,
                mid_getThreeHourlyKP_b0b988f941da47d8,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAbstractSolarActivityData(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractSolarActivityData(const PythonAbstractSolarActivityData& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(obj) {}

              PythonAbstractSolarActivityData(const ::java::lang::String &, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble, jdouble);

              void finalize() const;
              jdouble get24HoursKp(const ::org::orekit::time::AbsoluteDate &) const;
              JArray< jdouble > getAp(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getAverageFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getDailyFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getInstantFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getMeanFlux(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate &) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonAbstractSolarActivityData);
            extern PyTypeObject *PY_TYPE(PythonAbstractSolarActivityData);

            class t_PythonAbstractSolarActivityData {
            public:
              PyObject_HEAD
              PythonAbstractSolarActivityData object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_PythonAbstractSolarActivityData *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAbstractSolarActivityData&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAbstractSolarActivityData&, PyTypeObject *, PyTypeObject *);
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
