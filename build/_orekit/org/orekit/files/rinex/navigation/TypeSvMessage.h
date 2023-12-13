#ifndef org_orekit_files_rinex_navigation_TypeSvMessage_H
#define org_orekit_files_rinex_navigation_TypeSvMessage_H

#include "java/lang/Object.h"

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

          class TypeSvMessage : public ::java::lang::Object {
           public:
            enum {
              mid_getNavigationMessageType_1c1fa1e935d6cdcf,
              mid_getPrn_55546ef6a647f39b,
              mid_getSystem_21bd759cc4a81606,
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
