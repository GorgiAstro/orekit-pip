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
      class OrbitType;
      class PositionAngleType;
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
            mid_freezeColumnsNames_ff7cb6c242604316,
            mid_getAdditionalState_e8a4ac02afc72623,
            mid_getGradientConverter_d2718eefd4d5ae94,
            mid_getJacobiansColumnsNames_d751c1a57012b438,
            mid_getName_d2c8eb4129821f0e,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getParametersJacobian_011bf64ebaa4e018,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getStateTransitionMatrix_011bf64ebaa4e018,
            mid_setReferenceState_72b846eb87f3af9a,
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
