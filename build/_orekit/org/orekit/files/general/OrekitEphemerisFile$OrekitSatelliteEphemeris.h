#ifndef org_orekit_files_general_OrekitEphemerisFile$OrekitSatelliteEphemeris_H
#define org_orekit_files_general_OrekitEphemerisFile$OrekitSatelliteEphemeris_H

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
      class TimeScale;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace general {
        class OrekitEphemerisFile$OrekitEphemerisSegment;
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace bodies {
      class CelestialBody;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class OrekitEphemerisFile$OrekitSatelliteEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_105e1eadb709d9ac,
            mid_addNewSegment_05767f11ee536b3d,
            mid_addNewSegment_6feb93c9e34b86f0,
            mid_addNewSegment_8e7fae6b83dd8266,
            mid_addNewSegment_caf0414bb350d8f3,
            mid_getId_d2c8eb4129821f0e,
            mid_getMu_9981f74b2d109da6,
            mid_getSegments_d751c1a57012b438,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitEphemerisFile$OrekitSatelliteEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitEphemerisFile$OrekitSatelliteEphemeris(const OrekitEphemerisFile$OrekitSatelliteEphemeris& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_INTERPOLATION_SIZE;

          OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String &);

          ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment addNewSegment(const ::java::util::List &) const;
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment addNewSegment(const ::java::util::List &, jint) const;
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment addNewSegment(const ::java::util::List &, const ::org::orekit::bodies::CelestialBody &, jint) const;
          ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment addNewSegment(const ::java::util::List &, const ::org::orekit::bodies::CelestialBody &, jint, const ::org::orekit::time::TimeScale &) const;
          ::java::lang::String getId() const;
          jdouble getMu() const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris);
        extern PyTypeObject *PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris);

        class t_OrekitEphemerisFile$OrekitSatelliteEphemeris {
        public:
          PyObject_HEAD
          OrekitEphemerisFile$OrekitSatelliteEphemeris object;
          static PyObject *wrap_Object(const OrekitEphemerisFile$OrekitSatelliteEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
