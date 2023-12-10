#ifndef org_orekit_propagation_analytical_gnss_data_IRNSSNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_IRNSSNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

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

            class IRNSSNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getIODEC_f2f64475e4580546,
                mid_getSvHealth_456d9a2f64d6b28d,
                mid_getTGD_456d9a2f64d6b28d,
                mid_getURA_456d9a2f64d6b28d,
                mid_setIODEC_77e0f9a1f260e2e5,
                mid_setSvHealth_77e0f9a1f260e2e5,
                mid_setTGD_77e0f9a1f260e2e5,
                mid_setURA_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IRNSSNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IRNSSNavigationMessage(const IRNSSNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              IRNSSNavigationMessage();

              jint getIODEC() const;
              jdouble getSvHealth() const;
              jdouble getTGD() const;
              jdouble getURA() const;
              void setIODEC(jdouble) const;
              void setSvHealth(jdouble) const;
              void setTGD(jdouble) const;
              void setURA(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(IRNSSNavigationMessage);
            extern PyTypeObject *PY_TYPE(IRNSSNavigationMessage);

            class t_IRNSSNavigationMessage {
            public:
              PyObject_HEAD
              IRNSSNavigationMessage object;
              static PyObject *wrap_Object(const IRNSSNavigationMessage&);
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
