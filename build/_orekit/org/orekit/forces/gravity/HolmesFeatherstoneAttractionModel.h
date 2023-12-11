#ifndef org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H
#define org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H

#include "java/lang/Object.h"

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
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class TideSystemProvider;
          class TideSystem;
          class NormalizedSphericalHarmonicsProvider;
        }
      }
      class ForceModel;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
    namespace forces {
      namespace gravity {

        class HolmesFeatherstoneAttractionModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cb3e6c602ff511eb,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getMu_557b8123390d8d0c,
            mid_getMu_b0b988f941da47d8,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getTideSystem_7d9a2a298dcb49fa,
            mid_gradient_67cb4b664c333873,
            mid_gradient_e6b613f6a8d3aa0e,
            mid_nonCentralPart_53ff1fab7c351985,
            mid_value_53ff1fab7c351985,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HolmesFeatherstoneAttractionModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HolmesFeatherstoneAttractionModel(const HolmesFeatherstoneAttractionModel& obj) : ::java::lang::Object(obj) {}

          HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame &, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          jboolean dependsOnPositionOnly() const;
          jdouble getMu() const;
          jdouble getMu(const ::org::orekit::time::AbsoluteDate &) const;
          ::java::util::List getParametersDrivers() const;
          ::org::orekit::forces::gravity::potential::TideSystem getTideSystem() const;
          JArray< jdouble > gradient(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
          JArray< ::org::hipparchus::CalculusFieldElement > gradient(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &) const;
          jdouble nonCentralPart(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
          jdouble value(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        extern PyType_Def PY_TYPE_DEF(HolmesFeatherstoneAttractionModel);
        extern PyTypeObject *PY_TYPE(HolmesFeatherstoneAttractionModel);

        class t_HolmesFeatherstoneAttractionModel {
        public:
          PyObject_HEAD
          HolmesFeatherstoneAttractionModel object;
          static PyObject *wrap_Object(const HolmesFeatherstoneAttractionModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
