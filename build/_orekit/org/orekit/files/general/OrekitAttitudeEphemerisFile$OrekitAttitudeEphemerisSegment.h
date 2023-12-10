#ifndef org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H
#define org_orekit_files_general_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace files {
      namespace general {
        class AttitudeEphemerisFile$AttitudeEphemerisSegment;
      }
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
            mid_init$_ae669fdf8f568652,
            mid_getAngularCoordinates_a6156df500549a58,
            mid_getAttitudeProvider_05a2839e8fecde67,
            mid_getAvailableDerivatives_c14c1c09874639c8,
            mid_getInterpolationMethod_0090f7797e403f43,
            mid_getInterpolationSamples_f2f64475e4580546,
            mid_getReferenceFrame_c8fe21bcdac65bf6,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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
