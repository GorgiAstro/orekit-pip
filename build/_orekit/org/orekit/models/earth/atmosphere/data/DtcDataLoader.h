#ifndef org_orekit_models_earth_atmosphere_data_DtcDataLoader_H
#define org_orekit_models_earth_atmosphere_data_DtcDataLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class SortedSet;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class ParseException;
  }
}
namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
    }
    namespace time {
      class TimeScale;
      class AbsoluteDate;
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
    namespace data {
      class DataLoader;
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

            class DtcDataLoader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_6d73d536a2f24dd5,
                mid_getDataSet_d01a04ddab6c7194,
                mid_getMaxDate_aaa854c403487cf3,
                mid_getMinDate_aaa854c403487cf3,
                mid_loadData_ec60cb5f4b3de555,
                mid_stillAcceptsData_e470b6d9e0d979db,
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
