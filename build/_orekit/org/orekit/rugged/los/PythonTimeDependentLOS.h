#ifndef org_orekit_rugged_los_PythonTimeDependentLOS_H
#define org_orekit_rugged_los_PythonTimeDependentLOS_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Throwable;
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
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace los {
        class TimeDependentLOS;
      }
      namespace utils {
        class DerivativeGenerator;
      }
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

        class PythonTimeDependentLOS : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getLOS_a5eda1966a92bc34,
            mid_getLOSDerivatives_f9ac050f4f50d612,
            mid_getNbPixels_d6ab429752e7c267,
            mid_getParametersDrivers_11e4ca8182c1933d,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTimeDependentLOS(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTimeDependentLOS(const PythonTimeDependentLOS& obj) : ::java::lang::Object(obj) {}

          PythonTimeDependentLOS();

          void finalize() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getLOS(jint, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getLOSDerivatives(jint, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
          jint getNbPixels() const;
          ::java::util::stream::Stream getParametersDrivers() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonTimeDependentLOS);
        extern PyTypeObject *PY_TYPE(PythonTimeDependentLOS);

        class t_PythonTimeDependentLOS {
        public:
          PyObject_HEAD
          PythonTimeDependentLOS object;
          static PyObject *wrap_Object(const PythonTimeDependentLOS&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
