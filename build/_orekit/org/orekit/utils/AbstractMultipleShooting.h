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
          mid_addConstraint_e98d7b3e971b6087,
          mid_compute_d751c1a57012b438,
          mid_setEpochFreedom_06c90d8be18d8afa,
          mid_setPatchPointComponentFreedom_b3dc41fdeb98586b,
          mid_setScaleLength_1ad26e8c8c0cd65b,
          mid_setScaleTime_1ad26e8c8c0cd65b,
          mid_getPatchPoint_bc8abbf0245ce660,
          mid_computeEpochJacobianMatrix_f1fb8031f2a01da7,
          mid_updateAdditionalConstraints_9d367e34fba0a5ea,
          mid_computeAdditionalConstraints_f7899d4480f6af2b,
          mid_computeAdditionalJacobianMatrix_f1fb8031f2a01da7,
          mid_getAugmentedInitialState_bc8abbf0245ce660,
          mid_getNumberOfFreeComponents_d6ab429752e7c267,
          mid_getNumberOfConstraints_d6ab429752e7c267,
          mid_getFreeCompsMap_f192f3d23afc5e5e,
          mid_getConstraintsMap_dbcb8bbac6b35e0d,
          mid_getPatchedSpacecraftState_d751c1a57012b438,
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
