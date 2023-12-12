#ifndef org_hipparchus_ode_OrdinaryDifferentialEquation_H
#define org_hipparchus_ode_OrdinaryDifferentialEquation_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class OrdinaryDifferentialEquation : public ::java::lang::Object {
       public:
        enum {
          mid_computeDerivatives_31b9a2982d73e37a,
          mid_getDimension_412668abc8d889e9,
          mid_init_471b6a7f7f53205a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrdinaryDifferentialEquation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrdinaryDifferentialEquation(const OrdinaryDifferentialEquation& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &) const;
        jint getDimension() const;
        void init(jdouble, const JArray< jdouble > &, jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(OrdinaryDifferentialEquation);
      extern PyTypeObject *PY_TYPE(OrdinaryDifferentialEquation);

      class t_OrdinaryDifferentialEquation {
      public:
        PyObject_HEAD
        OrdinaryDifferentialEquation object;
        static PyObject *wrap_Object(const OrdinaryDifferentialEquation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
