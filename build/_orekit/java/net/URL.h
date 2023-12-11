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
        mid_init$_f5ffdf29129ef90a,
        mid_init$_32bdaa4e65948a48,
        mid_init$_f5c244a0f15376be,
        mid_init$_b0f225a9496425dc,
        mid_equals_221e8e85cb385209,
        mid_getAuthority_3cffd47377eca18a,
        mid_getContent_e661fe3ba2fafb22,
        mid_getContent_12039b90b25ec342,
        mid_getDefaultPort_412668abc8d889e9,
        mid_getFile_3cffd47377eca18a,
        mid_getHost_3cffd47377eca18a,
        mid_getPath_3cffd47377eca18a,
        mid_getPort_412668abc8d889e9,
        mid_getProtocol_3cffd47377eca18a,
        mid_getQuery_3cffd47377eca18a,
        mid_getRef_3cffd47377eca18a,
        mid_getUserInfo_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_openStream_ce4348991af8a1a1,
        mid_sameFile_f24d92f382df2fc3,
        mid_toExternalForm_3cffd47377eca18a,
        mid_toString_3cffd47377eca18a,
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
