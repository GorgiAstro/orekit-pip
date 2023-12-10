#ifndef org_hipparchus_ode_ParametersController_H
#define org_hipparchus_ode_ParametersController_H

#include "org/hipparchus/ode/Parameterizable.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ParametersController : public ::org::hipparchus::ode::Parameterizable {
       public:
        enum {
          mid_getParameter_531dcf669f2059aa,
          mid_setParameter_dc256bfc3daae929,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParametersController(jobject obj) : ::org::hipparchus::ode::Parameterizable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParametersController(const ParametersController& obj) : ::org::hipparchus::ode::Parameterizable(obj) {}

        jdouble getParameter(const ::java::lang::String &) const;
        void setParameter(const ::java::lang::String &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ParametersController);
      extern PyTypeObject *PY_TYPE(ParametersController);

      class t_ParametersController {
      public:
        PyObject_HEAD
        ParametersController object;
        static PyObject *wrap_Object(const ParametersController&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
