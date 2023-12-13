#ifndef org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H
#define org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonSatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getAttitudeProvider_fcce29ba1cf2a05e,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
