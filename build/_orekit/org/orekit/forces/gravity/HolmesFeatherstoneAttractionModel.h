#ifndef org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H
#define org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider;
          class TideSystemProvider;
          class TideSystem;
        }
      }
      class ForceModel;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
            mid_init$_ec879b01512fab89,
            mid_acceleration_00aba28d3abe9a8c,
            mid_acceleration_78989e44b99f7cc2,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getMu_456d9a2f64d6b28d,
            mid_getMu_e912d21057defe63,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getTideSystem_b3b39360f3c8a6ac,
            mid_gradient_43a4a80712c0c6fe,
            mid_gradient_7bb320d4b9984b28,
            mid_nonCentralPart_19fa8b376132ce5a,
            mid_value_19fa8b376132ce5a,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
