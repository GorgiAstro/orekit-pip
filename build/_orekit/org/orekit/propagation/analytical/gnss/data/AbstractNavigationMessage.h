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
                mid_init$_905e65280a4e6722,
                mid_getAf2_9981f74b2d109da6,
                mid_getCic_9981f74b2d109da6,
                mid_getCis_9981f74b2d109da6,
                mid_getCrc_9981f74b2d109da6,
                mid_getCrs_9981f74b2d109da6,
                mid_getCuc_9981f74b2d109da6,
                mid_getCus_9981f74b2d109da6,
                mid_getDeltaN_9981f74b2d109da6,
                mid_getEpochToc_80e11148db499dda,
                mid_getIDot_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getSqrtA_9981f74b2d109da6,
                mid_getTransmissionTime_9981f74b2d109da6,
                mid_setAf2_1ad26e8c8c0cd65b,
                mid_setCic_1ad26e8c8c0cd65b,
                mid_setCis_1ad26e8c8c0cd65b,
                mid_setCrc_1ad26e8c8c0cd65b,
                mid_setCrs_1ad26e8c8c0cd65b,
                mid_setCuc_1ad26e8c8c0cd65b,
                mid_setCus_1ad26e8c8c0cd65b,
                mid_setDeltaN_1ad26e8c8c0cd65b,
                mid_setEpochToc_8497861b879c83f7,
                mid_setIDot_1ad26e8c8c0cd65b,
                mid_setSqrtA_1ad26e8c8c0cd65b,
                mid_setTransmissionTime_1ad26e8c8c0cd65b,
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
