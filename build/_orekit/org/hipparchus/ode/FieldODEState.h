#ifndef org_hipparchus_ode_FieldODEState_H
#define org_hipparchus_ode_FieldODEState_H

#include "java/lang/Object.h"

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

      class FieldODEState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_960efa47e0a8eec2,
          mid_init$_5c6c9c90a6a087ff,
          mid_getCompleteState_41762fd4377ff26e,
          mid_getCompleteStateDimension_412668abc8d889e9,
          mid_getNumberOfSecondaryStates_412668abc8d889e9,
          mid_getPrimaryState_41762fd4377ff26e,
          mid_getPrimaryStateDimension_412668abc8d889e9,
          mid_getSecondaryState_9566838049dc0d99,
          mid_getSecondaryStateDimension_0092017e99012694,
          mid_getTime_613c8f46c659f636,
          mid_copy_fcf24063c8a7c3ff,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldODEState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldODEState(const FieldODEState& obj) : ::java::lang::Object(obj) {}

        FieldODEState(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);
        FieldODEState(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &);

        JArray< ::org::hipparchus::CalculusFieldElement > getCompleteState() const;
        jint getCompleteStateDimension() const;
        jint getNumberOfSecondaryStates() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getPrimaryState() const;
        jint getPrimaryStateDimension() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getSecondaryState(jint) const;
        jint getSecondaryStateDimension(jint) const;
        ::org::hipparchus::CalculusFieldElement getTime() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FieldODEState);
      extern PyTypeObject *PY_TYPE(FieldODEState);

      class t_FieldODEState {
      public:
        PyObject_HEAD
        FieldODEState object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldODEState *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldODEState&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldODEState&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
