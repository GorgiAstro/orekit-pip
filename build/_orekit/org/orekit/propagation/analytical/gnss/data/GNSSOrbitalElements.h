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
      class Frame;
      class Frames;
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
                mid_getAngularVelocity_dff5885c2c873297,
                mid_getCic_dff5885c2c873297,
                mid_getCis_dff5885c2c873297,
                mid_getCrc_dff5885c2c873297,
                mid_getCrs_dff5885c2c873297,
                mid_getCuc_dff5885c2c873297,
                mid_getCus_dff5885c2c873297,
                mid_getCycleDuration_dff5885c2c873297,
                mid_getE_dff5885c2c873297,
                mid_getI0_dff5885c2c873297,
                mid_getIDot_dff5885c2c873297,
                mid_getM0_dff5885c2c873297,
                mid_getMeanMotion_dff5885c2c873297,
                mid_getMu_dff5885c2c873297,
                mid_getOmega0_dff5885c2c873297,
                mid_getOmegaDot_dff5885c2c873297,
                mid_getPRN_570ce0828f81a2c1,
                mid_getPa_dff5885c2c873297,
                mid_getPropagator_6d7baa04e9d5997e,
                mid_getPropagator_1f6ce194c3ea0981,
                mid_getPropagator_c9b0be5ff079ea0a,
                mid_getSma_dff5885c2c873297,
                mid_getTime_dff5885c2c873297,
                mid_getWeek_570ce0828f81a2c1,
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
