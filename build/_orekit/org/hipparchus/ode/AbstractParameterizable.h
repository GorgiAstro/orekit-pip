#ifndef org_hipparchus_ode_AbstractParameterizable_H
#define org_hipparchus_ode_AbstractParameterizable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace ode {
      class Parameterizable;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {

      class AbstractParameterizable : public ::java::lang::Object {
       public:
        enum {
          mid_complainIfNotSupported_105e1eadb709d9ac,
          mid_getParametersNames_d751c1a57012b438,
          mid_isSupported_df4c65b2aede5c41,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractParameterizable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractParameterizable(const AbstractParameterizable& obj) : ::java::lang::Object(obj) {}

        void complainIfNotSupported(const ::java::lang::String &) const;
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
      extern PyType_Def PY_TYPE_DEF(AbstractParameterizable);
      extern PyTypeObject *PY_TYPE(AbstractParameterizable);

      class t_AbstractParameterizable {
      public:
        PyObject_HEAD
        AbstractParameterizable object;
        static PyObject *wrap_Object(const AbstractParameterizable&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
