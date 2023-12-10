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
    namespace rugged {
      namespace utils {
        class DerivativeGenerator;
      }
      namespace los {
        class LOSTransform;
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

        class PolynomialRotation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2b5df60ab5fcc3a1,
            mid_init$_8a73e3626e76fc00,
            mid_getParametersDrivers_20f6d2b462aaef4b,
            mid_transformLOS_5bf59b7055ded983,
            mid_transformLOS_ff297ae5ca0c9136,
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
