#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSOrbitalElements_H

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

            class GLONASSOrbitalElements : public ::org::orekit::time::TimeStamped {
             public:
              enum {
                mid_getDeltaI_557b8123390d8d0c,
                mid_getDeltaT_557b8123390d8d0c,
                mid_getDeltaTDot_557b8123390d8d0c,
                mid_getE_557b8123390d8d0c,
                mid_getGammaN_557b8123390d8d0c,
                mid_getIOD_412668abc8d889e9,
                mid_getLambda_557b8123390d8d0c,
                mid_getN4_412668abc8d889e9,
                mid_getNa_412668abc8d889e9,
                mid_getPa_557b8123390d8d0c,
                mid_getTN_557b8123390d8d0c,
                mid_getTime_557b8123390d8d0c,
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

              explicit GLONASSOrbitalElements(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GLONASSOrbitalElements(const GLONASSOrbitalElements& obj) : ::org::orekit::time::TimeStamped(obj) {}

              jdouble getDeltaI() const;
              jdouble getDeltaT() const;
              jdouble getDeltaTDot() const;
              jdouble getE() const;
              jdouble getGammaN() const;
              jint getIOD() const;
              jdouble getLambda() const;
              jint getN4() const;
              jint getNa() const;
              jdouble getPa() const;
              jdouble getTN() const;
              jdouble getTime() const;
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
            extern PyType_Def PY_TYPE_DEF(GLONASSOrbitalElements);
            extern PyTypeObject *PY_TYPE(GLONASSOrbitalElements);

            class t_GLONASSOrbitalElements {
            public:
              PyObject_HEAD
              GLONASSOrbitalElements object;
              static PyObject *wrap_Object(const GLONASSOrbitalElements&);
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
