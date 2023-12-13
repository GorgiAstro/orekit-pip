#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_CMAESOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_CMAESOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
      class OptimizationData;
      class PointValuePair;
    }
    namespace random {
      class RandomGenerator;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            class CMAESOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
             public:
              enum {
                mid_init$_830448b61f1b293c,
                mid_getStatisticsDHistory_e62d3bb06d56d7e3,
                mid_getStatisticsFitnessHistory_e62d3bb06d56d7e3,
                mid_getStatisticsMeanHistory_e62d3bb06d56d7e3,
                mid_getStatisticsSigmaHistory_e62d3bb06d56d7e3,
                mid_optimize_9d04816d74472b44,
                mid_parseOptimizationData_14193ddbce7a2cc0,
                mid_doOptimize_35ff88cac3217ca3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CMAESOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CMAESOptimizer(const CMAESOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

              CMAESOptimizer(jint, jdouble, jboolean, jint, jint, const ::org::hipparchus::random::RandomGenerator &, jboolean, const ::org::hipparchus::optim::ConvergenceChecker &);

              ::java::util::List getStatisticsDHistory() const;
              ::java::util::List getStatisticsFitnessHistory() const;
              ::java::util::List getStatisticsMeanHistory() const;
              ::java::util::List getStatisticsSigmaHistory() const;
              ::org::hipparchus::optim::PointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            extern PyType_Def PY_TYPE_DEF(CMAESOptimizer);
            extern PyTypeObject *PY_TYPE(CMAESOptimizer);

            class t_CMAESOptimizer {
            public:
              PyObject_HEAD
              CMAESOptimizer object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CMAESOptimizer *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CMAESOptimizer&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CMAESOptimizer&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
