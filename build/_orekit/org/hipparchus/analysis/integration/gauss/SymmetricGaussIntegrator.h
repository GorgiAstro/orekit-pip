#ifndef org_hipparchus_analysis_integration_gauss_SymmetricGaussIntegrator_H
#define org_hipparchus_analysis_integration_gauss_SymmetricGaussIntegrator_H

#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          class SymmetricGaussIntegrator : public ::org::hipparchus::analysis::integration::gauss::GaussIntegrator {
           public:
            enum {
              mid_init$_7cd681864cf513c2,
              mid_init$_ab4840ba016ef1da,
              mid_integrate_b5020c81a1e55ffa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SymmetricGaussIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SymmetricGaussIntegrator(const SymmetricGaussIntegrator& obj) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(obj) {}

            SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair &);
            SymmetricGaussIntegrator(const JArray< jdouble > &, const JArray< jdouble > &);

            jdouble integrate(const ::org::hipparchus::analysis::UnivariateFunction &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          extern PyType_Def PY_TYPE_DEF(SymmetricGaussIntegrator);
          extern PyTypeObject *PY_TYPE(SymmetricGaussIntegrator);

          class t_SymmetricGaussIntegrator {
          public:
            PyObject_HEAD
            SymmetricGaussIntegrator object;
            static PyObject *wrap_Object(const SymmetricGaussIntegrator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
