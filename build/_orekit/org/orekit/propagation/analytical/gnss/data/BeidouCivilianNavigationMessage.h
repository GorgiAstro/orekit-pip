#ifndef org_orekit_propagation_analytical_gnss_data_BeidouCivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_BeidouCivilianNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouSatelliteType;
          }
        }
      }
    }
    namespace gnss {
      class Frequency;
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

            class BeidouCivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_init$_515034c1b6155c70,
                mid_getADot_557b8123390d8d0c,
                mid_getDeltaN0Dot_557b8123390d8d0c,
                mid_getHealth_412668abc8d889e9,
                mid_getIODC_412668abc8d889e9,
                mid_getIODE_412668abc8d889e9,
                mid_getIntegrityFlags_412668abc8d889e9,
                mid_getIscB1CD_557b8123390d8d0c,
                mid_getIscB1CP_557b8123390d8d0c,
                mid_getIscB2AD_557b8123390d8d0c,
                mid_getSatelliteType_484c37600ee33628,
                mid_getSignal_2cc7b050a39077eb,
                mid_getSisaiOc1_412668abc8d889e9,
                mid_getSisaiOc2_412668abc8d889e9,
                mid_getSisaiOcb_412668abc8d889e9,
                mid_getSisaiOe_412668abc8d889e9,
                mid_getSismai_412668abc8d889e9,
                mid_getTgdB1Cp_557b8123390d8d0c,
                mid_getTgdB2ap_557b8123390d8d0c,
                mid_getTgdB2bI_557b8123390d8d0c,
                mid_setADot_10f281d777284cea,
                mid_setDeltaN0Dot_10f281d777284cea,
                mid_setHealth_a3da1a935cb37f7b,
                mid_setIODC_a3da1a935cb37f7b,
                mid_setIODE_a3da1a935cb37f7b,
                mid_setIntegrityFlags_a3da1a935cb37f7b,
                mid_setIscB1CD_10f281d777284cea,
                mid_setIscB1CP_10f281d777284cea,
                mid_setIscB2AD_10f281d777284cea,
                mid_setSatelliteType_210804240f1f93d6,
                mid_setSisaiOc1_a3da1a935cb37f7b,
                mid_setSisaiOc2_a3da1a935cb37f7b,
                mid_setSisaiOcb_a3da1a935cb37f7b,
                mid_setSisaiOe_a3da1a935cb37f7b,
                mid_setSismai_a3da1a935cb37f7b,
                mid_setTgdB1Cp_10f281d777284cea,
                mid_setTgdB2ap_10f281d777284cea,
                mid_setTgdB2bI_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BeidouCivilianNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BeidouCivilianNavigationMessage(const BeidouCivilianNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(obj) {}

              static ::java::lang::String *CNV1;
              static ::java::lang::String *CNV2;
              static ::java::lang::String *CNV3;

              BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency &);

              jdouble getADot() const;
              jdouble getDeltaN0Dot() const;
              jint getHealth() const;
              jint getIODC() const;
              jint getIODE() const;
              jint getIntegrityFlags() const;
              jdouble getIscB1CD() const;
              jdouble getIscB1CP() const;
              jdouble getIscB2AD() const;
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType getSatelliteType() const;
              ::org::orekit::gnss::Frequency getSignal() const;
              jint getSisaiOc1() const;
              jint getSisaiOc2() const;
              jint getSisaiOcb() const;
              jint getSisaiOe() const;
              jint getSismai() const;
              jdouble getTgdB1Cp() const;
              jdouble getTgdB2ap() const;
              jdouble getTgdB2bI() const;
              void setADot(jdouble) const;
              void setDeltaN0Dot(jdouble) const;
              void setHealth(jint) const;
              void setIODC(jint) const;
              void setIODE(jint) const;
              void setIntegrityFlags(jint) const;
              void setIscB1CD(jdouble) const;
              void setIscB1CP(jdouble) const;
              void setIscB2AD(jdouble) const;
              void setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType &) const;
              void setSisaiOc1(jint) const;
              void setSisaiOc2(jint) const;
              void setSisaiOcb(jint) const;
              void setSisaiOe(jint) const;
              void setSismai(jint) const;
              void setTgdB1Cp(jdouble) const;
              void setTgdB2ap(jdouble) const;
              void setTgdB2bI(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(BeidouCivilianNavigationMessage);
            extern PyTypeObject *PY_TYPE(BeidouCivilianNavigationMessage);

            class t_BeidouCivilianNavigationMessage {
            public:
              PyObject_HEAD
              BeidouCivilianNavigationMessage object;
              static PyObject *wrap_Object(const BeidouCivilianNavigationMessage&);
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
