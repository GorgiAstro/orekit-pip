#ifndef org_hipparchus_ode_nonstiff_HighamHall54FieldIntegrator_H
#define org_hipparchus_ode_nonstiff_HighamHall54FieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"

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

        class HighamHall54FieldIntegrator : public ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator {
         public:
          enum {
            mid_init$_00877c251fc4db11,
            mid_init$_5843d38540497bc2,
            mid_getA_4d010bb8d4780d51,
            mid_getB_94ed2e0620f8833d,
            mid_getC_94ed2e0620f8833d,
            mid_getOrder_d6ab429752e7c267,
            mid_createInterpolator_2cdfca06aa7946a1,
            mid_estimateError_2bb116b8560eb7ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighamHall54FieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighamHall54FieldIntegrator(const HighamHall54FieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(obj) {}

          HighamHall54FieldIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          HighamHall54FieldIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jdouble, jdouble);

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > getA() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getB() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getC() const;
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
        extern PyType_Def PY_TYPE_DEF(HighamHall54FieldIntegrator);
        extern PyTypeObject *PY_TYPE(HighamHall54FieldIntegrator);

        class t_HighamHall54FieldIntegrator {
        public:
          PyObject_HEAD
          HighamHall54FieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_HighamHall54FieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const HighamHall54FieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const HighamHall54FieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
