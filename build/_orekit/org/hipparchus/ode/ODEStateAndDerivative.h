#ifndef org_hipparchus_ode_ODEStateAndDerivative_H
#define org_hipparchus_ode_ODEStateAndDerivative_H

#include "org/hipparchus/ode/ODEState.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ODEStateAndDerivative : public ::org::hipparchus::ode::ODEState {
       public:
        enum {
          mid_init$_d1fab4f16ef74ba5,
          mid_init$_3af222968dd38947,
          mid_getCompleteDerivative_a53a7513ecedada2,
          mid_getPrimaryDerivative_a53a7513ecedada2,
          mid_getSecondaryDerivative_1da5c9e77f24f269,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ODEStateAndDerivative(jobject obj) : ::org::hipparchus::ode::ODEState(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ODEStateAndDerivative(const ODEStateAndDerivative& obj) : ::org::hipparchus::ode::ODEState(obj) {}

        ODEStateAndDerivative(jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
        ODEStateAndDerivative(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &);

        JArray< jdouble > getCompleteDerivative() const;
        JArray< jdouble > getPrimaryDerivative() const;
        JArray< jdouble > getSecondaryDerivative(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ODEStateAndDerivative);
      extern PyTypeObject *PY_TYPE(ODEStateAndDerivative);

      class t_ODEStateAndDerivative {
      public:
        PyObject_HEAD
        ODEStateAndDerivative object;
        static PyObject *wrap_Object(const ODEStateAndDerivative&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
