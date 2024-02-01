#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
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

        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5653bfa3cc0d261b,
            mid_getAngularCoordinates_d751c1a57012b438,
            mid_getAttitudeProvider_228bb29d53a1472e,
            mid_getAvailableDerivatives_410860c8cd87dc25,
            mid_getInterpolationMethod_d2c8eb4129821f0e,
            mid_getInterpolationSamples_d6ab429752e7c267,
            mid_getReferenceFrame_cb151471db4570f0,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment& obj) : ::java::lang::Object(obj) {}

          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List &, const ::java::lang::String &, jint, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::AngularDerivativesFilter &);

          ::java::util::List getAngularCoordinates() const;
          ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
          ::org::orekit::utils::AngularDerivativesFilter getAvailableDerivatives() const;
          ::java::lang::String getInterpolationMethod() const;
          jint getInterpolationSamples() const;
          ::org::orekit::frames::Frame getReferenceFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);
        extern PyTypeObject *PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);

        class t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment {
        public:
          PyObject_HEAD
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment object;
          static PyObject *wrap_Object(const OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
