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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class AbstractAnalyticalMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
         public:
          enum {
            mid_freezeColumnsNames_7ae3461a92a43152,
            mid_getAdditionalState_137d7db4f3f987f7,
            mid_getGradientConverter_5e2b3cffafaa419c,
            mid_getJacobiansColumnsNames_a6156df500549a58,
            mid_getName_0090f7797e403f43,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getParametersJacobian_63aee3ce1e412e46,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getStateTransitionMatrix_63aee3ce1e412e46,
            mid_setReferenceState_2b88003f931f70a7,
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
