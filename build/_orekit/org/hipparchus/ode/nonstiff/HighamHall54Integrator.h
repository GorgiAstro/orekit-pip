#ifndef org_hipparchus_ode_nonstiff_HighamHall54Integrator_H
#define org_hipparchus_ode_nonstiff_HighamHall54Integrator_H

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

        class HighamHall54Integrator : public ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator {
         public:
          enum {
            mid_init$_e3195482263a60ce,
            mid_init$_cd5724127cc72e96,
            mid_getA_eda3f19b8225f78f,
            mid_getB_be783177b060994b,
            mid_getC_be783177b060994b,
            mid_getOrder_d6ab429752e7c267,
            mid_createInterpolator_357985cd2a4d75d0,
            mid_estimateError_8c458726c8da3a78,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighamHall54Integrator(jobject obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighamHall54Integrator(const HighamHall54Integrator& obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(obj) {}

          HighamHall54Integrator(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          HighamHall54Integrator(jdouble, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(HighamHall54Integrator);
        extern PyTypeObject *PY_TYPE(HighamHall54Integrator);

        class t_HighamHall54Integrator {
        public:
          PyObject_HEAD
          HighamHall54Integrator object;
          static PyObject *wrap_Object(const HighamHall54Integrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
