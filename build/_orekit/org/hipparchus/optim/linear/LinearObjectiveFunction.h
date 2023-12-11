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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class LinearObjectiveFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3682f2e0c8382fe5,
            mid_init$_9af10d94e4b8cd04,
            mid_equals_221e8e85cb385209,
            mid_getCoefficients_75d50d73180655b4,
            mid_getConstantTerm_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_value_86c4a0582e0747ce,
            mid_value_4062041acf71098b,
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
