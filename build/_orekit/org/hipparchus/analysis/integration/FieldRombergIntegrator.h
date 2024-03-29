#ifndef org_hipparchus_analysis_integration_FieldRombergIntegrator_H
#define org_hipparchus_analysis_integration_FieldRombergIntegrator_H

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

        class FieldRombergIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator {
         public:
          enum {
            mid_init$_a44abdd035f01345,
            mid_init$_ddbf374219cf6329,
            mid_init$_119028fb2475d87b,
            mid_doIntegrate_08d37e3f77b7239d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldRombergIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldRombergIntegrator(const FieldRombergIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {}

          static jint ROMBERG_MAX_ITERATIONS_COUNT;

          FieldRombergIntegrator(const ::org::hipparchus::Field &);
          FieldRombergIntegrator(const ::org::hipparchus::Field &, jint, jint);
          FieldRombergIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(FieldRombergIntegrator);
        extern PyTypeObject *PY_TYPE(FieldRombergIntegrator);

        class t_FieldRombergIntegrator {
        public:
          PyObject_HEAD
          FieldRombergIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldRombergIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldRombergIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldRombergIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
