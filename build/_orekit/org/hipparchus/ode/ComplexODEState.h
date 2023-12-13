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
          mid_init$_96bdc59640cbf139,
          mid_init$_ffd216bbb5a2703a,
          mid_getCompleteState_24cc06122e1087cf,
          mid_getCompleteStateDimension_55546ef6a647f39b,
          mid_getNumberOfSecondaryStates_55546ef6a647f39b,
          mid_getPrimaryState_24cc06122e1087cf,
          mid_getPrimaryStateDimension_55546ef6a647f39b,
          mid_getSecondaryState_1f034b9f28067a63,
          mid_getSecondaryStateDimension_0e7cf35192c3effe,
          mid_getTime_b74f83833fdad017,
          mid_copy_29207c90104b0a0b,
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
