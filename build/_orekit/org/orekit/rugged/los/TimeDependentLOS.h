#ifndef org_orekit_rugged_los_TimeDependentLOS_H
#define org_orekit_rugged_los_TimeDependentLOS_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        class TimeDependentLOS : public ::java::lang::Object {
         public:
          enum {
            mid_getLOS_900365c7737b1f14,
            mid_getLOSDerivatives_6f9e440d79870fab,
            mid_getNbPixels_570ce0828f81a2c1,
            mid_getParametersDrivers_20f6d2b462aaef4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TimeDependentLOS(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TimeDependentLOS(const TimeDependentLOS& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getLOS(jint, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getLOSDerivatives(jint, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          jint getNbPixels() const;
          ::java::util::stream::Stream getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {
        extern PyType_Def PY_TYPE_DEF(TimeDependentLOS);
        extern PyTypeObject *PY_TYPE(TimeDependentLOS);

        class t_TimeDependentLOS {
        public:
          PyObject_HEAD
          TimeDependentLOS object;
          static PyObject *wrap_Object(const TimeDependentLOS&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
