#ifndef org_orekit_rugged_intersection_PythonIntersectionAlgorithmI_H
#define org_orekit_rugged_intersection_PythonIntersectionAlgorithmI_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class NormalizedGeodeticPoint;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        class PythonIntersectionAlgorithmI : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getAlgorithmId_65c2eab2e30f9d2d,
            mid_getElevation_82f92590f4247da1,
            mid_intersection_5c14acfe95406f7d,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_refineIntersection_1feab13663326a32,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIntersectionAlgorithmI(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIntersectionAlgorithmI(const PythonIntersectionAlgorithmI& obj) : ::java::lang::Object(obj) {}

          PythonIntersectionAlgorithmI();

          void finalize() const;
          ::org::orekit::rugged::api::AlgorithmId getAlgorithmId() const;
          jdouble getElevation(jdouble, jdouble) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        extern PyType_Def PY_TYPE_DEF(PythonIntersectionAlgorithmI);
        extern PyTypeObject *PY_TYPE(PythonIntersectionAlgorithmI);

        class t_PythonIntersectionAlgorithmI {
        public:
          PyObject_HEAD
          PythonIntersectionAlgorithmI object;
          static PyObject *wrap_Object(const PythonIntersectionAlgorithmI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
