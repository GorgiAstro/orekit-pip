#ifndef org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace integration {
        class FieldUnivariateIntegrator;
      }
      class CalculusFieldUnivariateFunction;
    }
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
            mid_getAbsoluteAccuracy_dff5885c2c873297,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getField_5b28be2d3632a5dc,
            mid_getIterations_570ce0828f81a2c1,
            mid_getMaximalIterationCount_570ce0828f81a2c1,
            mid_getMinimalIterationCount_570ce0828f81a2c1,
            mid_getRelativeAccuracy_dff5885c2c873297,
            mid_integrate_9be354262fab8bf3,
            mid_doIntegrate_eba8e72a22c984ac,
            mid_getMin_eba8e72a22c984ac,
            mid_getMax_eba8e72a22c984ac,
            mid_computeObjectiveValue_a4b1871f4d29e58b,
            mid_setup_056be52d6b5c3df2,
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
