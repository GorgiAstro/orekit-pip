#ifndef org_orekit_utils_AbstractMultipleShooting_H
#define org_orekit_utils_AbstractMultipleShooting_H

#include "java/lang/Object.h"

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
    namespace utils {
      class MultipleShooting;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class AbstractMultipleShooting : public ::java::lang::Object {
       public:
        enum {
          mid_addConstraint_1506189166690b5e,
          mid_compute_2afa36052df4765d,
          mid_setEpochFreedom_f61a0322e15bde25,
          mid_setPatchPointComponentFreedom_1d19b51c24eaaa6c,
          mid_setScaleLength_17db3a65980d3441,
          mid_setScaleTime_17db3a65980d3441,
          mid_getPatchPoint_8f68ada11fb66675,
          mid_getConstraintsMap_6f5a75ccd8c04465,
          mid_getFreeCompsMap_43b0b5b620a83f8e,
          mid_getNumberOfFreeComponents_570ce0828f81a2c1,
          mid_getPatchedSpacecraftState_2afa36052df4765d,
          mid_updateAdditionalConstraints_7169a8c8a60b8b2c,
          mid_getNumberOfConstraints_570ce0828f81a2c1,
          mid_getAugmentedInitialState_8f68ada11fb66675,
          mid_computeAdditionalJacobianMatrix_11c2223c723fd443,
          mid_computeAdditionalConstraints_ae31e5696ec6455b,
          mid_computeEpochJacobianMatrix_11c2223c723fd443,
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
