#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_H

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
    namespace files {
      namespace general {
        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_105e1eadb709d9ac,
            mid_addNewSegment_52d5cf5eaece8ff9,
            mid_getId_d2c8eb4129821f0e,
            mid_getSegments_d751c1a57012b438,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DEFAULT_INTERPOLATION_METHOD;
          static jint DEFAULT_INTERPOLATION_SIZE;

          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String &);

          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment addNewSegment(const ::java::util::List &, const ::java::lang::String &, jint, const ::org::orekit::utils::AngularDerivativesFilter &) const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);
        extern PyTypeObject *PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        class t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris {
        public:
          PyObject_HEAD
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object;
          static PyObject *wrap_Object(const OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
