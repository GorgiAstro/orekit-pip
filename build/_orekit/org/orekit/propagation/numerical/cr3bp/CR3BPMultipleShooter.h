#ifndef org_orekit_propagation_numerical_cr3bp_CR3BPMultipleShooter_H
#define org_orekit_propagation_numerical_cr3bp_CR3BPMultipleShooter_H

#include "org/orekit/utils/AbstractMultipleShooting.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class NumericalPropagator;
        namespace cr3bp {
          class STMEquations;
        }
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          class CR3BPMultipleShooter : public ::org::orekit::utils::AbstractMultipleShooting {
           public:
            enum {
              mid_init$_ea30a3806cd01d66,
              mid_setClosedOrbitConstraint_50a2e0b139e80a58,
              mid_setEpochFreedom_bc79bc153a2b3c2e,
              mid_setScaleLength_77e0f9a1f260e2e5,
              mid_setScaleTime_77e0f9a1f260e2e5,
              mid_computeAdditionalConstraints_5c4ec51dfa4e445c,
              mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a,
              mid_getAugmentedInitialState_881fd9055e653db3,
              mid_getNumberOfConstraints_f2f64475e4580546,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CR3BPMultipleShooter(jobject obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CR3BPMultipleShooter(const CR3BPMultipleShooter& obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {}

            CR3BPMultipleShooter(const ::java::util::List &, const ::java::util::List &, const ::java::util::List &, jdouble, jint);

            void setClosedOrbitConstraint(jboolean) const;
            void setEpochFreedom(jint, jboolean) const;
            void setScaleLength(jdouble) const;
            void setScaleTime(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(CR3BPMultipleShooter);
          extern PyTypeObject *PY_TYPE(CR3BPMultipleShooter);

          class t_CR3BPMultipleShooter {
          public:
            PyObject_HEAD
            CR3BPMultipleShooter object;
            static PyObject *wrap_Object(const CR3BPMultipleShooter&);
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
