#ifndef org_hipparchus_ode_FieldODEStateAndDerivative_H
#define org_hipparchus_ode_FieldODEStateAndDerivative_H

#include "org/hipparchus/ode/FieldODEState.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class FieldODEStateAndDerivative : public ::org::hipparchus::ode::FieldODEState {
       public:
        enum {
          mid_init$_f7a6bdb7cce5e7f1,
          mid_init$_115eb671ed23c3e1,
          mid_getCompleteDerivative_883be608cfc68c26,
          mid_getPrimaryDerivative_883be608cfc68c26,
          mid_getSecondaryDerivative_d171b140dbb0db9f,
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
