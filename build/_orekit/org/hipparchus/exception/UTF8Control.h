#ifndef org_hipparchus_exception_UTF8Control_H
#define org_hipparchus_exception_UTF8Control_H

#include "java/util/ResourceBundle$Control.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class InstantiationException;
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Locale;
    class ResourceBundle;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class UTF8Control : public ::java::util::ResourceBundle$Control {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_newBundle_b7c54cce3a9709ed,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UTF8Control(jobject obj) : ::java::util::ResourceBundle$Control(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UTF8Control(const UTF8Control& obj) : ::java::util::ResourceBundle$Control(obj) {}

        UTF8Control();

        ::java::util::ResourceBundle newBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(UTF8Control);
      extern PyTypeObject *PY_TYPE(UTF8Control);

      class t_UTF8Control {
      public:
        PyObject_HEAD
        UTF8Control object;
        static PyObject *wrap_Object(const UTF8Control&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
