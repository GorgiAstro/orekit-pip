#ifndef org_orekit_utils_MultipleShooter_H
#define org_orekit_utils_MultipleShooter_H

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
        class EpochDerivativesEquations;
      }
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class MultipleShooter : public ::org::orekit::utils::AbstractMultipleShooting {
       public:
        enum {
          mid_init$_fa2b46dfabd6cf44,
          mid_computeAdditionalConstraints_f7899d4480f6af2b,
          mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7,
          mid_getAugmentedInitialState_bc8abbf0245ce660,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultipleShooter(jobject obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultipleShooter(const MultipleShooter& obj) : ::org::orekit::utils::AbstractMultipleShooting(obj) {}

        MultipleShooter(const ::java::util::List &, const ::java::util::List &, const ::java::util::List &, jdouble, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(MultipleShooter);
      extern PyTypeObject *PY_TYPE(MultipleShooter);

      class t_MultipleShooter {
      public:
        PyObject_HEAD
        MultipleShooter object;
        static PyObject *wrap_Object(const MultipleShooter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
