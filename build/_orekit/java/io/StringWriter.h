#ifndef java_io_StringWriter_H
#define java_io_StringWriter_H

#include "java/io/Writer.h"

namespace java {
  namespace lang {
    class CharSequence;
    class StringBuffer;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class StringWriter;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class StringWriter : public ::java::io::Writer {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_44ed599e93e8a30c,
        mid_append_2fd64e854460fa61,
        mid_append_75e29451e1add07a,
        mid_append_8b1c860531051f82,
        mid_close_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_getBuffer_9ddc431ab9a0d12b,
        mid_toString_1c1fa1e935d6cdcf,
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

      explicit StringWriter(jobject obj) : ::java::io::Writer(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      StringWriter(const StringWriter& obj) : ::java::io::Writer(obj) {}

      StringWriter();
      StringWriter(jint);

      StringWriter append(jchar) const;
      StringWriter append(const ::java::lang::CharSequence &) const;
      StringWriter append(const ::java::lang::CharSequence &, jint, jint) const;
      void close() const;
      void flush() const;
      ::java::lang::StringBuffer getBuffer() const;
      ::java::lang::String toString() const;
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
    extern PyType_Def PY_TYPE_DEF(StringWriter);
    extern PyTypeObject *PY_TYPE(StringWriter);

    class t_StringWriter {
    public:
      PyObject_HEAD
      StringWriter object;
      static PyObject *wrap_Object(const StringWriter&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
