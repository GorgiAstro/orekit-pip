#ifndef org_orekit_propagation_analytical_gnss_data_SBASOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_SBASOrbitalElements_H

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

            class SBASOrbitalElements : public ::org::orekit::time::TimeStamped {
             public:
              enum {
                mid_getAGf0_456d9a2f64d6b28d,
                mid_getAGf1_456d9a2f64d6b28d,
                mid_getIODN_f2f64475e4580546,
                mid_getPRN_f2f64475e4580546,
                mid_getTime_456d9a2f64d6b28d,
                mid_getToc_456d9a2f64d6b28d,
                mid_getWeek_f2f64475e4580546,
                mid_getX_456d9a2f64d6b28d,
                mid_getXDot_456d9a2f64d6b28d,
                mid_getXDotDot_456d9a2f64d6b28d,
                mid_getY_456d9a2f64d6b28d,
                mid_getYDot_456d9a2f64d6b28d,
                mid_getYDotDot_456d9a2f64d6b28d,
                mid_getZ_456d9a2f64d6b28d,
                mid_getZDot_456d9a2f64d6b28d,
                mid_getZDotDot_456d9a2f64d6b28d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SBASOrbitalElements(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SBASOrbitalElements(const SBASOrbitalElements& obj) : ::org::orekit::time::TimeStamped(obj) {}

              jdouble getAGf0() const;
              jdouble getAGf1() const;
              jint getIODN() const;
              jint getPRN() const;
              jdouble getTime() const;
              jdouble getToc() const;
              jint getWeek() const;
              jdouble getX() const;
              jdouble getXDot() const;
              jdouble getXDotDot() const;
              jdouble getY() const;
              jdouble getYDot() const;
              jdouble getYDotDot() const;
              jdouble getZ() const;
              jdouble getZDot() const;
              jdouble getZDotDot() const;
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
            extern PyType_Def PY_TYPE_DEF(SBASOrbitalElements);
            extern PyTypeObject *PY_TYPE(SBASOrbitalElements);

            class t_SBASOrbitalElements {
            public:
              PyObject_HEAD
              SBASOrbitalElements object;
              static PyObject *wrap_Object(const SBASOrbitalElements&);
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
