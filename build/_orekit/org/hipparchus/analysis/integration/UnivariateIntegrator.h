#ifndef org_hipparchus_analysis_integration_UnivariateIntegrator_H
#define org_hipparchus_analysis_integration_UnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
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

        class UnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_dff5885c2c873297,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getIterations_570ce0828f81a2c1,
            mid_getMaximalIterationCount_570ce0828f81a2c1,
            mid_getMinimalIterationCount_570ce0828f81a2c1,
            mid_getRelativeAccuracy_dff5885c2c873297,
            mid_integrate_5531acb13e429311,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateIntegrator(const UnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(UnivariateIntegrator);
        extern PyTypeObject *PY_TYPE(UnivariateIntegrator);

        class t_UnivariateIntegrator {
        public:
          PyObject_HEAD
          UnivariateIntegrator object;
          static PyObject *wrap_Object(const UnivariateIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
