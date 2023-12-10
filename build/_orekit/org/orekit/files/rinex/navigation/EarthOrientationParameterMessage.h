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
    namespace time {
      class AbsoluteDate;
    }
    namespace gnss {
      class SatelliteSystem;
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
              mid_init$_70c1a5d645cab07e,
              mid_getDut1_456d9a2f64d6b28d,
              mid_getDut1Dot_456d9a2f64d6b28d,
              mid_getDut1DotDot_456d9a2f64d6b28d,
              mid_getReferenceEpoch_aaa854c403487cf3,
              mid_getTransmissionTime_456d9a2f64d6b28d,
              mid_getXp_456d9a2f64d6b28d,
              mid_getXpDot_456d9a2f64d6b28d,
              mid_getXpDotDot_456d9a2f64d6b28d,
              mid_getYp_456d9a2f64d6b28d,
              mid_getYpDot_456d9a2f64d6b28d,
              mid_getYpDotDot_456d9a2f64d6b28d,
              mid_setDut1_77e0f9a1f260e2e5,
              mid_setDut1Dot_77e0f9a1f260e2e5,
              mid_setDut1DotDot_77e0f9a1f260e2e5,
              mid_setReferenceEpoch_e82d68cd9f886886,
              mid_setTransmissionTime_77e0f9a1f260e2e5,
              mid_setXp_77e0f9a1f260e2e5,
              mid_setXpDot_77e0f9a1f260e2e5,
              mid_setXpDotDot_77e0f9a1f260e2e5,
              mid_setYp_77e0f9a1f260e2e5,
              mid_setYpDot_77e0f9a1f260e2e5,
              mid_setYpDotDot_77e0f9a1f260e2e5,
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
