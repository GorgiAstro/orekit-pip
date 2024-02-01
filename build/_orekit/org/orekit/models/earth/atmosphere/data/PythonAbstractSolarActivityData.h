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
                mid_init$_cf6f4d8e548d5b58,
                mid_finalize_ff7cb6c242604316,
                mid_get24HoursKp_209f08246d708042,
                mid_getAp_9b63d19c31941c0f,
                mid_getAverageFlux_209f08246d708042,
                mid_getDailyFlux_209f08246d708042,
                mid_getInstantFlux_209f08246d708042,
                mid_getMeanFlux_209f08246d708042,
                mid_getThreeHourlyKP_209f08246d708042,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
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
