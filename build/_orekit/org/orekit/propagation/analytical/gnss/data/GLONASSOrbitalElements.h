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
                mid_getDeltaI_9981f74b2d109da6,
                mid_getDeltaT_9981f74b2d109da6,
                mid_getDeltaTDot_9981f74b2d109da6,
                mid_getE_9981f74b2d109da6,
                mid_getGammaN_9981f74b2d109da6,
                mid_getIOD_d6ab429752e7c267,
                mid_getLambda_9981f74b2d109da6,
                mid_getN4_d6ab429752e7c267,
                mid_getNa_d6ab429752e7c267,
                mid_getPa_9981f74b2d109da6,
                mid_getTN_9981f74b2d109da6,
                mid_getTime_9981f74b2d109da6,
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
