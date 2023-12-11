#ifndef org_orekit_propagation_numerical_cr3bp_STMEquations_H
#define org_orekit_propagation_numerical_cr3bp_STMEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CR3BPSystem;
    }
    namespace propagation {
      namespace integration {
        class CombinedDerivatives;
        class AdditionalDerivativesProvider;
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
        namespace cr3bp {

          class STMEquations : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f1c6590d5c8242d6,
              mid_combinedDerivatives_5fc55a092d474e7c,
              mid_getDimension_412668abc8d889e9,
              mid_getName_3cffd47377eca18a,
              mid_getStateTransitionMatrix_fc9cdfa83c55d6b2,
              mid_setInitialPhi_2c4cc16b11f79a6c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit STMEquations(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            STMEquations(const STMEquations& obj) : ::java::lang::Object(obj) {}

            STMEquations(const ::org::orekit::bodies::CR3BPSystem &);

            ::org::orekit::propagation::integration::CombinedDerivatives combinedDerivatives(const ::org::orekit::propagation::SpacecraftState &) const;
            jint getDimension() const;
            ::java::lang::String getName() const;
            ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::orekit::propagation::SpacecraftState setInitialPhi(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {
          extern PyType_Def PY_TYPE_DEF(STMEquations);
          extern PyTypeObject *PY_TYPE(STMEquations);

          class t_STMEquations {
          public:
            PyObject_HEAD
            STMEquations object;
            static PyObject *wrap_Object(const STMEquations&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
