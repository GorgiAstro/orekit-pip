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
                mid_init$_a71c45509eaf92d1,
                mid_init$_11ecdbb5af7ed67d,
                mid_init$_8fd427ab23829bf5,
                mid_init$_4320462275d66e78,
                mid_init$_62f39157f73b7444,
                mid_init$_f6c604f2b911dbbf,
                mid_init$_a1282fa5ba2ed7b2,
                mid_init$_7af3e591f794c538,
                mid_iterate_db1894c33fb140cf,
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
