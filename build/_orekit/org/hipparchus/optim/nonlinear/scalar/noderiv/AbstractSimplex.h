#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_AbstractSimplex_H

#include "java/lang/Object.h"

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
      class OptimizationData;
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

            class AbstractSimplex : public ::java::lang::Object {
             public:
              enum {
                mid_build_ab69da052b88f50c,
                mid_evaluate_7c5f20de6989de35,
                mid_getDimension_55546ef6a647f39b,
                mid_getPoint_e9b1472253148099,
                mid_getPoints_326f59a2f136a3de,
                mid_getSize_55546ef6a647f39b,
                mid_iterate_7c5f20de6989de35,
                mid_setPoints_69be9412a3623a09,
                mid_setPoint_0edefa101b8dfd74,
                mid_replaceWorstPoint_c18bea1c44829a53,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractSimplex(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractSimplex(const AbstractSimplex& obj) : ::java::lang::Object(obj) {}

              void build(const JArray< jdouble > &) const;
              void evaluate(const ::org::hipparchus::analysis::MultivariateFunction &, const ::java::util::Comparator &) const;
              jint getDimension() const;
              ::org::hipparchus::optim::PointValuePair getPoint(jint) const;
              JArray< ::org::hipparchus::optim::PointValuePair > getPoints() const;
              jint getSize() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractSimplex);
            extern PyTypeObject *PY_TYPE(AbstractSimplex);

            class t_AbstractSimplex {
            public:
              PyObject_HEAD
              AbstractSimplex object;
              static PyObject *wrap_Object(const AbstractSimplex&);
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
