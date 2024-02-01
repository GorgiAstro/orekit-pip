#ifndef java_io_ObjectInputStream_H
#define java_io_ObjectInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class ObjectInputFilter;
    class IOException;
    class ObjectInput;
    class InvalidObjectException;
    class ObjectInputStream$GetField;
    class ObjectInputValidation;
    class NotActiveException;
    class ObjectStreamConstants;
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
        mid_init$_8f4bef0679d2f8d5,
        mid_available_d6ab429752e7c267,
        mid_close_ff7cb6c242604316,
        mid_defaultReadObject_ff7cb6c242604316,
        mid_getObjectInputFilter_cbabae5c581a3f60,
        mid_read_d6ab429752e7c267,
        mid_read_1351cbafe5a435a7,
        mid_readBoolean_eee3de00fe971136,
        mid_readByte_5bc9c54e4a4e6e3f,
        mid_readChar_153df32fe8b51cb6,
        mid_readDouble_9981f74b2d109da6,
        mid_readFields_4bf4994849ee3af3,
        mid_readFloat_0e3b995f823d65ff,
        mid_readFully_bba2a19638de22ff,
        mid_readFully_e4288ba5fbf20d28,
        mid_readInt_d6ab429752e7c267,
        mid_readLine_d2c8eb4129821f0e,
        mid_readLong_42c72b98e3c2e08a,
        mid_readObject_704a5bee58538972,
        mid_readShort_5067fec74ceda473,
        mid_readUTF_d2c8eb4129821f0e,
        mid_readUnshared_704a5bee58538972,
        mid_readUnsignedByte_d6ab429752e7c267,
        mid_readUnsignedShort_d6ab429752e7c267,
        mid_registerValidation_c10a52e9d0d47389,
        mid_setObjectInputFilter_a980436ee9bfb980,
        mid_skipBytes_d938fc64e8c6df2d,
        mid_readObjectOverride_704a5bee58538972,
        mid_resolveProxyClass_82a7d5c3e9692571,
        mid_resolveObject_05290476c26136d7,
        mid_enableResolveObject_80aaf3d99b4df682,
        mid_readStreamHeader_ff7cb6c242604316,
        mid_readClassDescriptor_bd13c6c1b9563bca,
        mid_resolveClass_490f3fb6e078c1cd,
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
