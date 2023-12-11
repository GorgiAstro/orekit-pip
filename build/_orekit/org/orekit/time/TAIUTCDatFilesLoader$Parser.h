#ifndef org_orekit_time_TAIUTCDatFilesLoader$Parser_H
#define org_orekit_time_TAIUTCDatFilesLoader$Parser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class List;
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
      class UTCTAIOffsetsLoader$Parser;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TAIUTCDatFilesLoader$Parser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_parse_e3101d06c7a1bcab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TAIUTCDatFilesLoader$Parser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TAIUTCDatFilesLoader$Parser(const TAIUTCDatFilesLoader$Parser& obj) : ::java::lang::Object(obj) {}

        TAIUTCDatFilesLoader$Parser();

        ::java::util::List parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser);
      extern PyTypeObject *PY_TYPE(TAIUTCDatFilesLoader$Parser);

      class t_TAIUTCDatFilesLoader$Parser {
      public:
        PyObject_HEAD
        TAIUTCDatFilesLoader$Parser object;
        static PyObject *wrap_Object(const TAIUTCDatFilesLoader$Parser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
