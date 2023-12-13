#ifndef java_io_Writer_H
#define java_io_Writer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Flushable;
    class IOException;
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
        mid_append_10b49bc9752a6280,
        mid_append_89d85407f8c3f237,
        mid_append_36ed35e8f93e8699,
        mid_close_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_nullWriter_6c28d34eccb5e13c,
        mid_write_dd3f254991df5d48,
        mid_write_734b91ac30d5f9b4,
        mid_write_44ed599e93e8a30c,
        mid_write_d23ba6c655e17478,
        mid_write_eb74d6dc93e0751e,
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
