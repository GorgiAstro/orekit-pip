#ifndef org_orekit_rugged_utils_SpacecraftToObservedBody_H
#define org_orekit_rugged_utils_SpacecraftToObservedBody_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
      class Transform;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        class SpacecraftToObservedBody : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ef5497a4dfef0861,
            mid_init$_6b13bb0e20d61609,
            mid_getBodyFrame_c8fe21bcdac65bf6,
            mid_getBodyToInertial_d55545a64ea4a9a7,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_getInertialToBody_d55545a64ea4a9a7,
            mid_getMaxDate_aaa854c403487cf3,
            mid_getMinDate_aaa854c403487cf3,
            mid_getOvershootTolerance_456d9a2f64d6b28d,
            mid_getScToInertial_d55545a64ea4a9a7,
            mid_getTStep_456d9a2f64d6b28d,
            mid_isInRange_ee2067c5768b6768,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SpacecraftToObservedBody(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SpacecraftToObservedBody(const SpacecraftToObservedBody& obj) : ::java::lang::Object(obj) {}

          SpacecraftToObservedBody(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, const ::java::util::List &, const ::java::util::List &);
          SpacecraftToObservedBody(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, const ::java::util::List &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &);

          ::org::orekit::frames::Frame getBodyFrame() const;
          ::org::orekit::frames::Transform getBodyToInertial(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::frames::Frame getInertialFrame() const;
          ::org::orekit::frames::Transform getInertialToBody(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::time::AbsoluteDate getMaxDate() const;
          ::org::orekit::time::AbsoluteDate getMinDate() const;
          jdouble getOvershootTolerance() const;
          ::org::orekit::frames::Transform getScToInertial(const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getTStep() const;
          jboolean isInRange(const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        extern PyType_Def PY_TYPE_DEF(SpacecraftToObservedBody);
        extern PyTypeObject *PY_TYPE(SpacecraftToObservedBody);

        class t_SpacecraftToObservedBody {
        public:
          PyObject_HEAD
          SpacecraftToObservedBody object;
          static PyObject *wrap_Object(const SpacecraftToObservedBody&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif