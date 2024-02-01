#ifndef org_orekit_propagation_numerical_EpochDerivativesEquations_H
#define org_orekit_propagation_numerical_EpochDerivativesEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class AdditionalDerivativesProvider;
        class CombinedDerivatives;
      }
      namespace numerical {
        class NumericalPropagator;
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
            mid_init$_06e6b865f3620125,
            mid_combinedDerivatives_3642c368f508585f,
            mid_getDimension_d6ab429752e7c267,
            mid_getName_d2c8eb4129821f0e,
            mid_setInitialJacobians_ed3fe207e6fde26f,
            mid_setInitialJacobians_dd53347985d43b3d,
            mid_setInitialJacobians_5fbf577f6f316b72,
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
