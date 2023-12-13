#ifndef java_io_ObjectStreamConstants_H
#define java_io_ObjectStreamConstants_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class SerializablePermission;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectStreamConstants : public ::java::lang::Object {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectStreamConstants(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectStreamConstants(const ObjectStreamConstants& obj) : ::java::lang::Object(obj) {}

      static jint PROTOCOL_VERSION_1;
      static jint PROTOCOL_VERSION_2;
      static jbyte SC_BLOCK_DATA;
      static jbyte SC_ENUM;
      static jbyte SC_EXTERNALIZABLE;
      static jbyte SC_SERIALIZABLE;
      static jbyte SC_WRITE_METHOD;
      static ::java::io::SerializablePermission *SERIAL_FILTER_PERMISSION;
      static jshort STREAM_MAGIC;
      static jshort STREAM_VERSION;
      static ::java::io::SerializablePermission *SUBCLASS_IMPLEMENTATION_PERMISSION;
      static ::java::io::SerializablePermission *SUBSTITUTION_PERMISSION;
      static jbyte TC_ARRAY;
      static jbyte TC_BASE;
      static jbyte TC_BLOCKDATA;
      static jbyte TC_BLOCKDATALONG;
      static jbyte TC_CLASS;
      static jbyte TC_CLASSDESC;
      static jbyte TC_ENDBLOCKDATA;
      static jbyte TC_ENUM;
      static jbyte TC_EXCEPTION;
      static jbyte TC_LONGSTRING;
      static jbyte TC_MAX;
      static jbyte TC_NULL;
      static jbyte TC_OBJECT;
      static jbyte TC_PROXYCLASSDESC;
      static jbyte TC_REFERENCE;
      static jbyte TC_RESET;
      static jbyte TC_STRING;
      static jint baseWireHandle;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectStreamConstants);
    extern PyTypeObject *PY_TYPE(ObjectStreamConstants);

    class t_ObjectStreamConstants {
    public:
      PyObject_HEAD
      ObjectStreamConstants object;
      static PyObject *wrap_Object(const ObjectStreamConstants&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
