#ifndef org_hipparchus_analysis_integration_FieldTrapezoidIntegrator_H
#define org_hipparchus_analysis_integration_FieldTrapezoidIntegrator_H

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

        class FieldTrapezoidIntegrator : public ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator {
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

          explicit FieldTrapezoidIntegrator(jobject obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldTrapezoidIntegrator(const FieldTrapezoidIntegrator& obj) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(obj) {}

          static jint TRAPEZOID_MAX_ITERATIONS_COUNT;

          FieldTrapezoidIntegrator(const ::org::hipparchus::Field &);
          FieldTrapezoidIntegrator(const ::org::hipparchus::Field &, jint, jint);
          FieldTrapezoidIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(FieldTrapezoidIntegrator);
        extern PyTypeObject *PY_TYPE(FieldTrapezoidIntegrator);

        class t_FieldTrapezoidIntegrator {
        public:
          PyObject_HEAD
          FieldTrapezoidIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldTrapezoidIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldTrapezoidIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldTrapezoidIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
