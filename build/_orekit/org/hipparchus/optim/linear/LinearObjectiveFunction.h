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
    namespace optim {
      class OptimizationData;
    }
    namespace linear {
      class RealVector;
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
            mid_init$_19a01fdb4baa56b0,
            mid_init$_4ac8b22435774168,
            mid_equals_72faff9b05f5ed5e,
            mid_getCoefficients_92d7e8d8d3f1dfcf,
            mid_getConstantTerm_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_value_a40ce4fdf6559ac0,
            mid_value_510dfb60b80a1bc5,
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
