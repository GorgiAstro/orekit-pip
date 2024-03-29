#ifndef org_orekit_rugged_utils_RoughVisibilityEstimator_H
#define org_orekit_rugged_utils_RoughVisibilityEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
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
    namespace rugged {
      namespace utils {

        class RoughVisibilityEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1a08f636e2eae5cb,
            mid_estimateVisibility_c0124ed8e33562a0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RoughVisibilityEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RoughVisibilityEstimator(const RoughVisibilityEstimator& obj) : ::java::lang::Object(obj) {}

          RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::frames::Frame &, const ::java::util::List &);

          ::org::orekit::time::AbsoluteDate estimateVisibility(const ::org::orekit::bodies::GeodeticPoint &) const;
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
        extern PyType_Def PY_TYPE_DEF(RoughVisibilityEstimator);
        extern PyTypeObject *PY_TYPE(RoughVisibilityEstimator);

        class t_RoughVisibilityEstimator {
        public:
          PyObject_HEAD
          RoughVisibilityEstimator object;
          static PyObject *wrap_Object(const RoughVisibilityEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
