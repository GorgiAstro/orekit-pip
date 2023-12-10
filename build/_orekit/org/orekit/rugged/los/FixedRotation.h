#ifndef org_orekit_rugged_los_FixedRotation_H
#define org_orekit_rugged_los_FixedRotation_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class String;
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
      namespace los {
        class TimeIndependentLOSTransform;
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

        class FixedRotation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0d37035a6f00662a,
            mid_getParametersDrivers_20f6d2b462aaef4b,
            mid_transformLOS_c5b4a35f45a6f61e,
            mid_transformLOS_43c702ec4c12ce7d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FixedRotation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FixedRotation(const FixedRotation& obj) : ::java::lang::Object(obj) {}

          FixedRotation(const ::java::lang::String &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

          ::java::util::stream::Stream getParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FixedRotation);
        extern PyTypeObject *PY_TYPE(FixedRotation);

        class t_FixedRotation {
        public:
          PyObject_HEAD
          FixedRotation object;
          static PyObject *wrap_Object(const FixedRotation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
