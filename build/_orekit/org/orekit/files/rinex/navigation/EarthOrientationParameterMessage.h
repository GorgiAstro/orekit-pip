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
              mid_init$_a82ff7a18fa6993f,
              mid_getDut1_dff5885c2c873297,
              mid_getDut1Dot_dff5885c2c873297,
              mid_getDut1DotDot_dff5885c2c873297,
              mid_getReferenceEpoch_85703d13e302437e,
              mid_getTransmissionTime_dff5885c2c873297,
              mid_getXp_dff5885c2c873297,
              mid_getXpDot_dff5885c2c873297,
              mid_getXpDotDot_dff5885c2c873297,
              mid_getYp_dff5885c2c873297,
              mid_getYpDot_dff5885c2c873297,
              mid_getYpDotDot_dff5885c2c873297,
              mid_setDut1_17db3a65980d3441,
              mid_setDut1Dot_17db3a65980d3441,
              mid_setDut1DotDot_17db3a65980d3441,
              mid_setReferenceEpoch_600a2a61652bc473,
              mid_setTransmissionTime_17db3a65980d3441,
              mid_setXp_17db3a65980d3441,
              mid_setXpDot_17db3a65980d3441,
              mid_setXpDotDot_17db3a65980d3441,
              mid_setYp_17db3a65980d3441,
              mid_setYpDot_17db3a65980d3441,
              mid_setYpDotDot_17db3a65980d3441,
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
