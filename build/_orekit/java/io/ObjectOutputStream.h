#ifndef java_io_ObjectOutputStream_H
#define java_io_ObjectOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class IOException;
    class ObjectStreamConstants;
    class ObjectOutputStream$PutField;
    class ObjectOutput;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectOutputStream : public ::java::io::OutputStream {
     public:
      enum {
        mid_init$_fd7cb6689cfa6eeb,
        mid_close_0fa09c18fee449d5,
        mid_defaultWriteObject_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_putFields_a1d0dbdcb12b349b,
        mid_reset_0fa09c18fee449d5,
        mid_useProtocolVersion_99803b0791f320ff,
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        mid_writeBoolean_bd04c9335fb9e4cf,
        mid_writeByte_99803b0791f320ff,
        mid_writeBytes_d0bc48d5b00dc40c,
        mid_writeChar_99803b0791f320ff,
        mid_writeChars_d0bc48d5b00dc40c,
        mid_writeDouble_17db3a65980d3441,
        mid_writeFields_0fa09c18fee449d5,
        mid_writeFloat_f63147a1690942cc,
        mid_writeInt_99803b0791f320ff,
        mid_writeLong_3a8e7649f31fdb20,
        mid_writeObject_2990946c992aafed,
        mid_writeShort_99803b0791f320ff,
        mid_writeUTF_d0bc48d5b00dc40c,
        mid_writeUnshared_2990946c992aafed,
        mid_writeStreamHeader_0fa09c18fee449d5,
        mid_writeObjectOverride_2990946c992aafed,
        mid_annotateClass_834972a40792b06e,
        mid_annotateProxyClass_834972a40792b06e,
        mid_replaceObject_9facd1449e0950d3,
        mid_enableReplaceObject_29387014c78e7f59,
        mid_writeClassDescriptor_1e954de573b583fc,
        mid_drain_0fa09c18fee449d5,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectOutputStream(jobject obj) : ::java::io::OutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectOutputStream(const ObjectOutputStream& obj) : ::java::io::OutputStream(obj) {}

      ObjectOutputStream(const ::java::io::OutputStream &);

      void close() const;
      void defaultWriteObject() const;
      void flush() const;
      ::java::io::ObjectOutputStream$PutField putFields() const;
      void reset() const;
      void useProtocolVersion(jint) const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeBoolean(jboolean) const;
      void writeByte(jint) const;
      void writeBytes(const ::java::lang::String &) const;
      void writeChar(jint) const;
      void writeChars(const ::java::lang::String &) const;
      void writeDouble(jdouble) const;
      void writeFields() const;
      void writeFloat(jfloat) const;
      void writeInt(jint) const;
      void writeLong(jlong) const;
      void writeObject(const ::java::lang::Object &) const;
      void writeShort(jint) const;
      void writeUTF(const ::java::lang::String &) const;
      void writeUnshared(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectOutputStream);
    extern PyTypeObject *PY_TYPE(ObjectOutputStream);

    class t_ObjectOutputStream {
    public:
      PyObject_HEAD
      ObjectOutputStream object;
      static PyObject *wrap_Object(const ObjectOutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
