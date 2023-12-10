#ifndef org_hipparchus_ode_ComplexSecondaryODE_H
#define org_hipparchus_ode_ComplexSecondaryODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Complex;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class ComplexSecondaryODE : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_46564e87b38bcc21,
          mid_getDimension_570ce0828f81a2c1,
          mid_init_f97bebf0df07d222,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexSecondaryODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexSecondaryODE(const ComplexSecondaryODE& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::complex::Complex > computeDerivatives(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< ::org::hipparchus::complex::Complex > &) const;
        jint getDimension() const;
        void init(jdouble, const JArray< ::org::hipparchus::complex::Complex > &, const JArray< ::org::hipparchus::complex::Complex > &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(ComplexSecondaryODE);
      extern PyTypeObject *PY_TYPE(ComplexSecondaryODE);

      class t_ComplexSecondaryODE {
      public:
        PyObject_HEAD
        ComplexSecondaryODE object;
        static PyObject *wrap_Object(const ComplexSecondaryODE&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
