#ifndef org_orekit_gnss_metric_messages_common_ClockCorrection_H
#define org_orekit_gnss_metric_messages_common_ClockCorrection_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            class ClockCorrection : public ::java::lang::Object {
             public:
              enum {
                mid_init$_2c56b6dd4d4b1dec,
                mid_getDeltaClockC0_dff5885c2c873297,
                mid_getDeltaClockC1_dff5885c2c873297,
                mid_getDeltaClockC2_dff5885c2c873297,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ClockCorrection(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ClockCorrection(const ClockCorrection& obj) : ::java::lang::Object(obj) {}

              ClockCorrection(jdouble, jdouble, jdouble);

              jdouble getDeltaClockC0() const;
              jdouble getDeltaClockC1() const;
              jdouble getDeltaClockC2() const;
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            extern PyType_Def PY_TYPE_DEF(ClockCorrection);
            extern PyTypeObject *PY_TYPE(ClockCorrection);

            class t_ClockCorrection {
            public:
              PyObject_HEAD
              ClockCorrection object;
              static PyObject *wrap_Object(const ClockCorrection&);
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
