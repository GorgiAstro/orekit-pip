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
          mid_init$_218aa60ac719f855,
          mid_init$_0320e82fa6ccb5a8,
          mid_getCompleteState_8a0770025abeda5b,
          mid_getCompleteStateDimension_570ce0828f81a2c1,
          mid_getNumberOfSecondaryStates_570ce0828f81a2c1,
          mid_getPrimaryState_8a0770025abeda5b,
          mid_getPrimaryStateDimension_570ce0828f81a2c1,
          mid_getSecondaryState_8b297114c93ecf96,
          mid_getSecondaryStateDimension_2235cd056f5a882b,
          mid_getTime_dff5885c2c873297,
          mid_copy_4b54973ff9f93de0,
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
