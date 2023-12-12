#ifndef org_hipparchus_ode_nonstiff_AdamsBashforthIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsBashforthIntegrator_H

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

        class AdamsBashforthIntegrator : public ::org::hipparchus::ode::nonstiff::AdamsIntegrator {
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

          explicit AdamsBashforthIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsBashforthIntegrator(const AdamsBashforthIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(obj) {}

          AdamsBashforthIntegrator(jint, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdamsBashforthIntegrator(jint, jdouble, jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(AdamsBashforthIntegrator);
        extern PyTypeObject *PY_TYPE(AdamsBashforthIntegrator);

        class t_AdamsBashforthIntegrator {
        public:
          PyObject_HEAD
          AdamsBashforthIntegrator object;
          static PyObject *wrap_Object(const AdamsBashforthIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
