#ifndef org_orekit_frames_PythonAbstractEopParser_H
#define org_orekit_frames_PythonAbstractEopParser_H

#include "org/orekit/frames/AbstractEopParser.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class ItrfVersionProvider;
      class EOPEntry;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace time {
      class TimeScale;
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
          mid_init$_d3156720a4b7f5bd,
          mid_finalize_ff7cb6c242604316,
          mid_parse_b79893aca4083ad5,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
