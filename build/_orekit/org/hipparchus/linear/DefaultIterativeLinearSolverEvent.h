#ifndef org_hipparchus_linear_DefaultIterativeLinearSolverEvent_H
#define org_hipparchus_linear_DefaultIterativeLinearSolverEvent_H

#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class DefaultIterativeLinearSolverEvent : public ::org::hipparchus::linear::IterativeLinearSolverEvent {
       public:
        enum {
          mid_init$_adc4c0569438734f,
          mid_init$_03eca99f46c21907,
          mid_getNormOfResidual_b74f83833fdad017,
          mid_getResidual_3a10cc75bd070d84,
          mid_getRightHandSideVector_3a10cc75bd070d84,
          mid_getSolution_3a10cc75bd070d84,
          mid_providesResidual_9ab94ac1dc23b105,
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
