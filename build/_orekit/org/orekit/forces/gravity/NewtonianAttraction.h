#ifndef org_orekit_forces_gravity_NewtonianAttraction_H
#define org_orekit_forces_gravity_NewtonianAttraction_H

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
    class Field;
  }
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        class NewtonianAttraction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_addContribution_0f28031d74393af0,
            mid_addContribution_9ecc165cc3358de0,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getMu_b0b988f941da47d8,
            mid_getMu_81cbf1832c7c6864,
            mid_getParametersDrivers_0d9551367f7ecdef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NewtonianAttraction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NewtonianAttraction(const NewtonianAttraction& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *CENTRAL_ATTRACTION_COEFFICIENT;

          NewtonianAttraction(jdouble);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          void addContribution(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations &) const;
          void addContribution(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::numerical::TimeDerivativesEquations &) const;
          jboolean dependsOnPositionOnly() const;
          jdouble getMu(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::hipparchus::CalculusFieldElement getMu(const ::org::hipparchus::Field &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::java::util::List getParametersDrivers() const;
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
        extern PyType_Def PY_TYPE_DEF(NewtonianAttraction);
        extern PyTypeObject *PY_TYPE(NewtonianAttraction);

        class t_NewtonianAttraction {
        public:
          PyObject_HEAD
          NewtonianAttraction object;
          static PyObject *wrap_Object(const NewtonianAttraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
