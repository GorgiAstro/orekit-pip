#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_NelderMeadSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_NelderMeadSimplex_H

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

            class NelderMeadSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_cc18240f4a737f14,
                mid_init$_edb361bfdd1ad9ae,
                mid_init$_a3da1a935cb37f7b,
                mid_init$_89aad365fb0ed8da,
                mid_init$_0536af1b89c263e5,
                mid_init$_b2e19060b99cf780,
                mid_init$_0d23f64daa74287b,
                mid_init$_850a0e81dbd48ad1,
                mid_iterate_5af60315979aa937,
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
