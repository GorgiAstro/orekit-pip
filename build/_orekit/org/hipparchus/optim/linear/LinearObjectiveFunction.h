#ifndef org_hipparchus_optim_linear_LinearObjectiveFunction_H
#define org_hipparchus_optim_linear_LinearObjectiveFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateFunction;
    }
    namespace linear {
      class RealVector;
    }
    namespace optim {
      class OptimizationData;
    }
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
            mid_init$_bc1ff02eb3693128,
            mid_init$_bec6f1a06b57756a,
            mid_equals_65c7d273e80d497a,
            mid_getCoefficients_aab4fbf77867daa8,
            mid_getConstantTerm_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_value_9dc1ec0bcc0a9a29,
            mid_value_c579a73494d20c67,
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
