#ifndef org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_AbstractNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                mid_init$_b05c288d5068eccb,
                mid_getAf2_456d9a2f64d6b28d,
                mid_getCic_456d9a2f64d6b28d,
                mid_getCis_456d9a2f64d6b28d,
                mid_getCrc_456d9a2f64d6b28d,
                mid_getCrs_456d9a2f64d6b28d,
                mid_getCuc_456d9a2f64d6b28d,
                mid_getCus_456d9a2f64d6b28d,
                mid_getDeltaN_456d9a2f64d6b28d,
                mid_getEpochToc_aaa854c403487cf3,
                mid_getIDot_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getSqrtA_456d9a2f64d6b28d,
                mid_getTransmissionTime_456d9a2f64d6b28d,
                mid_setAf2_77e0f9a1f260e2e5,
                mid_setCic_77e0f9a1f260e2e5,
                mid_setCis_77e0f9a1f260e2e5,
                mid_setCrc_77e0f9a1f260e2e5,
                mid_setCrs_77e0f9a1f260e2e5,
                mid_setCuc_77e0f9a1f260e2e5,
                mid_setCus_77e0f9a1f260e2e5,
                mid_setDeltaN_77e0f9a1f260e2e5,
                mid_setEpochToc_e82d68cd9f886886,
                mid_setIDot_77e0f9a1f260e2e5,
                mid_setSqrtA_77e0f9a1f260e2e5,
                mid_setTransmissionTime_77e0f9a1f260e2e5,
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
