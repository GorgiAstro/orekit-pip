#ifndef org_orekit_propagation_analytical_gnss_data_QZSSCivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_QZSSCivilianNavigationMessage_H

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

            class QZSSCivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage {
             public:
              enum {
                mid_init$_bd04c9335fb9e4cf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QZSSCivilianNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QZSSCivilianNavigationMessage(const QZSSCivilianNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(obj) {}

              QZSSCivilianNavigationMessage(jboolean);
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
            extern PyType_Def PY_TYPE_DEF(QZSSCivilianNavigationMessage);
            extern PyTypeObject *PY_TYPE(QZSSCivilianNavigationMessage);

            class t_QZSSCivilianNavigationMessage {
            public:
              PyObject_HEAD
              QZSSCivilianNavigationMessage object;
              static PyObject *wrap_Object(const QZSSCivilianNavigationMessage&);
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
