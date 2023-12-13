#ifndef org_hipparchus_exception_DummyLocalizable_H
#define org_hipparchus_exception_DummyLocalizable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class DummyLocalizable : public ::java::lang::Object {
       public:
        enum {
          mid_init$_734b91ac30d5f9b4,
          mid_getLocalizedString_26070c28e6ea354d,
          mid_getSourceString_1c1fa1e935d6cdcf,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DummyLocalizable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DummyLocalizable(const DummyLocalizable& obj) : ::java::lang::Object(obj) {}

        DummyLocalizable(const ::java::lang::String &);

        ::java::lang::String getLocalizedString(const ::java::util::Locale &) const;
        ::java::lang::String getSourceString() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(DummyLocalizable);
      extern PyTypeObject *PY_TYPE(DummyLocalizable);

      class t_DummyLocalizable {
      public:
        PyObject_HEAD
        DummyLocalizable object;
        static PyObject *wrap_Object(const DummyLocalizable&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
