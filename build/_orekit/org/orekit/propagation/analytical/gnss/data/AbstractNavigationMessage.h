#ifndef org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSOrbitalElements;
          }
        }
      }
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
                mid_init$_427af08acba367ca,
                mid_getAf2_557b8123390d8d0c,
                mid_getCic_557b8123390d8d0c,
                mid_getCis_557b8123390d8d0c,
                mid_getCrc_557b8123390d8d0c,
                mid_getCrs_557b8123390d8d0c,
                mid_getCuc_557b8123390d8d0c,
                mid_getCus_557b8123390d8d0c,
                mid_getDeltaN_557b8123390d8d0c,
                mid_getEpochToc_7a97f7e149e79afb,
                mid_getIDot_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
                mid_getSqrtA_557b8123390d8d0c,
                mid_getTransmissionTime_557b8123390d8d0c,
                mid_setAf2_10f281d777284cea,
                mid_setCic_10f281d777284cea,
                mid_setCis_10f281d777284cea,
                mid_setCrc_10f281d777284cea,
                mid_setCrs_10f281d777284cea,
                mid_setCuc_10f281d777284cea,
                mid_setCus_10f281d777284cea,
                mid_setDeltaN_10f281d777284cea,
                mid_setEpochToc_20affcbd28542333,
                mid_setIDot_10f281d777284cea,
                mid_setSqrtA_10f281d777284cea,
                mid_setTransmissionTime_10f281d777284cea,
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
