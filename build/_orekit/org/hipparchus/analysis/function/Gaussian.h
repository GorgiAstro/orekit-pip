#ifndef org_hipparchus_analysis_function_Gaussian_H
#define org_hipparchus_analysis_function_Gaussian_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
      }
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
    namespace analysis {
      namespace function {

        class Gaussian : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_369b4c97255d5afa,
            mid_init$_b5167f35b2521627,
            mid_value_04fd0666b613d2ab,
            mid_value_a5332de4d4d64b08,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Gaussian(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Gaussian(const Gaussian& obj) : ::java::lang::Object(obj) {}

          Gaussian();
          Gaussian(jdouble, jdouble);
          Gaussian(jdouble, jdouble, jdouble);

          jdouble value(jdouble) const;
          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        extern PyType_Def PY_TYPE_DEF(Gaussian);
        extern PyTypeObject *PY_TYPE(Gaussian);

        class t_Gaussian {
        public:
          PyObject_HEAD
          Gaussian object;
          static PyObject *wrap_Object(const Gaussian&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
