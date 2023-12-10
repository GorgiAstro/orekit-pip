#ifndef java_net_URL_H
#define java_net_URL_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Serializable;
    class InputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace net {

    class URL : public ::java::lang::Object {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_61200f39e8218ddc,
        mid_init$_3c57e287341c9288,
        mid_init$_c32bde162ef40e6b,
        mid_equals_65c7d273e80d497a,
        mid_getAuthority_11b109bd155ca898,
        mid_getContent_4d26fd885228c716,
        mid_getContent_a718a18fc6fa87f0,
        mid_getDefaultPort_570ce0828f81a2c1,
        mid_getFile_11b109bd155ca898,
        mid_getHost_11b109bd155ca898,
        mid_getPath_11b109bd155ca898,
        mid_getPort_570ce0828f81a2c1,
        mid_getProtocol_11b109bd155ca898,
        mid_getQuery_11b109bd155ca898,
        mid_getRef_11b109bd155ca898,
        mid_getUserInfo_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_openStream_51fdc45647b8e866,
        mid_sameFile_c31132c160c2df88,
        mid_toExternalForm_11b109bd155ca898,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit URL(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      URL(const URL& obj) : ::java::lang::Object(obj) {}

      URL(const ::java::lang::String &);
      URL(const URL &, const ::java::lang::String &);
      URL(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
      URL(const ::java::lang::String &, const ::java::lang::String &, jint, const ::java::lang::String &);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getAuthority() const;
      ::java::lang::Object getContent() const;
      ::java::lang::Object getContent(const JArray< ::java::lang::Class > &) const;
      jint getDefaultPort() const;
      ::java::lang::String getFile() const;
      ::java::lang::String getHost() const;
      ::java::lang::String getPath() const;
      jint getPort() const;
      ::java::lang::String getProtocol() const;
      ::java::lang::String getQuery() const;
      ::java::lang::String getRef() const;
      ::java::lang::String getUserInfo() const;
      jint hashCode() const;
      ::java::io::InputStream openStream() const;
      jboolean sameFile(const URL &) const;
      ::java::lang::String toExternalForm() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace net {
    extern PyType_Def PY_TYPE_DEF(URL);
    extern PyTypeObject *PY_TYPE(URL);

    class t_URL {
    public:
      PyObject_HEAD
      URL object;
      static PyObject *wrap_Object(const URL&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
