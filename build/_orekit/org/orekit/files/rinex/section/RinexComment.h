#ifndef org_orekit_files_rinex_section_RinexComment_H
#define org_orekit_files_rinex_section_RinexComment_H

#include "java/lang/Object.h"

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
        namespace section {

          class RinexComment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5817b937d38eafc1,
              mid_getLineNumber_55546ef6a647f39b,
              mid_getText_1c1fa1e935d6cdcf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexComment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexComment(const RinexComment& obj) : ::java::lang::Object(obj) {}

            RinexComment(jint, const ::java::lang::String &);

            jint getLineNumber() const;
            ::java::lang::String getText() const;
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(RinexComment);
          extern PyTypeObject *PY_TYPE(RinexComment);

          class t_RinexComment {
          public:
            PyObject_HEAD
            RinexComment object;
            static PyObject *wrap_Object(const RinexComment&);
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
