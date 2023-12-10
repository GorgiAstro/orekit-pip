#ifndef org_orekit_propagation_numerical_cr3bp_STMEquations_H
#define org_orekit_propagation_numerical_cr3bp_STMEquations_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class CombinedDerivatives;
        class AdditionalDerivativesProvider;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class CR3BPSystem;
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
              mid_init$_ec35a1651f7b6401,
              mid_combinedDerivatives_4fc0958a0539e1d3,
              mid_getDimension_570ce0828f81a2c1,
              mid_getName_11b109bd155ca898,
              mid_getStateTransitionMatrix_9483b2ac438718ce,
              mid_setInitialPhi_f43130c50e9fafeb,
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
