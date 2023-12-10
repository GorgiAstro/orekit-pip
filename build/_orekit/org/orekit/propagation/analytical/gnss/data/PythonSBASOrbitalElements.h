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
                mid_init$_0fa09c18fee449d5,
                mid_finalize_0fa09c18fee449d5,
                mid_getAGf0_dff5885c2c873297,
                mid_getAGf1_dff5885c2c873297,
                mid_getDate_85703d13e302437e,
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
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
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
