#ifndef java_io_ObjectInputStream_H
#define java_io_ObjectInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class IOException;
    class ObjectStreamConstants;
    class NotActiveException;
    class ObjectInputStream$GetField;
    class ObjectInputFilter;
    class ObjectInput;
    class ObjectInputValidation;
    class InvalidObjectException;
  }
  namespace lang {
    class ClassNotFoundException;
    class Class;
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
        mid_init$_a51aa99816400fdd,
        mid_available_f2f64475e4580546,
        mid_close_7ae3461a92a43152,
        mid_defaultReadObject_7ae3461a92a43152,
        mid_getObjectInputFilter_37597b78118eda63,
        mid_read_f2f64475e4580546,
        mid_read_4e993e185759f10d,
        mid_readBoolean_e470b6d9e0d979db,
        mid_readByte_1d06dd1980a98d13,
        mid_readChar_29e026b9d068f1c7,
        mid_readDouble_456d9a2f64d6b28d,
        mid_readFields_7fc95909ca6a1a37,
        mid_readFloat_966c782d3223854d,
        mid_readFully_9c4b35f0a6dc87f3,
        mid_readFully_125b1e9f043b29f8,
        mid_readInt_f2f64475e4580546,
        mid_readLine_0090f7797e403f43,
        mid_readLong_a27fc9afd27e559d,
        mid_readObject_dfd7647d9110ac9f,
        mid_readShort_f89720844d790ad7,
        mid_readUTF_0090f7797e403f43,
        mid_readUnshared_dfd7647d9110ac9f,
        mid_readUnsignedByte_f2f64475e4580546,
        mid_readUnsignedShort_f2f64475e4580546,
        mid_registerValidation_b54dbe70afcc7e91,
        mid_setObjectInputFilter_08673f74e3323897,
        mid_skipBytes_38565d58479aa24a,
        mid_readStreamHeader_7ae3461a92a43152,
        mid_readObjectOverride_dfd7647d9110ac9f,
        mid_resolveProxyClass_4bfd98bd8c284f28,
        mid_resolveObject_ed50a8b49b8274dc,
        mid_enableResolveObject_677f083a4e44dce2,
        mid_readClassDescriptor_8ad6f15d09fb9e15,
        mid_resolveClass_ad19ee5e4057c955,
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
