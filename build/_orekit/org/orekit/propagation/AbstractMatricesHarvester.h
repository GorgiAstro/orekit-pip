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
          mid_freezeColumnsNames_0fa09c18fee449d5,
          mid_getInitialJacobianColumn_f87e5f45128c2827,
          mid_getInitialStateTransitionMatrix_688b496048ff947b,
          mid_getParametersJacobian_9483b2ac438718ce,
          mid_getStateTransitionMatrix_9483b2ac438718ce,
          mid_getStmName_11b109bd155ca898,
          mid_setReferenceState_0ee5c56004643a2e,
          mid_getConversionJacobian_f910011805e7fdeb,
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
