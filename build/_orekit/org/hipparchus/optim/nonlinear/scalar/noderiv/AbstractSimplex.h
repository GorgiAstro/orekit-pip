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
    namespace analysis {
      class MultivariateFunction;
    }
    namespace optim {
      class PointValuePair;
      class OptimizationData;
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
                mid_build_fa9d415d19f69361,
                mid_evaluate_eb88542b81649386,
                mid_getDimension_570ce0828f81a2c1,
                mid_getPoint_2ba52aef409b53cc,
                mid_getPoints_fb04b599bc7d04e3,
                mid_getSize_570ce0828f81a2c1,
                mid_iterate_eb88542b81649386,
                mid_replaceWorstPoint_7d5bcbaf4bc6205e,
                mid_setPoint_95deef694a11e518,
                mid_setPoints_210d360a8ba0a465,
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
