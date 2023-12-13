#ifndef org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H
#define org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class TimeSystem;
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class SbasId;
          class UtcId;
        }
      }
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
              mid_init$_2f7855eb8fb85f32,
              mid_getA0_b74f83833fdad017,
              mid_getA1_b74f83833fdad017,
              mid_getA2_b74f83833fdad017,
              mid_getDefinedTimeSystem_28830357acffb3e1,
              mid_getReferenceEpoch_c325492395d89b24,
              mid_getReferenceTimeSystem_28830357acffb3e1,
              mid_getSbasId_edaeb02a93410c90,
              mid_getTransmissionTime_b74f83833fdad017,
              mid_getUtcId_2e5abf1a6dc741a8,
              mid_setA0_8ba9fe7a847cecad,
              mid_setA1_8ba9fe7a847cecad,
              mid_setA2_8ba9fe7a847cecad,
              mid_setDefinedTimeSystem_885124f6a0a748ea,
              mid_setReferenceEpoch_02135a6ef25adb4b,
              mid_setReferenceTimeSystem_885124f6a0a748ea,
              mid_setSbasId_09073838d403e58a,
              mid_setTransmissionTime_8ba9fe7a847cecad,
              mid_setUtcId_eb9393677e867fe4,
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
