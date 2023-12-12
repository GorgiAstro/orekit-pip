#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"

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
namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class CssiSpaceWeatherDataLoader$LineParameters;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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

            class CssiSpaceWeatherDataLoader : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader {
             public:
              enum {
                mid_init$_3e3301925c0131d4,
                mid_getDataSet_c6b6a992db588a51,
                mid_getLastDailyPredictedDate_7a97f7e149e79afb,
                mid_getLastObservedDate_7a97f7e149e79afb,
                mid_loadData_15770e8d8949a557,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CssiSpaceWeatherDataLoader(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CssiSpaceWeatherDataLoader(const CssiSpaceWeatherDataLoader& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(obj) {}

              CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale &);

              ::java::util::SortedSet getDataSet() const;
              ::org::orekit::time::AbsoluteDate getLastDailyPredictedDate() const;
              ::org::orekit::time::AbsoluteDate getLastObservedDate() const;
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
            extern PyType_Def PY_TYPE_DEF(CssiSpaceWeatherDataLoader);
            extern PyTypeObject *PY_TYPE(CssiSpaceWeatherDataLoader);

            class t_CssiSpaceWeatherDataLoader {
            public:
              PyObject_HEAD
              CssiSpaceWeatherDataLoader object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CssiSpaceWeatherDataLoader *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader&, PyTypeObject *);
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
