#ifndef org_hipparchus_ode_DenseOutputModel_H
#define org_hipparchus_ode_DenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class DenseOutputModel;
      namespace sampling {
        class ODEStepHandler;
        class ODEStateInterpolator;
      }
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class DenseOutputModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_append_52c12c88abdf5d69,
          mid_finish_b79fdee299d79fcc,
          mid_getFinalTime_557b8123390d8d0c,
          mid_getInitialTime_557b8123390d8d0c,
          mid_getInterpolatedState_0a47e68426cfc9cf,
          mid_handleStep_b272ebb5ead79c81,
          mid_init_7e69c83de8052a2b,
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
