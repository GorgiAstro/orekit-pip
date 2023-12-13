#ifndef org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      namespace analytical {
        class AbstractAnalyticalGradientConverter;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
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
    namespace propagation {
      namespace analytical {

        class AbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
         public:
          enum {
            mid_freezeColumnsNames_a1fa5dae97ea5ed2,
            mid_getAdditionalState_f227e5f48720b798,
            mid_getGradientConverter_3c9b6f24c90a46d6,
            mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getParametersJacobian_b7aa5791b069a41f,
            mid_getPositionAngleType_c25055891f180348,
            mid_getStateTransitionMatrix_b7aa5791b069a41f,
            mid_setReferenceState_280c3390961e0a50,
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
