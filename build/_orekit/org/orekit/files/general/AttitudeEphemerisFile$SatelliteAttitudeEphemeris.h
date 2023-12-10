#ifndef org_orekit_files_general_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_H
#define org_orekit_files_general_AttitudeEphemerisFile$SatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class List;
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

        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_getAttitudeProvider_05a2839e8fecde67,
            mid_getId_0090f7797e403f43,
            mid_getSegments_a6156df500549a58,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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