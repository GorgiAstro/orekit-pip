#ifndef org_hipparchus_ode_nonstiff_EulerIntegrator_H
#define org_hipparchus_ode_nonstiff_EulerIntegrator_H

#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"

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

        class EulerIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator {
         public:
          enum {
            mid_init$_77e0f9a1f260e2e5,
            mid_getA_43de1192439efa92,
            mid_getB_7cdc325af0834901,
            mid_getC_7cdc325af0834901,
            mid_createInterpolator_3e86721b5d422989,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EulerIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EulerIntegrator(const EulerIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {}

          EulerIntegrator(jdouble);

          JArray< JArray< jdouble > > getA() const;
          JArray< jdouble > getB() const;
          JArray< jdouble > getC() const;
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
        extern PyType_Def PY_TYPE_DEF(EulerIntegrator);
        extern PyTypeObject *PY_TYPE(EulerIntegrator);

        class t_EulerIntegrator {
        public:
          PyObject_HEAD
          EulerIntegrator object;
          static PyObject *wrap_Object(const EulerIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
