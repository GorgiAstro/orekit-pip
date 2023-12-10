#ifndef org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
      namespace integration {
        class UnivariateIntegrator;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
      class NullArgumentException;
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

        class BaseAbstractUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_456d9a2f64d6b28d,
            mid_getEvaluations_f2f64475e4580546,
            mid_getIterations_f2f64475e4580546,
            mid_getMaximalIterationCount_f2f64475e4580546,
            mid_getMinimalIterationCount_f2f64475e4580546,
            mid_getRelativeAccuracy_456d9a2f64d6b28d,
            mid_integrate_5e6ae88ca7503288,
            mid_doIntegrate_456d9a2f64d6b28d,
            mid_getMax_456d9a2f64d6b28d,
            mid_getMin_456d9a2f64d6b28d,
            mid_computeObjectiveValue_0ba5fed9597b693e,
            mid_setup_77af8aa9123ea2e7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseAbstractUnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseAbstractUnivariateIntegrator(const BaseAbstractUnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

          static jdouble DEFAULT_ABSOLUTE_ACCURACY;
          static jint DEFAULT_MAX_ITERATIONS_COUNT;
          static jint DEFAULT_MIN_ITERATIONS_COUNT;
          static jdouble DEFAULT_RELATIVE_ACCURACY;

          jdouble getAbsoluteAccuracy() const;
          jint getEvaluations() const;
          jint getIterations() const;
          jint getMaximalIterationCount() const;
          jint getMinimalIterationCount() const;
          jdouble getRelativeAccuracy() const;
          jdouble integrate(jint, const ::org::hipparchus::analysis::UnivariateFunction &, jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(BaseAbstractUnivariateIntegrator);
        extern PyTypeObject *PY_TYPE(BaseAbstractUnivariateIntegrator);

        class t_BaseAbstractUnivariateIntegrator {
        public:
          PyObject_HEAD
          BaseAbstractUnivariateIntegrator object;
          static PyObject *wrap_Object(const BaseAbstractUnivariateIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
