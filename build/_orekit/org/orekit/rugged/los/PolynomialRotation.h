#ifndef org_orekit_rugged_los_PolynomialRotation_H
#define org_orekit_rugged_los_PolynomialRotation_H

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
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
      namespace los {
        class LOSTransform;
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

        class PolynomialRotation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3f98e2eefc09629d,
            mid_init$_e7ea792d5ffd15a3,
            mid_getParametersDrivers_11e4ca8182c1933d,
            mid_transformLOS_21cc615301704d02,
            mid_transformLOS_41d9b45a2778847c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialRotation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialRotation(const PolynomialRotation& obj) : ::java::lang::Object(obj) {}

          PolynomialRotation(const ::java::lang::String &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &);
          PolynomialRotation(const ::java::lang::String &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::analysis::polynomials::PolynomialFunction &);

          ::java::util::stream::Stream getParametersDrivers() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
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
        extern PyType_Def PY_TYPE_DEF(PolynomialRotation);
        extern PyTypeObject *PY_TYPE(PolynomialRotation);

        class t_PolynomialRotation {
        public:
          PyObject_HEAD
          PolynomialRotation object;
          static PyObject *wrap_Object(const PolynomialRotation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
