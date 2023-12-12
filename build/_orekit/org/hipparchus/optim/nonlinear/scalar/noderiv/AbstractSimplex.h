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
      class PointValuePair;
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
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            class AbstractSimplex : public ::java::lang::Object {
             public:
              enum {
                mid_build_cc18240f4a737f14,
                mid_evaluate_5af60315979aa937,
                mid_getDimension_412668abc8d889e9,
                mid_getPoint_c5386e3be8fe4b1f,
                mid_getPoints_80ecb9f5bff58fab,
                mid_getSize_412668abc8d889e9,
                mid_iterate_5af60315979aa937,
                mid_setPoints_9f3fadcfcf4c9661,
                mid_setPoint_0be91cb02ac86354,
                mid_replaceWorstPoint_69d0572cc39ea708,
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
