#ifndef org_hipparchus_linear_DefaultIterativeLinearSolverEvent_H
#define org_hipparchus_linear_DefaultIterativeLinearSolverEvent_H

#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DefaultIterativeLinearSolverEvent : public ::org::hipparchus::linear::IterativeLinearSolverEvent {
       public:
        enum {
          mid_init$_3e62ee8819bc5609,
          mid_init$_aafcf78acecc2e97,
          mid_getNormOfResidual_9981f74b2d109da6,
          mid_getResidual_92d7e8d8d3f1dfcf,
          mid_getRightHandSideVector_92d7e8d8d3f1dfcf,
          mid_getSolution_92d7e8d8d3f1dfcf,
          mid_providesResidual_eee3de00fe971136,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DefaultIterativeLinearSolverEvent(jobject obj) : ::org::hipparchus::linear::IterativeLinearSolverEvent(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DefaultIterativeLinearSolverEvent(const DefaultIterativeLinearSolverEvent& obj) : ::org::hipparchus::linear::IterativeLinearSolverEvent(obj) {}

        DefaultIterativeLinearSolverEvent(const ::java::lang::Object &, jint, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, jdouble);
        DefaultIterativeLinearSolverEvent(const ::java::lang::Object &, jint, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealVector &, jdouble);

        jdouble getNormOfResidual() const;
        ::org::hipparchus::linear::RealVector getResidual() const;
        ::org::hipparchus::linear::RealVector getRightHandSideVector() const;
        ::org::hipparchus::linear::RealVector getSolution() const;
        jboolean providesResidual() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(DefaultIterativeLinearSolverEvent);
      extern PyTypeObject *PY_TYPE(DefaultIterativeLinearSolverEvent);

      class t_DefaultIterativeLinearSolverEvent {
      public:
        PyObject_HEAD
        DefaultIterativeLinearSolverEvent object;
        static PyObject *wrap_Object(const DefaultIterativeLinearSolverEvent&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
