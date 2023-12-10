#ifndef org_hipparchus_ode_nonstiff_MidpointIntegrator_H
#define org_hipparchus_ode_nonstiff_MidpointIntegrator_H

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

        class MidpointIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator {
         public:
          enum {
            mid_init$_17db3a65980d3441,
            mid_getA_0358d8ea02f2cdb1,
            mid_getB_60c7040667a7dc5c,
            mid_getC_60c7040667a7dc5c,
            mid_createInterpolator_2d871a79348db26a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MidpointIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MidpointIntegrator(const MidpointIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(obj) {}

          MidpointIntegrator(jdouble);

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
        extern PyType_Def PY_TYPE_DEF(MidpointIntegrator);
        extern PyTypeObject *PY_TYPE(MidpointIntegrator);

        class t_MidpointIntegrator {
        public:
          PyObject_HEAD
          MidpointIntegrator object;
          static PyObject *wrap_Object(const MidpointIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
