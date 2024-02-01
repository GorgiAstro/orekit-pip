#ifndef org_hipparchus_ode_nonstiff_ThreeEighthesFieldIntegrator_H
#define org_hipparchus_ode_nonstiff_ThreeEighthesFieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
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

        class ThreeEighthesFieldIntegrator : public ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator {
         public:
          enum {
            mid_init$_88bffd71fb0313dc,
            mid_getA_4d010bb8d4780d51,
            mid_getB_94ed2e0620f8833d,
            mid_getC_94ed2e0620f8833d,
            mid_createInterpolator_23a890d7aa2242fd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ThreeEighthesFieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ThreeEighthesFieldIntegrator(const ThreeEighthesFieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(obj) {}

          ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field &, const ::org::hipparchus::CalculusFieldElement &);

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
        extern PyType_Def PY_TYPE_DEF(ThreeEighthesFieldIntegrator);
        extern PyTypeObject *PY_TYPE(ThreeEighthesFieldIntegrator);

        class t_ThreeEighthesFieldIntegrator {
        public:
          PyObject_HEAD
          ThreeEighthesFieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ThreeEighthesFieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ThreeEighthesFieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ThreeEighthesFieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
