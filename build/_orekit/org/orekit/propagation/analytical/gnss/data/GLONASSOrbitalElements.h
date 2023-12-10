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
                mid_getDeltaI_dff5885c2c873297,
                mid_getDeltaT_dff5885c2c873297,
                mid_getDeltaTDot_dff5885c2c873297,
                mid_getE_dff5885c2c873297,
                mid_getGammaN_dff5885c2c873297,
                mid_getIOD_570ce0828f81a2c1,
                mid_getLambda_dff5885c2c873297,
                mid_getN4_570ce0828f81a2c1,
                mid_getNa_570ce0828f81a2c1,
                mid_getPa_dff5885c2c873297,
                mid_getTN_dff5885c2c873297,
                mid_getTime_dff5885c2c873297,
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
