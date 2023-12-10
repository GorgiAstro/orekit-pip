#ifndef org_orekit_propagation_analytical_gnss_data_CivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_CivilianNavigationMessage_H

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

            class CivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_getADot_456d9a2f64d6b28d,
                mid_getDeltaN0Dot_456d9a2f64d6b28d,
                mid_getIscL1CA_456d9a2f64d6b28d,
                mid_getIscL1CD_456d9a2f64d6b28d,
                mid_getIscL1CP_456d9a2f64d6b28d,
                mid_getIscL2C_456d9a2f64d6b28d,
                mid_getIscL5I5_456d9a2f64d6b28d,
                mid_getIscL5Q5_456d9a2f64d6b28d,
                mid_getSvAccuracy_456d9a2f64d6b28d,
                mid_getSvHealth_f2f64475e4580546,
                mid_getTGD_456d9a2f64d6b28d,
                mid_getUraiEd_f2f64475e4580546,
                mid_getUraiNed0_f2f64475e4580546,
                mid_getUraiNed1_f2f64475e4580546,
                mid_getUraiNed2_f2f64475e4580546,
                mid_isCnv2_e470b6d9e0d979db,
                mid_setADot_77e0f9a1f260e2e5,
                mid_setDeltaN0Dot_77e0f9a1f260e2e5,
                mid_setIscL1CA_77e0f9a1f260e2e5,
                mid_setIscL1CD_77e0f9a1f260e2e5,
                mid_setIscL1CP_77e0f9a1f260e2e5,
                mid_setIscL2C_77e0f9a1f260e2e5,
                mid_setIscL5I5_77e0f9a1f260e2e5,
                mid_setIscL5Q5_77e0f9a1f260e2e5,
                mid_setSvAccuracy_77e0f9a1f260e2e5,
                mid_setSvHealth_0a2a1ac2721c0336,
                mid_setTGD_77e0f9a1f260e2e5,
                mid_setUraiEd_0a2a1ac2721c0336,
                mid_setUraiNed0_0a2a1ac2721c0336,
                mid_setUraiNed1_0a2a1ac2721c0336,
                mid_setUraiNed2_0a2a1ac2721c0336,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CivilianNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CivilianNavigationMessage(const CivilianNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              static ::java::lang::String *CNAV;
              static ::java::lang::String *CNV2;

              jdouble getADot() const;
              jdouble getDeltaN0Dot() const;
              jdouble getIscL1CA() const;
              jdouble getIscL1CD() const;
              jdouble getIscL1CP() const;
              jdouble getIscL2C() const;
              jdouble getIscL5I5() const;
              jdouble getIscL5Q5() const;
              jdouble getSvAccuracy() const;
              jint getSvHealth() const;
              jdouble getTGD() const;
              jint getUraiEd() const;
              jint getUraiNed0() const;
              jint getUraiNed1() const;
              jint getUraiNed2() const;
              jboolean isCnv2() const;
              void setADot(jdouble) const;
              void setDeltaN0Dot(jdouble) const;
              void setIscL1CA(jdouble) const;
              void setIscL1CD(jdouble) const;
              void setIscL1CP(jdouble) const;
              void setIscL2C(jdouble) const;
              void setIscL5I5(jdouble) const;
              void setIscL5Q5(jdouble) const;
              void setSvAccuracy(jdouble) const;
              void setSvHealth(jint) const;
              void setTGD(jdouble) const;
              void setUraiEd(jint) const;
              void setUraiNed0(jint) const;
              void setUraiNed1(jint) const;
              void setUraiNed2(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(CivilianNavigationMessage);
            extern PyTypeObject *PY_TYPE(CivilianNavigationMessage);

            class t_CivilianNavigationMessage {
            public:
              PyObject_HEAD
              CivilianNavigationMessage object;
              static PyObject *wrap_Object(const CivilianNavigationMessage&);
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
