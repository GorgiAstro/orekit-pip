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
          mid_init$_bb630ae4b8ab9248,
          mid_init$_0da919a2686ce213,
          mid_getCompleteState_be783177b060994b,
          mid_getCompleteStateDimension_d6ab429752e7c267,
          mid_getNumberOfSecondaryStates_d6ab429752e7c267,
          mid_getPrimaryState_be783177b060994b,
          mid_getPrimaryStateDimension_d6ab429752e7c267,
          mid_getSecondaryState_81add9fc9d78d5b9,
          mid_getSecondaryStateDimension_d938fc64e8c6df2d,
          mid_getTime_9981f74b2d109da6,
          mid_copy_d9fb07d4cbf99fb5,
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
