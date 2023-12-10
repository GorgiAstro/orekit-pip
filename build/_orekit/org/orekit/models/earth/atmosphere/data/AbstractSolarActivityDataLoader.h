#ifndef org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader_H
#define org_orekit_models_earth_atmosphere_data_AbstractSolarActivityDataLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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
                mid_getDataSet_917725130bbb61f1,
                mid_getMaxDate_85703d13e302437e,
                mid_getMinDate_85703d13e302437e,
                mid_getUTC_c39031284193adbe,
                mid_setMaxDate_600a2a61652bc473,
                mid_setMinDate_600a2a61652bc473,
                mid_stillAcceptsData_b108b35ef48e27bd,
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
