#ifndef org_hipparchus_ode_DenseOutputModel_H
#define org_hipparchus_ode_DenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class DenseOutputModel;
      namespace sampling {
        class ODEStateInterpolator;
        class ODEStepHandler;
      }
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_append_d48382c52c974b04,
          mid_finish_d2d966b8a9c77b61,
          mid_getFinalTime_b74f83833fdad017,
          mid_getInitialTime_b74f83833fdad017,
          mid_getInterpolatedState_cf0061d2765ae5a3,
          mid_handleStep_197c5aaefd855810,
          mid_init_a7556bd72cab73f1,
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
