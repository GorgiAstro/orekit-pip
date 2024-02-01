#ifndef org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader_H
#define org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader_H

#include "java/lang/Object.h"

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
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            class SOLFSMYDataLoader$LineParameters;
          }
        }
      }
    }
    namespace data {
      class DataLoader;
    }
    namespace errors {
      class OrekitException;
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

            class SOLFSMYDataLoader : public ::java::lang::Object {
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

              explicit SOLFSMYDataLoader(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SOLFSMYDataLoader(const SOLFSMYDataLoader& obj) : ::java::lang::Object(obj) {}

              SOLFSMYDataLoader(const ::org::orekit::time::TimeScale &);

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
            extern PyType_Def PY_TYPE_DEF(SOLFSMYDataLoader);
            extern PyTypeObject *PY_TYPE(SOLFSMYDataLoader);

            class t_SOLFSMYDataLoader {
            public:
              PyObject_HEAD
              SOLFSMYDataLoader object;
              static PyObject *wrap_Object(const SOLFSMYDataLoader&);
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
