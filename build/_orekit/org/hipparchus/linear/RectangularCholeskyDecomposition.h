#ifndef org_hipparchus_linear_RectangularCholeskyDecomposition_H
#define org_hipparchus_linear_RectangularCholeskyDecomposition_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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

      class RectangularCholeskyDecomposition : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c67473bd6cfaa69b,
          mid_init$_21a79182f4dd9085,
          mid_getRank_570ce0828f81a2c1,
          mid_getRootMatrix_688b496048ff947b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RectangularCholeskyDecomposition(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RectangularCholeskyDecomposition(const RectangularCholeskyDecomposition& obj) : ::java::lang::Object(obj) {}

        RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &);
        RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix &, jdouble);

        jint getRank() const;
        ::org::hipparchus::linear::RealMatrix getRootMatrix() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RectangularCholeskyDecomposition);
      extern PyTypeObject *PY_TYPE(RectangularCholeskyDecomposition);

      class t_RectangularCholeskyDecomposition {
      public:
        PyObject_HEAD
        RectangularCholeskyDecomposition object;
        static PyObject *wrap_Object(const RectangularCholeskyDecomposition&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
