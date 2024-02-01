#ifndef org_orekit_files_general_PythonAttitudeEphemerisSegment_H
#define org_orekit_files_general_PythonAttitudeEphemerisSegment_H

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
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class PythonAttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getAngularCoordinates_d751c1a57012b438,
            mid_getAttitudeProvider_228bb29d53a1472e,
            mid_getAvailableDerivatives_410860c8cd87dc25,
            mid_getInterpolationMethod_d2c8eb4129821f0e,
            mid_getInterpolationSamples_d6ab429752e7c267,
            mid_getReferenceFrame_cb151471db4570f0,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAttitudeEphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAttitudeEphemerisSegment(const PythonAttitudeEphemerisSegment& obj) : ::java::lang::Object(obj) {}

          PythonAttitudeEphemerisSegment();

          void finalize() const;
          ::java::util::List getAngularCoordinates() const;
          ::org::orekit::attitudes::BoundedAttitudeProvider getAttitudeProvider() const;
          ::org::orekit::utils::AngularDerivativesFilter getAvailableDerivatives() const;
          ::java::lang::String getInterpolationMethod() const;
          jint getInterpolationSamples() const;
          ::org::orekit::frames::Frame getReferenceFrame() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAttitudeEphemerisSegment);
        extern PyTypeObject *PY_TYPE(PythonAttitudeEphemerisSegment);

        class t_PythonAttitudeEphemerisSegment {
        public:
          PyObject_HEAD
          PythonAttitudeEphemerisSegment object;
          static PyObject *wrap_Object(const PythonAttitudeEphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
