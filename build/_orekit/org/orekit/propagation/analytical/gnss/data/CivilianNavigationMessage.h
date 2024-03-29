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
                mid_getADot_9981f74b2d109da6,
                mid_getDeltaN0Dot_9981f74b2d109da6,
                mid_getIscL1CA_9981f74b2d109da6,
                mid_getIscL1CD_9981f74b2d109da6,
                mid_getIscL1CP_9981f74b2d109da6,
                mid_getIscL2C_9981f74b2d109da6,
                mid_getIscL5I5_9981f74b2d109da6,
                mid_getIscL5Q5_9981f74b2d109da6,
                mid_getSvAccuracy_9981f74b2d109da6,
                mid_getSvHealth_d6ab429752e7c267,
                mid_getTGD_9981f74b2d109da6,
                mid_getUraiEd_d6ab429752e7c267,
                mid_getUraiNed0_d6ab429752e7c267,
                mid_getUraiNed1_d6ab429752e7c267,
                mid_getUraiNed2_d6ab429752e7c267,
                mid_isCnv2_eee3de00fe971136,
                mid_setADot_1ad26e8c8c0cd65b,
                mid_setDeltaN0Dot_1ad26e8c8c0cd65b,
                mid_setIscL1CA_1ad26e8c8c0cd65b,
                mid_setIscL1CD_1ad26e8c8c0cd65b,
                mid_setIscL1CP_1ad26e8c8c0cd65b,
                mid_setIscL2C_1ad26e8c8c0cd65b,
                mid_setIscL5I5_1ad26e8c8c0cd65b,
                mid_setIscL5Q5_1ad26e8c8c0cd65b,
                mid_setSvAccuracy_1ad26e8c8c0cd65b,
                mid_setSvHealth_8fd427ab23829bf5,
                mid_setTGD_1ad26e8c8c0cd65b,
                mid_setUraiEd_8fd427ab23829bf5,
                mid_setUraiNed0_8fd427ab23829bf5,
                mid_setUraiNed1_8fd427ab23829bf5,
                mid_setUraiNed2_8fd427ab23829bf5,
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
