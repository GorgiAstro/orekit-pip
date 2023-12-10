#ifndef org_orekit_time_UTCTAIOffsetsLoader$Parser_H
#define org_orekit_time_UTCTAIOffsetsLoader$Parser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class OffsetModel;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCTAIOffsetsLoader$Parser : public ::java::lang::Object {
       public:
        enum {
          mid_parse_19eef1cf230063a6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCTAIOffsetsLoader$Parser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIOffsetsLoader$Parser(const UTCTAIOffsetsLoader$Parser& obj) : ::java::lang::Object(obj) {}

        ::java::util::List parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser);
      extern PyTypeObject *PY_TYPE(UTCTAIOffsetsLoader$Parser);

      class t_UTCTAIOffsetsLoader$Parser {
      public:
        PyObject_HEAD
        UTCTAIOffsetsLoader$Parser object;
        static PyObject *wrap_Object(const UTCTAIOffsetsLoader$Parser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
