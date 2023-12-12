#ifndef org_hipparchus_linear_RiccatiEquationSolver_H
#define org_hipparchus_linear_RiccatiEquationSolver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
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

      class RiccatiEquationSolver : public ::java::lang::Object {
       public:
        enum {
          mid_getK_70a207fcbc031df2,
          mid_getP_70a207fcbc031df2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RiccatiEquationSolver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RiccatiEquationSolver(const RiccatiEquationSolver& obj) : ::java::lang::Object(obj) {}

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
      extern PyType_Def PY_TYPE_DEF(RiccatiEquationSolver);
      extern PyTypeObject *PY_TYPE(RiccatiEquationSolver);

      class t_RiccatiEquationSolver {
      public:
        PyObject_HEAD
        RiccatiEquationSolver object;
        static PyObject *wrap_Object(const RiccatiEquationSolver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
