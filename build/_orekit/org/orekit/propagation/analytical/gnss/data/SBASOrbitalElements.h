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
                mid_getAGf0_b74f83833fdad017,
                mid_getAGf1_b74f83833fdad017,
                mid_getIODN_55546ef6a647f39b,
                mid_getPRN_55546ef6a647f39b,
                mid_getTime_b74f83833fdad017,
                mid_getToc_b74f83833fdad017,
                mid_getWeek_55546ef6a647f39b,
                mid_getX_b74f83833fdad017,
                mid_getXDot_b74f83833fdad017,
                mid_getXDotDot_b74f83833fdad017,
                mid_getY_b74f83833fdad017,
                mid_getYDot_b74f83833fdad017,
                mid_getYDotDot_b74f83833fdad017,
                mid_getZ_b74f83833fdad017,
                mid_getZDot_b74f83833fdad017,
                mid_getZDotDot_b74f83833fdad017,
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
