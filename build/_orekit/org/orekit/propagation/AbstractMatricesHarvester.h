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
          mid_freezeColumnsNames_a1fa5dae97ea5ed2,
          mid_getInitialJacobianColumn_1d7f5d54f6c58f85,
          mid_getInitialStateTransitionMatrix_f77d745f2128c391,
          mid_getParametersJacobian_b7aa5791b069a41f,
          mid_getStateTransitionMatrix_b7aa5791b069a41f,
          mid_getStmName_1c1fa1e935d6cdcf,
          mid_setReferenceState_280c3390961e0a50,
          mid_getConversionJacobian_92a90247fa9f7aa3,
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
