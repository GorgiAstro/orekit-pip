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
          mid_init$_94350f72e874e484,
          mid_computeDerivatives_7b8ea6f669f90156,
          mid_getDimension_f2f64475e4580546,
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
