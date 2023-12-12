#ifndef org_orekit_utils_AbstractMultipleShooting_H
#define org_orekit_utils_AbstractMultipleShooting_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class MultipleShooting;
    }
    namespace propagation {
      class SpacecraftState;
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
          mid_addConstraint_754312f3734d6e2f,
          mid_compute_0d9551367f7ecdef,
          mid_setEpochFreedom_746492bb94848925,
          mid_setPatchPointComponentFreedom_aa803303853defd6,
          mid_setScaleLength_10f281d777284cea,
          mid_setScaleTime_10f281d777284cea,
          mid_computeAdditionalConstraints_1122e29f2a25b86f,
          mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43,
          mid_getAugmentedInitialState_d91edcd61f36fecc,
          mid_getNumberOfConstraints_412668abc8d889e9,
          mid_computeEpochJacobianMatrix_29dc26d4c6c7bd43,
          mid_getConstraintsMap_1e62c2f73fbdd1c4,
          mid_getPatchedSpacecraftState_0d9551367f7ecdef,
          mid_getPatchPoint_d91edcd61f36fecc,
          mid_updateAdditionalConstraints_3246bd31f432242d,
          mid_getNumberOfFreeComponents_412668abc8d889e9,
          mid_getFreeCompsMap_ae6d76260f541aef,
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
