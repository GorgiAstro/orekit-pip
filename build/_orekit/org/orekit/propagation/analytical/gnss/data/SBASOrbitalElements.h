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
                mid_getAGf0_9981f74b2d109da6,
                mid_getAGf1_9981f74b2d109da6,
                mid_getIODN_d6ab429752e7c267,
                mid_getPRN_d6ab429752e7c267,
                mid_getTime_9981f74b2d109da6,
                mid_getToc_9981f74b2d109da6,
                mid_getWeek_d6ab429752e7c267,
                mid_getX_9981f74b2d109da6,
                mid_getXDot_9981f74b2d109da6,
                mid_getXDotDot_9981f74b2d109da6,
                mid_getY_9981f74b2d109da6,
                mid_getYDot_9981f74b2d109da6,
                mid_getYDotDot_9981f74b2d109da6,
                mid_getZ_9981f74b2d109da6,
                mid_getZDot_9981f74b2d109da6,
                mid_getZDotDot_9981f74b2d109da6,
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
