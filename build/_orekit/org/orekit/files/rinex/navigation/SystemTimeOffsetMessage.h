#ifndef org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H
#define org_orekit_files_rinex_navigation_SystemTimeOffsetMessage_H

#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class TimeSystem;
      class SatelliteSystem;
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
              mid_init$_70c1a5d645cab07e,
              mid_getA0_456d9a2f64d6b28d,
              mid_getA1_456d9a2f64d6b28d,
              mid_getA2_456d9a2f64d6b28d,
              mid_getDefinedTimeSystem_b58d3545739694ee,
              mid_getReferenceEpoch_aaa854c403487cf3,
              mid_getReferenceTimeSystem_b58d3545739694ee,
              mid_getSbasId_86f4b118dfb4f905,
              mid_getTransmissionTime_456d9a2f64d6b28d,
              mid_getUtcId_a04596e19ea6885d,
              mid_setA0_77e0f9a1f260e2e5,
              mid_setA1_77e0f9a1f260e2e5,
              mid_setA2_77e0f9a1f260e2e5,
              mid_setDefinedTimeSystem_4733fc8266dc541c,
              mid_setReferenceEpoch_e82d68cd9f886886,
              mid_setReferenceTimeSystem_4733fc8266dc541c,
              mid_setSbasId_b0e795d92cebacb6,
              mid_setTransmissionTime_77e0f9a1f260e2e5,
              mid_setUtcId_278244b1741477cb,
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
