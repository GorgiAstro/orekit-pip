#ifndef org_orekit_time_PythonParser_H
#define org_orekit_time_PythonParser_H

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
    class Throwable;
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

      class PythonParser : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_parse_e3101d06c7a1bcab,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonParser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonParser(const PythonParser& obj) : ::java::lang::Object(obj) {}

        PythonParser();

        void finalize() const;
        ::java::util::List parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonParser);
      extern PyTypeObject *PY_TYPE(PythonParser);

      class t_PythonParser {
      public:
        PyObject_HEAD
        PythonParser object;
        static PyObject *wrap_Object(const PythonParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
