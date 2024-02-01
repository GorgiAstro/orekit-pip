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
        mid_init$_105e1eadb709d9ac,
        mid_init$_c894909a2ed66b4a,
        mid_init$_56b987237c71cdbb,
        mid_init$_13f35cf1b01dc50a,
        mid_equals_72faff9b05f5ed5e,
        mid_getAuthority_d2c8eb4129821f0e,
        mid_getContent_704a5bee58538972,
        mid_getContent_d7e097a17f55e415,
        mid_getDefaultPort_d6ab429752e7c267,
        mid_getFile_d2c8eb4129821f0e,
        mid_getHost_d2c8eb4129821f0e,
        mid_getPath_d2c8eb4129821f0e,
        mid_getPort_d6ab429752e7c267,
        mid_getProtocol_d2c8eb4129821f0e,
        mid_getQuery_d2c8eb4129821f0e,
        mid_getRef_d2c8eb4129821f0e,
        mid_getUserInfo_d2c8eb4129821f0e,
        mid_hashCode_d6ab429752e7c267,
        mid_openStream_af9d97da329e95d9,
        mid_sameFile_64047ecd76edcfe8,
        mid_toExternalForm_d2c8eb4129821f0e,
        mid_toString_d2c8eb4129821f0e,
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
