#ifndef org_orekit_files_stk_STKEphemerisFile_H
#define org_orekit_files_stk_STKEphemerisFile_H

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
    namespace files {
      namespace general {
        class EphemerisFile;
      }
      namespace stk {
        class STKEphemerisFile$STKEphemeris;
        class STKEphemerisFile$STKEphemerisSegment;
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_82d6648e75220ef9,
            mid_getSTKVersion_11b109bd155ca898,
            mid_getSatellites_6f5a75ccd8c04465,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFile(const STKEphemerisFile& obj) : ::java::lang::Object(obj) {}

          STKEphemerisFile(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris &);

          ::java::lang::String getSTKVersion() const;
          ::java::util::Map getSatellites() const;
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
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFile);
        extern PyTypeObject *PY_TYPE(STKEphemerisFile);

        class t_STKEphemerisFile {
        public:
          PyObject_HEAD
          STKEphemerisFile object;
          static PyObject *wrap_Object(const STKEphemerisFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
