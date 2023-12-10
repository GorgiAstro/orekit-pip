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
                mid_init$_ebc26dcaf4761286,
                mid_init$_d660c7a97bf55272,
                mid_init$_0a2a1ac2721c0336,
                mid_init$_987a5fb872043b12,
                mid_init$_34fab415168f529a,
                mid_init$_92a262a7ed4e53ce,
                mid_init$_13f7a72902bf1e20,
                mid_init$_d3d0b69fc0b5db95,
                mid_iterate_cd2534a55381d07e,
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
