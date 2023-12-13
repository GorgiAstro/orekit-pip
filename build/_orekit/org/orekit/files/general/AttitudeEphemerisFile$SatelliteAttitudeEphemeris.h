#ifndef org_orekit_files_general_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_H
#define org_orekit_files_general_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_getAttitudeProvider_fcce29ba1cf2a05e,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttitudeEphemerisFile$SatelliteAttitudeEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttitudeEphemerisFile$SatelliteAttitudeEphemeris(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
          ::java::lang::String getId() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
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
        extern PyType_Def PY_TYPE_DEF(AttitudeEphemerisFile$SatelliteAttitudeEphemeris);
        extern PyTypeObject *PY_TYPE(AttitudeEphemerisFile$SatelliteAttitudeEphemeris);

        class t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris {
        public:
          PyObject_HEAD
          AttitudeEphemerisFile$SatelliteAttitudeEphemeris object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AttitudeEphemerisFile$SatelliteAttitudeEphemeris&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
