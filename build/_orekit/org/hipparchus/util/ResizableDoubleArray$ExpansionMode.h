#ifndef org_hipparchus_util_ResizableDoubleArray$ExpansionMode_H
#define org_hipparchus_util_ResizableDoubleArray$ExpansionMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class ResizableDoubleArray$ExpansionMode;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class ResizableDoubleArray$ExpansionMode : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_3fb491c1a5f8ff4c,
          mid_values_35c0e83df799f77a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ResizableDoubleArray$ExpansionMode(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ResizableDoubleArray$ExpansionMode(const ResizableDoubleArray$ExpansionMode& obj) : ::java::lang::Enum(obj) {}

        static ResizableDoubleArray$ExpansionMode *ADDITIVE;
        static ResizableDoubleArray$ExpansionMode *MULTIPLICATIVE;

        static ResizableDoubleArray$ExpansionMode valueOf(const ::java::lang::String &);
        static JArray< ResizableDoubleArray$ExpansionMode > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode);
      extern PyTypeObject *PY_TYPE(ResizableDoubleArray$ExpansionMode);

      class t_ResizableDoubleArray$ExpansionMode {
      public:
        PyObject_HEAD
        ResizableDoubleArray$ExpansionMode object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ResizableDoubleArray$ExpansionMode *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ResizableDoubleArray$ExpansionMode&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ResizableDoubleArray$ExpansionMode&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
