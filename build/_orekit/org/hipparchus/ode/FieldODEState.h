#ifndef org_hipparchus_ode_FieldODEState_H
#define org_hipparchus_ode_FieldODEState_H

#include "java/lang/Object.h"

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

      class FieldODEState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ef0bb554ba052051,
          mid_init$_fb8a6e7e41ba410e,
          mid_getCompleteState_01c7d10e96d5cf94,
          mid_getCompleteStateDimension_f2f64475e4580546,
          mid_getNumberOfSecondaryStates_f2f64475e4580546,
          mid_getPrimaryState_01c7d10e96d5cf94,
          mid_getPrimaryStateDimension_f2f64475e4580546,
          mid_getSecondaryState_5b8578526a4f7e83,
          mid_getSecondaryStateDimension_38565d58479aa24a,
          mid_getTime_e6d4d3215c30992a,
          mid_copy_739207d3fe95b2fa,
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
