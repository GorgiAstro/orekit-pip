#ifndef org_orekit_frames_PythonAbstractEopParser_H
#define org_orekit_frames_PythonAbstractEopParser_H

#include "org/orekit/frames/AbstractEopParser.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
    }
    namespace frames {
      class ItrfVersionProvider;
      class EOPEntry;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonAbstractEopParser : public ::org::orekit::frames::AbstractEopParser {
       public:
        enum {
          mid_init$_57dc7c227406b02a,
          mid_finalize_7ae3461a92a43152,
          mid_parse_c09602b54bab1317,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
