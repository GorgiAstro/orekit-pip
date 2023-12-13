#ifndef org_hipparchus_analysis_integration_gauss_GaussIntegratorFactory_H
#define org_hipparchus_analysis_integration_gauss_GaussIntegratorFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {
          class SymmetricGaussIntegrator;
          class GaussIntegrator;
        }
      }
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

          class GaussIntegratorFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_44ed599e93e8a30c,
              mid_hermite_a6e7a9f494780876,
              mid_laguerre_7b26da4847fc245c,
              mid_legendre_7b26da4847fc245c,
              mid_legendre_3010934f1f4f591c,
              mid_legendreHighPrecision_7b26da4847fc245c,
              mid_legendreHighPrecision_3010934f1f4f591c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GaussIntegratorFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GaussIntegratorFactory(const GaussIntegratorFactory& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_DECIMAL_DIGITS;

            GaussIntegratorFactory();
            GaussIntegratorFactory(jint);

            ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator hermite(jint) const;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator laguerre(jint) const;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator legendre(jint) const;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator legendre(jint, jdouble, jdouble) const;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator legendreHighPrecision(jint) const;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator legendreHighPrecision(jint, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GaussIntegratorFactory);
          extern PyTypeObject *PY_TYPE(GaussIntegratorFactory);

          class t_GaussIntegratorFactory {
          public:
            PyObject_HEAD
            GaussIntegratorFactory object;
            static PyObject *wrap_Object(const GaussIntegratorFactory&);
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
