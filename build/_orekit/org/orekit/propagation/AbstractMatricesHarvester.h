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
          mid_freezeColumnsNames_ff7cb6c242604316,
          mid_getInitialJacobianColumn_4bbf10387b1a6128,
          mid_getInitialStateTransitionMatrix_b2eebabce70526d8,
          mid_getParametersJacobian_011bf64ebaa4e018,
          mid_getStateTransitionMatrix_011bf64ebaa4e018,
          mid_getStmName_d2c8eb4129821f0e,
          mid_setReferenceState_72b846eb87f3af9a,
          mid_getConversionJacobian_9f1f355491808400,
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
