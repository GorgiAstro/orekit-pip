#ifndef org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_GLONASSNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
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
                mid_init$_0fa09c18fee449d5,
                mid_getFrequencyNumber_570ce0828f81a2c1,
                mid_getGammaN_dff5885c2c873297,
                mid_getGroupDelayDifference_dff5885c2c873297,
                mid_getHealthFlags_570ce0828f81a2c1,
                mid_getPropagator_a27ee2dfde4b9b92,
                mid_getPropagator_6290c448121b7580,
                mid_getPropagator_54ef271179bfa4dd,
                mid_getStatusFlags_570ce0828f81a2c1,
                mid_getTN_dff5885c2c873297,
                mid_getTime_dff5885c2c873297,
                mid_getURA_dff5885c2c873297,
                mid_setFrequencyNumber_17db3a65980d3441,
                mid_setGammaN_17db3a65980d3441,
                mid_setGroupDelayDifference_17db3a65980d3441,
                mid_setHealthFlags_17db3a65980d3441,
                mid_setStatusFlags_17db3a65980d3441,
                mid_setTauN_17db3a65980d3441,
                mid_setTime_17db3a65980d3441,
                mid_setURA_17db3a65980d3441,
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
