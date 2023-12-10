#ifndef org_hipparchus_ode_nonstiff_DormandPrince54Integrator_H
#define org_hipparchus_ode_nonstiff_DormandPrince54Integrator_H

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

        class DormandPrince54Integrator : public ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator {
         public:
          enum {
            mid_init$_36e977212374ff6b,
            mid_init$_b0a935b68e41d65a,
            mid_getA_0358d8ea02f2cdb1,
            mid_getB_60c7040667a7dc5c,
            mid_getC_60c7040667a7dc5c,
            mid_getOrder_570ce0828f81a2c1,
            mid_createInterpolator_78c1246bcb083384,
            mid_estimateError_c892cfaf07a4634f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince54Integrator(jobject obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince54Integrator(const DormandPrince54Integrator& obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {}

          DormandPrince54Integrator(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          DormandPrince54Integrator(jdouble, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(DormandPrince54Integrator);
        extern PyTypeObject *PY_TYPE(DormandPrince54Integrator);

        class t_DormandPrince54Integrator {
        public:
          PyObject_HEAD
          DormandPrince54Integrator object;
          static PyObject *wrap_Object(const DormandPrince54Integrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
