#ifndef org_hipparchus_analysis_function_Gaussian$Parametric_H
#define org_hipparchus_analysis_function_Gaussian$Parametric_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class ParametricUnivariateFunction;
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
            mid_init$_0640e6acf969ed28,
            mid_gradient_31b9a2982d73e37a,
            mid_value_1bc40469b56f2c3c,
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
