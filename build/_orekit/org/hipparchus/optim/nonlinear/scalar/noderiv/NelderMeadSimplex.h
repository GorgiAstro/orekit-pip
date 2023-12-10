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
                mid_init$_ebc26dcaf4761286,
                mid_init$_d660c7a97bf55272,
                mid_init$_0a2a1ac2721c0336,
                mid_init$_987a5fb872043b12,
                mid_init$_cf3af9f78157f32b,
                mid_init$_db09204907d49615,
                mid_init$_cc4784be32cd9c15,
                mid_init$_159fc5189923452d,
                mid_iterate_cd2534a55381d07e,
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
