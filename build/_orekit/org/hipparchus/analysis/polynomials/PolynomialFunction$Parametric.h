#ifndef org_hipparchus_analysis_polynomials_PolynomialFunction$Parametric_H
#define org_hipparchus_analysis_polynomials_PolynomialFunction$Parametric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class ParametricUnivariateFunction;
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
      namespace polynomials {

        class PolynomialFunction$Parametric : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_gradient_7b8ea6f669f90156,
            mid_value_618a40a0b95154fa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunction$Parametric(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunction$Parametric(const PolynomialFunction$Parametric& obj) : ::java::lang::Object(obj) {}

          PolynomialFunction$Parametric();

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
      namespace polynomials {
        extern PyType_Def PY_TYPE_DEF(PolynomialFunction$Parametric);
        extern PyTypeObject *PY_TYPE(PolynomialFunction$Parametric);

        class t_PolynomialFunction$Parametric {
        public:
          PyObject_HEAD
          PolynomialFunction$Parametric object;
          static PyObject *wrap_Object(const PolynomialFunction$Parametric&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
