#ifndef org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
      }
      class CalculusFieldUnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
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

        class BaseAbstractFieldUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_557b8123390d8d0c,
            mid_getEvaluations_412668abc8d889e9,
            mid_getField_20f98801541dcec1,
            mid_getIterations_412668abc8d889e9,
            mid_getMaximalIterationCount_412668abc8d889e9,
            mid_getMinimalIterationCount_412668abc8d889e9,
            mid_getRelativeAccuracy_557b8123390d8d0c,
            mid_integrate_febca2424e26c993,
            mid_getMin_613c8f46c659f636,
            mid_getMax_613c8f46c659f636,
            mid_computeObjectiveValue_6672ad854985cb64,
            mid_doIntegrate_613c8f46c659f636,
            mid_setup_c5866c4f44a777c3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseAbstractFieldUnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseAbstractFieldUnivariateIntegrator(const BaseAbstractFieldUnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_ABSOLUTE_ACCURACY;
          static jint DEFAULT_MAX_ITERATIONS_COUNT;
          static jint DEFAULT_MIN_ITERATIONS_COUNT;
          static jdouble DEFAULT_RELATIVE_ACCURACY;

          jdouble getAbsoluteAccuracy() const;
          jint getEvaluations() const;
          ::org::hipparchus::Field getField() const;
          jint getIterations() const;
          jint getMaximalIterationCount() const;
          jint getMinimalIterationCount() const;
          jdouble getRelativeAccuracy() const;
          ::org::hipparchus::CalculusFieldElement integrate(jint, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator);
        extern PyTypeObject *PY_TYPE(BaseAbstractFieldUnivariateIntegrator);

        class t_BaseAbstractFieldUnivariateIntegrator {
        public:
          PyObject_HEAD
          BaseAbstractFieldUnivariateIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseAbstractFieldUnivariateIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseAbstractFieldUnivariateIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseAbstractFieldUnivariateIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
