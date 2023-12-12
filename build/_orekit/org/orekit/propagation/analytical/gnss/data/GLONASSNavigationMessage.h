#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class GLONASSNumericalPropagator;
      }
      namespace analytical {
        namespace gnss {
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
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
                mid_init$_0640e6acf969ed28,
                mid_getFrequencyNumber_412668abc8d889e9,
                mid_getGammaN_557b8123390d8d0c,
                mid_getGroupDelayDifference_557b8123390d8d0c,
                mid_getHealthFlags_412668abc8d889e9,
                mid_getPropagator_fc28496ebab1b1d8,
                mid_getPropagator_8fbba33c5477d47f,
                mid_getPropagator_adcfdbcc48ccedc1,
                mid_getStatusFlags_412668abc8d889e9,
                mid_getTN_557b8123390d8d0c,
                mid_getTime_557b8123390d8d0c,
                mid_getURA_557b8123390d8d0c,
                mid_setFrequencyNumber_10f281d777284cea,
                mid_setGammaN_10f281d777284cea,
                mid_setGroupDelayDifference_10f281d777284cea,
                mid_setHealthFlags_10f281d777284cea,
                mid_setStatusFlags_10f281d777284cea,
                mid_setTauN_10f281d777284cea,
                mid_setTime_10f281d777284cea,
                mid_setURA_10f281d777284cea,
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
