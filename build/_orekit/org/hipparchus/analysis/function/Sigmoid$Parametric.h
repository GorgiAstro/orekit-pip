#ifndef org_hipparchus_analysis_function_Sigmoid$Parametric_H
#define org_hipparchus_analysis_function_Sigmoid$Parametric_H

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

        class Sigmoid$Parametric : public ::java::lang::Object {
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

          explicit Sigmoid$Parametric(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sigmoid$Parametric(const Sigmoid$Parametric& obj) : ::java::lang::Object(obj) {}

          Sigmoid$Parametric();

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
        extern PyType_Def PY_TYPE_DEF(Sigmoid$Parametric);
        extern PyTypeObject *PY_TYPE(Sigmoid$Parametric);

        class t_Sigmoid$Parametric {
        public:
          PyObject_HEAD
          Sigmoid$Parametric object;
          static PyObject *wrap_Object(const Sigmoid$Parametric&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
