#ifndef org_orekit_files_general_OrekitEphemerisFile_H
#define org_orekit_files_general_OrekitEphemerisFile_H

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
        class OrekitEphemerisFile$OrekitSatelliteEphemeris;
        class OrekitEphemerisFile$OrekitEphemerisSegment;
        class EphemerisFile;
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
      namespace general {

        class OrekitEphemerisFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addSatellite_2da7f9c5f2e66e29,
            mid_getSatellites_6f5a75ccd8c04465,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitEphemerisFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitEphemerisFile(const OrekitEphemerisFile& obj) : ::java::lang::Object(obj) {}

          OrekitEphemerisFile();

          ::org::orekit::files::general::OrekitEphemerisFile$OrekitSatelliteEphemeris addSatellite(const ::java::lang::String &) const;
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
      namespace general {
        extern PyType_Def PY_TYPE_DEF(OrekitEphemerisFile);
        extern PyTypeObject *PY_TYPE(OrekitEphemerisFile);

        class t_OrekitEphemerisFile {
        public:
          PyObject_HEAD
          OrekitEphemerisFile object;
          static PyObject *wrap_Object(const OrekitEphemerisFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
