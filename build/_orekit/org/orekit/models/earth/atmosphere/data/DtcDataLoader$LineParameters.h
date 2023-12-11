#ifndef org_orekit_models_earth_atmosphere_data_DtcDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_DtcDataLoader$LineParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class DtcDataLoader$LineParameters : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f22bef3f7be90029,
                mid_getDSTDTC_557b8123390d8d0c,
                mid_getDate_7a97f7e149e79afb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DtcDataLoader$LineParameters(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DtcDataLoader$LineParameters(const DtcDataLoader$LineParameters& obj) : ::java::lang::Object(obj) {}

              DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate &, jdouble);

              jdouble getDSTDTC() const;
              ::org::orekit::time::AbsoluteDate getDate() const;
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
            extern PyType_Def PY_TYPE_DEF(DtcDataLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(DtcDataLoader$LineParameters);

            class t_DtcDataLoader$LineParameters {
            public:
              PyObject_HEAD
              DtcDataLoader$LineParameters object;
              static PyObject *wrap_Object(const DtcDataLoader$LineParameters&);
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
