#ifndef org_hipparchus_ode_ODEJacobiansProvider_H
#define org_hipparchus_ode_ODEJacobiansProvider_H

#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class NamedParameterJacobianProvider;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ODEJacobiansProvider : public ::org::hipparchus::ode::OrdinaryDifferentialEquation {
       public:
        enum {
          mid_computeMainStateJacobian_1548e8a2885a1cd0,
          mid_computeParameterJacobian_b64c18f49b11902d,
          mid_getParametersNames_d751c1a57012b438,
          mid_isSupported_df4c65b2aede5c41,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ODEJacobiansProvider(jobject obj) : ::org::hipparchus::ode::OrdinaryDifferentialEquation(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ODEJacobiansProvider(const ODEJacobiansProvider& obj) : ::org::hipparchus::ode::OrdinaryDifferentialEquation(obj) {}

        JArray< JArray< jdouble > > computeMainStateJacobian(jdouble, const JArray< jdouble > &, const JArray< jdouble > &) const;
        JArray< jdouble > computeParameterJacobian(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, const ::java::lang::String &) const;
        ::java::util::List getParametersNames() const;
        jboolean isSupported(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ODEJacobiansProvider);
      extern PyTypeObject *PY_TYPE(ODEJacobiansProvider);

      class t_ODEJacobiansProvider {
      public:
        PyObject_HEAD
        ODEJacobiansProvider object;
        static PyObject *wrap_Object(const ODEJacobiansProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
