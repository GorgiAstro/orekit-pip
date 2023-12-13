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
                mid_init$_aacf6092a9eb11f7,
                mid_getADot_b74f83833fdad017,
                mid_getDeltaN0Dot_b74f83833fdad017,
                mid_getHealth_55546ef6a647f39b,
                mid_getIODC_55546ef6a647f39b,
                mid_getIODE_55546ef6a647f39b,
                mid_getIntegrityFlags_55546ef6a647f39b,
                mid_getIscB1CD_b74f83833fdad017,
                mid_getIscB1CP_b74f83833fdad017,
                mid_getIscB2AD_b74f83833fdad017,
                mid_getSatelliteType_24565fd6cf1b58ad,
                mid_getSignal_35d188bf58b06cba,
                mid_getSisaiOc1_55546ef6a647f39b,
                mid_getSisaiOc2_55546ef6a647f39b,
                mid_getSisaiOcb_55546ef6a647f39b,
                mid_getSisaiOe_55546ef6a647f39b,
                mid_getSismai_55546ef6a647f39b,
                mid_getTgdB1Cp_b74f83833fdad017,
                mid_getTgdB2ap_b74f83833fdad017,
                mid_getTgdB2bI_b74f83833fdad017,
                mid_setADot_8ba9fe7a847cecad,
                mid_setDeltaN0Dot_8ba9fe7a847cecad,
                mid_setHealth_44ed599e93e8a30c,
                mid_setIODC_44ed599e93e8a30c,
                mid_setIODE_44ed599e93e8a30c,
                mid_setIntegrityFlags_44ed599e93e8a30c,
                mid_setIscB1CD_8ba9fe7a847cecad,
                mid_setIscB1CP_8ba9fe7a847cecad,
                mid_setIscB2AD_8ba9fe7a847cecad,
                mid_setSatelliteType_a4d0cb8da0a03811,
                mid_setSisaiOc1_44ed599e93e8a30c,
                mid_setSisaiOc2_44ed599e93e8a30c,
                mid_setSisaiOcb_44ed599e93e8a30c,
                mid_setSisaiOe_44ed599e93e8a30c,
                mid_setSismai_44ed599e93e8a30c,
                mid_setTgdB1Cp_8ba9fe7a847cecad,
                mid_setTgdB2ap_8ba9fe7a847cecad,
                mid_setTgdB2bI_8ba9fe7a847cecad,
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
