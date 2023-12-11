#ifndef org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader$LineParameters_H

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

            class SOLFSMYDataLoader$LineParameters : public ::java::lang::Object {
             public:
              enum {
                mid_init$_5ca484248216f6c1,
                mid_getDate_7a97f7e149e79afb,
                mid_getF10_557b8123390d8d0c,
                mid_getF10B_557b8123390d8d0c,
                mid_getS10_557b8123390d8d0c,
                mid_getS10B_557b8123390d8d0c,
                mid_getXM10_557b8123390d8d0c,
                mid_getXM10B_557b8123390d8d0c,
                mid_getY10_557b8123390d8d0c,
                mid_getY10B_557b8123390d8d0c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SOLFSMYDataLoader$LineParameters(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SOLFSMYDataLoader$LineParameters(const SOLFSMYDataLoader$LineParameters& obj) : ::java::lang::Object(obj) {}

              SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

              ::org::orekit::time::AbsoluteDate getDate() const;
              jdouble getF10() const;
              jdouble getF10B() const;
              jdouble getS10() const;
              jdouble getS10B() const;
              jdouble getXM10() const;
              jdouble getXM10B() const;
              jdouble getY10() const;
              jdouble getY10B() const;
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
            extern PyType_Def PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(SOLFSMYDataLoader$LineParameters);

            class t_SOLFSMYDataLoader$LineParameters {
            public:
              PyObject_HEAD
              SOLFSMYDataLoader$LineParameters object;
              static PyObject *wrap_Object(const SOLFSMYDataLoader$LineParameters&);
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
