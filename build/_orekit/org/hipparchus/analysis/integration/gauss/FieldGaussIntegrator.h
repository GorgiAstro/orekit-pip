#ifndef org_hipparchus_analysis_integration_gauss_FieldGaussIntegrator_H
#define org_hipparchus_analysis_integration_gauss_FieldGaussIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
    }
    namespace util {
      class Pair;
    }
    class CalculusFieldElement;
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

          class FieldGaussIntegrator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7cd681864cf513c2,
              mid_init$_2c0fd42a693364fa,
              mid_getNumberOfPoints_412668abc8d889e9,
              mid_getPoint_8b3a1c735adfa4bc,
              mid_getWeight_8b3a1c735adfa4bc,
              mid_integrate_cf175d31250bee45,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldGaussIntegrator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldGaussIntegrator(const FieldGaussIntegrator& obj) : ::java::lang::Object(obj) {}

            FieldGaussIntegrator(const ::org::hipparchus::util::Pair &);
            FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

            jint getNumberOfPoints() const;
            ::org::hipparchus::CalculusFieldElement getPoint(jint) const;
            ::org::hipparchus::CalculusFieldElement getWeight(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldGaussIntegrator);
          extern PyTypeObject *PY_TYPE(FieldGaussIntegrator);

          class t_FieldGaussIntegrator {
          public:
            PyObject_HEAD
            FieldGaussIntegrator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldGaussIntegrator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldGaussIntegrator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldGaussIntegrator&, PyTypeObject *);
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
