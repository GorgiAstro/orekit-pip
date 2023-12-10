#ifndef java_io_DataInput_H
#define java_io_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class DataInput : public ::java::lang::Object {
     public:
      enum {
        mid_readBoolean_b108b35ef48e27bd,
        mid_readByte_42a1555092006f7f,
        mid_readChar_7818f5b58320cd1f,
        mid_readDouble_dff5885c2c873297,
        mid_readFloat_5adccb493ada08e8,
        mid_readFully_20012b3010a39c05,
        mid_readFully_d7af9aedcdd3845b,
        mid_readInt_570ce0828f81a2c1,
        mid_readLine_11b109bd155ca898,
        mid_readLong_492808a339bfa35f,
        mid_readShort_b5dd6688e7dce57d,
        mid_readUTF_11b109bd155ca898,
        mid_readUnsignedByte_570ce0828f81a2c1,
        mid_readUnsignedShort_570ce0828f81a2c1,
        mid_skipBytes_2235cd056f5a882b,
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
