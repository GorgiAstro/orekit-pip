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
    namespace optim {
      class OptimizationData;
    }
    namespace analysis {
      class MultivariateFunction;
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
            mid_init$_334f245ec9cee46b,
            mid_init$_548cc85227212ca8,
            mid_equals_460c5e2d9d51c6cc,
            mid_getCoefficients_3a10cc75bd070d84,
            mid_getConstantTerm_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_value_b060e4326765ccf1,
            mid_value_532b95759e51e831,
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
