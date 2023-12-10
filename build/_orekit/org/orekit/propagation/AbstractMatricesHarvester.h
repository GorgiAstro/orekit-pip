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
          mid_freezeColumnsNames_7ae3461a92a43152,
          mid_getInitialJacobianColumn_5fc57a69c973af17,
          mid_getInitialStateTransitionMatrix_7116bbecdd8ceb21,
          mid_getParametersJacobian_63aee3ce1e412e46,
          mid_getStateTransitionMatrix_63aee3ce1e412e46,
          mid_getStmName_0090f7797e403f43,
          mid_setReferenceState_2b88003f931f70a7,
          mid_getConversionJacobian_2f2af053a5858dd9,
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
