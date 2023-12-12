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
          mid_init$_092013acd44a9e63,
          mid_init$_8a53459a4359f093,
          mid_getCompleteState_a53a7513ecedada2,
          mid_getCompleteStateDimension_412668abc8d889e9,
          mid_getNumberOfSecondaryStates_412668abc8d889e9,
          mid_getPrimaryState_a53a7513ecedada2,
          mid_getPrimaryStateDimension_412668abc8d889e9,
          mid_getSecondaryState_1da5c9e77f24f269,
          mid_getSecondaryStateDimension_0092017e99012694,
          mid_getTime_557b8123390d8d0c,
          mid_copy_2b7f9de2d1ea1ddb,
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
