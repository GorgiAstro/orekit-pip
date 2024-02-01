#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class GenericTimeStampedCache;
    }
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
          class DTM2000InputParameters;
          class NRLMSISE00InputParameters;
        }
      }
    }
    namespace data {
      class DataSource;
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
                mid_init$_58a8f548b6ce5749,
                mid_getCache_439a7de7b88c4031,
                mid_getMaxDate_80e11148db499dda,
                mid_getMinDate_80e11148db499dda,
                mid_getSupportedNames_d2c8eb4129821f0e,
                mid_getUTC_5e2cac12ab8da943,
                mid_getLinearInterpolation_4a1a7410b0d113c9,
                mid_getLinearInterpolation_4c84cc0f5081f95d,
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
