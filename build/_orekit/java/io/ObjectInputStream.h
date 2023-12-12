#ifndef java_io_ObjectInputStream_H
#define java_io_ObjectInputStream_H

#include "java/io/InputStream.h"

namespace java {
  namespace io {
    class IOException;
    class NotActiveException;
    class ObjectInput;
    class ObjectStreamConstants;
    class InvalidObjectException;
    class ObjectInputStream$GetField;
    class ObjectInputFilter;
    class ObjectInputValidation;
  }
  namespace lang {
    class Class;
    class Object;
    class ClassNotFoundException;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputStream : public ::java::io::InputStream {
     public:
      enum {
        mid_init$_115bc9fcd812647a,
        mid_available_412668abc8d889e9,
        mid_close_0640e6acf969ed28,
        mid_defaultReadObject_0640e6acf969ed28,
        mid_getObjectInputFilter_52a6f61e5e2e9089,
        mid_read_412668abc8d889e9,
        mid_read_68a76742c8623fb3,
        mid_readBoolean_89b302893bdbe1f1,
        mid_readByte_acadfed42a0dbd0d,
        mid_readChar_d156d1ce330f6993,
        mid_readDouble_557b8123390d8d0c,
        mid_readFields_4d60be7021bb9f1f,
        mid_readFloat_04fe014f7609dc26,
        mid_readFully_d759c70c6670fd89,
        mid_readFully_ac782c7077255dd3,
        mid_readInt_412668abc8d889e9,
        mid_readLine_3cffd47377eca18a,
        mid_readLong_9e26256fb0d384a2,
        mid_readObject_e661fe3ba2fafb22,
        mid_readShort_2554afc868a7ba2a,
        mid_readUTF_3cffd47377eca18a,
        mid_readUnshared_e661fe3ba2fafb22,
        mid_readUnsignedByte_412668abc8d889e9,
        mid_readUnsignedShort_412668abc8d889e9,
        mid_registerValidation_46282bcb819f3db9,
        mid_setObjectInputFilter_a500a234e3f7d2c7,
        mid_skipBytes_0092017e99012694,
        mid_readStreamHeader_0640e6acf969ed28,
        mid_readObjectOverride_e661fe3ba2fafb22,
        mid_resolveProxyClass_93cb68fcd376ba98,
        mid_resolveObject_65d69db95c5eb156,
        mid_enableResolveObject_bc7235a51f399397,
        mid_readClassDescriptor_dbbdc211e0cefa39,
        mid_resolveClass_609cac601951abfb,
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
