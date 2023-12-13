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
    namespace forces {
      class ForceModel;
      namespace gravity {
        namespace potential {
          class NormalizedSphericalHarmonicsProvider;
          class TideSystemProvider;
          class TideSystem;
        }
      }
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
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
            mid_init$_bb1db3646718fb67,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_acceleration_20bded0292328743,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getMu_b74f83833fdad017,
            mid_getMu_fd347811007a6ba3,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getTideSystem_b2b14af197a8eaf6,
            mid_gradient_35fa29941c7f6542,
            mid_gradient_8b9044e5f4efdb74,
            mid_nonCentralPart_f361b0df99f3dc75,
            mid_value_f361b0df99f3dc75,
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
