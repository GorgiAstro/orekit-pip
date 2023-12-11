#ifndef org_hipparchus_analysis_integration_FieldMidPointIntegrator_H
#define org_hipparchus_analysis_integration_FieldMidPointIntegrator_H

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

        class FieldMidPointIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator {
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

          explicit FieldMidPointIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldMidPointIntegrator(const FieldMidPointIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {}

          static jint MIDPOINT_MAX_ITERATIONS_COUNT;

          FieldMidPointIntegrator(const ::org::hipparchus::Field &);
          FieldMidPointIntegrator(const ::org::hipparchus::Field &, jint, jint);
          FieldMidPointIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(FieldMidPointIntegrator);
        extern PyTypeObject *PY_TYPE(FieldMidPointIntegrator);

        class t_FieldMidPointIntegrator {
        public:
          PyObject_HEAD
          FieldMidPointIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldMidPointIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldMidPointIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldMidPointIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
