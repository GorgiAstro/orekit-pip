#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H

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
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
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
            mid_init$_b0f98f30412f2bf0,
            mid_getAngularCoordinates_2afa36052df4765d,
            mid_getAttitudeProvider_f95b60a986adb964,
            mid_getAvailableDerivatives_3d53ef1ca7ad5f8c,
            mid_getInterpolationMethod_11b109bd155ca898,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getReferenceFrame_b86f9f61d97a7244,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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
