#ifndef org_orekit_frames_EopHistoryLoader$Parser_H
#define org_orekit_frames_EopHistoryLoader$Parser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPEntry;
      class EopHistoryLoader$Parser;
      class ItrfVersionProvider;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class TimeScales;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class InputStream;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EopHistoryLoader$Parser : public ::java::lang::Object {
       public:
        enum {
          mid_newBulletinBParser_1ee4493590943264,
          mid_newEopC04Parser_1ee4493590943264,
          mid_newFinalsColumnsParser_92a32df12ebf7815,
          mid_newFinalsXmlParser_1ee4493590943264,
          mid_parse_0fd0d48912c66ce3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EopHistoryLoader$Parser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EopHistoryLoader$Parser(const EopHistoryLoader$Parser& obj) : ::java::lang::Object(obj) {}

        static EopHistoryLoader$Parser newBulletinBParser(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::ItrfVersionProvider &, const ::org::orekit::time::TimeScales &);
        static EopHistoryLoader$Parser newEopC04Parser(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::ItrfVersionProvider &, const ::org::orekit::time::TimeScales &);
        static EopHistoryLoader$Parser newFinalsColumnsParser(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::ItrfVersionProvider &, const ::org::orekit::time::TimeScales &, jboolean);
        static EopHistoryLoader$Parser newFinalsXmlParser(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::ItrfVersionProvider &, const ::org::orekit::time::TimeScales &);
        ::java::util::Collection parse(const ::java::io::InputStream &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EopHistoryLoader$Parser);
      extern PyTypeObject *PY_TYPE(EopHistoryLoader$Parser);

      class t_EopHistoryLoader$Parser {
      public:
        PyObject_HEAD
        EopHistoryLoader$Parser object;
        static PyObject *wrap_Object(const EopHistoryLoader$Parser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
