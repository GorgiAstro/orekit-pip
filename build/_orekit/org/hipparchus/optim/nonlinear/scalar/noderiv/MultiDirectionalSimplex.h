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
                mid_init$_a71c45509eaf92d1,
                mid_init$_11ecdbb5af7ed67d,
                mid_init$_8fd427ab23829bf5,
                mid_init$_4320462275d66e78,
                mid_init$_aeadc0559b2462aa,
                mid_init$_b8114caf5b78071b,
                mid_init$_aaed259e1b5f1153,
                mid_init$_2baad0ec229f7c27,
                mid_iterate_db1894c33fb140cf,
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
