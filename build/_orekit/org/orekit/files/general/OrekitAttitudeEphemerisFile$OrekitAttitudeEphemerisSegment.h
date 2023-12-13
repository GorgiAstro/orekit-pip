#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class Frame;
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

        class OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_15adcb0b841ab8b4,
            mid_getAngularCoordinates_e62d3bb06d56d7e3,
            mid_getAttitudeProvider_fcce29ba1cf2a05e,
            mid_getAvailableDerivatives_33d67d456ec94a0c,
            mid_getInterpolationMethod_1c1fa1e935d6cdcf,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getReferenceFrame_2c51111cc6894ba1,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
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
