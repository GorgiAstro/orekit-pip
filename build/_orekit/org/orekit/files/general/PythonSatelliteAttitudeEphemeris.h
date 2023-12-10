#ifndef org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H
#define org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonSatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getAttitudeProvider_f95b60a986adb964,
            mid_getId_11b109bd155ca898,
            mid_getSegments_2afa36052df4765d,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSatelliteAttitudeEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSatelliteAttitudeEphemeris(const PythonSatelliteAttitudeEphemeris& obj) : ::java::lang::Object(obj) {}

          PythonSatelliteAttitudeEphemeris();

          void finalize() const;
          ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
          ::java::lang::String getId() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris);
        extern PyTypeObject *PY_TYPE(PythonSatelliteAttitudeEphemeris);

        class t_PythonSatelliteAttitudeEphemeris {
        public:
          PyObject_HEAD
          PythonSatelliteAttitudeEphemeris object;
          static PyObject *wrap_Object(const PythonSatelliteAttitudeEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
