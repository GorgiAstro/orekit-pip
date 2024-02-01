#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class OptimizationData;
    }
    namespace analysis {
      class MultivariateFunction;
    }
  }
}
namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
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
                mid_build_a71c45509eaf92d1,
                mid_evaluate_db1894c33fb140cf,
                mid_getDimension_d6ab429752e7c267,
                mid_getPoint_89e226ebb8c2b780,
                mid_getPoints_44a4932cc723b5fb,
                mid_getSize_d6ab429752e7c267,
                mid_iterate_db1894c33fb140cf,
                mid_replaceWorstPoint_02d3a1dbbbd007e4,
                mid_setPoint_595f0545bc83500b,
                mid_setPoints_1e8d66e1b71abcd9,
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
