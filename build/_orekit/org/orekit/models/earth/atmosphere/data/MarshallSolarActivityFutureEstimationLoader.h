#ifndef org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimationLoader_H
#define org_orekit_models_earth_atmosphere_data_MarshallSolarActivityFutureEstimationLoader_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class MarshallSolarActivityFutureEstimationLoader$LineParameters;
            class MarshallSolarActivityFutureEstimation$StrengthLevel;
          }
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
    namespace time {
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace text {
    class ParseException;
  }
  namespace util {
    class SortedSet;
  }
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

            class MarshallSolarActivityFutureEstimationLoader : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader {
             public:
              enum {
                mid_init$_f8017cbb24483937,
                mid_init$_5c8aaae5527cf802,
                mid_getDataSet_815c7115fae241c1,
                mid_loadData_bec0f846e5ec73da,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MarshallSolarActivityFutureEstimationLoader(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MarshallSolarActivityFutureEstimationLoader(const MarshallSolarActivityFutureEstimationLoader& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(obj) {}

              MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &);
              MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel &, const ::org::orekit::time::TimeScale &);

              ::java::util::SortedSet getDataSet() const;
              void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader);
            extern PyTypeObject *PY_TYPE(MarshallSolarActivityFutureEstimationLoader);

            class t_MarshallSolarActivityFutureEstimationLoader {
            public:
              PyObject_HEAD
              MarshallSolarActivityFutureEstimationLoader object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_MarshallSolarActivityFutureEstimationLoader *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimationLoader&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MarshallSolarActivityFutureEstimationLoader&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
