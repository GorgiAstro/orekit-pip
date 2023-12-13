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
          mid_init$_d606d0c99c70c093,
          mid_init$_f623356e6846cf02,
          mid_getCompleteState_25e1757a36c4dde2,
          mid_getCompleteStateDimension_55546ef6a647f39b,
          mid_getNumberOfSecondaryStates_55546ef6a647f39b,
          mid_getPrimaryState_25e1757a36c4dde2,
          mid_getPrimaryStateDimension_55546ef6a647f39b,
          mid_getSecondaryState_bb2a44a76ad252f7,
          mid_getSecondaryStateDimension_0e7cf35192c3effe,
          mid_getTime_b74f83833fdad017,
          mid_copy_fa7294d53f56a3e3,
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
