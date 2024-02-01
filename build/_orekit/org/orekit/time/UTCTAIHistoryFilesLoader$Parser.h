#ifndef org_orekit_time_UTCTAIHistoryFilesLoader$Parser_H
#define org_orekit_time_UTCTAIHistoryFilesLoader$Parser_H

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
      class UTCTAIOffsetsLoader$Parser;
      class OffsetModel;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class UTCTAIHistoryFilesLoader$Parser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_parse_cf69cc549132f899,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTCTAIHistoryFilesLoader$Parser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTCTAIHistoryFilesLoader$Parser(const UTCTAIHistoryFilesLoader$Parser& obj) : ::java::lang::Object(obj) {}

        UTCTAIHistoryFilesLoader$Parser();

        ::java::util::List parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser);
      extern PyTypeObject *PY_TYPE(UTCTAIHistoryFilesLoader$Parser);

      class t_UTCTAIHistoryFilesLoader$Parser {
      public:
        PyObject_HEAD
        UTCTAIHistoryFilesLoader$Parser object;
        static PyObject *wrap_Object(const UTCTAIHistoryFilesLoader$Parser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
