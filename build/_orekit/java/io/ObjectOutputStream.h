#ifndef java_io_ObjectOutputStream_H
#define java_io_ObjectOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class IOException;
    class ObjectStreamConstants;
    class ObjectOutput;
    class ObjectOutputStream$PutField;
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
        mid_init$_255f64cf1272816f,
        mid_close_7ae3461a92a43152,
        mid_defaultWriteObject_7ae3461a92a43152,
        mid_flush_7ae3461a92a43152,
        mid_putFields_8d2b60411fbc7765,
        mid_reset_7ae3461a92a43152,
        mid_useProtocolVersion_0a2a1ac2721c0336,
        mid_write_9c4b35f0a6dc87f3,
        mid_write_0a2a1ac2721c0336,
        mid_write_125b1e9f043b29f8,
        mid_writeBoolean_50a2e0b139e80a58,
        mid_writeByte_0a2a1ac2721c0336,
        mid_writeBytes_e939c6558ae8d313,
        mid_writeChar_0a2a1ac2721c0336,
        mid_writeChars_e939c6558ae8d313,
        mid_writeDouble_77e0f9a1f260e2e5,
        mid_writeFields_7ae3461a92a43152,
        mid_writeFloat_ca234f4580d28ea3,
        mid_writeInt_0a2a1ac2721c0336,
        mid_writeLong_fefb08975c10f0a1,
        mid_writeObject_7ca0d9438822cb0b,
        mid_writeShort_0a2a1ac2721c0336,
        mid_writeUTF_e939c6558ae8d313,
        mid_writeUnshared_7ca0d9438822cb0b,
        mid_writeStreamHeader_7ae3461a92a43152,
        mid_writeObjectOverride_7ca0d9438822cb0b,
        mid_annotateClass_f9fd73a09eca27dc,
        mid_annotateProxyClass_f9fd73a09eca27dc,
        mid_replaceObject_ed50a8b49b8274dc,
        mid_enableReplaceObject_677f083a4e44dce2,
        mid_writeClassDescriptor_e72f1073b8397bb6,
        mid_drain_7ae3461a92a43152,
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
