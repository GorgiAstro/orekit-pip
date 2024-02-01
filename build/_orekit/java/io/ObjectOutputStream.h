#ifndef java_io_ObjectOutputStream_H
#define java_io_ObjectOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class ObjectOutput;
    class ObjectStreamConstants;
    class IOException;
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
        mid_init$_da52d6defb468793,
        mid_close_ff7cb6c242604316,
        mid_defaultWriteObject_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_putFields_fb97d9cec1d5cb6a,
        mid_reset_ff7cb6c242604316,
        mid_useProtocolVersion_8fd427ab23829bf5,
        mid_write_bba2a19638de22ff,
        mid_write_8fd427ab23829bf5,
        mid_write_e4288ba5fbf20d28,
        mid_writeBoolean_b35db77cae58639e,
        mid_writeByte_8fd427ab23829bf5,
        mid_writeBytes_105e1eadb709d9ac,
        mid_writeChar_8fd427ab23829bf5,
        mid_writeChars_105e1eadb709d9ac,
        mid_writeDouble_1ad26e8c8c0cd65b,
        mid_writeFields_ff7cb6c242604316,
        mid_writeFloat_11c95dcd1c301708,
        mid_writeInt_8fd427ab23829bf5,
        mid_writeLong_f5bbab7e97879358,
        mid_writeObject_83ee235bb1e64e94,
        mid_writeShort_8fd427ab23829bf5,
        mid_writeUTF_105e1eadb709d9ac,
        mid_writeUnshared_83ee235bb1e64e94,
        mid_writeObjectOverride_83ee235bb1e64e94,
        mid_annotateClass_52aa27780ff57435,
        mid_annotateProxyClass_52aa27780ff57435,
        mid_replaceObject_05290476c26136d7,
        mid_enableReplaceObject_80aaf3d99b4df682,
        mid_writeStreamHeader_ff7cb6c242604316,
        mid_writeClassDescriptor_98ee7cdeee39a4e3,
        mid_drain_ff7cb6c242604316,
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
