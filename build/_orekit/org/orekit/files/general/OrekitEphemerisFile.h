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
        class OrekitEphemerisFile$OrekitEphemerisSegment;
        class EphemerisFile;
        class OrekitEphemerisFile$OrekitSatelliteEphemeris;
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
            mid_init$_7ae3461a92a43152,
            mid_addSatellite_0391d32f99b611cb,
            mid_getSatellites_d6753b7055940a54,
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
