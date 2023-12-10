#ifndef org_orekit_propagation_analytical_gnss_data_PythonSBASOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_PythonSBASOrbitalElements_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class SBASOrbitalElements;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
                mid_init$_7ae3461a92a43152,
                mid_finalize_7ae3461a92a43152,
                mid_getAGf0_456d9a2f64d6b28d,
                mid_getAGf1_456d9a2f64d6b28d,
                mid_getDate_aaa854c403487cf3,
                mid_getIODN_f2f64475e4580546,
                mid_getPRN_f2f64475e4580546,
                mid_getTime_456d9a2f64d6b28d,
                mid_getToc_456d9a2f64d6b28d,
                mid_getWeek_f2f64475e4580546,
                mid_getX_456d9a2f64d6b28d,
                mid_getXDot_456d9a2f64d6b28d,
                mid_getXDotDot_456d9a2f64d6b28d,
                mid_getY_456d9a2f64d6b28d,
                mid_getYDot_456d9a2f64d6b28d,
                mid_getYDotDot_456d9a2f64d6b28d,
                mid_getZ_456d9a2f64d6b28d,
                mid_getZDot_456d9a2f64d6b28d,
                mid_getZDotDot_456d9a2f64d6b28d,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
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
