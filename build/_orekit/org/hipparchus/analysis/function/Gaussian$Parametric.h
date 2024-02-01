#ifndef org_hipparchus_analysis_function_Gaussian$Parametric_H
#define org_hipparchus_analysis_function_Gaussian$Parametric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class ParametricUnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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

        class Gaussian$Parametric : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_gradient_bfc955188bf36f2c,
            mid_value_4f42c7a8793320e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Gaussian$Parametric(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Gaussian$Parametric(const Gaussian$Parametric& obj) : ::java::lang::Object(obj) {}

          Gaussian$Parametric();

          JArray< jdouble > gradient(jdouble, const JArray< jdouble > &) const;
          jdouble value(jdouble, const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(Gaussian$Parametric);
        extern PyTypeObject *PY_TYPE(Gaussian$Parametric);

        class t_Gaussian$Parametric {
        public:
          PyObject_HEAD
          Gaussian$Parametric object;
          static PyObject *wrap_Object(const Gaussian$Parametric&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
