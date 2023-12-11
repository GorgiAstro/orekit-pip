#ifndef org_hipparchus_ode_nonstiff_GillFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_GillFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class GillFieldIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator {
         public:
          enum {
            mid_init$_c9ae9949e6b74bf6,
            mid_getA_f180d140dce78d62,
            mid_getB_41762fd4377ff26e,
            mid_getC_41762fd4377ff26e,
            mid_createInterpolator_6fe210429726f2cb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GillFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GillFieldIntegrator(const GillFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {}

          GillFieldIntegrator(const ::org::hipparchus::Field &, const ::org::hipparchus::CalculusFieldElement &);

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getA() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getB() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getC() const;
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
        extern PyType_Def PY_TYPE_DEF(GillFieldIntegrator);
        extern PyTypeObject *PY_TYPE(GillFieldIntegrator);

        class t_GillFieldIntegrator {
        public:
          PyObject_HEAD
          GillFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GillFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GillFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GillFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
