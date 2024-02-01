#ifndef org_orekit_files_rinex_navigation_TypeSvMessage_H
#define org_orekit_files_rinex_navigation_TypeSvMessage_H

#include "java/lang/Object.h"

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

          class TypeSvMessage : public ::java::lang::Object {
           public:
            enum {
              mid_getNavigationMessageType_d2c8eb4129821f0e,
              mid_getPrn_d6ab429752e7c267,
              mid_getSystem_fb0bd27fcc3ba9fc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeSvMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeSvMessage(const TypeSvMessage& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String getNavigationMessageType() const;
            jint getPrn() const;
            ::org::orekit::gnss::SatelliteSystem getSystem() const;
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
          extern PyType_Def PY_TYPE_DEF(TypeSvMessage);
          extern PyTypeObject *PY_TYPE(TypeSvMessage);

          class t_TypeSvMessage {
          public:
            PyObject_HEAD
            TypeSvMessage object;
            static PyObject *wrap_Object(const TypeSvMessage&);
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
