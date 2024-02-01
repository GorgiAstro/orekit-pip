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
              mid_init$_96a1aa7c5f1486f9,
              mid_getA0_9981f74b2d109da6,
              mid_getA1_9981f74b2d109da6,
              mid_getA2_9981f74b2d109da6,
              mid_getDefinedTimeSystem_6110a08bedf3a63d,
              mid_getReferenceEpoch_80e11148db499dda,
              mid_getReferenceTimeSystem_6110a08bedf3a63d,
              mid_getSbasId_2283113625471906,
              mid_getTransmissionTime_9981f74b2d109da6,
              mid_getUtcId_134f3d1538d51fec,
              mid_setA0_1ad26e8c8c0cd65b,
              mid_setA1_1ad26e8c8c0cd65b,
              mid_setA2_1ad26e8c8c0cd65b,
              mid_setDefinedTimeSystem_70481f478101edcd,
              mid_setReferenceEpoch_8497861b879c83f7,
              mid_setReferenceTimeSystem_70481f478101edcd,
              mid_setSbasId_8b3600b2465c5922,
              mid_setTransmissionTime_1ad26e8c8c0cd65b,
              mid_setUtcId_807231b213efdb3e,
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
