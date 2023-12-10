#ifndef org_orekit_forces_gravity_NewtonianAttraction_H
#define org_orekit_forces_gravity_NewtonianAttraction_H

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
    class Field;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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
            mid_init$_17db3a65980d3441,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_addContribution_5852b6ea0a71dcb4,
            mid_addContribution_9d1574df69c5f1ff,
            mid_dependsOnPositionOnly_b108b35ef48e27bd,
            mid_getMu_bf1d7732f1acb697,
            mid_getMu_cbbccee8cfc483ca,
            mid_getParametersDrivers_2afa36052df4765d,
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
