#ifndef org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H
#define org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
            mid_init$_42c0b505a2daeafd,
            mid_acceleration_8954761face5e1a7,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getMu_dff5885c2c873297,
            mid_getMu_bf1d7732f1acb697,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getTideSystem_c68abf1ca1fc273e,
            mid_gradient_6677da9044a1cae1,
            mid_gradient_0f32a827e3dcb556,
            mid_nonCentralPart_7f2dc7ef92d08c2a,
            mid_value_7f2dc7ef92d08c2a,
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
          JArray< ::org::hipparchus::CalculusFieldElement > gradient(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &) const;
          JArray< jdouble > gradient(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble) const;
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
