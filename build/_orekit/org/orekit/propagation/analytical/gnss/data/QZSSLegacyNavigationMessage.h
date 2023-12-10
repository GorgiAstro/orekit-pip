#ifndef org_orekit_propagation_analytical_gnss_data_QZSSLegacyNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_QZSSLegacyNavigationMessage_H

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

            class QZSSLegacyNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QZSSLegacyNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QZSSLegacyNavigationMessage(const QZSSLegacyNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(obj) {}

              QZSSLegacyNavigationMessage();
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
            extern PyType_Def PY_TYPE_DEF(QZSSLegacyNavigationMessage);
            extern PyTypeObject *PY_TYPE(QZSSLegacyNavigationMessage);

            class t_QZSSLegacyNavigationMessage {
            public:
              PyObject_HEAD
              QZSSLegacyNavigationMessage object;
              static PyObject *wrap_Object(const QZSSLegacyNavigationMessage&);
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
