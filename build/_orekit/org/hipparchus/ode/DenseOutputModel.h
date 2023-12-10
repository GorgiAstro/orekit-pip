#ifndef org_hipparchus_ode_DenseOutputModel_H
#define org_hipparchus_ode_DenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStepHandler;
        class ODEStateInterpolator;
      }
      class DenseOutputModel;
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
          mid_init$_7ae3461a92a43152,
          mid_append_2d53ab9c410c1d8f,
          mid_finish_100c57fd45963f6d,
          mid_getFinalTime_456d9a2f64d6b28d,
          mid_getInitialTime_456d9a2f64d6b28d,
          mid_getInterpolatedState_05e60c2c1f1796ae,
          mid_handleStep_7f7ea329b6669cd2,
          mid_init_85808f3d6374b436,
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
