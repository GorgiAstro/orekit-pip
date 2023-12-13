#ifndef org_orekit_rugged_refraction_MultiLayerModel_H
#define org_orekit_rugged_refraction_MultiLayerModel_H

#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class ExtendedEllipsoid;
        class NormalizedGeodeticPoint;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
      namespace refraction {
        class ConstantRefractionLayer;
      }
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
      namespace refraction {

        class MultiLayerModel : public ::org::orekit::rugged::refraction::AtmosphericRefraction {
         public:
          enum {
            mid_init$_035235491296adca,
            mid_init$_129da8e177ba9d38,
            mid_applyCorrection_88676b739a4ea0ca,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLayerModel(jobject obj) : ::org::orekit::rugged::refraction::AtmosphericRefraction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLayerModel(const MultiLayerModel& obj) : ::org::orekit::rugged::refraction::AtmosphericRefraction(obj) {}

          MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid &);
          MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid &, const ::java::util::List &);

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &, const ::org::orekit::rugged::intersection::IntersectionAlgorithm &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        extern PyType_Def PY_TYPE_DEF(MultiLayerModel);
        extern PyTypeObject *PY_TYPE(MultiLayerModel);

        class t_MultiLayerModel {
        public:
          PyObject_HEAD
          MultiLayerModel object;
          static PyObject *wrap_Object(const MultiLayerModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
