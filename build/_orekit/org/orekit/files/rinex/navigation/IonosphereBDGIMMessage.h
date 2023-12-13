#ifndef org_orekit_files_rinex_navigation_IonosphereBDGIMMessage_H
#define org_orekit_files_rinex_navigation_IonosphereBDGIMMessage_H

#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
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

          class IonosphereBDGIMMessage : public ::org::orekit::files::rinex::navigation::IonosphereBaseMessage {
           public:
            enum {
              mid_init$_2f7855eb8fb85f32,
              mid_getAlpha_25e1757a36c4dde2,
              mid_setAlphaI_d5322b8b512aeb26,
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
