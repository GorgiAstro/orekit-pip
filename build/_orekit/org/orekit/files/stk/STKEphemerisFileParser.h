#ifndef org_orekit_files_stk_STKEphemerisFileParser_H
#define org_orekit_files_stk_STKEphemerisFileParser_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
    }
    namespace files {
      namespace stk {
        class STKEphemerisFile$STKCoordinateSystem;
        class STKEphemerisFile;
      }
      namespace general {
        class EphemerisFileParser;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class UTCScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFileParser : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d9add9ff71134116,
            mid_parse_8357e440a0d0e83c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFileParser(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFileParser(const STKEphemerisFileParser& obj) : ::java::lang::Object(obj) {}

          STKEphemerisFileParser(const ::java::lang::String &, jdouble, const ::org::orekit::time::UTCScale &, const ::java::util::Map &);

          ::org::orekit::files::stk::STKEphemerisFile parse(const ::org::orekit::data::DataSource &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFileParser);
        extern PyTypeObject *PY_TYPE(STKEphemerisFileParser);

        class t_STKEphemerisFileParser {
        public:
          PyObject_HEAD
          STKEphemerisFileParser object;
          static PyObject *wrap_Object(const STKEphemerisFileParser&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
