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
            mid_init$_e5787c5177784e12,
            mid_init$_667a7965403ed91a,
            mid_getA_43de1192439efa92,
            mid_getB_7cdc325af0834901,
            mid_getC_7cdc325af0834901,
            mid_getOrder_f2f64475e4580546,
            mid_createInterpolator_94745c33528349a7,
            mid_estimateError_8ae23a975a0e5320,
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
