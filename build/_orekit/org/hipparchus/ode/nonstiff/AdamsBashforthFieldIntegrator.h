#ifndef org_hipparchus_ode_nonstiff_AdamsBashforthFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsBashforthFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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

        class AdamsBashforthFieldIntegrator : public ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator {
         public:
          enum {
            mid_init$_7f69364f82b72251,
            mid_init$_b6677f3cac38e98d,
            mid_errorEstimation_41f9dcc5eb20f1cb,
            mid_finalizeStep_cf78fb7ef1b60a21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsBashforthFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsBashforthFieldIntegrator(const AdamsBashforthFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(obj) {}

          AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field &, jint, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field &, jint, jdouble, jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(AdamsBashforthFieldIntegrator);
        extern PyTypeObject *PY_TYPE(AdamsBashforthFieldIntegrator);

        class t_AdamsBashforthFieldIntegrator {
        public:
          PyObject_HEAD
          AdamsBashforthFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AdamsBashforthFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AdamsBashforthFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AdamsBashforthFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
