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
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
    }
    namespace frames {
      class Transform;
      class Frame;
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
            mid_init$_0f674d7dd1f18c6f,
            mid_init$_a57c926a167fd3b3,
            mid_getBodyFrame_2c51111cc6894ba1,
            mid_getBodyToInertial_976d4bc81671ce42,
            mid_getInertialFrame_2c51111cc6894ba1,
            mid_getInertialToBody_976d4bc81671ce42,
            mid_getMaxDate_c325492395d89b24,
            mid_getMinDate_c325492395d89b24,
            mid_getOvershootTolerance_b74f83833fdad017,
            mid_getScToInertial_976d4bc81671ce42,
            mid_getTStep_b74f83833fdad017,
            mid_isInRange_a35647bda2901f54,
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
