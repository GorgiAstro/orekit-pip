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
                mid_init$_b468b32595f64f31,
                mid_init$_95b15e482e88631c,
                mid_getDate_aaa854c403487cf3,
                mid_getN4_f2f64475e4580546,
                mid_getNa_f2f64475e4580546,
                mid_getTime_456d9a2f64d6b28d,
                mid_getX_456d9a2f64d6b28d,
                mid_getXDot_456d9a2f64d6b28d,
                mid_getXDotDot_456d9a2f64d6b28d,
                mid_getY_456d9a2f64d6b28d,
                mid_getYDot_456d9a2f64d6b28d,
                mid_getYDotDot_456d9a2f64d6b28d,
                mid_getZ_456d9a2f64d6b28d,
                mid_getZDot_456d9a2f64d6b28d,
                mid_getZDotDot_456d9a2f64d6b28d,
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
