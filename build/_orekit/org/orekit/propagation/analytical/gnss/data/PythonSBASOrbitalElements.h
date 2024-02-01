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
                mid_init$_ff7cb6c242604316,
                mid_finalize_ff7cb6c242604316,
                mid_getAGf0_9981f74b2d109da6,
                mid_getAGf1_9981f74b2d109da6,
                mid_getDate_80e11148db499dda,
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
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
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
