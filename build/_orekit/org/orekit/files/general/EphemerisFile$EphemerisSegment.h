#ifndef org_orekit_files_general_EphemerisFile$EphemerisSegment_H
#define org_orekit_files_general_EphemerisFile$EphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class BoundedPropagator;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        class EphemerisFile$EphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_getAvailableDerivatives_b9dfc27d8c56b5de,
            mid_getCoordinates_d751c1a57012b438,
            mid_getFrame_cb151471db4570f0,
            mid_getInertialFrame_cb151471db4570f0,
            mid_getInterpolationSamples_d6ab429752e7c267,
            mid_getMu_9981f74b2d109da6,
            mid_getPropagator_6c7bb9da59d24b03,
            mid_getPropagator_b59efa08d1230cd1,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EphemerisFile$EphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EphemerisFile$EphemerisSegment(const EphemerisFile$EphemerisSegment& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::java::util::List getCoordinates() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::frames::Frame getInertialFrame() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator(const ::org::orekit::attitudes::AttitudeProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(EphemerisFile$EphemerisSegment);
        extern PyTypeObject *PY_TYPE(EphemerisFile$EphemerisSegment);

        class t_EphemerisFile$EphemerisSegment {
        public:
          PyObject_HEAD
          EphemerisFile$EphemerisSegment object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EphemerisFile$EphemerisSegment *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EphemerisFile$EphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EphemerisFile$EphemerisSegment&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
