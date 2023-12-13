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
          mid_addConstraint_94fe8d9ffeb50676,
          mid_compute_e62d3bb06d56d7e3,
          mid_setEpochFreedom_34742154de10200a,
          mid_setPatchPointComponentFreedom_90b0dcc6277c0236,
          mid_setScaleLength_8ba9fe7a847cecad,
          mid_setScaleTime_8ba9fe7a847cecad,
          mid_getAugmentedInitialState_f4730dd89e9880a0,
          mid_getNumberOfConstraints_55546ef6a647f39b,
          mid_computeEpochJacobianMatrix_223f424c780300ce,
          mid_computeAdditionalConstraints_a16345554cd829da,
          mid_computeAdditionalJacobianMatrix_223f424c780300ce,
          mid_getConstraintsMap_810bed48fafb0b9a,
          mid_getPatchedSpacecraftState_e62d3bb06d56d7e3,
          mid_getPatchPoint_f4730dd89e9880a0,
          mid_updateAdditionalConstraints_75061e5f5bbace93,
          mid_getNumberOfFreeComponents_55546ef6a647f39b,
          mid_getFreeCompsMap_61a28961b8c39fbd,
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
