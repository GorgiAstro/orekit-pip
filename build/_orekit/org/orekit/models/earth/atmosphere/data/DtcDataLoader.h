#ifndef org_orekit_models_earth_atmosphere_data_DtcDataLoader_H
#define org_orekit_models_earth_atmosphere_data_DtcDataLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class DtcDataLoader$LineParameters;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace data {
      class DataLoader;
    }
    namespace errors {
      class OrekitException;
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

            class DtcDataLoader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7cb2659f4799e4d2,
                mid_getDataSet_815c7115fae241c1,
                mid_getMaxDate_80e11148db499dda,
                mid_getMinDate_80e11148db499dda,
                mid_loadData_bec0f846e5ec73da,
                mid_stillAcceptsData_eee3de00fe971136,
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
