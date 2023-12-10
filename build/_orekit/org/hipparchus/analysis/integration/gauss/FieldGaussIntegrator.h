#ifndef org_hipparchus_analysis_integration_gauss_FieldGaussIntegrator_H
#define org_hipparchus_analysis_integration_gauss_FieldGaussIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace util {
      class Pair;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
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

          class FieldGaussIntegrator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3fca46bb93fd3e69,
              mid_init$_cbc98e7d0c0477db,
              mid_getNumberOfPoints_570ce0828f81a2c1,
              mid_getPoint_93058f0552012043,
              mid_getWeight_93058f0552012043,
              mid_integrate_d4d4f68a6723feee,
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
