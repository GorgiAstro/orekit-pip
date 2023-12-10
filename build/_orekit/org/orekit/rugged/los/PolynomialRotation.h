#ifndef org_orekit_rugged_los_PolynomialRotation_H
#define org_orekit_rugged_los_PolynomialRotation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        class PolynomialRotation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f3ddfbc8d7d5f3f3,
            mid_init$_d0946bec099eed6a,
            mid_getParametersDrivers_a68a17dd093f796d,
            mid_transformLOS_074444dab4c2f526,
            mid_transformLOS_c7e6a6851bf74340,
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