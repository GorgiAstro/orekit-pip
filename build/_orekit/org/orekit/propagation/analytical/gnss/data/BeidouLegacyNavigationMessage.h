#ifndef org_orekit_propagation_analytical_gnss_data_BeidouLegacyNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_BeidouLegacyNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

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

            class BeidouLegacyNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getAODC_412668abc8d889e9,
                mid_getAODE_412668abc8d889e9,
                mid_getSvAccuracy_557b8123390d8d0c,
                mid_getTGD1_557b8123390d8d0c,
                mid_getTGD2_557b8123390d8d0c,
                mid_setAODC_10f281d777284cea,
                mid_setAODE_10f281d777284cea,
                mid_setSvAccuracy_10f281d777284cea,
                mid_setTGD1_10f281d777284cea,
                mid_setTGD2_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BeidouLegacyNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BeidouLegacyNavigationMessage(const BeidouLegacyNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              static ::java::lang::String *D1;
              static ::java::lang::String *D2;

              BeidouLegacyNavigationMessage();

              jint getAODC() const;
              jint getAODE() const;
              jdouble getSvAccuracy() const;
              jdouble getTGD1() const;
              jdouble getTGD2() const;
              void setAODC(jdouble) const;
              void setAODE(jdouble) const;
              void setSvAccuracy(jdouble) const;
              void setTGD1(jdouble) const;
              void setTGD2(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(BeidouLegacyNavigationMessage);
            extern PyTypeObject *PY_TYPE(BeidouLegacyNavigationMessage);

            class t_BeidouLegacyNavigationMessage {
            public:
              PyObject_HEAD
              BeidouLegacyNavigationMessage object;
              static PyObject *wrap_Object(const BeidouLegacyNavigationMessage&);
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
