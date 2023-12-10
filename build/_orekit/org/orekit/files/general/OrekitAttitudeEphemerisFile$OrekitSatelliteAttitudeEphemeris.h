#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;
        class AttitudeEphemerisFile$SatelliteAttitudeEphemeris;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
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

        class OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d0bc48d5b00dc40c,
            mid_addNewSegment_3061e5b7306989ba,
            mid_getId_11b109bd155ca898,
            mid_getSegments_2afa36052df4765d,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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
