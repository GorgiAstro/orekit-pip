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
          mid_init$_5feb33b9e71a0b05,
          mid_init$_a6ec9b04a59d907a,
          mid_getNormOfResidual_dff5885c2c873297,
          mid_getResidual_aab4fbf77867daa8,
          mid_getRightHandSideVector_aab4fbf77867daa8,
          mid_getSolution_aab4fbf77867daa8,
          mid_providesResidual_b108b35ef48e27bd,
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
