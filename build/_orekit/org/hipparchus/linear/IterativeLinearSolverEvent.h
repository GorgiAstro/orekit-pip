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
          mid_init$_7e50748b6c508ddd,
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
