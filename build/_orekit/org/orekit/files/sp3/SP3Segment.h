#ifndef org_orekit_files_sp3_SP3Segment_H
#define org_orekit_files_sp3_SP3Segment_H

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
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
      }
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
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
      namespace sp3 {

        class SP3Segment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3147cb0ef3d8baac,
            mid_addCoordinate_4bd5741539acf9ea,
            mid_getAvailableDerivatives_6c4898d6ec0c3837,
            mid_getCoordinates_0d9551367f7ecdef,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getMu_557b8123390d8d0c,
            mid_getPropagator_fa108fc36df3791a,
            mid_getPropagator_587eea156586204f,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
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
