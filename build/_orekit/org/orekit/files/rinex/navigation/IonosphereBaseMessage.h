#ifndef org_orekit_files_rinex_navigation_IonosphereBaseMessage_H
#define org_orekit_files_rinex_navigation_IonosphereBaseMessage_H

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

          class IonosphereBaseMessage : public ::org::orekit::files::rinex::navigation::TypeSvMessage {
           public:
            enum {
              mid_init$_96a1aa7c5f1486f9,
              mid_getTransmitTime_80e11148db499dda,
              mid_setTransmitTime_8497861b879c83f7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphereBaseMessage(jobject obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphereBaseMessage(const IonosphereBaseMessage& obj) : ::org::orekit::files::rinex::navigation::TypeSvMessage(obj) {}

            IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            ::org::orekit::time::AbsoluteDate getTransmitTime() const;
            void setTransmitTime(const ::org::orekit::time::AbsoluteDate &) const;
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
          extern PyType_Def PY_TYPE_DEF(IonosphereBaseMessage);
          extern PyTypeObject *PY_TYPE(IonosphereBaseMessage);

          class t_IonosphereBaseMessage {
          public:
            PyObject_HEAD
            IonosphereBaseMessage object;
            static PyObject *wrap_Object(const IonosphereBaseMessage&);
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
