#ifndef org_hipparchus_ode_nonstiff_LutherIntegrator_H
#define org_hipparchus_ode_nonstiff_LutherIntegrator_H

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

        class LutherIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_getA_8cf5267aa13a77f3,
            mid_getB_a53a7513ecedada2,
            mid_getC_a53a7513ecedada2,
            mid_createInterpolator_9b7d6ac762efc6e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LutherIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LutherIntegrator(const LutherIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {}

          LutherIntegrator(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(LutherIntegrator);
        extern PyTypeObject *PY_TYPE(LutherIntegrator);

        class t_LutherIntegrator {
        public:
          PyObject_HEAD
          LutherIntegrator object;
          static PyObject *wrap_Object(const LutherIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
