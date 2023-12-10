#ifndef org_hipparchus_ode_FieldDenseOutputModel_H
#define org_hipparchus_ode_FieldDenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class FieldODEStateInterpolator;
        class FieldODEStepHandler;
      }
      class FieldODEStateAndDerivative;
      class FieldDenseOutputModel;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
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

      class FieldDenseOutputModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_append_82ba67f23ed32431,
          mid_finish_c314ae4458a4e52a,
          mid_getFinalTime_e6d4d3215c30992a,
          mid_getInitialTime_e6d4d3215c30992a,
          mid_getInterpolatedState_05327270bfa02fcd,
          mid_handleStep_bcb27fe1570581e2,
          mid_init_e6d23212b178b64e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldDenseOutputModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldDenseOutputModel(const FieldDenseOutputModel& obj) : ::java::lang::Object(obj) {}

        FieldDenseOutputModel();

        void append(const FieldDenseOutputModel &) const;
        void finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
        ::org::hipparchus::CalculusFieldElement getFinalTime() const;
        ::org::hipparchus::CalculusFieldElement getInitialTime() const;
        ::org::hipparchus::ode::FieldODEStateAndDerivative getInterpolatedState(const ::org::hipparchus::CalculusFieldElement &) const;
        void handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
        void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldDenseOutputModel);
      extern PyTypeObject *PY_TYPE(FieldDenseOutputModel);

      class t_FieldDenseOutputModel {
      public:
        PyObject_HEAD
        FieldDenseOutputModel object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldDenseOutputModel *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldDenseOutputModel&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldDenseOutputModel&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
