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
                mid_getDeltaI_456d9a2f64d6b28d,
                mid_getDeltaT_456d9a2f64d6b28d,
                mid_getDeltaTDot_456d9a2f64d6b28d,
                mid_getE_456d9a2f64d6b28d,
                mid_getGammaN_456d9a2f64d6b28d,
                mid_getIOD_f2f64475e4580546,
                mid_getLambda_456d9a2f64d6b28d,
                mid_getN4_f2f64475e4580546,
                mid_getNa_f2f64475e4580546,
                mid_getPa_456d9a2f64d6b28d,
                mid_getTN_456d9a2f64d6b28d,
                mid_getTime_456d9a2f64d6b28d,
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
