#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSEphemeris_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
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
                mid_init$_6b9092a5a5611226,
                mid_init$_ff8a76f46a0c3d9b,
                mid_getDate_c325492395d89b24,
                mid_getN4_55546ef6a647f39b,
                mid_getNa_55546ef6a647f39b,
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
