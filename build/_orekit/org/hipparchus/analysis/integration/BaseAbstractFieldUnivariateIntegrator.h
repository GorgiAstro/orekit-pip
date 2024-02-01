#ifndef org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
    }
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
      }
      class CalculusFieldUnivariateFunction;
    }
    class Field;
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

        class BaseAbstractFieldUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_9981f74b2d109da6,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getField_577649682b9910c1,
            mid_getIterations_d6ab429752e7c267,
            mid_getMaximalIterationCount_d6ab429752e7c267,
            mid_getMinimalIterationCount_d6ab429752e7c267,
            mid_getRelativeAccuracy_9981f74b2d109da6,
            mid_integrate_ef1d0d591cd17bf9,
            mid_getMin_08d37e3f77b7239d,
            mid_getMax_08d37e3f77b7239d,
            mid_computeObjectiveValue_a3b854adede8eaaa,
            mid_doIntegrate_08d37e3f77b7239d,
            mid_setup_11812be0a0c96fef,
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
