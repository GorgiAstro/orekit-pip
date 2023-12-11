#ifndef org_orekit_propagation_analytical_gnss_data_GPSLegacyNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GPSLegacyNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"

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

            class GPSLegacyNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GPSLegacyNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GPSLegacyNavigationMessage(const GPSLegacyNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(obj) {}

              GPSLegacyNavigationMessage();
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
            extern PyType_Def PY_TYPE_DEF(GPSLegacyNavigationMessage);
            extern PyTypeObject *PY_TYPE(GPSLegacyNavigationMessage);

            class t_GPSLegacyNavigationMessage {
            public:
              PyObject_HEAD
              GPSLegacyNavigationMessage object;
              static PyObject *wrap_Object(const GPSLegacyNavigationMessage&);
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
