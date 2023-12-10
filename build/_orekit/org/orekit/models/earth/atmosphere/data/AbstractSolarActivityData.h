#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class NRLMSISE00InputParameters;
          namespace data {
            class AbstractSolarActivityDataLoader;
          }
          class DTM2000InputParameters;
        }
      }
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
                mid_init$_a50d29c52c558493,
                mid_getCache_46988589dce382bb,
                mid_getMaxDate_aaa854c403487cf3,
                mid_getMinDate_aaa854c403487cf3,
                mid_getSupportedNames_0090f7797e403f43,
                mid_getUTC_63ac10047983bd43,
                mid_getLinearInterpolation_78b9b84952a70e2a,
                mid_getLinearInterpolation_335e665ed012e281,
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
