#ifndef org_hipparchus_exception_Localizable_H
#define org_hipparchus_exception_Localizable_H

#include "java/io/Serializable.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class Localizable : public ::java::io::Serializable {
       public:
        enum {
          mid_getLocalizedString_4b51060c6b7ea981,
          mid_getSourceString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Localizable(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Localizable(const Localizable& obj) : ::java::io::Serializable(obj) {}

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(Localizable);
      extern PyTypeObject *PY_TYPE(Localizable);

      class t_Localizable {
      public:
        PyObject_HEAD
        Localizable object;
        static PyObject *wrap_Object(const Localizable&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
