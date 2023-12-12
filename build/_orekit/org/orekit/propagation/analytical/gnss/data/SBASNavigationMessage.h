#ifndef org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

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
          namespace data {
            class SBASOrbitalElements;
          }
          class SBASPropagator;
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

            class SBASNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getAGf0_557b8123390d8d0c,
                mid_getAGf1_557b8123390d8d0c,
                mid_getIODN_412668abc8d889e9,
                mid_getPropagator_21e9d28a362393d1,
                mid_getPropagator_9172eb1b3e877a9f,
                mid_getPropagator_edafac9436d54b30,
                mid_getTime_557b8123390d8d0c,
                mid_getURA_557b8123390d8d0c,
                mid_getWeek_412668abc8d889e9,
                mid_setAGf0_10f281d777284cea,
                mid_setAGf1_10f281d777284cea,
                mid_setIODN_10f281d777284cea,
                mid_setTime_10f281d777284cea,
                mid_setURA_10f281d777284cea,
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
