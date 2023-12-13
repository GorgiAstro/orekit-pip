#ifndef org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H
#define org_hipparchus_analysis_integration_BaseAbstractFieldUnivariateIntegrator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class Field;
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
            mid_getAbsoluteAccuracy_b74f83833fdad017,
            mid_getEvaluations_55546ef6a647f39b,
            mid_getField_04d1f63e17d5c5d4,
            mid_getIterations_55546ef6a647f39b,
            mid_getMaximalIterationCount_55546ef6a647f39b,
            mid_getMinimalIterationCount_55546ef6a647f39b,
            mid_getRelativeAccuracy_b74f83833fdad017,
            mid_integrate_6b15562ea2d5cce9,
            mid_doIntegrate_81520b552cb3fa26,
            mid_getMin_81520b552cb3fa26,
            mid_getMax_81520b552cb3fa26,
            mid_computeObjectiveValue_6e00dc5eb352fe51,
            mid_setup_2ce989e8ed78a18c,
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
