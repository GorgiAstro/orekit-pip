#ifndef org_orekit_frames_PythonAbstractEopParser_H
#define org_orekit_frames_PythonAbstractEopParser_H

#include "org/orekit/frames/AbstractEopParser.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPEntry;
      class ItrfVersionProvider;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace time {
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonAbstractEopParser : public ::org::orekit::frames::AbstractEopParser {
       public:
        enum {
          mid_init$_15263d7ae605a6b6,
          mid_finalize_0fa09c18fee449d5,
          mid_parse_0fd0d48912c66ce3,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractEopParser(jobject obj) : ::org::orekit::frames::AbstractEopParser(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractEopParser(const PythonAbstractEopParser& obj) : ::org::orekit::frames::AbstractEopParser(obj) {}

        PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::org::orekit::frames::ItrfVersionProvider &, const ::org::orekit::time::TimeScale &);

        void finalize() const;
        ::java::util::Collection parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
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
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractEopParser);
      extern PyTypeObject *PY_TYPE(PythonAbstractEopParser);

      class t_PythonAbstractEopParser {
      public:
        PyObject_HEAD
        PythonAbstractEopParser object;
        static PyObject *wrap_Object(const PythonAbstractEopParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
