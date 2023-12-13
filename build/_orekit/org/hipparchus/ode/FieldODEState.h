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
          mid_init$_1d66803ed368a800,
          mid_init$_0cdef1a17fc48fcf,
          mid_getCompleteState_883be608cfc68c26,
          mid_getCompleteStateDimension_55546ef6a647f39b,
          mid_getNumberOfSecondaryStates_55546ef6a647f39b,
          mid_getPrimaryState_883be608cfc68c26,
          mid_getPrimaryStateDimension_55546ef6a647f39b,
          mid_getSecondaryState_d171b140dbb0db9f,
          mid_getSecondaryStateDimension_0e7cf35192c3effe,
          mid_getTime_81520b552cb3fa26,
          mid_copy_d79ba52f6fd92946,
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
