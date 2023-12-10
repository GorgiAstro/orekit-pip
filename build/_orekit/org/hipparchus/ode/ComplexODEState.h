#ifndef org_hipparchus_ode_ComplexODEState_H
#define org_hipparchus_ode_ComplexODEState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
  }
}
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

      class ComplexODEState : public ::java::lang::Object {
       public:
        enum {
          mid_init$_762610eefab38248,
          mid_init$_324472bfdf5fc794,
          mid_getCompleteState_a42e219c62839d3d,
          mid_getCompleteStateDimension_f2f64475e4580546,
          mid_getNumberOfSecondaryStates_f2f64475e4580546,
          mid_getPrimaryState_a42e219c62839d3d,
          mid_getPrimaryStateDimension_f2f64475e4580546,
          mid_getSecondaryState_2169290c4dd2441c,
          mid_getSecondaryStateDimension_38565d58479aa24a,
          mid_getTime_456d9a2f64d6b28d,
          mid_copy_8436d88d682eec16,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexODEState(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexODEState(const ComplexODEState& obj) : ::java::lang::Object(obj) {}

        ComplexODEState(jdouble, const JArray< ::org::hipparchus::complex::Complex > &);
        ComplexODEState(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< JArray< ::org::hipparchus::complex::Complex > > &);

        JArray< ::org::hipparchus::complex::Complex > getCompleteState() const;
        jint getCompleteStateDimension() const;
        jint getNumberOfSecondaryStates() const;
        JArray< ::org::hipparchus::complex::Complex > getPrimaryState() const;
        jint getPrimaryStateDimension() const;
        JArray< ::org::hipparchus::complex::Complex > getSecondaryState(jint) const;
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
      extern PyType_Def PY_TYPE_DEF(ComplexODEState);
      extern PyTypeObject *PY_TYPE(ComplexODEState);

      class t_ComplexODEState {
      public:
        PyObject_HEAD
        ComplexODEState object;
        static PyObject *wrap_Object(const ComplexODEState&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
