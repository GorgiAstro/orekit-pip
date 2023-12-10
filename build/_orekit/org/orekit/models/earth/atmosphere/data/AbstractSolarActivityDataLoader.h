#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class AbsoluteDate;
    }
    namespace data {
      class DataLoader;
    }
  }
}
namespace java {
  namespace util {
    class SortedSet;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class AbstractSolarActivityDataLoader : public ::java::lang::Object {
             public:
              enum {
                mid_getDataSet_d01a04ddab6c7194,
                mid_getMaxDate_aaa854c403487cf3,
                mid_getMinDate_aaa854c403487cf3,
                mid_getUTC_63ac10047983bd43,
                mid_setMaxDate_e82d68cd9f886886,
                mid_setMinDate_e82d68cd9f886886,
                mid_stillAcceptsData_e470b6d9e0d979db,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractSolarActivityDataLoader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractSolarActivityDataLoader(const AbstractSolarActivityDataLoader& obj) : ::java::lang::Object(obj) {}

              ::java::util::SortedSet getDataSet() const;
              ::org::orekit::time::AbsoluteDate getMaxDate() const;
              ::org::orekit::time::AbsoluteDate getMinDate() const;
              ::org::orekit::time::TimeScale getUTC() const;
              void setMaxDate(const ::org::orekit::time::AbsoluteDate &) const;
              void setMinDate(const ::org::orekit::time::AbsoluteDate &) const;
              jboolean stillAcceptsData() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractSolarActivityDataLoader);
            extern PyTypeObject *PY_TYPE(AbstractSolarActivityDataLoader);

            class t_AbstractSolarActivityDataLoader {
            public:
              PyObject_HEAD
              AbstractSolarActivityDataLoader object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AbstractSolarActivityDataLoader *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractSolarActivityDataLoader&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractSolarActivityDataLoader&, PyTypeObject *);
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
