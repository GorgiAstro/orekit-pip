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
            mid_init$_3d5ce2896eb0273f,
            mid_init$_0d23f64daa74287b,
            mid_errorEstimation_e7930007697328a4,
            mid_finalizeStep_04cf5a46fd40d06d,
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
