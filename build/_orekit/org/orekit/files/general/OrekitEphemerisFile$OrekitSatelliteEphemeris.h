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
      class TimeScale;
      class AbsoluteDate;
    }
    namespace files {
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
        class OrekitEphemerisFile$OrekitEphemerisSegment;
      }
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
            mid_init$_e939c6558ae8d313,
            mid_addNewSegment_6ea0d7acda887729,
            mid_addNewSegment_5411a944a514c8a7,
            mid_addNewSegment_3f2b61cfa6d81b14,
            mid_addNewSegment_37e60940d601d085,
            mid_getId_0090f7797e403f43,
            mid_getMu_456d9a2f64d6b28d,
            mid_getSegments_a6156df500549a58,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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
