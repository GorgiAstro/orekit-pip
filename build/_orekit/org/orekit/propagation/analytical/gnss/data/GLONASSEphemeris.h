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
                mid_init$_8cd9834af575f9e0,
                mid_init$_c7cd1553fc7dd3c6,
                mid_getDate_80e11148db499dda,
                mid_getN4_d6ab429752e7c267,
                mid_getNa_d6ab429752e7c267,
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
