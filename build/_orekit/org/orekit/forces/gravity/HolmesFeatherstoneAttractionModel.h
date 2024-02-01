#ifndef org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H
#define org_orekit_forces_gravity_HolmesFeatherstoneAttractionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
  }
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
            mid_init$_5d920aa6f3a7a368,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getMu_9981f74b2d109da6,
            mid_getMu_209f08246d708042,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getTideSystem_1e0f912623cd4841,
            mid_gradient_e8d042e044715b4f,
            mid_gradient_84cf09340692b7fd,
            mid_nonCentralPart_07ed88f88bd9659c,
            mid_value_07ed88f88bd9659c,
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
