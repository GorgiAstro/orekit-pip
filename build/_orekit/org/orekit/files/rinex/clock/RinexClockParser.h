#ifndef org_orekit_files_rinex_clock_RinexClockParser_H
#define org_orekit_files_rinex_clock_RinexClockParser_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class InputStream;
    class BufferedReader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          class RinexClock;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          class RinexClockParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_parse_4c37f05826036982,
              mid_parse_57f3ad0a089e35e5,
              mid_parse_397982b7308487ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexClockParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexClockParser(const RinexClockParser& obj) : ::java::lang::Object(obj) {}

            RinexClockParser();

            ::org::orekit::files::rinex::clock::RinexClock parse(const ::java::io::InputStream &) const;
            ::org::orekit::files::rinex::clock::RinexClock parse(const ::java::lang::String &) const;
            ::org::orekit::files::rinex::clock::RinexClock parse(const ::java::io::BufferedReader &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          extern PyType_Def PY_TYPE_DEF(RinexClockParser);
          extern PyTypeObject *PY_TYPE(RinexClockParser);

          class t_RinexClockParser {
          public:
            PyObject_HEAD
            RinexClockParser object;
            static PyObject *wrap_Object(const RinexClockParser&);
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
