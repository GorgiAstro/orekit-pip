#ifndef org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_SOLFSMYDataLoader$LineParameters_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
                mid_init$_d1c0c6d79ec1d6d3,
                mid_getDate_aaa854c403487cf3,
                mid_getF10_456d9a2f64d6b28d,
                mid_getF10B_456d9a2f64d6b28d,
                mid_getS10_456d9a2f64d6b28d,
                mid_getS10B_456d9a2f64d6b28d,
                mid_getXM10_456d9a2f64d6b28d,
                mid_getXM10B_456d9a2f64d6b28d,
                mid_getY10_456d9a2f64d6b28d,
                mid_getY10B_456d9a2f64d6b28d,
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
