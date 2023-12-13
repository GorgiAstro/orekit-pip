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
              mid_init$_2381028a34dd7d63,
              mid_setClosedOrbitConstraint_fcb96c98de6fad04,
              mid_setEpochFreedom_34742154de10200a,
              mid_setScaleLength_8ba9fe7a847cecad,
              mid_setScaleTime_8ba9fe7a847cecad,
              mid_getAugmentedInitialState_f4730dd89e9880a0,
              mid_getNumberOfConstraints_55546ef6a647f39b,
              mid_computeAdditionalConstraints_a16345554cd829da,
              mid_computeAdditionalJacobianMatrix_223f424c780300ce,
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
