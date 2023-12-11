#ifndef org_hipparchus_analysis_integration_FieldSimpsonIntegrator_H
#define org_hipparchus_analysis_integration_FieldSimpsonIntegrator_H

#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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
            mid_init$_979ae7f57a96b096,
            mid_init$_a9ccb012d4cb48bd,
            mid_init$_54078aff55a90bb9,
            mid_doIntegrate_613c8f46c659f636,
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
