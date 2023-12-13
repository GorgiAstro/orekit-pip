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
            mid_init$_aa31b8b89ee72c31,
            mid_init$_49f4b5153d696ea5,
            mid_getA_3b7b373db8e7887f,
            mid_getB_25e1757a36c4dde2,
            mid_getC_25e1757a36c4dde2,
            mid_getOrder_55546ef6a647f39b,
            mid_createInterpolator_1b8fb725fec61331,
            mid_estimateError_30c238558e44050a,
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
