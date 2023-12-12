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
        mid_readBoolean_89b302893bdbe1f1,
        mid_readByte_acadfed42a0dbd0d,
        mid_readChar_d156d1ce330f6993,
        mid_readDouble_557b8123390d8d0c,
        mid_readFloat_04fe014f7609dc26,
        mid_readFully_d759c70c6670fd89,
        mid_readFully_ac782c7077255dd3,
        mid_readInt_412668abc8d889e9,
        mid_readLine_3cffd47377eca18a,
        mid_readLong_9e26256fb0d384a2,
        mid_readShort_2554afc868a7ba2a,
        mid_readUTF_3cffd47377eca18a,
        mid_readUnsignedByte_412668abc8d889e9,
        mid_readUnsignedShort_412668abc8d889e9,
        mid_skipBytes_0092017e99012694,
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
