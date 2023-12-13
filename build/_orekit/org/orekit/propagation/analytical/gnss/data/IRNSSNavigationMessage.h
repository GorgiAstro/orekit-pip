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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getIODEC_55546ef6a647f39b,
                mid_getSvHealth_b74f83833fdad017,
                mid_getTGD_b74f83833fdad017,
                mid_getURA_b74f83833fdad017,
                mid_setIODEC_8ba9fe7a847cecad,
                mid_setSvHealth_8ba9fe7a847cecad,
                mid_setTGD_8ba9fe7a847cecad,
                mid_setURA_8ba9fe7a847cecad,
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
