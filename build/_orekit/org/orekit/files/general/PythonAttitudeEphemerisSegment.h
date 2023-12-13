#ifndef org_orekit_files_general_PythonAttitudeEphemerisSegment_H
#define org_orekit_files_general_PythonAttitudeEphemerisSegment_H

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
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getAngularCoordinates_e62d3bb06d56d7e3,
            mid_getAttitudeProvider_fcce29ba1cf2a05e,
            mid_getAvailableDerivatives_33d67d456ec94a0c,
            mid_getInterpolationMethod_1c1fa1e935d6cdcf,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getReferenceFrame_2c51111cc6894ba1,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
