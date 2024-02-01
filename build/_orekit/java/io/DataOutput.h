#ifndef java_io_DataOutput_H
#define java_io_DataOutput_H

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

    class DataOutput : public ::java::lang::Object {
     public:
      enum {
        mid_write_bba2a19638de22ff,
        mid_write_8fd427ab23829bf5,
        mid_write_e4288ba5fbf20d28,
        mid_writeBoolean_b35db77cae58639e,
        mid_writeByte_8fd427ab23829bf5,
        mid_writeBytes_105e1eadb709d9ac,
        mid_writeChar_8fd427ab23829bf5,
        mid_writeChars_105e1eadb709d9ac,
        mid_writeDouble_1ad26e8c8c0cd65b,
        mid_writeFloat_11c95dcd1c301708,
        mid_writeInt_8fd427ab23829bf5,
        mid_writeLong_f5bbab7e97879358,
        mid_writeShort_8fd427ab23829bf5,
        mid_writeUTF_105e1eadb709d9ac,
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
