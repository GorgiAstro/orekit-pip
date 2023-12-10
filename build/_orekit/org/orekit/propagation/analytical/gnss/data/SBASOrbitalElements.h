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
                mid_getAGf0_dff5885c2c873297,
                mid_getAGf1_dff5885c2c873297,
                mid_getIODN_570ce0828f81a2c1,
                mid_getPRN_570ce0828f81a2c1,
                mid_getTime_dff5885c2c873297,
                mid_getToc_dff5885c2c873297,
                mid_getWeek_570ce0828f81a2c1,
                mid_getX_dff5885c2c873297,
                mid_getXDot_dff5885c2c873297,
                mid_getXDotDot_dff5885c2c873297,
                mid_getY_dff5885c2c873297,
                mid_getYDot_dff5885c2c873297,
                mid_getYDotDot_dff5885c2c873297,
                mid_getZ_dff5885c2c873297,
                mid_getZDot_dff5885c2c873297,
                mid_getZDotDot_dff5885c2c873297,
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
