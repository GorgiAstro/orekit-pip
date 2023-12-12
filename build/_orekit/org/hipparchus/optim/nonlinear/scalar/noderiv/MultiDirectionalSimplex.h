#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_MultiDirectionalSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_MultiDirectionalSimplex_H

#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"

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

            class MultiDirectionalSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_cc18240f4a737f14,
                mid_init$_edb361bfdd1ad9ae,
                mid_init$_a3da1a935cb37f7b,
                mid_init$_89aad365fb0ed8da,
                mid_init$_8e61ad7da0e712b8,
                mid_init$_b7c3bc06d75adfa4,
                mid_init$_79cfe3f564275380,
                mid_init$_c4eb928bd0dae600,
                mid_iterate_5af60315979aa937,
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
