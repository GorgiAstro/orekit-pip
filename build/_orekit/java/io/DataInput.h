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
        mid_readBoolean_eee3de00fe971136,
        mid_readByte_5bc9c54e4a4e6e3f,
        mid_readChar_153df32fe8b51cb6,
        mid_readDouble_9981f74b2d109da6,
        mid_readFloat_0e3b995f823d65ff,
        mid_readFully_bba2a19638de22ff,
        mid_readFully_e4288ba5fbf20d28,
        mid_readInt_d6ab429752e7c267,
        mid_readLine_d2c8eb4129821f0e,
        mid_readLong_42c72b98e3c2e08a,
        mid_readShort_5067fec74ceda473,
        mid_readUTF_d2c8eb4129821f0e,
        mid_readUnsignedByte_d6ab429752e7c267,
        mid_readUnsignedShort_d6ab429752e7c267,
        mid_skipBytes_d938fc64e8c6df2d,
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
