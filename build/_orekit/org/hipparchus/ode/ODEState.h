#ifndef org_hipparchus_ode_ODEState_H
#define org_hipparchus_ode_ODEState_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ODEState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b67fd0977346c69b,
          mid_init$_3bb1f69ed3e6077d,
          mid_getCompleteState_7cdc325af0834901,
          mid_getCompleteStateDimension_f2f64475e4580546,
          mid_getNumberOfSecondaryStates_f2f64475e4580546,
          mid_getPrimaryState_7cdc325af0834901,
          mid_getPrimaryStateDimension_f2f64475e4580546,
          mid_getSecondaryState_eb9cceadce1b2217,
          mid_getSecondaryStateDimension_38565d58479aa24a,
          mid_getTime_456d9a2f64d6b28d,
          mid_copy_557d9547e284535f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ODEState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ODEState(const ODEState& obj) : ::java::lang::Object(obj) {}

        ODEState(jdouble, const JArray< jdouble > &);
        ODEState(jdouble, const JArray< jdouble > &, const JArray< JArray< jdouble > > &);

        JArray< jdouble > getCompleteState() const;
        jint getCompleteStateDimension() const;
        jint getNumberOfSecondaryStates() const;
        JArray< jdouble > getPrimaryState() const;
        jint getPrimaryStateDimension() const;
        JArray< jdouble > getSecondaryState(jint) const;
        jint getSecondaryStateDimension(jint) const;
        jdouble getTime() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ODEState);
      extern PyTypeObject *PY_TYPE(ODEState);

      class t_ODEState {
      public:
        PyObject_HEAD
        ODEState object;
        static PyObject *wrap_Object(const ODEState&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
