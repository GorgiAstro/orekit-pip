#ifndef org_orekit_models_earth_atmosphere_data_DtcDataLoader_H
#define org_orekit_models_earth_atmosphere_data_DtcDataLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataLoader;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class DtcDataLoader$LineParameters;
          }
        }
      }
    }
    namespace errors {
      class OrekitException;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace text {
    class ParseException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class SortedSet;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class DtcDataLoader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_cae5d0c3721eff67,
                mid_getDataSet_7961e54fd3a47d94,
                mid_getMaxDate_c325492395d89b24,
                mid_getMinDate_c325492395d89b24,
                mid_loadData_360461e719fb564c,
                mid_stillAcceptsData_9ab94ac1dc23b105,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DtcDataLoader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DtcDataLoader(const DtcDataLoader& obj) : ::java::lang::Object(obj) {}

              DtcDataLoader(const ::org::orekit::time::TimeScale &);

              ::java::util::SortedSet getDataSet() const;
              ::org::orekit::time::AbsoluteDate getMaxDate() const;
              ::org::orekit::time::AbsoluteDate getMinDate() const;
              void loadData(const ::java::io::InputStream &, const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(DtcDataLoader);
            extern PyTypeObject *PY_TYPE(DtcDataLoader);

            class t_DtcDataLoader {
            public:
              PyObject_HEAD
              DtcDataLoader object;
              static PyObject *wrap_Object(const DtcDataLoader&);
              static PyObject *wrap_jobject(const jobject&);
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
