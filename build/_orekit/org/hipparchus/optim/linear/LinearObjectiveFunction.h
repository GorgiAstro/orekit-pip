#ifndef org_hipparchus_optim_linear_LinearObjectiveFunction_H
#define org_hipparchus_optim_linear_LinearObjectiveFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
    }
    namespace optim {
      class OptimizationData;
    }
    namespace analysis {
      class MultivariateFunction;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class LinearObjectiveFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_caadaecfce5fba2f,
            mid_init$_971f7be7e0a3e00b,
            mid_equals_229c87223f486349,
            mid_getCoefficients_6d9adf1d5b463928,
            mid_getConstantTerm_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_value_f05cb8c6dfd5e0b9,
            mid_value_5ed80776077f2bda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearObjectiveFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearObjectiveFunction(const LinearObjectiveFunction& obj) : ::java::lang::Object(obj) {}

          LinearObjectiveFunction(const JArray< jdouble > &, jdouble);
          LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector &, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::linear::RealVector getCoefficients() const;
          jdouble getConstantTerm() const;
          jint hashCode() const;
          jdouble value(const JArray< jdouble > &) const;
          jdouble value(const ::org::hipparchus::linear::RealVector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(LinearObjectiveFunction);
        extern PyTypeObject *PY_TYPE(LinearObjectiveFunction);

        class t_LinearObjectiveFunction {
        public:
          PyObject_HEAD
          LinearObjectiveFunction object;
          static PyObject *wrap_Object(const LinearObjectiveFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
