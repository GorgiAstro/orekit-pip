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
      class Transform;
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
      class TimeStampedAngularCoordinates;
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
            mid_init$_ef117304f0be0f1a,
            mid_init$_5df7079863934303,
            mid_getBodyFrame_6c9bc0a928c56d4e,
            mid_getBodyToInertial_df04e3927954349e,
            mid_getInertialFrame_6c9bc0a928c56d4e,
            mid_getInertialToBody_df04e3927954349e,
            mid_getMaxDate_7a97f7e149e79afb,
            mid_getMinDate_7a97f7e149e79afb,
            mid_getOvershootTolerance_557b8123390d8d0c,
            mid_getScToInertial_df04e3927954349e,
            mid_getTStep_557b8123390d8d0c,
            mid_isInRange_981023bfa4a8a093,
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
