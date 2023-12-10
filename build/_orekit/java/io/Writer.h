#ifndef java_io_Writer_H
#define java_io_Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Flushable;
    class Closeable;
    class Writer;
  }
  namespace lang {
    class CharSequence;
    class Appendable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class Writer : public ::java::lang::Object {
     public:
      enum {
        mid_append_eb0d0a46d5f171c4,
        mid_append_40d8b2381ff5cb27,
        mid_append_f781e8360c490bf8,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_nullWriter_4d6b86ab781296cb,
        mid_write_3534e8e092c162a5,
        mid_write_d0bc48d5b00dc40c,
        mid_write_99803b0791f320ff,
        mid_write_44aecef33af91018,
        mid_write_04eb5531e9227c93,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Writer(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Writer(const Writer& obj) : ::java::lang::Object(obj) {}

      Writer append(jchar) const;
      Writer append(const ::java::lang::CharSequence &) const;
      Writer append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      static Writer nullWriter();
      void write(const JArray< jchar > &) const;
      void write(const ::java::lang::String &) const;
      void write(jint) const;
      void write(const JArray< jchar > &, jint, jint) const;
      void write(const ::java::lang::String &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(Writer);
    extern PyTypeObject *PY_TYPE(Writer);

    class t_Writer {
    public:
      PyObject_HEAD
      Writer object;
      static PyObject *wrap_Object(const Writer&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
