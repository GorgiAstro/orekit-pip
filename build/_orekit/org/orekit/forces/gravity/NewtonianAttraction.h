#ifndef org_orekit_forces_gravity_NewtonianAttraction_H
#define org_orekit_forces_gravity_NewtonianAttraction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace forces {
      class ForceModel;
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
    class Field;
    class CalculusFieldElement;
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
            mid_init$_77e0f9a1f260e2e5,
            mid_acceleration_00aba28d3abe9a8c,
            mid_acceleration_78989e44b99f7cc2,
            mid_addContribution_3ae28f2cc7cbb00b,
            mid_addContribution_170c8a5902f676b2,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getMu_e912d21057defe63,
            mid_getMu_3c5960f880427fef,
            mid_getParametersDrivers_a6156df500549a58,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
