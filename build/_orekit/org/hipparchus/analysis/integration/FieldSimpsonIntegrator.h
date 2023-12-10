#ifndef org_hipparchus_analysis_integration_FieldSimpsonIntegrator_H
#define org_hipparchus_analysis_integration_FieldSimpsonIntegrator_H

#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"

namespace org {
  namespace hipparchus {
    class Field;
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

        class FieldSimpsonIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator {
         public:
          enum {
            mid_init$_205c34b8e33cf33f,
            mid_init$_11914f5932256658,
            mid_init$_84b3e2e5209296cd,
            mid_doIntegrate_e6d4d3215c30992a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldSimpsonIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldSimpsonIntegrator(const FieldSimpsonIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {}

          static jint SIMPSON_MAX_ITERATIONS_COUNT;

          FieldSimpsonIntegrator(const ::org::hipparchus::Field &);
          FieldSimpsonIntegrator(const ::org::hipparchus::Field &, jint, jint);
          FieldSimpsonIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(FieldSimpsonIntegrator);
        extern PyTypeObject *PY_TYPE(FieldSimpsonIntegrator);

        class t_FieldSimpsonIntegrator {
        public:
          PyObject_HEAD
          FieldSimpsonIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldSimpsonIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldSimpsonIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldSimpsonIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
