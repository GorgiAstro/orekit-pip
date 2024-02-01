#ifndef org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
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
                mid_getAngularVelocity_9981f74b2d109da6,
                mid_getCic_9981f74b2d109da6,
                mid_getCis_9981f74b2d109da6,
                mid_getCrc_9981f74b2d109da6,
                mid_getCrs_9981f74b2d109da6,
                mid_getCuc_9981f74b2d109da6,
                mid_getCus_9981f74b2d109da6,
                mid_getCycleDuration_9981f74b2d109da6,
                mid_getE_9981f74b2d109da6,
                mid_getI0_9981f74b2d109da6,
                mid_getIDot_9981f74b2d109da6,
                mid_getM0_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                mid_getMu_9981f74b2d109da6,
                mid_getOmega0_9981f74b2d109da6,
                mid_getOmegaDot_9981f74b2d109da6,
                mid_getPRN_d6ab429752e7c267,
                mid_getPa_9981f74b2d109da6,
                mid_getPropagator_75cb4356e458488d,
                mid_getPropagator_ca0d0889bd02787a,
                mid_getPropagator_2fc27ad3b39f195f,
                mid_getSma_9981f74b2d109da6,
                mid_getTime_9981f74b2d109da6,
                mid_getWeek_d6ab429752e7c267,
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
