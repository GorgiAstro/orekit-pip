#ifndef org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H
#define org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace gnss {
      class SatelliteSystem;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class EarthOrientationParameterMessage : public ::org::orekit::files::rinex::navigation::TypeSvMessage {
           public:
            enum {
              mid_init$_e1b2f7b885c85083,
              mid_getDut1_557b8123390d8d0c,
              mid_getDut1Dot_557b8123390d8d0c,
              mid_getDut1DotDot_557b8123390d8d0c,
              mid_getReferenceEpoch_7a97f7e149e79afb,
              mid_getTransmissionTime_557b8123390d8d0c,
              mid_getXp_557b8123390d8d0c,
              mid_getXpDot_557b8123390d8d0c,
              mid_getXpDotDot_557b8123390d8d0c,
              mid_getYp_557b8123390d8d0c,
              mid_getYpDot_557b8123390d8d0c,
              mid_getYpDotDot_557b8123390d8d0c,
              mid_setDut1_10f281d777284cea,
              mid_setDut1Dot_10f281d777284cea,
              mid_setDut1DotDot_10f281d777284cea,
              mid_setReferenceEpoch_20affcbd28542333,
              mid_setTransmissionTime_10f281d777284cea,
              mid_setXp_10f281d777284cea,
              mid_setXpDot_10f281d777284cea,
              mid_setXpDotDot_10f281d777284cea,
              mid_setYp_10f281d777284cea,
              mid_setYpDot_10f281d777284cea,
              mid_setYpDotDot_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EarthOrientationParameterMessage(jobject obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EarthOrientationParameterMessage(const EarthOrientationParameterMessage& obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {}

            EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            jdouble getDut1() const;
            jdouble getDut1Dot() const;
            jdouble getDut1DotDot() const;
            ::org::orekit::time::AbsoluteDate getReferenceEpoch() const;
            jdouble getTransmissionTime() const;
            jdouble getXp() const;
            jdouble getXpDot() const;
            jdouble getXpDotDot() const;
            jdouble getYp() const;
            jdouble getYpDot() const;
            jdouble getYpDotDot() const;
            void setDut1(jdouble) const;
            void setDut1Dot(jdouble) const;
            void setDut1DotDot(jdouble) const;
            void setReferenceEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setTransmissionTime(jdouble) const;
            void setXp(jdouble) const;
            void setXpDot(jdouble) const;
            void setXpDotDot(jdouble) const;
            void setYp(jdouble) const;
            void setYpDot(jdouble) const;
            void setYpDotDot(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(EarthOrientationParameterMessage);
          extern PyTypeObject *PY_TYPE(EarthOrientationParameterMessage);

          class t_EarthOrientationParameterMessage {
          public:
            PyObject_HEAD
            EarthOrientationParameterMessage object;
            static PyObject *wrap_Object(const EarthOrientationParameterMessage&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
