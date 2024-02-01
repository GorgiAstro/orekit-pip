#ifndef org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H
#define org_orekit_files_general_PythonSatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
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
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getAttitudeProvider_228bb29d53a1472e,
            mid_getId_d2c8eb4129821f0e,
            mid_getSegments_d751c1a57012b438,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
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
