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
        mid_init$_e939c6558ae8d313,
        mid_init$_1a726bfb6068e3c5,
        mid_init$_de8316969b81209c,
        mid_init$_6030818780d04cbc,
        mid_equals_229c87223f486349,
        mid_getAuthority_0090f7797e403f43,
        mid_getContent_dfd7647d9110ac9f,
        mid_getContent_0ff9eea8393c08aa,
        mid_getDefaultPort_f2f64475e4580546,
        mid_getFile_0090f7797e403f43,
        mid_getHost_0090f7797e403f43,
        mid_getPath_0090f7797e403f43,
        mid_getPort_f2f64475e4580546,
        mid_getProtocol_0090f7797e403f43,
        mid_getQuery_0090f7797e403f43,
        mid_getRef_0090f7797e403f43,
        mid_getUserInfo_0090f7797e403f43,
        mid_hashCode_f2f64475e4580546,
        mid_openStream_eafcb03912e8859c,
        mid_sameFile_44e8a9d7e85e19cd,
        mid_toExternalForm_0090f7797e403f43,
        mid_toString_0090f7797e403f43,
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
