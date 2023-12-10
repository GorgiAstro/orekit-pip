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
                mid_getFitInterval_f2f64475e4580546,
                mid_getIODC_f2f64475e4580546,
                mid_getIODE_f2f64475e4580546,
                mid_getSvAccuracy_456d9a2f64d6b28d,
                mid_getSvHealth_f2f64475e4580546,
                mid_getTGD_456d9a2f64d6b28d,
                mid_setFitInterval_0a2a1ac2721c0336,
                mid_setIODC_0a2a1ac2721c0336,
                mid_setIODE_77e0f9a1f260e2e5,
                mid_setSvAccuracy_77e0f9a1f260e2e5,
                mid_setSvHealth_0a2a1ac2721c0336,
                mid_setTGD_77e0f9a1f260e2e5,
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
