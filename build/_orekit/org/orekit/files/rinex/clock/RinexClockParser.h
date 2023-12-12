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
              mid_init$_0640e6acf969ed28,
              mid_parse_70775d8267b42e37,
              mid_parse_f636ade7825ced3d,
              mid_parse_e9ac07eb307c88c8,
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
