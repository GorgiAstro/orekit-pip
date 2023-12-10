#ifndef org_hipparchus_analysis_integration_FieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_FieldUnivariateIntegrator_H

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
      class CalculusFieldUnivariateFunction;
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

        class FieldUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_dff5885c2c873297,
            mid_getEvaluations_570ce0828f81a2c1,
            mid_getIterations_570ce0828f81a2c1,
            mid_getMaximalIterationCount_570ce0828f81a2c1,
            mid_getMinimalIterationCount_570ce0828f81a2c1,
            mid_getRelativeAccuracy_dff5885c2c873297,
            mid_integrate_9be354262fab8bf3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateIntegrator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateIntegrator(const FieldUnivariateIntegrator& obj) : ::java::lang::Object(obj) {}

          jdouble getAbsoluteAccuracy() const;
          jint getEvaluations() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateIntegrator);
        extern PyTypeObject *PY_TYPE(FieldUnivariateIntegrator);

        class t_FieldUnivariateIntegrator {
        public:
          PyObject_HEAD
          FieldUnivariateIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
