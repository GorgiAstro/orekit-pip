#ifndef org_hipparchus_linear_LUDecomposer_H
#define org_hipparchus_linear_LUDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class DecompositionSolver;
      class MatrixDecomposer;
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

      class LUDecomposer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_17db3a65980d3441,
          mid_decompose_6832546eac694082,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LUDecomposer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LUDecomposer(const LUDecomposer& obj) : ::java::lang::Object(obj) {}

        LUDecomposer(jdouble);

        ::org::hipparchus::linear::DecompositionSolver decompose(const ::org::hipparchus::linear::RealMatrix &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(LUDecomposer);
      extern PyTypeObject *PY_TYPE(LUDecomposer);

      class t_LUDecomposer {
      public:
        PyObject_HEAD
        LUDecomposer object;
        static PyObject *wrap_Object(const LUDecomposer&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
