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
                mid_init$_7ae3461a92a43152,
                mid_getAGf0_456d9a2f64d6b28d,
                mid_getAGf1_456d9a2f64d6b28d,
                mid_getIODN_f2f64475e4580546,
                mid_getPropagator_70869a450ee7c848,
                mid_getPropagator_4782ed39e925c984,
                mid_getPropagator_ad237026c17751de,
                mid_getTime_456d9a2f64d6b28d,
                mid_getURA_456d9a2f64d6b28d,
                mid_getWeek_f2f64475e4580546,
                mid_setAGf0_77e0f9a1f260e2e5,
                mid_setAGf1_77e0f9a1f260e2e5,
                mid_setIODN_77e0f9a1f260e2e5,
                mid_setTime_77e0f9a1f260e2e5,
                mid_setURA_77e0f9a1f260e2e5,
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
