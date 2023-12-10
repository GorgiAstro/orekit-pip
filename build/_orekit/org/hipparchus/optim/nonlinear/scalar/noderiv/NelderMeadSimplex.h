#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_NelderMeadSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_NelderMeadSimplex_H

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

            class NelderMeadSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_fa9d415d19f69361,
                mid_init$_a0befc7f3dc19e41,
                mid_init$_99803b0791f320ff,
                mid_init$_bb79ca80d85d0a66,
                mid_init$_bbd94d386660acaa,
                mid_init$_6e30b20e45c3cf51,
                mid_init$_383392bb694f45fb,
                mid_init$_ae09a068540f250e,
                mid_iterate_eb88542b81649386,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NelderMeadSimplex(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NelderMeadSimplex(const NelderMeadSimplex& obj) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(obj) {}

              NelderMeadSimplex(const JArray< jdouble > &);
              NelderMeadSimplex(const JArray< JArray< jdouble > > &);
              NelderMeadSimplex(jint);
              NelderMeadSimplex(jint, jdouble);
              NelderMeadSimplex(const JArray< jdouble > &, jdouble, jdouble, jdouble, jdouble);
              NelderMeadSimplex(const JArray< JArray< jdouble > > &, jdouble, jdouble, jdouble, jdouble);
              NelderMeadSimplex(jint, jdouble, jdouble, jdouble, jdouble);
              NelderMeadSimplex(jint, jdouble, jdouble, jdouble, jdouble, jdouble);

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
            extern PyType_Def PY_TYPE_DEF(NelderMeadSimplex);
            extern PyTypeObject *PY_TYPE(NelderMeadSimplex);

            class t_NelderMeadSimplex {
            public:
              PyObject_HEAD
              NelderMeadSimplex object;
              static PyObject *wrap_Object(const NelderMeadSimplex&);
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
