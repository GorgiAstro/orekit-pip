#ifndef org_orekit_utils_AbstractMultipleShooting_H
#define org_orekit_utils_AbstractMultipleShooting_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class MultipleShooting;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class AbstractMultipleShooting : public ::java::lang::Object {
       public:
        enum {
          mid_addConstraint_78e41e7b5124a628,
          mid_compute_a6156df500549a58,
          mid_setEpochFreedom_bc79bc153a2b3c2e,
          mid_setPatchPointComponentFreedom_175ef6117ed1e5b6,
          mid_setScaleLength_77e0f9a1f260e2e5,
          mid_setScaleTime_77e0f9a1f260e2e5,
          mid_getPatchPoint_881fd9055e653db3,
          mid_computeEpochJacobianMatrix_8b899bcca8eef41a,
          mid_updateAdditionalConstraints_7d4f41c65056f174,
          mid_computeAdditionalConstraints_5c4ec51dfa4e445c,
          mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a,
          mid_getAugmentedInitialState_881fd9055e653db3,
          mid_getNumberOfFreeComponents_f2f64475e4580546,
          mid_getNumberOfConstraints_f2f64475e4580546,
          mid_getFreeCompsMap_e998aa0f1d876d6f,
          mid_getConstraintsMap_d6753b7055940a54,
          mid_getPatchedSpacecraftState_a6156df500549a58,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractMultipleShooting(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractMultipleShooting(const AbstractMultipleShooting& obj) : ::java::lang::Object(obj) {}

        void addConstraint(jint, jint, jdouble) const;
        ::java::util::List compute() const;
        void setEpochFreedom(jint, jboolean) const;
        void setPatchPointComponentFreedom(jint, jint, jboolean) const;
        void setScaleLength(jdouble) const;
        void setScaleTime(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AbstractMultipleShooting);
      extern PyTypeObject *PY_TYPE(AbstractMultipleShooting);

      class t_AbstractMultipleShooting {
      public:
        PyObject_HEAD
        AbstractMultipleShooting object;
        static PyObject *wrap_Object(const AbstractMultipleShooting&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
