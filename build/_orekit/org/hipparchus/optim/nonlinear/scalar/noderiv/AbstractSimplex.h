#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      class PointValuePair;
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
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            class AbstractSimplex : public ::java::lang::Object {
             public:
              enum {
                mid_build_ebc26dcaf4761286,
                mid_evaluate_cd2534a55381d07e,
                mid_getDimension_f2f64475e4580546,
                mid_getPoint_2caeff5883144a87,
                mid_getPoints_5cdf4d4dfeae2fec,
                mid_getSize_f2f64475e4580546,
                mid_iterate_cd2534a55381d07e,
                mid_replaceWorstPoint_68b22a7b495298c1,
                mid_setPoint_810a74856aeb1bc9,
                mid_setPoints_f1666427a209dea9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractSimplex(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractSimplex(const AbstractSimplex& obj) : ::java::lang::Object(obj) {}

              void build(const JArray< jdouble > &) const;
              void evaluate(const ::org::hipparchus::analysis::MultivariateFunction &, const ::java::util::Comparator &) const;
              jint getDimension() const;
              ::org::hipparchus::optim::PointValuePair getPoint(jint) const;
              JArray< ::org::hipparchus::optim::PointValuePair > getPoints() const;
              jint getSize() const;
              void iterate(const ::org::hipparchus::analysis::MultivariateFunction &, const ::java::util::Comparator &) const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractSimplex);
            extern PyTypeObject *PY_TYPE(AbstractSimplex);

            class t_AbstractSimplex {
            public:
              PyObject_HEAD
              AbstractSimplex object;
              static PyObject *wrap_Object(const AbstractSimplex&);
              static PyObject *wrap_jobject(const jobject&);
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
