#ifndef org_hipparchus_ode_DenseOutputModel_H
#define org_hipparchus_ode_DenseOutputModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
        class ODEStepHandler;
      }
      class DenseOutputModel;
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
          mid_init$_ff7cb6c242604316,
          mid_append_f707b066c165e5ed,
          mid_finish_6bfc236263cc281c,
          mid_getFinalTime_9981f74b2d109da6,
          mid_getInitialTime_9981f74b2d109da6,
          mid_getInterpolatedState_dddd5f60deb44228,
          mid_handleStep_4f79f5048423f318,
          mid_init_25005604bcb94d07,
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
