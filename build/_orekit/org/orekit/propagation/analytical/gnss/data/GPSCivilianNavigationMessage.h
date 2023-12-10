#ifndef org_orekit_propagation_analytical_gnss_data_GPSCivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GPSCivilianNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"

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

            class GPSCivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage {
             public:
              enum {
                mid_init$_bd04c9335fb9e4cf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GPSCivilianNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GPSCivilianNavigationMessage(const GPSCivilianNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(obj) {}

              GPSCivilianNavigationMessage(jboolean);
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
            extern PyType_Def PY_TYPE_DEF(GPSCivilianNavigationMessage);
            extern PyTypeObject *PY_TYPE(GPSCivilianNavigationMessage);

            class t_GPSCivilianNavigationMessage {
            public:
              PyObject_HEAD
              GPSCivilianNavigationMessage object;
              static PyObject *wrap_Object(const GPSCivilianNavigationMessage&);
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
