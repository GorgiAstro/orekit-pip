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
                mid_getAGf0_557b8123390d8d0c,
                mid_getAGf1_557b8123390d8d0c,
                mid_getIODN_412668abc8d889e9,
                mid_getPRN_412668abc8d889e9,
                mid_getTime_557b8123390d8d0c,
                mid_getToc_557b8123390d8d0c,
                mid_getWeek_412668abc8d889e9,
                mid_getX_557b8123390d8d0c,
                mid_getXDot_557b8123390d8d0c,
                mid_getXDotDot_557b8123390d8d0c,
                mid_getY_557b8123390d8d0c,
                mid_getYDot_557b8123390d8d0c,
                mid_getYDotDot_557b8123390d8d0c,
                mid_getZ_557b8123390d8d0c,
                mid_getZDot_557b8123390d8d0c,
                mid_getZDotDot_557b8123390d8d0c,
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
