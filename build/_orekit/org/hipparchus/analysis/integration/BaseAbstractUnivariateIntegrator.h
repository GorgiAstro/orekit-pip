#ifndef org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
      class MathIllegalStateException;
    }
    namespace analysis {
      class UnivariateFunction;
      namespace integration {
        class UnivariateIntegrator;
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

        class BaseAbstractUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_557b8123390d8d0c,
            mid_getEvaluations_412668abc8d889e9,
            mid_getIterations_412668abc8d889e9,
            mid_getMaximalIterationCount_412668abc8d889e9,
            mid_getMinimalIterationCount_412668abc8d889e9,
            mid_getRelativeAccuracy_557b8123390d8d0c,
            mid_integrate_277b266ef2505d2d,
            mid_getMin_557b8123390d8d0c,
            mid_getMax_557b8123390d8d0c,
            mid_computeObjectiveValue_7e960cd6eee376d8,
            mid_doIntegrate_557b8123390d8d0c,
            mid_setup_1c22c5d1ce93543d,
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
