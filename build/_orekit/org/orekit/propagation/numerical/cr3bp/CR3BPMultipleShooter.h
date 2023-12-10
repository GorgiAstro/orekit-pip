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
        namespace cr3bp {
          class STMEquations;
        }
        class NumericalPropagator;
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
              mid_init$_15f1e1aa5c607e00,
              mid_setClosedOrbitConstraint_bd04c9335fb9e4cf,
              mid_setEpochFreedom_f61a0322e15bde25,
              mid_setScaleLength_17db3a65980d3441,
              mid_setScaleTime_17db3a65980d3441,
              mid_getNumberOfConstraints_570ce0828f81a2c1,
              mid_getAugmentedInitialState_8f68ada11fb66675,
              mid_computeAdditionalJacobianMatrix_11c2223c723fd443,
              mid_computeAdditionalConstraints_ae31e5696ec6455b,
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
