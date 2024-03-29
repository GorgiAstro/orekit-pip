#ifndef org_hipparchus_ode_SecondaryODE_H
#define org_hipparchus_ode_SecondaryODE_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

      class SecondaryODE : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_907b23240de8dc2b,
          mid_getDimension_d6ab429752e7c267,
          mid_init_3c38b5b1fdb014e1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SecondaryODE(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SecondaryODE(const SecondaryODE& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, const JArray< jdouble > &) const;
        jint getDimension() const;
        void init(jdouble, const JArray< jdouble > &, const JArray< jdouble > &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(SecondaryODE);
      extern PyTypeObject *PY_TYPE(SecondaryODE);

      class t_SecondaryODE {
      public:
        PyObject_HEAD
        SecondaryODE object;
        static PyObject *wrap_Object(const SecondaryODE&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
