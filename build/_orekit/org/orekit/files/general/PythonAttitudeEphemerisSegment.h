#ifndef org_orekit_files_general_PythonAttitudeEphemerisSegment_H
#define org_orekit_files_general_PythonAttitudeEphemerisSegment_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
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
    namespace utils {
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
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

        class PythonAttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_finalize_0640e6acf969ed28,
            mid_getAngularCoordinates_0d9551367f7ecdef,
            mid_getAttitudeProvider_b44a04493534d299,
            mid_getAvailableDerivatives_c2e9b2b1c0db39b3,
            mid_getInterpolationMethod_3cffd47377eca18a,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getReferenceFrame_6c9bc0a928c56d4e,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
