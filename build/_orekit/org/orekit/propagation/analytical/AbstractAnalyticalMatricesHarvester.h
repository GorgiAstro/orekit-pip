#ifndef org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace propagation {
      namespace analytical {
        class AbstractAnalyticalGradientConverter;
      }
      class SpacecraftState;
      class AdditionalStateProvider;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
         public:
          enum {
            mid_freezeColumnsNames_0640e6acf969ed28,
            mid_getAdditionalState_2a145999b8c9a41d,
            mid_getGradientConverter_ad82abd02e8e26ae,
            mid_getJacobiansColumnsNames_0d9551367f7ecdef,
            mid_getName_3cffd47377eca18a,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getParametersJacobian_fc9cdfa83c55d6b2,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getStateTransitionMatrix_fc9cdfa83c55d6b2,
            mid_setReferenceState_8655761ebf04b503,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractAnalyticalMatricesHarvester(jobject obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractAnalyticalMatricesHarvester(const AbstractAnalyticalMatricesHarvester& obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {}

          void freezeColumnsNames() const;
          JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter getGradientConverter() const;
          ::java::util::List getJacobiansColumnsNames() const;
          ::java::lang::String getName() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
          void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(AbstractAnalyticalMatricesHarvester);
        extern PyTypeObject *PY_TYPE(AbstractAnalyticalMatricesHarvester);

        class t_AbstractAnalyticalMatricesHarvester {
        public:
          PyObject_HEAD
          AbstractAnalyticalMatricesHarvester object;
          static PyObject *wrap_Object(const AbstractAnalyticalMatricesHarvester&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
