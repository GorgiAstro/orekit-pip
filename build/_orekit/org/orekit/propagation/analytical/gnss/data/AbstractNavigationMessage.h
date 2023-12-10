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
                mid_init$_01fb2c777e5def32,
                mid_getAf2_dff5885c2c873297,
                mid_getCic_dff5885c2c873297,
                mid_getCis_dff5885c2c873297,
                mid_getCrc_dff5885c2c873297,
                mid_getCrs_dff5885c2c873297,
                mid_getCuc_dff5885c2c873297,
                mid_getCus_dff5885c2c873297,
                mid_getDeltaN_dff5885c2c873297,
                mid_getEpochToc_85703d13e302437e,
                mid_getIDot_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getSqrtA_dff5885c2c873297,
                mid_getTransmissionTime_dff5885c2c873297,
                mid_setAf2_17db3a65980d3441,
                mid_setCic_17db3a65980d3441,
                mid_setCis_17db3a65980d3441,
                mid_setCrc_17db3a65980d3441,
                mid_setCrs_17db3a65980d3441,
                mid_setCuc_17db3a65980d3441,
                mid_setCus_17db3a65980d3441,
                mid_setDeltaN_17db3a65980d3441,
                mid_setEpochToc_600a2a61652bc473,
                mid_setIDot_17db3a65980d3441,
                mid_setSqrtA_17db3a65980d3441,
                mid_setTransmissionTime_17db3a65980d3441,
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
