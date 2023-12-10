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
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
      namespace sp3 {
        class SP3Coordinate;
      }
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
      namespace sp3 {

        class SP3Segment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cf0a3e7ed2ee4790,
            mid_addCoordinate_f3f24d19500877ea,
            mid_getAvailableDerivatives_16e9a7b5414faf2d,
            mid_getCoordinates_2afa36052df4765d,
            mid_getFrame_b86f9f61d97a7244,
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
