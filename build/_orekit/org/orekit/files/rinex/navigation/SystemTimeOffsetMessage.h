#ifndef org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H
#define org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class TimeSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace rinex {
        namespace navigation {
          class UtcId;
          class SbasId;
        }
      }
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
              mid_init$_a82ff7a18fa6993f,
              mid_getA0_dff5885c2c873297,
              mid_getA1_dff5885c2c873297,
              mid_getA2_dff5885c2c873297,
              mid_getDefinedTimeSystem_47ed81afbc0cea8f,
              mid_getReferenceEpoch_85703d13e302437e,
              mid_getReferenceTimeSystem_47ed81afbc0cea8f,
              mid_getSbasId_8f6914b4bd2e2d71,
              mid_getTransmissionTime_dff5885c2c873297,
              mid_getUtcId_561540de83f061b2,
              mid_setA0_17db3a65980d3441,
              mid_setA1_17db3a65980d3441,
              mid_setA2_17db3a65980d3441,
              mid_setDefinedTimeSystem_188d9681dd6fbe69,
              mid_setReferenceEpoch_600a2a61652bc473,
              mid_setReferenceTimeSystem_188d9681dd6fbe69,
              mid_setSbasId_f0dccd70fadf61fe,
              mid_setTransmissionTime_17db3a65980d3441,
              mid_setUtcId_588659e8e1639977,
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
