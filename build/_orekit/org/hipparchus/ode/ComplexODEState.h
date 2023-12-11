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
          mid_init$_70035d1497a08f80,
          mid_init$_5f31e4187dbf944a,
          mid_getCompleteState_cdf70bdb2a575f18,
          mid_getCompleteStateDimension_412668abc8d889e9,
          mid_getNumberOfSecondaryStates_412668abc8d889e9,
          mid_getPrimaryState_cdf70bdb2a575f18,
          mid_getPrimaryStateDimension_412668abc8d889e9,
          mid_getSecondaryState_3c568c3957abbd69,
          mid_getSecondaryStateDimension_0092017e99012694,
          mid_getTime_557b8123390d8d0c,
          mid_copy_f474555abcccd3a6,
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
