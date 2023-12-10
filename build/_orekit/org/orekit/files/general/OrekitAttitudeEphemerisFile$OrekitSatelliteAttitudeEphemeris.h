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
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace general {
        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace propagation {
      class SpacecraftState;
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

        class OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e939c6558ae8d313,
            mid_addNewSegment_3f51626c949c7491,
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