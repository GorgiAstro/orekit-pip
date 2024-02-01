#ifndef org_orekit_files_general_AttitudeEphemerisFile$AttitudeEphemerisSegment_H
#define org_orekit_files_general_AttitudeEphemerisFile$AttitudeEphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
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

        class AttitudeEphemerisFile$AttitudeEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
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
