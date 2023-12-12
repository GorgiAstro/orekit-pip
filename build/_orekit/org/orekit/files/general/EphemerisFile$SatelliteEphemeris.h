#ifndef org_orekit_files_general_EphemerisFile$SatelliteEphemeris_H
#define org_orekit_files_general_EphemerisFile$SatelliteEphemeris_H

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
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class BoundedPropagator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class EphemerisFile$SatelliteEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_getId_3cffd47377eca18a,
            mid_getMu_557b8123390d8d0c,
            mid_getPropagator_fa108fc36df3791a,
            mid_getPropagator_587eea156586204f,
            mid_getSegments_0d9551367f7ecdef,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EphemerisFile$SatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EphemerisFile$SatelliteEphemeris(const EphemerisFile$SatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String getId() const;
          jdouble getMu() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator(const ::org::orekit::attitudes::AttitudeProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris);
        extern PyTypeObject *PY_TYPE(EphemerisFile$SatelliteEphemeris);

        class t_EphemerisFile$SatelliteEphemeris {
        public:
          PyObject_HEAD
          EphemerisFile$SatelliteEphemeris object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_EphemerisFile$SatelliteEphemeris *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EphemerisFile$SatelliteEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EphemerisFile$SatelliteEphemeris&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
