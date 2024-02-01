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
                mid_init$_ff7cb6c242604316,
                mid_getBGDE1E5a_9981f74b2d109da6,
                mid_getBGDE5bE1_9981f74b2d109da6,
                mid_getDataSource_d6ab429752e7c267,
                mid_getIODNav_d6ab429752e7c267,
                mid_getSisa_9981f74b2d109da6,
                mid_getSvHealth_9981f74b2d109da6,
                mid_setBGDE1E5a_1ad26e8c8c0cd65b,
                mid_setBGDE5bE1_1ad26e8c8c0cd65b,
                mid_setDataSource_8fd427ab23829bf5,
                mid_setIODNav_8fd427ab23829bf5,
                mid_setSisa_1ad26e8c8c0cd65b,
                mid_setSvHealth_1ad26e8c8c0cd65b,
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
