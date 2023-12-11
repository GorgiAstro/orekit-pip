#ifndef org_orekit_propagation_analytical_gnss_data_PythonSBASOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_PythonSBASOrbitalElements_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class SBASOrbitalElements;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class PythonSBASOrbitalElements : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_getAGf0_557b8123390d8d0c,
                mid_getAGf1_557b8123390d8d0c,
                mid_getDate_7a97f7e149e79afb,
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
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonSBASOrbitalElements(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonSBASOrbitalElements(const PythonSBASOrbitalElements& obj) : ::java::lang::Object(obj) {}

              PythonSBASOrbitalElements();

              void finalize() const;
              jdouble getAGf0() const;
              jdouble getAGf1() const;
              ::org::orekit::time::AbsoluteDate getDate() const;
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
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonSBASOrbitalElements);
            extern PyTypeObject *PY_TYPE(PythonSBASOrbitalElements);

            class t_PythonSBASOrbitalElements {
            public:
              PyObject_HEAD
              PythonSBASOrbitalElements object;
              static PyObject *wrap_Object(const PythonSBASOrbitalElements&);
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
