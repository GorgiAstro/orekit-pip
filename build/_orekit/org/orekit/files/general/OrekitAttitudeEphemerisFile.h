#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;
        class OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;
        class AttitudeEphemerisFile;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class OrekitAttitudeEphemerisFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addSatellite_94c5e4e03d5c25b2,
            mid_getSatellites_6f5a75ccd8c04465,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitAttitudeEphemerisFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitAttitudeEphemerisFile(const OrekitAttitudeEphemerisFile& obj) : ::java::lang::Object(obj) {}

          OrekitAttitudeEphemerisFile();

          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris addSatellite(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitAttitudeEphemerisFile);
        extern PyTypeObject *PY_TYPE(OrekitAttitudeEphemerisFile);

        class t_OrekitAttitudeEphemerisFile {
        public:
          PyObject_HEAD
          OrekitAttitudeEphemerisFile object;
          static PyObject *wrap_Object(const OrekitAttitudeEphemerisFile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
