#ifndef org_orekit_files_general_AttitudeEphemerisFile$AttitudeEphemerisSegment_H
#define org_orekit_files_general_AttitudeEphemerisFile$AttitudeEphemerisSegment_H

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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
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

        class AttitudeEphemerisFile$AttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_getAngularCoordinates_0d9551367f7ecdef,
            mid_getAttitudeProvider_b44a04493534d299,
            mid_getAvailableDerivatives_c2e9b2b1c0db39b3,
            mid_getInterpolationMethod_3cffd47377eca18a,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getReferenceFrame_6c9bc0a928c56d4e,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttitudeEphemerisFile$AttitudeEphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttitudeEphemerisFile$AttitudeEphemerisSegment(const AttitudeEphemerisFile$AttitudeEphemerisSegment& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment);
        extern PyTypeObject *PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment);

        class t_AttitudeEphemerisFile$AttitudeEphemerisSegment {
        public:
          PyObject_HEAD
          AttitudeEphemerisFile$AttitudeEphemerisSegment object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AttitudeEphemerisFile$AttitudeEphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AttitudeEphemerisFile$AttitudeEphemerisSegment&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
