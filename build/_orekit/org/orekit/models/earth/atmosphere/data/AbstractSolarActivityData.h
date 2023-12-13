#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class DTM2000InputParameters;
          class NRLMSISE00InputParameters;
          namespace data {
            class AbstractSolarActivityDataLoader;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace utils {
      class GenericTimeStampedCache;
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

            class AbstractSolarActivityData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_54b84112f8bb03a0,
                mid_getCache_ee138515519e3364,
                mid_getMaxDate_c325492395d89b24,
                mid_getMinDate_c325492395d89b24,
                mid_getSupportedNames_1c1fa1e935d6cdcf,
                mid_getUTC_34d3bda0a8989e3e,
                mid_getLinearInterpolation_85e68520109cae31,
                mid_getLinearInterpolation_6bb0710628614626,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractSolarActivityData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractSolarActivityData(const AbstractSolarActivityData& obj) : ::java::lang::Object(obj) {}

              AbstractSolarActivityData(const ::org::orekit::data::DataSource &, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader &, const ::org::orekit::time::TimeScale &, jint, jdouble, jdouble, jdouble);

              ::org::orekit::utils::GenericTimeStampedCache getCache() const;
              ::org::orekit::time::AbsoluteDate getMaxDate() const;
              ::org::orekit::time::AbsoluteDate getMinDate() const;
              ::java::lang::String getSupportedNames() const;
              ::org::orekit::time::TimeScale getUTC() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractSolarActivityData);
            extern PyTypeObject *PY_TYPE(AbstractSolarActivityData);

            class t_AbstractSolarActivityData {
            public:
              PyObject_HEAD
              AbstractSolarActivityData object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_AbstractSolarActivityData *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractSolarActivityData&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractSolarActivityData&, PyTypeObject *, PyTypeObject *);
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
