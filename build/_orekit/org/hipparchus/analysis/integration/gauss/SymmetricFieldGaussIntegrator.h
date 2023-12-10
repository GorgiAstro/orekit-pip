#ifndef org_hipparchus_analysis_integration_gauss_SymmetricFieldGaussIntegrator_H
#define org_hipparchus_analysis_integration_gauss_SymmetricFieldGaussIntegrator_H

#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
    }
    namespace util {
      class Pair;
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

          class SymmetricFieldGaussIntegrator : public ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator {
           public:
            enum {
              mid_init$_832c28cb3cc4d660,
              mid_init$_44f58eee1ec38a36,
              mid_integrate_b58480964e3d2510,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SymmetricFieldGaussIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SymmetricFieldGaussIntegrator(const SymmetricFieldGaussIntegrator& obj) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(obj) {}

            SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair &);
            SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

            ::org::hipparchus::CalculusFieldElement integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &) const;
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
          extern PyType_Def PY_TYPE_DEF(SymmetricFieldGaussIntegrator);
          extern PyTypeObject *PY_TYPE(SymmetricFieldGaussIntegrator);

          class t_SymmetricFieldGaussIntegrator {
          public:
            PyObject_HEAD
            SymmetricFieldGaussIntegrator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SymmetricFieldGaussIntegrator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SymmetricFieldGaussIntegrator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SymmetricFieldGaussIntegrator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
