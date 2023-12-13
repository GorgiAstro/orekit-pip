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
    namespace time {
      class AbsoluteDate;
      class TimeScale;
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
            mid_init$_734b91ac30d5f9b4,
            mid_addNewSegment_1b2d5f6f1140772a,
            mid_addNewSegment_ceb877471350c2b6,
            mid_addNewSegment_392b89799e5fafbf,
            mid_addNewSegment_233dbeb496e98923,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getMu_b74f83833fdad017,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
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
