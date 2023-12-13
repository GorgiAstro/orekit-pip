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
                mid_init$_a1fa5dae97ea5ed2,
                mid_finalize_a1fa5dae97ea5ed2,
                mid_getAGf0_b74f83833fdad017,
                mid_getAGf1_b74f83833fdad017,
                mid_getDate_c325492395d89b24,
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
                mid_pythonDecRef_a1fa5dae97ea5ed2,
                mid_pythonExtension_6c0ce7e438e5ded4,
                mid_pythonExtension_3d7dd2314a0dd456,
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
