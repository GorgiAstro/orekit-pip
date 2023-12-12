#ifndef org_hipparchus_ode_FieldDenseOutputModel_H
#define org_hipparchus_ode_FieldDenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStepHandler;
        class FieldODEStateInterpolator;
      }
      class FieldDenseOutputModel;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_0640e6acf969ed28,
          mid_append_d29cb43b00cb3f76,
          mid_finish_747fee420c9ba889,
          mid_getFinalTime_613c8f46c659f636,
          mid_getInitialTime_613c8f46c659f636,
          mid_getInterpolatedState_2c40e49ec2799666,
          mid_handleStep_e7d5f5a81e2a2b8e,
          mid_init_f808a4f21f8be825,
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
