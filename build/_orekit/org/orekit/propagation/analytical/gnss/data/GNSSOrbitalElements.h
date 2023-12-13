#ifndef org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H
#define org_orekit_propagation_analytical_gnss_data_GNSSOrbitalElements_H

#include "org/orekit/time/TimeStamped.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
                mid_getAngularVelocity_b74f83833fdad017,
                mid_getCic_b74f83833fdad017,
                mid_getCis_b74f83833fdad017,
                mid_getCrc_b74f83833fdad017,
                mid_getCrs_b74f83833fdad017,
                mid_getCuc_b74f83833fdad017,
                mid_getCus_b74f83833fdad017,
                mid_getCycleDuration_b74f83833fdad017,
                mid_getE_b74f83833fdad017,
                mid_getI0_b74f83833fdad017,
                mid_getIDot_b74f83833fdad017,
                mid_getM0_b74f83833fdad017,
                mid_getMeanMotion_b74f83833fdad017,
                mid_getMu_b74f83833fdad017,
                mid_getOmega0_b74f83833fdad017,
                mid_getOmegaDot_b74f83833fdad017,
                mid_getPRN_55546ef6a647f39b,
                mid_getPa_b74f83833fdad017,
                mid_getPropagator_8528f550d471e3fb,
                mid_getPropagator_b4ee63e071e2baaa,
                mid_getPropagator_0454d94a691f8539,
                mid_getSma_b74f83833fdad017,
                mid_getTime_b74f83833fdad017,
                mid_getWeek_55546ef6a647f39b,
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
