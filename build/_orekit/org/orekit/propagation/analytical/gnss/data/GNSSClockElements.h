#ifndef org_orekit_propagation_analytical_gnss_data_GNSSClockElements_H
#define org_orekit_propagation_analytical_gnss_data_GNSSClockElements_H

#include "org/orekit/time/TimeStamped.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class GNSSClockElements : public ::org::orekit::time::TimeStamped {
             public:
              enum {
                mid_getAf0_456d9a2f64d6b28d,
                mid_getAf1_456d9a2f64d6b28d,
                mid_getAf2_456d9a2f64d6b28d,
                mid_getCycleDuration_456d9a2f64d6b28d,
                mid_getTGD_456d9a2f64d6b28d,
                mid_getToc_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GNSSClockElements(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GNSSClockElements(const GNSSClockElements& obj) : ::org::orekit::time::TimeStamped(obj) {}

              jdouble getAf0() const;
              jdouble getAf1() const;
              jdouble getAf2() const;
              jdouble getCycleDuration() const;
              jdouble getTGD() const;
              jdouble getToc() const;
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(GNSSClockElements);
            extern PyTypeObject *PY_TYPE(GNSSClockElements);

            class t_GNSSClockElements {
            public:
              PyObject_HEAD
              GNSSClockElements object;
              static PyObject *wrap_Object(const GNSSClockElements&);
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
