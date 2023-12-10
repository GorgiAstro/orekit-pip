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
                mid_init$_b082c972ce0d050e,
                mid_getADot_456d9a2f64d6b28d,
                mid_getDeltaN0Dot_456d9a2f64d6b28d,
                mid_getHealth_f2f64475e4580546,
                mid_getIODC_f2f64475e4580546,
                mid_getIODE_f2f64475e4580546,
                mid_getIntegrityFlags_f2f64475e4580546,
                mid_getIscB1CD_456d9a2f64d6b28d,
                mid_getIscB1CP_456d9a2f64d6b28d,
                mid_getIscB2AD_456d9a2f64d6b28d,
                mid_getSatelliteType_e8e077e599f60e48,
                mid_getSignal_4c8e7a9f75fb8fdd,
                mid_getSisaiOc1_f2f64475e4580546,
                mid_getSisaiOc2_f2f64475e4580546,
                mid_getSisaiOcb_f2f64475e4580546,
                mid_getSisaiOe_f2f64475e4580546,
                mid_getSismai_f2f64475e4580546,
                mid_getTgdB1Cp_456d9a2f64d6b28d,
                mid_getTgdB2ap_456d9a2f64d6b28d,
                mid_getTgdB2bI_456d9a2f64d6b28d,
                mid_setADot_77e0f9a1f260e2e5,
                mid_setDeltaN0Dot_77e0f9a1f260e2e5,
                mid_setHealth_0a2a1ac2721c0336,
                mid_setIODC_0a2a1ac2721c0336,
                mid_setIODE_0a2a1ac2721c0336,
                mid_setIntegrityFlags_0a2a1ac2721c0336,
                mid_setIscB1CD_77e0f9a1f260e2e5,
                mid_setIscB1CP_77e0f9a1f260e2e5,
                mid_setIscB2AD_77e0f9a1f260e2e5,
                mid_setSatelliteType_6feace330e17847c,
                mid_setSisaiOc1_0a2a1ac2721c0336,
                mid_setSisaiOc2_0a2a1ac2721c0336,
                mid_setSisaiOcb_0a2a1ac2721c0336,
                mid_setSisaiOe_0a2a1ac2721c0336,
                mid_setSismai_0a2a1ac2721c0336,
                mid_setTgdB1Cp_77e0f9a1f260e2e5,
                mid_setTgdB2ap_77e0f9a1f260e2e5,
                mid_setTgdB2bI_77e0f9a1f260e2e5,
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
