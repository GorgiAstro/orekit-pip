#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSEphemeris_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSEphemeris_H

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
            class GLONASSOrbitalElements;
          }
        }
      }
    }
  }
}
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

            class GLONASSEphemeris : public ::java::lang::Object {
             public:
              enum {
                mid_init$_12f7e75b42b3a31d,
                mid_init$_4044476b2bc127b8,
                mid_getDate_7a97f7e149e79afb,
                mid_getN4_412668abc8d889e9,
                mid_getNa_412668abc8d889e9,
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

              explicit GLONASSEphemeris(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GLONASSEphemeris(const GLONASSEphemeris& obj) : ::java::lang::Object(obj) {}

              GLONASSEphemeris(jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
              GLONASSEphemeris(jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::time::AbsoluteDate &);

              ::org::orekit::time::AbsoluteDate getDate() const;
              jint getN4() const;
              jint getNa() const;
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
            extern PyType_Def PY_TYPE_DEF(GLONASSEphemeris);
            extern PyTypeObject *PY_TYPE(GLONASSEphemeris);

            class t_GLONASSEphemeris {
            public:
              PyObject_HEAD
              GLONASSEphemeris object;
              static PyObject *wrap_Object(const GLONASSEphemeris&);
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
