#ifndef java_io_ObjectInputStream_H
#define java_io_ObjectInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class NotActiveException;
    class ObjectInputStream$GetField;
    class ObjectStreamConstants;
    class InvalidObjectException;
    class IOException;
    class ObjectInputValidation;
    class ObjectInput;
    class ObjectInputFilter;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class ClassNotFoundException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputStream : public ::java::io::InputStream {
     public:
      enum {
        mid_init$_471a178453aa39ad,
        mid_available_55546ef6a647f39b,
        mid_close_a1fa5dae97ea5ed2,
        mid_defaultReadObject_a1fa5dae97ea5ed2,
        mid_getObjectInputFilter_89c6bdd378c3b156,
        mid_read_55546ef6a647f39b,
        mid_read_296dd75c373e2c1d,
        mid_readBoolean_9ab94ac1dc23b105,
        mid_readByte_82ba37184c5152a3,
        mid_readChar_5e2f8fc4d7c03fbd,
        mid_readDouble_b74f83833fdad017,
        mid_readFields_84b973d9e9db21eb,
        mid_readFloat_1fb1bf0772ae5db7,
        mid_readFully_459771b03534868e,
        mid_readFully_a9fddc59b07ce512,
        mid_readInt_55546ef6a647f39b,
        mid_readLine_1c1fa1e935d6cdcf,
        mid_readLong_6c0ce7e438e5ded4,
        mid_readObject_541690f9ee81d3ad,
        mid_readShort_02a2271f89f4492b,
        mid_readUTF_1c1fa1e935d6cdcf,
        mid_readUnshared_541690f9ee81d3ad,
        mid_readUnsignedByte_55546ef6a647f39b,
        mid_readUnsignedShort_55546ef6a647f39b,
        mid_registerValidation_118ce9d62d9df0b6,
        mid_setObjectInputFilter_53c1740e04034bea,
        mid_skipBytes_0e7cf35192c3effe,
        mid_readObjectOverride_541690f9ee81d3ad,
        mid_resolveProxyClass_f2a5d294c3c46502,
        mid_resolveObject_5804c890f94a02b6,
        mid_enableResolveObject_52d2d2523d94d978,
        mid_readStreamHeader_a1fa5dae97ea5ed2,
        mid_readClassDescriptor_fb017e274a57c596,
        mid_resolveClass_073be9f31fb3cb10,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputStream(jobject obj) : ::java::io::InputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputStream(const ObjectInputStream& obj) : ::java::io::InputStream(obj) {}

      ObjectInputStream(const ::java::io::InputStream &);

      jint available() const;
      void close() const;
      void defaultReadObject() const;
      ::java::io::ObjectInputFilter getObjectInputFilter() const;
      jint read() const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      ::java::io::ObjectInputStream$GetField readFields() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      ::java::lang::Object readObject() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      ::java::lang::Object readUnshared() const;
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      void registerValidation(const ::java::io::ObjectInputValidation &, jint) const;
      void setObjectInputFilter(const ::java::io::ObjectInputFilter &) const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputStream);
    extern PyTypeObject *PY_TYPE(ObjectInputStream);

    class t_ObjectInputStream {
    public:
      PyObject_HEAD
      ObjectInputStream object;
      static PyObject *wrap_Object(const ObjectInputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
