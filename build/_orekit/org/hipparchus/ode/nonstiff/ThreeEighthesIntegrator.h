#ifndef org_hipparchus_ode_nonstiff_ThreeEighthesIntegrator_H
#define org_hipparchus_ode_nonstiff_ThreeEighthesIntegrator_H

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

        class ThreeEighthesIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator {
         public:
          enum {
            mid_init$_10f281d777284cea,
            mid_getA_8cf5267aa13a77f3,
            mid_getB_a53a7513ecedada2,
            mid_getC_a53a7513ecedada2,
            mid_createInterpolator_68dc828ebc8622c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ThreeEighthesIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ThreeEighthesIntegrator(const ThreeEighthesIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {}

          ThreeEighthesIntegrator(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(ThreeEighthesIntegrator);
        extern PyTypeObject *PY_TYPE(ThreeEighthesIntegrator);

        class t_ThreeEighthesIntegrator {
        public:
          PyObject_HEAD
          ThreeEighthesIntegrator object;
          static PyObject *wrap_Object(const ThreeEighthesIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
