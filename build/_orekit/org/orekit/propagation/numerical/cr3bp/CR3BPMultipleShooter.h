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
              mid_init$_56e88fd08b255763,
              mid_setClosedOrbitConstraint_ed2afdb8506b9742,
              mid_setEpochFreedom_746492bb94848925,
              mid_setScaleLength_10f281d777284cea,
              mid_setScaleTime_10f281d777284cea,
              mid_computeAdditionalConstraints_1122e29f2a25b86f,
              mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43,
              mid_getAugmentedInitialState_d91edcd61f36fecc,
              mid_getNumberOfConstraints_412668abc8d889e9,
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
