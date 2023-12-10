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
          mid_init$_8136b59ab37b1279,
          mid_init$_9dd624dab97a29fd,
          mid_getNormOfResidual_456d9a2f64d6b28d,
          mid_getResidual_6d9adf1d5b463928,
          mid_getRightHandSideVector_6d9adf1d5b463928,
          mid_getSolution_6d9adf1d5b463928,
          mid_providesResidual_e470b6d9e0d979db,
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
