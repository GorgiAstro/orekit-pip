#ifndef org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H
#define org_orekit_files_rinex_navigation_EarthOrientationParameterMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

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
              mid_init$_96a1aa7c5f1486f9,
              mid_getDut1_9981f74b2d109da6,
              mid_getDut1Dot_9981f74b2d109da6,
              mid_getDut1DotDot_9981f74b2d109da6,
              mid_getReferenceEpoch_80e11148db499dda,
              mid_getTransmissionTime_9981f74b2d109da6,
              mid_getXp_9981f74b2d109da6,
              mid_getXpDot_9981f74b2d109da6,
              mid_getXpDotDot_9981f74b2d109da6,
              mid_getYp_9981f74b2d109da6,
              mid_getYpDot_9981f74b2d109da6,
              mid_getYpDotDot_9981f74b2d109da6,
              mid_setDut1_1ad26e8c8c0cd65b,
              mid_setDut1Dot_1ad26e8c8c0cd65b,
              mid_setDut1DotDot_1ad26e8c8c0cd65b,
              mid_setReferenceEpoch_8497861b879c83f7,
              mid_setTransmissionTime_1ad26e8c8c0cd65b,
              mid_setXp_1ad26e8c8c0cd65b,
              mid_setXpDot_1ad26e8c8c0cd65b,
              mid_setXpDotDot_1ad26e8c8c0cd65b,
              mid_setYp_1ad26e8c8c0cd65b,
              mid_setYpDot_1ad26e8c8c0cd65b,
              mid_setYpDotDot_1ad26e8c8c0cd65b,
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
