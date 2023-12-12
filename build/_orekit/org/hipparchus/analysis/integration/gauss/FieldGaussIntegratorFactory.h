#ifndef org_hipparchus_analysis_integration_gauss_FieldGaussIntegratorFactory_H
#define org_hipparchus_analysis_integration_gauss_FieldGaussIntegratorFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace integration {
        namespace gauss {
          class FieldGaussIntegrator;
          class SymmetricFieldGaussIntegrator;
        }
      }
    }
    class CalculusFieldElement;
    class Field;
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

          class FieldGaussIntegratorFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_979ae7f57a96b096,
              mid_hermite_1add97ebd5646b46,
              mid_laguerre_38b31531f10ee94c,
              mid_legendre_38b31531f10ee94c,
              mid_legendre_50eeb305783de1a7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldGaussIntegratorFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldGaussIntegratorFactory(const FieldGaussIntegratorFactory& obj) : ::java::lang::Object(obj) {}

            FieldGaussIntegratorFactory(const ::org::hipparchus::Field &);

            ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator hermite(jint) const;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator laguerre(jint) const;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator legendre(jint) const;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator legendre(jint, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldGaussIntegratorFactory);
          extern PyTypeObject *PY_TYPE(FieldGaussIntegratorFactory);

          class t_FieldGaussIntegratorFactory {
          public:
            PyObject_HEAD
            FieldGaussIntegratorFactory object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldGaussIntegratorFactory *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldGaussIntegratorFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldGaussIntegratorFactory&, PyTypeObject *);
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
