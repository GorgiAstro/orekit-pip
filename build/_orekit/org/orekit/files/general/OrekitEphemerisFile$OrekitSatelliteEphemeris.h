#ifndef org_orekit_files_general_OrekitEphemerisFile$OrekitSatelliteEphemeris_H
#define org_orekit_files_general_OrekitEphemerisFile$OrekitSatelliteEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class OrekitEphemerisFile$OrekitEphemerisSegment;
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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

        class OrekitEphemerisFile$OrekitSatelliteEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f5ffdf29129ef90a,
            mid_addNewSegment_e6890ac796bcffec,
            mid_addNewSegment_e8724d2b2bf80340,
            mid_addNewSegment_da1b8e3a515ccb91,
            mid_addNewSegment_381a50f5d292489f,
            mid_getId_3cffd47377eca18a,
            mid_getMu_557b8123390d8d0c,
            mid_getSegments_0d9551367f7ecdef,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
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
