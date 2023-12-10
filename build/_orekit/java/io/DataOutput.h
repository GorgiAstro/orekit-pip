#ifndef java_io_DataOutput_H
#define java_io_DataOutput_H

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

    class DataOutput : public ::java::lang::Object {
     public:
      enum {
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        mid_writeBoolean_bd04c9335fb9e4cf,
        mid_writeByte_99803b0791f320ff,
        mid_writeBytes_d0bc48d5b00dc40c,
        mid_writeChar_99803b0791f320ff,
        mid_writeChars_d0bc48d5b00dc40c,
        mid_writeDouble_17db3a65980d3441,
        mid_writeFloat_f63147a1690942cc,
        mid_writeInt_99803b0791f320ff,
        mid_writeLong_3a8e7649f31fdb20,
        mid_writeShort_99803b0791f320ff,
        mid_writeUTF_d0bc48d5b00dc40c,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeBoolean(jboolean) const;
      void writeByte(jint) const;
      void writeBytes(const ::java::lang::String &) const;
      void writeChar(jint) const;
      void writeChars(const ::java::lang::String &) const;
      void writeDouble(jdouble) const;
      void writeFloat(jfloat) const;
      void writeInt(jint) const;
      void writeLong(jlong) const;
      void writeShort(jint) const;
      void writeUTF(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(DataOutput);
    extern PyTypeObject *PY_TYPE(DataOutput);

    class t_DataOutput {
    public:
      PyObject_HEAD
      DataOutput object;
      static PyObject *wrap_Object(const DataOutput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
