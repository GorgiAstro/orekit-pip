#ifndef org_orekit_frames_PythonAbstractEopParser_H
#define org_orekit_frames_PythonAbstractEopParser_H

#include "org/orekit/frames/AbstractEopParser.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace frames {
      class EOPEntry;
      class ItrfVersionProvider;
    }
    namespace time {
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
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
          mid_init$_3a8bae5b0beb418d,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_parse_45e6e751205dacc3,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
