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
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getAttitudeProvider_b44a04493534d299,
            mid_getId_3cffd47377eca18a,
            mid_getSegments_0d9551367f7ecdef,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
