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
                mid_init$_c02d4d25db4aa7bf,
                mid_getADot_dff5885c2c873297,
                mid_getDeltaN0Dot_dff5885c2c873297,
                mid_getHealth_570ce0828f81a2c1,
                mid_getIODC_570ce0828f81a2c1,
                mid_getIODE_570ce0828f81a2c1,
                mid_getIntegrityFlags_570ce0828f81a2c1,
                mid_getIscB1CD_dff5885c2c873297,
                mid_getIscB1CP_dff5885c2c873297,
                mid_getIscB2AD_dff5885c2c873297,
                mid_getSatelliteType_133274f115d01889,
                mid_getSignal_1257519d3e6e03ef,
                mid_getSisaiOc1_570ce0828f81a2c1,
                mid_getSisaiOc2_570ce0828f81a2c1,
                mid_getSisaiOcb_570ce0828f81a2c1,
                mid_getSisaiOe_570ce0828f81a2c1,
                mid_getSismai_570ce0828f81a2c1,
                mid_getTgdB1Cp_dff5885c2c873297,
                mid_getTgdB2ap_dff5885c2c873297,
                mid_getTgdB2bI_dff5885c2c873297,
                mid_setADot_17db3a65980d3441,
                mid_setDeltaN0Dot_17db3a65980d3441,
                mid_setHealth_99803b0791f320ff,
                mid_setIODC_99803b0791f320ff,
                mid_setIODE_99803b0791f320ff,
                mid_setIntegrityFlags_99803b0791f320ff,
                mid_setIscB1CD_17db3a65980d3441,
                mid_setIscB1CP_17db3a65980d3441,
                mid_setIscB2AD_17db3a65980d3441,
                mid_setSatelliteType_df86f241905e164c,
                mid_setSisaiOc1_99803b0791f320ff,
                mid_setSisaiOc2_99803b0791f320ff,
                mid_setSisaiOcb_99803b0791f320ff,
                mid_setSisaiOe_99803b0791f320ff,
                mid_setSismai_99803b0791f320ff,
                mid_setTgdB1Cp_17db3a65980d3441,
                mid_setTgdB2ap_17db3a65980d3441,
                mid_setTgdB2bI_17db3a65980d3441,
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
