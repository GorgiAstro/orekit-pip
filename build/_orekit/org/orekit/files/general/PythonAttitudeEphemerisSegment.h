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

        class PythonAttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getAngularCoordinates_2afa36052df4765d,
            mid_getAttitudeProvider_f95b60a986adb964,
            mid_getAvailableDerivatives_3d53ef1ca7ad5f8c,
            mid_getInterpolationMethod_11b109bd155ca898,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getReferenceFrame_b86f9f61d97a7244,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
