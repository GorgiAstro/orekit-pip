#ifndef org_hipparchus_linear_RiccatiEquationSolverImpl_H
#define org_hipparchus_linear_RiccatiEquationSolverImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RiccatiEquationSolver;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RiccatiEquationSolverImpl : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f520f7b0bf393aed,
          mid_getK_70a207fcbc031df2,
          mid_getP_70a207fcbc031df2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RiccatiEquationSolverImpl(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RiccatiEquationSolverImpl(const RiccatiEquationSolverImpl& obj) : ::java::lang::Object(obj) {}

        RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &);

        ::org::hipparchus::linear::RealMatrix getK() const;
        ::org::hipparchus::linear::RealMatrix getP() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RiccatiEquationSolverImpl);
      extern PyTypeObject *PY_TYPE(RiccatiEquationSolverImpl);

      class t_RiccatiEquationSolverImpl {
      public:
        PyObject_HEAD
        RiccatiEquationSolverImpl object;
        static PyObject *wrap_Object(const RiccatiEquationSolverImpl&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
