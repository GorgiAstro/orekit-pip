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
        mid_write_d759c70c6670fd89,
        mid_write_a3da1a935cb37f7b,
        mid_write_ac782c7077255dd3,
        mid_writeBoolean_ed2afdb8506b9742,
        mid_writeByte_a3da1a935cb37f7b,
        mid_writeBytes_f5ffdf29129ef90a,
        mid_writeChar_a3da1a935cb37f7b,
        mid_writeChars_f5ffdf29129ef90a,
        mid_writeDouble_10f281d777284cea,
        mid_writeFloat_3ac7cc3def9efaa9,
        mid_writeInt_a3da1a935cb37f7b,
        mid_writeLong_3cd6a6b354c6aa22,
        mid_writeShort_a3da1a935cb37f7b,
        mid_writeUTF_f5ffdf29129ef90a,
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
