#ifndef org_orekit_propagation_analytical_gnss_data_LegacyNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_LegacyNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSClockElements;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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

            class LegacyNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_getFitInterval_570ce0828f81a2c1,
                mid_getIODC_570ce0828f81a2c1,
                mid_getIODE_570ce0828f81a2c1,
                mid_getSvAccuracy_dff5885c2c873297,
                mid_getSvHealth_570ce0828f81a2c1,
                mid_getTGD_dff5885c2c873297,
                mid_setFitInterval_99803b0791f320ff,
                mid_setIODC_99803b0791f320ff,
                mid_setIODE_17db3a65980d3441,
                mid_setSvAccuracy_17db3a65980d3441,
                mid_setSvHealth_99803b0791f320ff,
                mid_setTGD_17db3a65980d3441,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LegacyNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LegacyNavigationMessage(const LegacyNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              static ::java::lang::String *LNAV;

              jint getFitInterval() const;
              jint getIODC() const;
              jint getIODE() const;
              jdouble getSvAccuracy() const;
              jint getSvHealth() const;
              jdouble getTGD() const;
              void setFitInterval(jint) const;
              void setIODC(jint) const;
              void setIODE(jdouble) const;
              void setSvAccuracy(jdouble) const;
              void setSvHealth(jint) const;
              void setTGD(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(LegacyNavigationMessage);
            extern PyTypeObject *PY_TYPE(LegacyNavigationMessage);

            class t_LegacyNavigationMessage {
            public:
              PyObject_HEAD
              LegacyNavigationMessage object;
              static PyObject *wrap_Object(const LegacyNavigationMessage&);
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
