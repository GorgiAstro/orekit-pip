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
                mid_init$_ff7cb6c242604316,
                mid_getAODC_d6ab429752e7c267,
                mid_getAODE_d6ab429752e7c267,
                mid_getSvAccuracy_9981f74b2d109da6,
                mid_getTGD1_9981f74b2d109da6,
                mid_getTGD2_9981f74b2d109da6,
                mid_setAODC_1ad26e8c8c0cd65b,
                mid_setAODE_1ad26e8c8c0cd65b,
                mid_setSvAccuracy_1ad26e8c8c0cd65b,
                mid_setTGD1_1ad26e8c8c0cd65b,
                mid_setTGD2_1ad26e8c8c0cd65b,
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
