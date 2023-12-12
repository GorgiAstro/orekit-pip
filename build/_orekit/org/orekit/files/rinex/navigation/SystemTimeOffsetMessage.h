#ifndef org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H
#define org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class UtcId;
          class SbasId;
        }
      }
    }
    namespace gnss {
      class TimeSystem;
      class SatelliteSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class SystemTimeOffsetMessage : public ::org::orekit::files::rinex::navigation::TypeSvMessage {
           public:
            enum {
              mid_init$_e1b2f7b885c85083,
              mid_getA0_557b8123390d8d0c,
              mid_getA1_557b8123390d8d0c,
              mid_getA2_557b8123390d8d0c,
              mid_getDefinedTimeSystem_2700635415605e4d,
              mid_getReferenceEpoch_7a97f7e149e79afb,
              mid_getReferenceTimeSystem_2700635415605e4d,
              mid_getSbasId_f14deef4f5ae913f,
              mid_getTransmissionTime_557b8123390d8d0c,
              mid_getUtcId_1187194f96ded63f,
              mid_setA0_10f281d777284cea,
              mid_setA1_10f281d777284cea,
              mid_setA2_10f281d777284cea,
              mid_setDefinedTimeSystem_562aaa7511f66c1c,
              mid_setReferenceEpoch_20affcbd28542333,
              mid_setReferenceTimeSystem_562aaa7511f66c1c,
              mid_setSbasId_631a985e246bff70,
              mid_setTransmissionTime_10f281d777284cea,
              mid_setUtcId_43c2027d5aaa2ca7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SystemTimeOffsetMessage(jobject obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SystemTimeOffsetMessage(const SystemTimeOffsetMessage& obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {}

            SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            jdouble getA0() const;
            jdouble getA1() const;
            jdouble getA2() const;
            ::org::orekit::gnss::TimeSystem getDefinedTimeSystem() const;
            ::org::orekit::time::AbsoluteDate getReferenceEpoch() const;
            ::org::orekit::gnss::TimeSystem getReferenceTimeSystem() const;
            ::org::orekit::files::rinex::navigation::SbasId getSbasId() const;
            jdouble getTransmissionTime() const;
            ::org::orekit::files::rinex::navigation::UtcId getUtcId() const;
            void setA0(jdouble) const;
            void setA1(jdouble) const;
            void setA2(jdouble) const;
            void setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem &) const;
            void setReferenceEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem &) const;
            void setSbasId(const ::org::orekit::files::rinex::navigation::SbasId &) const;
            void setTransmissionTime(jdouble) const;
            void setUtcId(const ::org::orekit::files::rinex::navigation::UtcId &) const;
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
          extern PyType_Def PY_TYPE_DEF(SystemTimeOffsetMessage);
          extern PyTypeObject *PY_TYPE(SystemTimeOffsetMessage);

          class t_SystemTimeOffsetMessage {
          public:
            PyObject_HEAD
            SystemTimeOffsetMessage object;
            static PyObject *wrap_Object(const SystemTimeOffsetMessage&);
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
