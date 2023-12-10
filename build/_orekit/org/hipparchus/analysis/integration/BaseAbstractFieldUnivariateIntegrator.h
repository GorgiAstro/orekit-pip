#ifndef org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
      namespace integration {
        class FieldUnivariateIntegrator;
      }
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

        class BaseAbstractFieldUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_456d9a2f64d6b28d,
            mid_getEvaluations_f2f64475e4580546,
            mid_getField_70b4bbd3fa378d6b,
            mid_getIterations_f2f64475e4580546,
            mid_getMaximalIterationCount_f2f64475e4580546,
            mid_getMinimalIterationCount_f2f64475e4580546,
            mid_getRelativeAccuracy_456d9a2f64d6b28d,
            mid_integrate_cffdd7e74469af96,
            mid_doIntegrate_e6d4d3215c30992a,
            mid_getMax_e6d4d3215c30992a,
            mid_getMin_e6d4d3215c30992a,
            mid_computeObjectiveValue_d3398190482814dc,
            mid_setup_5d7218df37276b12,
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
