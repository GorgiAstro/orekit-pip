#ifndef java_lang_Appendable_H
#define java_lang_Appendable_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Appendable;
    class Class;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Appendable : public ::java::lang::Object {
     public:
      enum {
        mid_append_248283abf10276d1,
        mid_append_dd8e8c1ababf14e4,
        mid_append_938115f399e5c06f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Appendable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Appendable(const Appendable& obj) : ::java::lang::Object(obj) {}

      Appendable append(jchar) const;
      Appendable append(const ::java::lang::CharSequence &) const;
      Appendable append(const ::java::lang::CharSequence &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Appendable);
    extern PyTypeObject *PY_TYPE(Appendable);

    class t_Appendable {
    public:
      PyObject_HEAD
      Appendable object;
      static PyObject *wrap_Object(const Appendable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
