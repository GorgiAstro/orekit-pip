#ifndef org_hipparchus_ode_nonstiff_DormandPrince54FieldIntegrator_H
#define org_hipparchus_ode_nonstiff_DormandPrince54FieldIntegrator_H

#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"

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

        class DormandPrince54FieldIntegrator : public ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator {
         public:
          enum {
            mid_init$_4879aa54fb0b4b90,
            mid_init$_f2e08e06cc4e8e8d,
            mid_getA_f180d140dce78d62,
            mid_getB_41762fd4377ff26e,
            mid_getC_41762fd4377ff26e,
            mid_getOrder_412668abc8d889e9,
            mid_estimateError_db5b00c957704bb3,
            mid_createInterpolator_8a5005e52d76084e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DormandPrince54FieldIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DormandPrince54FieldIntegrator(const DormandPrince54FieldIntegrator& obj) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(obj) {}

          DormandPrince54FieldIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          DormandPrince54FieldIntegrator(const ::org::hipparchus::Field &, jdouble, jdouble, jdouble, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(DormandPrince54FieldIntegrator);
        extern PyTypeObject *PY_TYPE(DormandPrince54FieldIntegrator);

        class t_DormandPrince54FieldIntegrator {
        public:
          PyObject_HEAD
          DormandPrince54FieldIntegrator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DormandPrince54FieldIntegrator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DormandPrince54FieldIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DormandPrince54FieldIntegrator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
