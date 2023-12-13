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
    namespace optim {
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

            class MultiDirectionalSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_ab69da052b88f50c,
                mid_init$_07adb42ffaa97d31,
                mid_init$_44ed599e93e8a30c,
                mid_init$_d5322b8b512aeb26,
                mid_init$_b0ce8bae5fc14fa3,
                mid_init$_8d45af4d7e484f48,
                mid_init$_cdd9dee35d124091,
                mid_init$_390258812740a16c,
                mid_iterate_7c5f20de6989de35,
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
