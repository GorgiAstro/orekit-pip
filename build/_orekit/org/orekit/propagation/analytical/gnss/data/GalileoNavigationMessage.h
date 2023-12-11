#ifndef org_orekit_propagation_analytical_gnss_data_GalileoNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GalileoNavigationMessage_H

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

            class GalileoNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getBGDE1E5a_557b8123390d8d0c,
                mid_getBGDE5bE1_557b8123390d8d0c,
                mid_getDataSource_412668abc8d889e9,
                mid_getIODNav_412668abc8d889e9,
                mid_getSisa_557b8123390d8d0c,
                mid_getSvHealth_557b8123390d8d0c,
                mid_setBGDE1E5a_10f281d777284cea,
                mid_setBGDE5bE1_10f281d777284cea,
                mid_setDataSource_a3da1a935cb37f7b,
                mid_setIODNav_a3da1a935cb37f7b,
                mid_setSisa_10f281d777284cea,
                mid_setSvHealth_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GalileoNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GalileoNavigationMessage(const GalileoNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              GalileoNavigationMessage();

              jdouble getBGDE1E5a() const;
              jdouble getBGDE5bE1() const;
              jint getDataSource() const;
              jint getIODNav() const;
              jdouble getSisa() const;
              jdouble getSvHealth() const;
              void setBGDE1E5a(jdouble) const;
              void setBGDE5bE1(jdouble) const;
              void setDataSource(jint) const;
              void setIODNav(jint) const;
              void setSisa(jdouble) const;
              void setSvHealth(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(GalileoNavigationMessage);
            extern PyTypeObject *PY_TYPE(GalileoNavigationMessage);

            class t_GalileoNavigationMessage {
            public:
              PyObject_HEAD
              GalileoNavigationMessage object;
              static PyObject *wrap_Object(const GalileoNavigationMessage&);
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
