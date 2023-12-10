#ifndef org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H
#define org_orekit_propagation_analytical_AbstractAnalyticalMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace propagation {
      class AdditionalStateProvider;
      namespace analytical {
        class AbstractAnalyticalGradientConverter;
      }
      class SpacecraftState;
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
            mid_freezeColumnsNames_0fa09c18fee449d5,
            mid_getAdditionalState_cb44069ef445f941,
            mid_getGradientConverter_1bd2b3ae52af5114,
            mid_getJacobiansColumnsNames_2afa36052df4765d,
            mid_getName_11b109bd155ca898,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getParametersJacobian_9483b2ac438718ce,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_getStateTransitionMatrix_9483b2ac438718ce,
            mid_setReferenceState_0ee5c56004643a2e,
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
