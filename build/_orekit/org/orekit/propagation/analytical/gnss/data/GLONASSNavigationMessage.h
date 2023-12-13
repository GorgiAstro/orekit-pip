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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getFrequencyNumber_55546ef6a647f39b,
                mid_getGammaN_b74f83833fdad017,
                mid_getGroupDelayDifference_b74f83833fdad017,
                mid_getHealthFlags_55546ef6a647f39b,
                mid_getPropagator_225bbb183dcbf70d,
                mid_getPropagator_542c04c0314b4776,
                mid_getPropagator_2a89d49045963791,
                mid_getStatusFlags_55546ef6a647f39b,
                mid_getTN_b74f83833fdad017,
                mid_getTime_b74f83833fdad017,
                mid_getURA_b74f83833fdad017,
                mid_setFrequencyNumber_8ba9fe7a847cecad,
                mid_setGammaN_8ba9fe7a847cecad,
                mid_setGroupDelayDifference_8ba9fe7a847cecad,
                mid_setHealthFlags_8ba9fe7a847cecad,
                mid_setStatusFlags_8ba9fe7a847cecad,
                mid_setTauN_8ba9fe7a847cecad,
                mid_setTime_8ba9fe7a847cecad,
                mid_setURA_8ba9fe7a847cecad,
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
