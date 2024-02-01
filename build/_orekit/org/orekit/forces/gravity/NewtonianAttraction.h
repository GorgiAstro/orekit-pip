#ifndef org_orekit_forces_gravity_NewtonianAttraction_H
#define org_orekit_forces_gravity_NewtonianAttraction_H

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
    namespace propagation {
      namespace numerical {
        class FieldTimeDerivativesEquations;
        class TimeDerivativesEquations;
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
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
            mid_init$_1ad26e8c8c0cd65b,
            mid_acceleration_9816b8f76e94356a,
            mid_acceleration_5e147f44c28a35c9,
            mid_addContribution_05bb906f491bab6b,
            mid_addContribution_2fcaaed225365615,
            mid_dependsOnPositionOnly_eee3de00fe971136,
            mid_getMu_209f08246d708042,
            mid_getMu_a50c21714c368030,
            mid_getParametersDrivers_d751c1a57012b438,
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
