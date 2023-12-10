#ifndef org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GNSSPropagator;
        }
      }
    }
    namespace attitudes {
      class AttitudeProvider;
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

            class GNSSOrbitalElements : public ::org::orekit::time::TimeStamped {
             public:
              enum {
                mid_getAngularVelocity_456d9a2f64d6b28d,
                mid_getCic_456d9a2f64d6b28d,
                mid_getCis_456d9a2f64d6b28d,
                mid_getCrc_456d9a2f64d6b28d,
                mid_getCrs_456d9a2f64d6b28d,
                mid_getCuc_456d9a2f64d6b28d,
                mid_getCus_456d9a2f64d6b28d,
                mid_getCycleDuration_456d9a2f64d6b28d,
                mid_getE_456d9a2f64d6b28d,
                mid_getI0_456d9a2f64d6b28d,
                mid_getIDot_456d9a2f64d6b28d,
                mid_getM0_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
                mid_getMu_456d9a2f64d6b28d,
                mid_getOmega0_456d9a2f64d6b28d,
                mid_getOmegaDot_456d9a2f64d6b28d,
                mid_getPRN_f2f64475e4580546,
                mid_getPa_456d9a2f64d6b28d,
                mid_getPropagator_9bde3ac5a964eae4,
                mid_getPropagator_9251f1e2e600535b,
                mid_getPropagator_75251771a3c69b82,
                mid_getSma_456d9a2f64d6b28d,
                mid_getTime_456d9a2f64d6b28d,
                mid_getWeek_f2f64475e4580546,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GNSSOrbitalElements(jobject obj) : ::org::orekit::time::TimeStamped(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GNSSOrbitalElements(const GNSSOrbitalElements& obj) : ::org::orekit::time::TimeStamped(obj) {}

              jdouble getAngularVelocity() const;
              jdouble getCic() const;
              jdouble getCis() const;
              jdouble getCrc() const;
              jdouble getCrs() const;
              jdouble getCuc() const;
              jdouble getCus() const;
              jdouble getCycleDuration() const;
              jdouble getE() const;
              jdouble getI0() const;
              jdouble getIDot() const;
              jdouble getM0() const;
              jdouble getMeanMotion() const;
              jdouble getMu() const;
              jdouble getOmega0() const;
              jdouble getOmegaDot() const;
              jint getPRN() const;
              jdouble getPa() const;
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator getPropagator() const;
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator getPropagator(const ::org::orekit::frames::Frames &) const;
              ::org::orekit::propagation::analytical::gnss::GNSSPropagator getPropagator(const ::org::orekit::frames::Frames &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, jdouble) const;
              jdouble getSma() const;
              jdouble getTime() const;
              jint getWeek() const;
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
            extern PyType_Def PY_TYPE_DEF(GNSSOrbitalElements);
            extern PyTypeObject *PY_TYPE(GNSSOrbitalElements);

            class t_GNSSOrbitalElements {
            public:
              PyObject_HEAD
              GNSSOrbitalElements object;
              static PyObject *wrap_Object(const GNSSOrbitalElements&);
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
