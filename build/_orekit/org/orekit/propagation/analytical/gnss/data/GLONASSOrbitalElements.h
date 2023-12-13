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
                mid_getDeltaI_b74f83833fdad017,
                mid_getDeltaT_b74f83833fdad017,
                mid_getDeltaTDot_b74f83833fdad017,
                mid_getE_b74f83833fdad017,
                mid_getGammaN_b74f83833fdad017,
                mid_getIOD_55546ef6a647f39b,
                mid_getLambda_b74f83833fdad017,
                mid_getN4_55546ef6a647f39b,
                mid_getNa_55546ef6a647f39b,
                mid_getPa_b74f83833fdad017,
                mid_getTN_b74f83833fdad017,
                mid_getTime_b74f83833fdad017,
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
