#ifndef org_hipparchus_ode_FirstOrderConverter_H
#define org_hipparchus_ode_FirstOrderConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class SecondOrderODE;
      class OrdinaryDifferentialEquation;
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

      class FirstOrderConverter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3b52ed3d4ac237ef,
          mid_computeDerivatives_31b9a2982d73e37a,
          mid_getDimension_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FirstOrderConverter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FirstOrderConverter(const FirstOrderConverter& obj) : ::java::lang::Object(obj) {}

        FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE &);

        JArray< jdouble > computeDerivatives(jdouble, const JArray< jdouble > &) const;
        jint getDimension() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(FirstOrderConverter);
      extern PyTypeObject *PY_TYPE(FirstOrderConverter);

      class t_FirstOrderConverter {
      public:
        PyObject_HEAD
        FirstOrderConverter object;
        static PyObject *wrap_Object(const FirstOrderConverter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
