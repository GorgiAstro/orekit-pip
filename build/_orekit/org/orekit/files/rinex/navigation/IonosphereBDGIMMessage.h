#ifndef org_orekit_files_rinex_navigation_IonosphereBDGIMMessage_H
#define org_orekit_files_rinex_navigation_IonosphereBDGIMMessage_H

#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"

namespace org {
  namespace orekit {
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

          class IonosphereBDGIMMessage : public ::org::orekit::files::rinex::navigation::IonosphereBaseMessage {
           public:
            enum {
              mid_init$_a82ff7a18fa6993f,
              mid_getAlpha_60c7040667a7dc5c,
              mid_setAlphaI_bb79ca80d85d0a66,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IonosphereBDGIMMessage(jobject obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IonosphereBDGIMMessage(const IonosphereBDGIMMessage& obj) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(obj) {}

            IonosphereBDGIMMessage(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::java::lang::String &);

            JArray< jdouble > getAlpha() const;
            void setAlphaI(jint, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(IonosphereBDGIMMessage);
          extern PyTypeObject *PY_TYPE(IonosphereBDGIMMessage);

          class t_IonosphereBDGIMMessage {
          public:
            PyObject_HEAD
            IonosphereBDGIMMessage object;
            static PyObject *wrap_Object(const IonosphereBDGIMMessage&);
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
