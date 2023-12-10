#ifndef org_orekit_files_general_EphemerisFile$EphemerisSegment_H
#define org_orekit_files_general_EphemerisFile$EphemerisSegment_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class BoundedPropagator;
    }
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
            mid_getAvailableDerivatives_16e9a7b5414faf2d,
            mid_getCoordinates_2afa36052df4765d,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInertialFrame_b86f9f61d97a7244,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getMu_dff5885c2c873297,
            mid_getPropagator_08b52de56e2dfa9a,
            mid_getPropagator_ac89b644d37ed0fc,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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
