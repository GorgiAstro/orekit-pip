#ifndef org_orekit_gnss_metric_messages_common_OrbitCorrection_H
#define org_orekit_gnss_metric_messages_common_OrbitCorrection_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            class OrbitCorrection : public ::java::lang::Object {
             public:
              enum {
                mid_init$_5efe929945898acc,
                mid_getDeltaOrbitAlongTrack_b74f83833fdad017,
                mid_getDeltaOrbitCrossTrack_b74f83833fdad017,
                mid_getDeltaOrbitRadial_b74f83833fdad017,
                mid_getDotOrbitDeltaAlongTrack_b74f83833fdad017,
                mid_getDotOrbitDeltaCrossTrack_b74f83833fdad017,
                mid_getDotOrbitDeltaRadial_b74f83833fdad017,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrbitCorrection(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OrbitCorrection(const OrbitCorrection& obj) : ::java::lang::Object(obj) {}

              OrbitCorrection(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

              jdouble getDeltaOrbitAlongTrack() const;
              jdouble getDeltaOrbitCrossTrack() const;
              jdouble getDeltaOrbitRadial() const;
              jdouble getDotOrbitDeltaAlongTrack() const;
              jdouble getDotOrbitDeltaCrossTrack() const;
              jdouble getDotOrbitDeltaRadial() const;
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            extern PyType_Def PY_TYPE_DEF(OrbitCorrection);
            extern PyTypeObject *PY_TYPE(OrbitCorrection);

            class t_OrbitCorrection {
            public:
              PyObject_HEAD
              OrbitCorrection object;
              static PyObject *wrap_Object(const OrbitCorrection&);
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
