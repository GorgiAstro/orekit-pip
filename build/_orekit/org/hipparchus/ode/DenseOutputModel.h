#ifndef org_hipparchus_ode_DenseOutputModel_H
#define org_hipparchus_ode_DenseOutputModel_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ODEStateAndDerivative;
      class DenseOutputModel;
      namespace sampling {
        class ODEStepHandler;
        class ODEStateInterpolator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class DenseOutputModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_append_ad9eeb1bf2af40c3,
          mid_finish_250c80d95e429c01,
          mid_getFinalTime_dff5885c2c873297,
          mid_getInitialTime_dff5885c2c873297,
          mid_getInterpolatedState_f01efdb3ab1bad7f,
          mid_handleStep_8c00288d760ba078,
          mid_init_5aaadc62bce8a394,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DenseOutputModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DenseOutputModel(const DenseOutputModel& obj) : ::java::lang::Object(obj) {}

        DenseOutputModel();

        void append(const DenseOutputModel &) const;
        void finish(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
        jdouble getFinalTime() const;
        jdouble getInitialTime() const;
        ::org::hipparchus::ode::ODEStateAndDerivative getInterpolatedState(jdouble) const;
        void handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
        void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(DenseOutputModel);
      extern PyTypeObject *PY_TYPE(DenseOutputModel);

      class t_DenseOutputModel {
      public:
        PyObject_HEAD
        DenseOutputModel object;
        static PyObject *wrap_Object(const DenseOutputModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
