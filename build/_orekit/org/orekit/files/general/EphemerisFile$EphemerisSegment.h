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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class BoundedPropagator;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_getAvailableDerivatives_237181d932324188,
            mid_getCoordinates_a6156df500549a58,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_getInterpolationSamples_f2f64475e4580546,
            mid_getMu_456d9a2f64d6b28d,
            mid_getPropagator_e29a1189b47e1aad,
            mid_getPropagator_ecec515dedcdf4ce,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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
