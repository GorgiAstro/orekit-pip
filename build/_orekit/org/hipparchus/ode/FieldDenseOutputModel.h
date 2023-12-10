#ifndef org_hipparchus_ode_FieldDenseOutputModel_H
#define org_hipparchus_ode_FieldDenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStateInterpolator;
        class FieldODEStepHandler;
      }
      class FieldDenseOutputModel;
    }
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
          mid_init$_0fa09c18fee449d5,
          mid_append_711273d34eb486fb,
          mid_finish_22d6c75b64070b54,
          mid_getFinalTime_eba8e72a22c984ac,
          mid_getInitialTime_eba8e72a22c984ac,
          mid_getInterpolatedState_ad18f3cde52c81b9,
          mid_handleStep_f31e7e3a46e05334,
          mid_init_81b5dd1fb920fdc1,
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
