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
      class Frames;
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

            class SBASNavigationMessage : public ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getAGf0_b74f83833fdad017,
                mid_getAGf1_b74f83833fdad017,
                mid_getIODN_55546ef6a647f39b,
                mid_getPropagator_52115c132377a3e0,
                mid_getPropagator_1ec3450f4d22f991,
                mid_getPropagator_eee280a13363e1ef,
                mid_getTime_b74f83833fdad017,
                mid_getURA_b74f83833fdad017,
                mid_getWeek_55546ef6a647f39b,
                mid_setAGf0_8ba9fe7a847cecad,
                mid_setAGf1_8ba9fe7a847cecad,
                mid_setIODN_8ba9fe7a847cecad,
                mid_setTime_8ba9fe7a847cecad,
                mid_setURA_8ba9fe7a847cecad,
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
