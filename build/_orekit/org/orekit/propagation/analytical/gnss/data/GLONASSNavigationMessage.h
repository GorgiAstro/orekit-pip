#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace data {
      class DataContext;
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
                mid_init$_ff7cb6c242604316,
                mid_getFrequencyNumber_d6ab429752e7c267,
                mid_getGammaN_9981f74b2d109da6,
                mid_getGroupDelayDifference_9981f74b2d109da6,
                mid_getHealthFlags_d6ab429752e7c267,
                mid_getPropagator_4f5533f6ec0d19aa,
                mid_getPropagator_14cd6f8fde919df8,
                mid_getPropagator_15a10a4b40e0f3b4,
                mid_getStatusFlags_d6ab429752e7c267,
                mid_getTN_9981f74b2d109da6,
                mid_getTime_9981f74b2d109da6,
                mid_getURA_9981f74b2d109da6,
                mid_setFrequencyNumber_1ad26e8c8c0cd65b,
                mid_setGammaN_1ad26e8c8c0cd65b,
                mid_setGroupDelayDifference_1ad26e8c8c0cd65b,
                mid_setHealthFlags_1ad26e8c8c0cd65b,
                mid_setStatusFlags_1ad26e8c8c0cd65b,
                mid_setTauN_1ad26e8c8c0cd65b,
                mid_setTime_1ad26e8c8c0cd65b,
                mid_setURA_1ad26e8c8c0cd65b,
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
