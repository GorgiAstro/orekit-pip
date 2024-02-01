#ifndef org_orekit_files_sp3_SP3Segment_H
#define org_orekit_files_sp3_SP3Segment_H

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
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
      namespace sp3 {
        class SP3Coordinate;
      }
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
      namespace sp3 {

        class SP3Segment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ed9d9be9f8a499ad,
            mid_addCoordinate_97cd3576e5040d2f,
            mid_getAvailableDerivatives_b9dfc27d8c56b5de,
            mid_getCoordinates_d751c1a57012b438,
            mid_getFrame_cb151471db4570f0,
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

          explicit SP3Segment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Segment(const SP3Segment& obj) : ::java::lang::Object(obj) {}

          SP3Segment(jdouble, const ::org::orekit::frames::Frame &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &);

          void addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate &) const;
          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::java::util::List getCoordinates() const;
          ::org::orekit::frames::Frame getFrame() const;
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
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Segment);
        extern PyTypeObject *PY_TYPE(SP3Segment);

        class t_SP3Segment {
        public:
          PyObject_HEAD
          SP3Segment object;
          static PyObject *wrap_Object(const SP3Segment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
