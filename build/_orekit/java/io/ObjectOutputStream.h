#ifndef java_io_ObjectOutputStream_H
#define java_io_ObjectOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class ObjectOutputStream$PutField;
    class ObjectOutput;
    class ObjectStreamConstants;
    class IOException;
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
        mid_init$_9601da1efb310931,
        mid_close_a1fa5dae97ea5ed2,
        mid_defaultWriteObject_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_putFields_d617ccc8cb976ecd,
        mid_reset_a1fa5dae97ea5ed2,
        mid_useProtocolVersion_44ed599e93e8a30c,
        mid_write_459771b03534868e,
        mid_write_44ed599e93e8a30c,
        mid_write_a9fddc59b07ce512,
        mid_writeBoolean_fcb96c98de6fad04,
        mid_writeByte_44ed599e93e8a30c,
        mid_writeBytes_734b91ac30d5f9b4,
        mid_writeChar_44ed599e93e8a30c,
        mid_writeChars_734b91ac30d5f9b4,
        mid_writeDouble_8ba9fe7a847cecad,
        mid_writeFields_a1fa5dae97ea5ed2,
        mid_writeFloat_bb7181dc3b1dc22b,
        mid_writeInt_44ed599e93e8a30c,
        mid_writeLong_3d7dd2314a0dd456,
        mid_writeObject_55f3c894852c27a3,
        mid_writeShort_44ed599e93e8a30c,
        mid_writeUTF_734b91ac30d5f9b4,
        mid_writeUnshared_55f3c894852c27a3,
        mid_writeObjectOverride_55f3c894852c27a3,
        mid_annotateClass_9d20f27ef81b4361,
        mid_annotateProxyClass_9d20f27ef81b4361,
        mid_replaceObject_5804c890f94a02b6,
        mid_enableReplaceObject_52d2d2523d94d978,
        mid_writeStreamHeader_a1fa5dae97ea5ed2,
        mid_writeClassDescriptor_f7ffe611f9e6736e,
        mid_drain_a1fa5dae97ea5ed2,
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
