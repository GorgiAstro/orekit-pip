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
          mid_init$_f617b8481082c6ea,
          mid_init$_7c3872a936543d2c,
          mid_getCompleteState_60c7040667a7dc5c,
          mid_getCompleteStateDimension_570ce0828f81a2c1,
          mid_getNumberOfSecondaryStates_570ce0828f81a2c1,
          mid_getPrimaryState_60c7040667a7dc5c,
          mid_getPrimaryStateDimension_570ce0828f81a2c1,
          mid_getSecondaryState_abe82da4f5c7c981,
          mid_getSecondaryStateDimension_2235cd056f5a882b,
          mid_getTime_dff5885c2c873297,
          mid_copy_9c0348b17db96525,
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
