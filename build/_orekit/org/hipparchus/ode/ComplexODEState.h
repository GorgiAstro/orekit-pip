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
          mid_init$_96eaad35f587723b,
          mid_init$_44385e2122bf7dd0,
          mid_getCompleteState_6bea1b718c2aa50b,
          mid_getCompleteStateDimension_d6ab429752e7c267,
          mid_getNumberOfSecondaryStates_d6ab429752e7c267,
          mid_getPrimaryState_6bea1b718c2aa50b,
          mid_getPrimaryStateDimension_d6ab429752e7c267,
          mid_getSecondaryState_aeabb9821b423b35,
          mid_getSecondaryStateDimension_d938fc64e8c6df2d,
          mid_getTime_9981f74b2d109da6,
          mid_copy_99167a6e5a2173ab,
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
