#ifndef org_hipparchus_ode_FieldDenseOutputModel_H
#define org_hipparchus_ode_FieldDenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      class FieldDenseOutputModel;
      namespace sampling {
        class FieldODEStepHandler;
        class FieldODEStateInterpolator;
      }
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_append_94b833ec8c7c437c,
          mid_finish_5b8144cf9ccecc03,
          mid_getFinalTime_81520b552cb3fa26,
          mid_getInitialTime_81520b552cb3fa26,
          mid_getInterpolatedState_285853fa8f6e2f48,
          mid_handleStep_bd804f650c074774,
          mid_init_55fdeef582303a99,
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
