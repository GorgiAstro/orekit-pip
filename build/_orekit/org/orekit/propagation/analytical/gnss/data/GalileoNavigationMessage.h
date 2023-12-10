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
                mid_init$_7ae3461a92a43152,
                mid_getBGDE1E5a_456d9a2f64d6b28d,
                mid_getBGDE5bE1_456d9a2f64d6b28d,
                mid_getDataSource_f2f64475e4580546,
                mid_getIODNav_f2f64475e4580546,
                mid_getSisa_456d9a2f64d6b28d,
                mid_getSvHealth_456d9a2f64d6b28d,
                mid_setBGDE1E5a_77e0f9a1f260e2e5,
                mid_setBGDE5bE1_77e0f9a1f260e2e5,
                mid_setDataSource_0a2a1ac2721c0336,
                mid_setIODNav_0a2a1ac2721c0336,
                mid_setSisa_77e0f9a1f260e2e5,
                mid_setSvHealth_77e0f9a1f260e2e5,
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
