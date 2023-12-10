#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace data {
      class DataContext;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
      namespace numerical {
        class GLONASSNumericalPropagator;
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

            class GLONASSNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_getFrequencyNumber_f2f64475e4580546,
                mid_getGammaN_456d9a2f64d6b28d,
                mid_getGroupDelayDifference_456d9a2f64d6b28d,
                mid_getHealthFlags_f2f64475e4580546,
                mid_getPropagator_fbbdc460aba8e084,
                mid_getPropagator_d52842b358aff2b7,
                mid_getPropagator_1f228923689bc3a3,
                mid_getStatusFlags_f2f64475e4580546,
                mid_getTN_456d9a2f64d6b28d,
                mid_getTime_456d9a2f64d6b28d,
                mid_getURA_456d9a2f64d6b28d,
                mid_setFrequencyNumber_77e0f9a1f260e2e5,
                mid_setGammaN_77e0f9a1f260e2e5,
                mid_setGroupDelayDifference_77e0f9a1f260e2e5,
                mid_setHealthFlags_77e0f9a1f260e2e5,
                mid_setStatusFlags_77e0f9a1f260e2e5,
                mid_setTauN_77e0f9a1f260e2e5,
                mid_setTime_77e0f9a1f260e2e5,
                mid_setURA_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GLONASSNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GLONASSNavigationMessage(const GLONASSNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(obj) {}

              GLONASSNavigationMessage();

              jint getFrequencyNumber() const;
              jdouble getGammaN() const;
              jdouble getGroupDelayDifference() const;
              jint getHealthFlags() const;
              ::org::orekit::propagation::numerical::GLONASSNumericalPropagator getPropagator(jdouble) const;
              ::org::orekit::propagation::numerical::GLONASSNumericalPropagator getPropagator(jdouble, const ::org::orekit::data::DataContext &) const;
              ::org::orekit::propagation::numerical::GLONASSNumericalPropagator getPropagator(jdouble, const ::org::orekit::data::DataContext &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &, jdouble) const;
              jint getStatusFlags() const;
              jdouble getTN() const;
              jdouble getTime() const;
              jdouble getURA() const;
              void setFrequencyNumber(jdouble) const;
              void setGammaN(jdouble) const;
              void setGroupDelayDifference(jdouble) const;
              void setHealthFlags(jdouble) const;
              void setStatusFlags(jdouble) const;
              void setTauN(jdouble) const;
              void setTime(jdouble) const;
              void setURA(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(GLONASSNavigationMessage);
            extern PyTypeObject *PY_TYPE(GLONASSNavigationMessage);

            class t_GLONASSNavigationMessage {
            public:
              PyObject_HEAD
              GLONASSNavigationMessage object;
              static PyObject *wrap_Object(const GLONASSNavigationMessage&);
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
