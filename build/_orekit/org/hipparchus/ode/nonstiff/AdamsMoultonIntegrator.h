#ifndef org_hipparchus_ode_nonstiff_AdamsMoultonIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsMoultonIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class AdamsMoultonIntegrator : public ::org::hipparchus::ode::nonstiff::AdamsIntegrator {
         public:
          enum {
            mid_init$_cf4807ec2bf81436,
            mid_init$_a1282fa5ba2ed7b2,
            mid_errorEstimation_37b70b019b7ede26,
            mid_finalizeStep_26e1f9270ed9200b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsMoultonIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsMoultonIntegrator(const AdamsMoultonIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(obj) {}

          AdamsMoultonIntegrator(jint, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdamsMoultonIntegrator(jint, jdouble, jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(AdamsMoultonIntegrator);
        extern PyTypeObject *PY_TYPE(AdamsMoultonIntegrator);

        class t_AdamsMoultonIntegrator {
        public:
          PyObject_HEAD
          AdamsMoultonIntegrator object;
          static PyObject *wrap_Object(const AdamsMoultonIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
