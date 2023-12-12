#ifndef org_orekit_propagation_analytical_gnss_data_CivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_CivilianNavigationMessage_H

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

            class CivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_getADot_557b8123390d8d0c,
                mid_getDeltaN0Dot_557b8123390d8d0c,
                mid_getIscL1CA_557b8123390d8d0c,
                mid_getIscL1CD_557b8123390d8d0c,
                mid_getIscL1CP_557b8123390d8d0c,
                mid_getIscL2C_557b8123390d8d0c,
                mid_getIscL5I5_557b8123390d8d0c,
                mid_getIscL5Q5_557b8123390d8d0c,
                mid_getSvAccuracy_557b8123390d8d0c,
                mid_getSvHealth_412668abc8d889e9,
                mid_getTGD_557b8123390d8d0c,
                mid_getUraiEd_412668abc8d889e9,
                mid_getUraiNed0_412668abc8d889e9,
                mid_getUraiNed1_412668abc8d889e9,
                mid_getUraiNed2_412668abc8d889e9,
                mid_isCnv2_89b302893bdbe1f1,
                mid_setADot_10f281d777284cea,
                mid_setDeltaN0Dot_10f281d777284cea,
                mid_setIscL1CA_10f281d777284cea,
                mid_setIscL1CD_10f281d777284cea,
                mid_setIscL1CP_10f281d777284cea,
                mid_setIscL2C_10f281d777284cea,
                mid_setIscL5I5_10f281d777284cea,
                mid_setIscL5Q5_10f281d777284cea,
                mid_setSvAccuracy_10f281d777284cea,
                mid_setSvHealth_a3da1a935cb37f7b,
                mid_setTGD_10f281d777284cea,
                mid_setUraiEd_a3da1a935cb37f7b,
                mid_setUraiNed0_a3da1a935cb37f7b,
                mid_setUraiNed1_a3da1a935cb37f7b,
                mid_setUraiNed2_a3da1a935cb37f7b,
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
