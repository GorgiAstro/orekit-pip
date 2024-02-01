#ifndef org_orekit_propagation_analytical_gnss_data_BeidouCivilianNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_BeidouCivilianNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class Frequency;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouSatelliteType;
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

            class BeidouCivilianNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage {
             public:
              enum {
                mid_init$_236bbd4eecc1088c,
                mid_getADot_9981f74b2d109da6,
                mid_getDeltaN0Dot_9981f74b2d109da6,
                mid_getHealth_d6ab429752e7c267,
                mid_getIODC_d6ab429752e7c267,
                mid_getIODE_d6ab429752e7c267,
                mid_getIntegrityFlags_d6ab429752e7c267,
                mid_getIscB1CD_9981f74b2d109da6,
                mid_getIscB1CP_9981f74b2d109da6,
                mid_getIscB2AD_9981f74b2d109da6,
                mid_getSatelliteType_9853a078183d2130,
                mid_getSignal_fe669125d12cb4d2,
                mid_getSisaiOc1_d6ab429752e7c267,
                mid_getSisaiOc2_d6ab429752e7c267,
                mid_getSisaiOcb_d6ab429752e7c267,
                mid_getSisaiOe_d6ab429752e7c267,
                mid_getSismai_d6ab429752e7c267,
                mid_getTgdB1Cp_9981f74b2d109da6,
                mid_getTgdB2ap_9981f74b2d109da6,
                mid_getTgdB2bI_9981f74b2d109da6,
                mid_setADot_1ad26e8c8c0cd65b,
                mid_setDeltaN0Dot_1ad26e8c8c0cd65b,
                mid_setHealth_8fd427ab23829bf5,
                mid_setIODC_8fd427ab23829bf5,
                mid_setIODE_8fd427ab23829bf5,
                mid_setIntegrityFlags_8fd427ab23829bf5,
                mid_setIscB1CD_1ad26e8c8c0cd65b,
                mid_setIscB1CP_1ad26e8c8c0cd65b,
                mid_setIscB2AD_1ad26e8c8c0cd65b,
                mid_setSatelliteType_8e6b6f0b47c8521e,
                mid_setSisaiOc1_8fd427ab23829bf5,
                mid_setSisaiOc2_8fd427ab23829bf5,
                mid_setSisaiOcb_8fd427ab23829bf5,
                mid_setSisaiOe_8fd427ab23829bf5,
                mid_setSismai_8fd427ab23829bf5,
                mid_setTgdB1Cp_1ad26e8c8c0cd65b,
                mid_setTgdB2ap_1ad26e8c8c0cd65b,
                mid_setTgdB2bI_1ad26e8c8c0cd65b,
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
