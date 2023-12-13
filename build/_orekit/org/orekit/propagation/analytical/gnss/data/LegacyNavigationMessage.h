#ifndef org_orekit_propagation_analytical_gnss_data_LegacyNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_LegacyNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
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
                mid_getFitInterval_55546ef6a647f39b,
                mid_getIODC_55546ef6a647f39b,
                mid_getIODE_55546ef6a647f39b,
                mid_getSvAccuracy_b74f83833fdad017,
                mid_getSvHealth_55546ef6a647f39b,
                mid_getTGD_b74f83833fdad017,
                mid_setFitInterval_44ed599e93e8a30c,
                mid_setIODC_44ed599e93e8a30c,
                mid_setIODE_8ba9fe7a847cecad,
                mid_setSvAccuracy_8ba9fe7a847cecad,
                mid_setSvHealth_44ed599e93e8a30c,
                mid_setTGD_8ba9fe7a847cecad,
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
