#ifndef org_hipparchus_ode_NamedParameterJacobianProvider_H
#define org_hipparchus_ode_NamedParameterJacobianProvider_H

#include "org/hipparchus/ode/Parameterizable.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class NamedParameterJacobianProvider : public ::org::hipparchus::ode::Parameterizable {
       public:
        enum {
          mid_computeParameterJacobian_b64b3db9d797dca8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit NamedParameterJacobianProvider(jobject obj) : ::org::hipparchus::ode::Parameterizable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NamedParameterJacobianProvider(const NamedParameterJacobianProvider& obj) : ::org::hipparchus::ode::Parameterizable(obj) {}

        JArray< jdouble > computeParameterJacobian(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(NamedParameterJacobianProvider);
      extern PyTypeObject *PY_TYPE(NamedParameterJacobianProvider);

      class t_NamedParameterJacobianProvider {
      public:
        PyObject_HEAD
        NamedParameterJacobianProvider object;
        static PyObject *wrap_Object(const NamedParameterJacobianProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
