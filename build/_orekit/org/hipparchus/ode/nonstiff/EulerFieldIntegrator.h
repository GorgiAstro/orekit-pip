#ifndef org_hipparchus_ode_nonstiff_EulerFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_EulerFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"

namespace org {
  namespace hipparchus {
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
    namespace ode {
      namespace nonstiff {

        class EulerFieldIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator {
         public:
          enum {
            mid_init$_15e7459be7ec40d8,
            mid_getA_dd8485a0eb2e2903,
            mid_getB_01c7d10e96d5cf94,
            mid_getC_01c7d10e96d5cf94,
            mid_createInterpolator_6bddfbb86ad6a1a3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EulerFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EulerFieldIntegrator(const EulerFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {}

          EulerFieldIntegrator(const ::org::hipparchus::Field &, const ::org::hipparchus::CalculusFieldElement &);

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getA() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getB() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getC() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(EulerFieldIntegrator);
        extern PyTypeObject *PY_TYPE(EulerFieldIntegrator);

        class t_EulerFieldIntegrator {
        public:
          PyObject_HEAD
          EulerFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EulerFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EulerFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EulerFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
