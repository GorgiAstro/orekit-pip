#ifndef org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader_H
#define org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParseException;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class SortedSet;
  }
}
namespace org {
  namespace orekit {
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

            class SOLFSMYDataLoader : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e93d77ad761aa1f2,
                mid_getDataSet_917725130bbb61f1,
                mid_getMaxDate_85703d13e302437e,
                mid_getMinDate_85703d13e302437e,
                mid_loadData_1815f85c118161ad,
                mid_stillAcceptsData_b108b35ef48e27bd,
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
