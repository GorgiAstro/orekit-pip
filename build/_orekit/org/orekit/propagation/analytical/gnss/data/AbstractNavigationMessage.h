#ifndef org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSOrbitalElements;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
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

            class AbstractNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::CommonGnssData {
             public:
              enum {
                mid_init$_2aa803b9073e6a76,
                mid_getAf2_b74f83833fdad017,
                mid_getCic_b74f83833fdad017,
                mid_getCis_b74f83833fdad017,
                mid_getCrc_b74f83833fdad017,
                mid_getCrs_b74f83833fdad017,
                mid_getCuc_b74f83833fdad017,
                mid_getCus_b74f83833fdad017,
                mid_getDeltaN_b74f83833fdad017,
                mid_getEpochToc_c325492395d89b24,
                mid_getIDot_b74f83833fdad017,
                mid_getMeanMotion_b74f83833fdad017,
                mid_getSqrtA_b74f83833fdad017,
                mid_getTransmissionTime_b74f83833fdad017,
                mid_setAf2_8ba9fe7a847cecad,
                mid_setCic_8ba9fe7a847cecad,
                mid_setCis_8ba9fe7a847cecad,
                mid_setCrc_8ba9fe7a847cecad,
                mid_setCrs_8ba9fe7a847cecad,
                mid_setCuc_8ba9fe7a847cecad,
                mid_setCus_8ba9fe7a847cecad,
                mid_setDeltaN_8ba9fe7a847cecad,
                mid_setEpochToc_02135a6ef25adb4b,
                mid_setIDot_8ba9fe7a847cecad,
                mid_setSqrtA_8ba9fe7a847cecad,
                mid_setTransmissionTime_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractNavigationMessage(const AbstractNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(obj) {}

              AbstractNavigationMessage(jdouble, jdouble, jint);

              jdouble getAf2() const;
              jdouble getCic() const;
              jdouble getCis() const;
              jdouble getCrc() const;
              jdouble getCrs() const;
              jdouble getCuc() const;
              jdouble getCus() const;
              jdouble getDeltaN() const;
              ::org::orekit::time::AbsoluteDate getEpochToc() const;
              jdouble getIDot() const;
              jdouble getMeanMotion() const;
              jdouble getSqrtA() const;
              jdouble getTransmissionTime() const;
              void setAf2(jdouble) const;
              void setCic(jdouble) const;
              void setCis(jdouble) const;
              void setCrc(jdouble) const;
              void setCrs(jdouble) const;
              void setCuc(jdouble) const;
              void setCus(jdouble) const;
              void setDeltaN(jdouble) const;
              void setEpochToc(const ::org::orekit::time::AbsoluteDate &) const;
              void setIDot(jdouble) const;
              void setSqrtA(jdouble) const;
              void setTransmissionTime(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractNavigationMessage);
            extern PyTypeObject *PY_TYPE(AbstractNavigationMessage);

            class t_AbstractNavigationMessage {
            public:
              PyObject_HEAD
              AbstractNavigationMessage object;
              static PyObject *wrap_Object(const AbstractNavigationMessage&);
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
