#ifndef java_io_ObjectInputStream_H
#define java_io_ObjectInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class ObjectInputValidation;
    class IOException;
    class ObjectStreamConstants;
    class ObjectInputStream$GetField;
    class InvalidObjectException;
    class ObjectInput;
    class ObjectInputFilter;
    class NotActiveException;
  }
  namespace lang {
    class Class;
    class ClassNotFoundException;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputStream : public ::java::io::InputStream {
     public:
      enum {
        mid_init$_42871fcf824ad25f,
        mid_available_570ce0828f81a2c1,
        mid_close_0fa09c18fee449d5,
        mid_defaultReadObject_0fa09c18fee449d5,
        mid_getObjectInputFilter_a58ed53faf5233b9,
        mid_read_570ce0828f81a2c1,
        mid_read_619434785725cc72,
        mid_readBoolean_b108b35ef48e27bd,
        mid_readByte_42a1555092006f7f,
        mid_readChar_7818f5b58320cd1f,
        mid_readDouble_dff5885c2c873297,
        mid_readFields_231e07efd70b0035,
        mid_readFloat_5adccb493ada08e8,
        mid_readFully_20012b3010a39c05,
        mid_readFully_d7af9aedcdd3845b,
        mid_readInt_570ce0828f81a2c1,
        mid_readLine_11b109bd155ca898,
        mid_readLong_492808a339bfa35f,
        mid_readObject_4d26fd885228c716,
        mid_readShort_b5dd6688e7dce57d,
        mid_readUTF_11b109bd155ca898,
        mid_readUnshared_4d26fd885228c716,
        mid_readUnsignedByte_570ce0828f81a2c1,
        mid_readUnsignedShort_570ce0828f81a2c1,
        mid_registerValidation_185a5b4cea644f25,
        mid_setObjectInputFilter_6a68fc428fde73dc,
        mid_skipBytes_2235cd056f5a882b,
        mid_readStreamHeader_0fa09c18fee449d5,
        mid_readObjectOverride_4d26fd885228c716,
        mid_resolveProxyClass_2f0b882a42c5a4b6,
        mid_resolveObject_9facd1449e0950d3,
        mid_enableResolveObject_29387014c78e7f59,
        mid_readClassDescriptor_62a98f7a7fe67a84,
        mid_resolveClass_e648b8c215a5587b,
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
