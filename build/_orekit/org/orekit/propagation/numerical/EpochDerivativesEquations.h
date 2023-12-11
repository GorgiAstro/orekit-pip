#ifndef org_orekit_propagation_numerical_EpochDerivativesEquations_H
#define org_orekit_propagation_numerical_EpochDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class NumericalPropagator;
      }
      namespace integration {
        class CombinedDerivatives;
        class AdditionalDerivativesProvider;
      }
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        class EpochDerivativesEquations : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fcf7e65889751518,
            mid_combinedDerivatives_5fc55a092d474e7c,
            mid_getDimension_412668abc8d889e9,
            mid_getName_3cffd47377eca18a,
            mid_setInitialJacobians_2c4cc16b11f79a6c,
            mid_setInitialJacobians_4e9faa373286a7e3,
            mid_setInitialJacobians_917e96f1f52f04b8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EpochDerivativesEquations(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EpochDerivativesEquations(const EpochDerivativesEquations& obj) : ::java::lang::Object(obj) {}

          static jint STATE_DIMENSION;

          EpochDerivativesEquations(const ::java::lang::String &, const ::org::orekit::propagation::numerical::NumericalPropagator &);

          ::org::orekit::propagation::integration::CombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
          jint getDimension() const;
          ::java::lang::String getName() const;
          ::org::orekit::propagation::SpacecraftState setInitialJacobians(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::SpacecraftState setInitialJacobians(const ::org::orekit::propagation::SpacecraftState &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &) const;
          void setInitialJacobians(const ::org::orekit::propagation::SpacecraftState &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        extern PyType_Def PY_TYPE_DEF(EpochDerivativesEquations);
        extern PyTypeObject *PY_TYPE(EpochDerivativesEquations);

        class t_EpochDerivativesEquations {
        public:
          PyObject_HEAD
          EpochDerivativesEquations object;
          static PyObject *wrap_Object(const EpochDerivativesEquations&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
