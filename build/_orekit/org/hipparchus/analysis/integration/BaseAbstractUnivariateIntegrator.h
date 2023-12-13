#ifndef org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
            mid_getAbsoluteAccuracy_b74f83833fdad017,
            mid_getEvaluations_55546ef6a647f39b,
            mid_getIterations_55546ef6a647f39b,
            mid_getMaximalIterationCount_55546ef6a647f39b,
            mid_getMinimalIterationCount_55546ef6a647f39b,
            mid_getRelativeAccuracy_b74f83833fdad017,
            mid_integrate_076ce9f904fe1577,
            mid_doIntegrate_b74f83833fdad017,
            mid_getMin_b74f83833fdad017,
            mid_getMax_b74f83833fdad017,
            mid_computeObjectiveValue_04fd0666b613d2ab,
            mid_setup_c0740661ca309f10,
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
