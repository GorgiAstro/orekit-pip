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
              mid_init$_fa2b46dfabd6cf44,
              mid_setClosedOrbitConstraint_b35db77cae58639e,
              mid_setEpochFreedom_06c90d8be18d8afa,
              mid_setScaleLength_1ad26e8c8c0cd65b,
              mid_setScaleTime_1ad26e8c8c0cd65b,
              mid_computeAdditionalConstraints_f7899d4480f6af2b,
              mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7,
              mid_getAugmentedInitialState_bc8abbf0245ce660,
              mid_getNumberOfConstraints_d6ab429752e7c267,
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
