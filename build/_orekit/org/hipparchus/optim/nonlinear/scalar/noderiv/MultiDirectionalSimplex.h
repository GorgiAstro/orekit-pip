#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_MultiDirectionalSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_MultiDirectionalSimplex_H

#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
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

            class MultiDirectionalSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_fa9d415d19f69361,
                mid_init$_a0befc7f3dc19e41,
                mid_init$_99803b0791f320ff,
                mid_init$_bb79ca80d85d0a66,
                mid_init$_b06f13e61b0a2762,
                mid_init$_d396e21fdebc41e7,
                mid_init$_07bf81310115068c,
                mid_init$_2e15f46ce2042002,
                mid_iterate_eb88542b81649386,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MultiDirectionalSimplex(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MultiDirectionalSimplex(const MultiDirectionalSimplex& obj) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(obj) {}

              MultiDirectionalSimplex(const JArray< jdouble > &);
              MultiDirectionalSimplex(const JArray< JArray< jdouble > > &);
              MultiDirectionalSimplex(jint);
              MultiDirectionalSimplex(jint, jdouble);
              MultiDirectionalSimplex(const JArray< jdouble > &, jdouble, jdouble);
              MultiDirectionalSimplex(const JArray< JArray< jdouble > > &, jdouble, jdouble);
              MultiDirectionalSimplex(jint, jdouble, jdouble);
              MultiDirectionalSimplex(jint, jdouble, jdouble, jdouble);

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
            extern PyType_Def PY_TYPE_DEF(MultiDirectionalSimplex);
            extern PyTypeObject *PY_TYPE(MultiDirectionalSimplex);

            class t_MultiDirectionalSimplex {
            public:
              PyObject_HEAD
              MultiDirectionalSimplex object;
              static PyObject *wrap_Object(const MultiDirectionalSimplex&);
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
