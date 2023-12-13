#ifndef java_io_DataInput_H
#define java_io_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataInput : public ::java::lang::Object {
     public:
      enum {
        mid_readBoolean_9ab94ac1dc23b105,
        mid_readByte_82ba37184c5152a3,
        mid_readChar_5e2f8fc4d7c03fbd,
        mid_readDouble_b74f83833fdad017,
        mid_readFloat_1fb1bf0772ae5db7,
        mid_readFully_459771b03534868e,
        mid_readFully_a9fddc59b07ce512,
        mid_readInt_55546ef6a647f39b,
        mid_readLine_1c1fa1e935d6cdcf,
        mid_readLong_6c0ce7e438e5ded4,
        mid_readShort_02a2271f89f4492b,
        mid_readUTF_1c1fa1e935d6cdcf,
        mid_readUnsignedByte_55546ef6a647f39b,
        mid_readUnsignedShort_55546ef6a647f39b,
        mid_skipBytes_0e7cf35192c3effe,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

      jboolean readBoolean() const;
      jbyte readByte() const;
      jchar readChar() const;
      jdouble readDouble() const;
      jfloat readFloat() const;
      void readFully(const JArray< jbyte > &) const;
      void readFully(const JArray< jbyte > &, jint, jint) const;
      jint readInt() const;
      ::java::lang::String readLine() const;
      jlong readLong() const;
      jshort readShort() const;
      ::java::lang::String readUTF() const;
      jint readUnsignedByte() const;
      jint readUnsignedShort() const;
      jint skipBytes(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(DataInput);
    extern PyTypeObject *PY_TYPE(DataInput);

    class t_DataInput {
    public:
      PyObject_HEAD
      DataInput object;
      static PyObject *wrap_Object(const DataInput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
