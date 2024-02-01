#ifndef org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H
#define org_orekit_propagation_analytical_gnss_data_SBASNavigationMessage_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"

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
          class SBASPropagator;
          namespace data {
            class SBASOrbitalElements;
          }
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
                mid_init$_ff7cb6c242604316,
                mid_getAGf0_9981f74b2d109da6,
                mid_getAGf1_9981f74b2d109da6,
                mid_getIODN_d6ab429752e7c267,
                mid_getPropagator_570e6e91a72444e8,
                mid_getPropagator_99e31c4392916504,
                mid_getPropagator_ca5ca79d0cc5a090,
                mid_getTime_9981f74b2d109da6,
                mid_getURA_9981f74b2d109da6,
                mid_getWeek_d6ab429752e7c267,
                mid_setAGf0_1ad26e8c8c0cd65b,
                mid_setAGf1_1ad26e8c8c0cd65b,
                mid_setIODN_1ad26e8c8c0cd65b,
                mid_setTime_1ad26e8c8c0cd65b,
                mid_setURA_1ad26e8c8c0cd65b,
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
