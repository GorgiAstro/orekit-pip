#ifndef org_orekit_files_general_EphemerisFile$EphemerisSegment_H
#define org_orekit_files_general_EphemerisFile$EphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class BoundedPropagator;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
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
            mid_getAvailableDerivatives_63bfdcc4b7a0536c,
            mid_getCoordinates_e62d3bb06d56d7e3,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInertialFrame_2c51111cc6894ba1,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getMu_b74f83833fdad017,
            mid_getPropagator_2d80cda3dc1f1422,
            mid_getPropagator_9e515362e8de0afe,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
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
