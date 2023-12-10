#ifndef org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class SBASOrbitalElements;
          }
          class SBASPropagator;
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

            class SBASNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage {
             public:
              enum {
                mid_init$_0fa09c18fee449d5,
                mid_getAGf0_dff5885c2c873297,
                mid_getAGf1_dff5885c2c873297,
                mid_getIODN_570ce0828f81a2c1,
                mid_getPropagator_9dcd848e51dbc12c,
                mid_getPropagator_ae714d22f6e1d72f,
                mid_getPropagator_c8d67577d76c2250,
                mid_getTime_dff5885c2c873297,
                mid_getURA_dff5885c2c873297,
                mid_getWeek_570ce0828f81a2c1,
                mid_setAGf0_17db3a65980d3441,
                mid_setAGf1_17db3a65980d3441,
                mid_setIODN_17db3a65980d3441,
                mid_setTime_17db3a65980d3441,
                mid_setURA_17db3a65980d3441,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SBASNavigationMessage(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SBASNavigationMessage(const SBASNavigationMessage& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(obj) {}

              SBASNavigationMessage();

              jdouble getAGf0() const;
              jdouble getAGf1() const;
              jint getIODN() const;
              ::org::orekit::propagation::analytical::gnss::SBASPropagator getPropagator() const;
              ::org::orekit::propagation::analytical::gnss::SBASPropagator getPropagator(const ::org::orekit::frames::Frames &) const;
              ::org::orekit::propagation::analytical::gnss::SBASPropagator getPropagator(const ::org::orekit::frames::Frames &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, jdouble, jdouble) const;
              jdouble getTime() const;
              jdouble getURA() const;
              jint getWeek() const;
              void setAGf0(jdouble) const;
              void setAGf1(jdouble) const;
              void setIODN(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(SBASNavigationMessage);
            extern PyTypeObject *PY_TYPE(SBASNavigationMessage);

            class t_SBASNavigationMessage {
            public:
              PyObject_HEAD
              SBASNavigationMessage object;
              static PyObject *wrap_Object(const SBASNavigationMessage&);
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
