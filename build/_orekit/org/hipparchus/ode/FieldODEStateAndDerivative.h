#ifndef org_hipparchus_ode_FieldODEStateAndDerivative_H
#define org_hipparchus_ode_FieldODEStateAndDerivative_H

#include "org/hipparchus/ode/FieldODEState.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class FieldODEStateAndDerivative : public ::org::hipparchus::ode::FieldODEState {
       public:
        enum {
          mid_init$_e9795fccc89fdc2b,
          mid_init$_176ec9f2d788ac95,
          mid_getCompleteDerivative_41762fd4377ff26e,
          mid_getPrimaryDerivative_41762fd4377ff26e,
          mid_getSecondaryDerivative_9566838049dc0d99,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldODEStateAndDerivative(jobject obj) : ::org::hipparchus::ode::FieldODEState(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldODEStateAndDerivative(const FieldODEStateAndDerivative& obj) : ::org::hipparchus::ode::FieldODEState(obj) {}

        FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
        FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &);

        JArray< ::org::hipparchus::CalculusFieldElement > getCompleteDerivative() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getPrimaryDerivative() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getSecondaryDerivative(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldODEStateAndDerivative);
      extern PyTypeObject *PY_TYPE(FieldODEStateAndDerivative);

      class t_FieldODEStateAndDerivative {
      public:
        PyObject_HEAD
        FieldODEStateAndDerivative object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldODEStateAndDerivative *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldODEStateAndDerivative&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldODEStateAndDerivative&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
