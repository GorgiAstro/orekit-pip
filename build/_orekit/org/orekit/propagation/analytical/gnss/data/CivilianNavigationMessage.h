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
                mid_getADot_dff5885c2c873297,
                mid_getDeltaN0Dot_dff5885c2c873297,
                mid_getIscL1CA_dff5885c2c873297,
                mid_getIscL1CD_dff5885c2c873297,
                mid_getIscL1CP_dff5885c2c873297,
                mid_getIscL2C_dff5885c2c873297,
                mid_getIscL5I5_dff5885c2c873297,
                mid_getIscL5Q5_dff5885c2c873297,
                mid_getSvAccuracy_dff5885c2c873297,
                mid_getSvHealth_570ce0828f81a2c1,
                mid_getTGD_dff5885c2c873297,
                mid_getUraiEd_570ce0828f81a2c1,
                mid_getUraiNed0_570ce0828f81a2c1,
                mid_getUraiNed1_570ce0828f81a2c1,
                mid_getUraiNed2_570ce0828f81a2c1,
                mid_isCnv2_b108b35ef48e27bd,
                mid_setADot_17db3a65980d3441,
                mid_setDeltaN0Dot_17db3a65980d3441,
                mid_setIscL1CA_17db3a65980d3441,
                mid_setIscL1CD_17db3a65980d3441,
                mid_setIscL1CP_17db3a65980d3441,
                mid_setIscL2C_17db3a65980d3441,
                mid_setIscL5I5_17db3a65980d3441,
                mid_setIscL5Q5_17db3a65980d3441,
                mid_setSvAccuracy_17db3a65980d3441,
                mid_setSvHealth_99803b0791f320ff,
                mid_setTGD_17db3a65980d3441,
                mid_setUraiEd_99803b0791f320ff,
                mid_setUraiNed0_99803b0791f320ff,
                mid_setUraiNed1_99803b0791f320ff,
                mid_setUraiNed2_99803b0791f320ff,
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
