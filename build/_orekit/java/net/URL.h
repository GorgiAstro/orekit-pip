#ifndef java_net_URL_H
#define java_net_URL_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
    class InputStream;
    class IOException;
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
        mid_init$_734b91ac30d5f9b4,
        mid_init$_15e1af85a4dfcb77,
        mid_init$_ee9345b4af8c40df,
        mid_init$_0fa1d5c018fc6528,
        mid_equals_460c5e2d9d51c6cc,
        mid_getAuthority_1c1fa1e935d6cdcf,
        mid_getContent_541690f9ee81d3ad,
        mid_getContent_de4df9dfd38c3157,
        mid_getDefaultPort_55546ef6a647f39b,
        mid_getFile_1c1fa1e935d6cdcf,
        mid_getHost_1c1fa1e935d6cdcf,
        mid_getPath_1c1fa1e935d6cdcf,
        mid_getPort_55546ef6a647f39b,
        mid_getProtocol_1c1fa1e935d6cdcf,
        mid_getQuery_1c1fa1e935d6cdcf,
        mid_getRef_1c1fa1e935d6cdcf,
        mid_getUserInfo_1c1fa1e935d6cdcf,
        mid_hashCode_55546ef6a647f39b,
        mid_openStream_6c37d64ac8173086,
        mid_sameFile_72310db42813c777,
        mid_toExternalForm_1c1fa1e935d6cdcf,
        mid_toString_1c1fa1e935d6cdcf,
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
