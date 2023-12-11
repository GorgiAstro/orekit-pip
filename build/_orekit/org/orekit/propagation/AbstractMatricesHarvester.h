#ifndef org_orekit_propagation_AbstractMatricesHarvester_H
#define org_orekit_propagation_AbstractMatricesHarvester_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class AbstractMatricesHarvester : public ::java::lang::Object {
       public:
        enum {
          mid_freezeColumnsNames_0640e6acf969ed28,
          mid_getInitialJacobianColumn_008e0cff49b0ec83,
          mid_getInitialStateTransitionMatrix_70a207fcbc031df2,
          mid_getParametersJacobian_fc9cdfa83c55d6b2,
          mid_getStateTransitionMatrix_fc9cdfa83c55d6b2,
          mid_getStmName_3cffd47377eca18a,
          mid_setReferenceState_8655761ebf04b503,
          mid_getConversionJacobian_223e694727d946d7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractMatricesHarvester(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractMatricesHarvester(const AbstractMatricesHarvester& obj) : ::java::lang::Object(obj) {}

        static jint STATE_DIMENSION;

        void freezeColumnsNames() const;
        JArray< jdouble > getInitialJacobianColumn(const ::java::lang::String &) const;
        ::org::hipparchus::linear::RealMatrix getInitialStateTransitionMatrix() const;
        ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
        ::java::lang::String getStmName() const;
        void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(AbstractMatricesHarvester);
      extern PyTypeObject *PY_TYPE(AbstractMatricesHarvester);

      class t_AbstractMatricesHarvester {
      public:
        PyObject_HEAD
        AbstractMatricesHarvester object;
        static PyObject *wrap_Object(const AbstractMatricesHarvester&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
