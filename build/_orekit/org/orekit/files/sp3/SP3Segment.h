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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
      }
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
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
      namespace sp3 {

        class SP3Segment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9301fbf0c29669d0,
            mid_addCoordinate_c9ef6fa09f2e2d36,
            mid_getAvailableDerivatives_237181d932324188,
            mid_getCoordinates_a6156df500549a58,
            mid_getFrame_c8fe21bcdac65bf6,
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
