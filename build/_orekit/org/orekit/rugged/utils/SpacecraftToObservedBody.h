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
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
      class Transform;
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
            mid_init$_dfb6b0766f7098ca,
            mid_init$_8133bcffe71d69f7,
            mid_getBodyFrame_b86f9f61d97a7244,
            mid_getBodyToInertial_687985c59478d29c,
            mid_getInertialFrame_b86f9f61d97a7244,
            mid_getInertialToBody_687985c59478d29c,
            mid_getMaxDate_85703d13e302437e,
            mid_getMinDate_85703d13e302437e,
            mid_getOvershootTolerance_dff5885c2c873297,
            mid_getScToInertial_687985c59478d29c,
            mid_getTStep_dff5885c2c873297,
            mid_isInRange_db6d81809797ddaa,
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
