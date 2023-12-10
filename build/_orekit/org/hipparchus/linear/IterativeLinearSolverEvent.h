#ifndef org_hipparchus_linear_IterativeLinearSolverEvent_H
#define org_hipparchus_linear_IterativeLinearSolverEvent_H

#include "org/hipparchus/util/IterationEvent.h"

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

      class IterativeLinearSolverEvent : public ::org::hipparchus::util::IterationEvent {
       public:
        enum {
          mid_init$_de63e03d5189e405,
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

        explicit IterativeLinearSolverEvent(jobject obj) : ::org::hipparchus::util::IterationEvent(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IterativeLinearSolverEvent(const IterativeLinearSolverEvent& obj) : ::org::hipparchus::util::IterationEvent(obj) {}

        IterativeLinearSolverEvent(const ::java::lang::Object &, jint);

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
      extern PyType_Def PY_TYPE_DEF(IterativeLinearSolverEvent);
      extern PyTypeObject *PY_TYPE(IterativeLinearSolverEvent);

      class t_IterativeLinearSolverEvent {
      public:
        PyObject_HEAD
        IterativeLinearSolverEvent object;
        static PyObject *wrap_Object(const IterativeLinearSolverEvent&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
