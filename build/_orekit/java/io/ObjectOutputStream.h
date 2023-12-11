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
        mid_init$_a093374b16e6c27d,
        mid_close_0640e6acf969ed28,
        mid_defaultWriteObject_0640e6acf969ed28,
        mid_flush_0640e6acf969ed28,
        mid_putFields_6d0fa0c03e43522c,
        mid_reset_0640e6acf969ed28,
        mid_useProtocolVersion_a3da1a935cb37f7b,
        mid_write_d759c70c6670fd89,
        mid_write_a3da1a935cb37f7b,
        mid_write_ac782c7077255dd3,
        mid_writeBoolean_ed2afdb8506b9742,
        mid_writeByte_a3da1a935cb37f7b,
        mid_writeBytes_f5ffdf29129ef90a,
        mid_writeChar_a3da1a935cb37f7b,
        mid_writeChars_f5ffdf29129ef90a,
        mid_writeDouble_10f281d777284cea,
        mid_writeFields_0640e6acf969ed28,
        mid_writeFloat_3ac7cc3def9efaa9,
        mid_writeInt_a3da1a935cb37f7b,
        mid_writeLong_3cd6a6b354c6aa22,
        mid_writeObject_009757f2c0fd9090,
        mid_writeShort_a3da1a935cb37f7b,
        mid_writeUTF_f5ffdf29129ef90a,
        mid_writeUnshared_009757f2c0fd9090,
        mid_writeStreamHeader_0640e6acf969ed28,
        mid_writeObjectOverride_009757f2c0fd9090,
        mid_annotateClass_80b724d415998d9f,
        mid_annotateProxyClass_80b724d415998d9f,
        mid_replaceObject_65d69db95c5eb156,
        mid_enableReplaceObject_bc7235a51f399397,
        mid_writeClassDescriptor_372f23a0ca31862c,
        mid_drain_0640e6acf969ed28,
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
