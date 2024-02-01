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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Transform;
      class Frame;
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
            mid_init$_8c483649802d4fb5,
            mid_init$_95fe784c2996af0d,
            mid_getBodyFrame_cb151471db4570f0,
            mid_getBodyToInertial_02ca17ac51b6a4b2,
            mid_getInertialFrame_cb151471db4570f0,
            mid_getInertialToBody_02ca17ac51b6a4b2,
            mid_getMaxDate_80e11148db499dda,
            mid_getMinDate_80e11148db499dda,
            mid_getOvershootTolerance_9981f74b2d109da6,
            mid_getScToInertial_02ca17ac51b6a4b2,
            mid_getTStep_9981f74b2d109da6,
            mid_isInRange_b16e79ba1b2830a1,
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
