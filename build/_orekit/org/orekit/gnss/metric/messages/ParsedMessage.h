#ifndef org_orekit_gnss_metric_messages_ParsedMessage_H
#define org_orekit_gnss_metric_messages_ParsedMessage_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          class ParsedMessage : public ::java::lang::Object {
           public:
            enum {
              mid_getTypeCode_d6ab429752e7c267,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParsedMessage(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParsedMessage(const ParsedMessage& obj) : ::java::lang::Object(obj) {}

            jint getTypeCode() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          extern PyType_Def PY_TYPE_DEF(ParsedMessage);
          extern PyTypeObject *PY_TYPE(ParsedMessage);

          class t_ParsedMessage {
          public:
            PyObject_HEAD
            ParsedMessage object;
            static PyObject *wrap_Object(const ParsedMessage&);
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
