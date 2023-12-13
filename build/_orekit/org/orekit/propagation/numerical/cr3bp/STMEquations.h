#ifndef org_orekit_propagation_numerical_cr3bp_STMEquations_H
#define org_orekit_propagation_numerical_cr3bp_STMEquations_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class AdditionalDerivativesProvider;
        class CombinedDerivatives;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          class STMEquations : public ::java::lang::Object {
           public:
            enum {
              mid_init$_572e4de529747211,
              mid_combinedDerivatives_f7e02f1d7093fbbb,
              mid_getDimension_55546ef6a647f39b,
              mid_getName_1c1fa1e935d6cdcf,
              mid_getStateTransitionMatrix_b7aa5791b069a41f,
              mid_setInitialPhi_c3c52b1257139045,
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
