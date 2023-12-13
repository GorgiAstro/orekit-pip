#ifndef org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H
#define org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
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
              mid_init$_2f7855eb8fb85f32,
              mid_getDut1_b74f83833fdad017,
              mid_getDut1Dot_b74f83833fdad017,
              mid_getDut1DotDot_b74f83833fdad017,
              mid_getReferenceEpoch_c325492395d89b24,
              mid_getTransmissionTime_b74f83833fdad017,
              mid_getXp_b74f83833fdad017,
              mid_getXpDot_b74f83833fdad017,
              mid_getXpDotDot_b74f83833fdad017,
              mid_getYp_b74f83833fdad017,
              mid_getYpDot_b74f83833fdad017,
              mid_getYpDotDot_b74f83833fdad017,
              mid_setDut1_8ba9fe7a847cecad,
              mid_setDut1Dot_8ba9fe7a847cecad,
              mid_setDut1DotDot_8ba9fe7a847cecad,
              mid_setReferenceEpoch_02135a6ef25adb4b,
              mid_setTransmissionTime_8ba9fe7a847cecad,
              mid_setXp_8ba9fe7a847cecad,
              mid_setXpDot_8ba9fe7a847cecad,
              mid_setXpDotDot_8ba9fe7a847cecad,
              mid_setYp_8ba9fe7a847cecad,
              mid_setYpDot_8ba9fe7a847cecad,
              mid_setYpDotDot_8ba9fe7a847cecad,
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
