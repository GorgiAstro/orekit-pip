#ifndef org_hipparchus_ode_nonstiff_DormandPrince853Integrator_H
#define org_hipparchus_ode_nonstiff_DormandPrince853Integrator_H

#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"

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

        class DormandPrince853Integrator : public ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator {
         public:
          enum {
            mid_init$_e3195482263a60ce,
            mid_init$_cd5724127cc72e96,
            mid_getA_eda3f19b8225f78f,
            mid_getB_be783177b060994b,
            mid_getC_be783177b060994b,
            mid_getOrder_d6ab429752e7c267,
            mid_createInterpolator_6bd734435df3b7f2,
            mid_estimateError_8c458726c8da3a78,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince853Integrator(jobject obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince853Integrator(const DormandPrince853Integrator& obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {}

          DormandPrince853Integrator(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          DormandPrince853Integrator(jdouble, jdouble, jdouble, jdouble);

          JArray< JArray< jdouble > > getA() const;
          JArray< jdouble > getB() const;
          JArray< jdouble > getC() const;
          jint getOrder() const;
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
        extern PyType_Def PY_TYPE_DEF(DormandPrince853Integrator);
        extern PyTypeObject *PY_TYPE(DormandPrince853Integrator);

        class t_DormandPrince853Integrator {
        public:
          PyObject_HEAD
          DormandPrince853Integrator object;
          static PyObject *wrap_Object(const DormandPrince853Integrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
