#ifndef org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GNSSPropagator;
        }
      }
    }
    namespace frames {
      class Frames;
      class Frame;
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
                mid_getAngularVelocity_557b8123390d8d0c,
                mid_getCic_557b8123390d8d0c,
                mid_getCis_557b8123390d8d0c,
                mid_getCrc_557b8123390d8d0c,
                mid_getCrs_557b8123390d8d0c,
                mid_getCuc_557b8123390d8d0c,
                mid_getCus_557b8123390d8d0c,
                mid_getCycleDuration_557b8123390d8d0c,
                mid_getE_557b8123390d8d0c,
                mid_getI0_557b8123390d8d0c,
                mid_getIDot_557b8123390d8d0c,
                mid_getM0_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
                mid_getMu_557b8123390d8d0c,
                mid_getOmega0_557b8123390d8d0c,
                mid_getOmegaDot_557b8123390d8d0c,
                mid_getPRN_412668abc8d889e9,
                mid_getPa_557b8123390d8d0c,
                mid_getPropagator_2d63e0224266d4a7,
                mid_getPropagator_fd9ba085897912c9,
                mid_getPropagator_8c43a154c6c41be9,
                mid_getSma_557b8123390d8d0c,
                mid_getTime_557b8123390d8d0c,
                mid_getWeek_412668abc8d889e9,
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
