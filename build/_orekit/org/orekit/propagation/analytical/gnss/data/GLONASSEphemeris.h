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
                mid_init$_008618ed8ffeed65,
                mid_init$_2ab995c573e81c53,
                mid_getDate_85703d13e302437e,
                mid_getN4_570ce0828f81a2c1,
                mid_getNa_570ce0828f81a2c1,
                mid_getTime_dff5885c2c873297,
                mid_getX_dff5885c2c873297,
                mid_getXDot_dff5885c2c873297,
                mid_getXDotDot_dff5885c2c873297,
                mid_getY_dff5885c2c873297,
                mid_getYDot_dff5885c2c873297,
                mid_getYDotDot_dff5885c2c873297,
                mid_getZ_dff5885c2c873297,
                mid_getZDot_dff5885c2c873297,
                mid_getZDotDot_dff5885c2c873297,
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
