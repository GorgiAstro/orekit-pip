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

            class NelderMeadSimplex : public ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex {
             public:
              enum {
                mid_init$_ab69da052b88f50c,
                mid_init$_07adb42ffaa97d31,
                mid_init$_44ed599e93e8a30c,
                mid_init$_d5322b8b512aeb26,
                mid_init$_4a296642ea3db7d7,
                mid_init$_05d8adfe90de18ea,
                mid_init$_f688d28255ba75ab,
                mid_init$_83f8fa9221fe9dc2,
                mid_iterate_7c5f20de6989de35,
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
