#ifndef org_hipparchus_analysis_integration_FieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_FieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
      class NullArgumentException;
    }
    namespace analysis {
      class CalculusFieldUnivariateFunction;
    }
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

        class FieldUnivariateIntegrator : public ::java::lang::Object {
         public:
          enum {
            mid_getAbsoluteAccuracy_9981f74b2d109da6,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getIterations_d6ab429752e7c267,
            mid_getMaximalIterationCount_d6ab429752e7c267,
            mid_getMinimalIterationCount_d6ab429752e7c267,
            mid_getRelativeAccuracy_9981f74b2d109da6,
            mid_integrate_ef1d0d591cd17bf9,
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
