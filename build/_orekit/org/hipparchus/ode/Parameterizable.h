#ifndef org_hipparchus_ode_Parameterizable_H
#define org_hipparchus_ode_Parameterizable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class Parameterizable : public ::java::lang::Object {
       public:
        enum {
          mid_getParametersNames_a6156df500549a58,
          mid_isSupported_6b161f495ea569b8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Parameterizable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Parameterizable(const Parameterizable& obj) : ::java::lang::Object(obj) {}

        ::java::util::List getParametersNames() const;
        jboolean isSupported(const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      extern PyType_Def PY_TYPE_DEF(Parameterizable);
      extern PyTypeObject *PY_TYPE(Parameterizable);

      class t_Parameterizable {
      public:
        PyObject_HEAD
        Parameterizable object;
        static PyObject *wrap_Object(const Parameterizable&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
