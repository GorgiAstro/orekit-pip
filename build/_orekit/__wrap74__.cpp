#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "org/hipparchus/FieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap::mids$ = NULL;
      bool OpenIntToFieldHashMap::live$ = false;

      jclass OpenIntToFieldHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_f89bf3117923cd08] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_6f1578ee31ccd8c3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_8b7c131480992c2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/hipparchus/FieldElement;)V");
          mids$[mid_containsKey_e034cac2b514bb09] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_d40ba91356b6a058] = env->getMethodID(cls, "get", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_iterator_e76c4abc68603aad] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToFieldHashMap$Iterator;");
          mids$[mid_put_06c2173622ecd7b1] = env->getMethodID(cls, "put", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
          mids$[mid_remove_d40ba91356b6a058] = env->getMethodID(cls, "remove", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f89bf3117923cd08, a0.this$, a1)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f1578ee31ccd8c3, a0.this$, a1.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1, const ::org::hipparchus::FieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b7c131480992c2c, a0.this$, a1, a2.this$)) {}

      jboolean OpenIntToFieldHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e034cac2b514bb09], a0);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::get$(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_get_d40ba91356b6a058], a0));
      }

      ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator OpenIntToFieldHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_e76c4abc68603aad]));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::put(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_put_06c2173622ecd7b1], a0, a1.this$));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::remove(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remove_d40ba91356b6a058], a0));
      }

      jint OpenIntToFieldHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args);
      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToFieldHashMap_init_ },
        { Py_tp_getset, t_OpenIntToFieldHashMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap, t_OpenIntToFieldHashMap, OpenIntToFieldHashMap);
      PyObject *t_OpenIntToFieldHashMap::wrap_Object(const OpenIntToFieldHashMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap), &PY_TYPE_DEF(OpenIntToFieldHashMap), module, "OpenIntToFieldHashMap", 0);
      }

      void t_OpenIntToFieldHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "class_", make_descriptor(OpenIntToFieldHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap::wrap_Object(OpenIntToFieldHashMap(((t_OpenIntToFieldHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::FieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToFieldHashMap$Iterator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/net/URL.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace net {

    ::java::lang::Class *URL::class$ = NULL;
    jmethodID *URL::mids$ = NULL;
    bool URL::live$ = false;

    jclass URL::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/net/URL");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_32bdaa4e65948a48] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
        mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_b0f225a9496425dc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAuthority_3cffd47377eca18a] = env->getMethodID(cls, "getAuthority", "()Ljava/lang/String;");
        mids$[mid_getContent_e661fe3ba2fafb22] = env->getMethodID(cls, "getContent", "()Ljava/lang/Object;");
        mids$[mid_getContent_12039b90b25ec342] = env->getMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
        mids$[mid_getDefaultPort_412668abc8d889e9] = env->getMethodID(cls, "getDefaultPort", "()I");
        mids$[mid_getFile_3cffd47377eca18a] = env->getMethodID(cls, "getFile", "()Ljava/lang/String;");
        mids$[mid_getHost_3cffd47377eca18a] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
        mids$[mid_getPath_3cffd47377eca18a] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getPort_412668abc8d889e9] = env->getMethodID(cls, "getPort", "()I");
        mids$[mid_getProtocol_3cffd47377eca18a] = env->getMethodID(cls, "getProtocol", "()Ljava/lang/String;");
        mids$[mid_getQuery_3cffd47377eca18a] = env->getMethodID(cls, "getQuery", "()Ljava/lang/String;");
        mids$[mid_getRef_3cffd47377eca18a] = env->getMethodID(cls, "getRef", "()Ljava/lang/String;");
        mids$[mid_getUserInfo_3cffd47377eca18a] = env->getMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_openStream_ce4348991af8a1a1] = env->getMethodID(cls, "openStream", "()Ljava/io/InputStream;");
        mids$[mid_sameFile_f24d92f382df2fc3] = env->getMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
        mids$[mid_toExternalForm_3cffd47377eca18a] = env->getMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    URL::URL(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    URL::URL(const URL & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32bdaa4e65948a48, a0.this$, a1.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, jint a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0f225a9496425dc, a0.this$, a1.this$, a2, a3.this$)) {}

    jboolean URL::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String URL::getAuthority() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAuthority_3cffd47377eca18a]));
    }

    ::java::lang::Object URL::getContent() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_e661fe3ba2fafb22]));
    }

    ::java::lang::Object URL::getContent(const JArray< ::java::lang::Class > & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_12039b90b25ec342], a0.this$));
    }

    jint URL::getDefaultPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultPort_412668abc8d889e9]);
    }

    ::java::lang::String URL::getFile() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFile_3cffd47377eca18a]));
    }

    ::java::lang::String URL::getHost() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_3cffd47377eca18a]));
    }

    ::java::lang::String URL::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_3cffd47377eca18a]));
    }

    jint URL::getPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getPort_412668abc8d889e9]);
    }

    ::java::lang::String URL::getProtocol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProtocol_3cffd47377eca18a]));
    }

    ::java::lang::String URL::getQuery() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getQuery_3cffd47377eca18a]));
    }

    ::java::lang::String URL::getRef() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRef_3cffd47377eca18a]));
    }

    ::java::lang::String URL::getUserInfo() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUserInfo_3cffd47377eca18a]));
    }

    jint URL::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    ::java::io::InputStream URL::openStream() const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStream_ce4348991af8a1a1]));
    }

    jboolean URL::sameFile(const URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_sameFile_f24d92f382df2fc3], a0.this$);
    }

    ::java::lang::String URL::toExternalForm() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toExternalForm_3cffd47377eca18a]));
    }

    ::java::lang::String URL::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace net {
    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg);
    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds);
    static PyObject *t_URL_equals(t_URL *self, PyObject *args);
    static PyObject *t_URL_getAuthority(t_URL *self);
    static PyObject *t_URL_getContent(t_URL *self, PyObject *args);
    static PyObject *t_URL_getDefaultPort(t_URL *self);
    static PyObject *t_URL_getFile(t_URL *self);
    static PyObject *t_URL_getHost(t_URL *self);
    static PyObject *t_URL_getPath(t_URL *self);
    static PyObject *t_URL_getPort(t_URL *self);
    static PyObject *t_URL_getProtocol(t_URL *self);
    static PyObject *t_URL_getQuery(t_URL *self);
    static PyObject *t_URL_getRef(t_URL *self);
    static PyObject *t_URL_getUserInfo(t_URL *self);
    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args);
    static PyObject *t_URL_openStream(t_URL *self);
    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg);
    static PyObject *t_URL_toExternalForm(t_URL *self);
    static PyObject *t_URL_toString(t_URL *self, PyObject *args);
    static PyObject *t_URL_get__authority(t_URL *self, void *data);
    static PyObject *t_URL_get__content(t_URL *self, void *data);
    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data);
    static PyObject *t_URL_get__file(t_URL *self, void *data);
    static PyObject *t_URL_get__host(t_URL *self, void *data);
    static PyObject *t_URL_get__path(t_URL *self, void *data);
    static PyObject *t_URL_get__port(t_URL *self, void *data);
    static PyObject *t_URL_get__protocol(t_URL *self, void *data);
    static PyObject *t_URL_get__query(t_URL *self, void *data);
    static PyObject *t_URL_get__ref(t_URL *self, void *data);
    static PyObject *t_URL_get__userInfo(t_URL *self, void *data);
    static PyGetSetDef t_URL__fields_[] = {
      DECLARE_GET_FIELD(t_URL, authority),
      DECLARE_GET_FIELD(t_URL, content),
      DECLARE_GET_FIELD(t_URL, defaultPort),
      DECLARE_GET_FIELD(t_URL, file),
      DECLARE_GET_FIELD(t_URL, host),
      DECLARE_GET_FIELD(t_URL, path),
      DECLARE_GET_FIELD(t_URL, port),
      DECLARE_GET_FIELD(t_URL, protocol),
      DECLARE_GET_FIELD(t_URL, query),
      DECLARE_GET_FIELD(t_URL, ref),
      DECLARE_GET_FIELD(t_URL, userInfo),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_URL__methods_[] = {
      DECLARE_METHOD(t_URL, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, equals, METH_VARARGS),
      DECLARE_METHOD(t_URL, getAuthority, METH_NOARGS),
      DECLARE_METHOD(t_URL, getContent, METH_VARARGS),
      DECLARE_METHOD(t_URL, getDefaultPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getFile, METH_NOARGS),
      DECLARE_METHOD(t_URL, getHost, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPath, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getProtocol, METH_NOARGS),
      DECLARE_METHOD(t_URL, getQuery, METH_NOARGS),
      DECLARE_METHOD(t_URL, getRef, METH_NOARGS),
      DECLARE_METHOD(t_URL, getUserInfo, METH_NOARGS),
      DECLARE_METHOD(t_URL, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_URL, openStream, METH_NOARGS),
      DECLARE_METHOD(t_URL, sameFile, METH_O),
      DECLARE_METHOD(t_URL, toExternalForm, METH_NOARGS),
      DECLARE_METHOD(t_URL, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(URL)[] = {
      { Py_tp_methods, t_URL__methods_ },
      { Py_tp_init, (void *) t_URL_init_ },
      { Py_tp_getset, t_URL__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(URL)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(URL, t_URL, URL);

    void t_URL::install(PyObject *module)
    {
      installType(&PY_TYPE(URL), &PY_TYPE_DEF(URL), module, "URL", 0);
    }

    void t_URL::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "class_", make_descriptor(URL::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "wrapfn_", make_descriptor(t_URL::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, URL::initializeClass, 1)))
        return NULL;
      return t_URL::wrap_Object(URL(((t_URL *) arg)->object.this$));
    }
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, URL::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = URL(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          URL a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ks", URL::initializeClass, &a0, &a1))
          {
            INT_CALL(object = URL(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = URL(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ssIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = URL(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
       default:
       err:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_URL_equals(t_URL *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_URL_getAuthority(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAuthority());
      return j2p(result);
    }

    static PyObject *t_URL_getContent(t_URL *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getContent());
          return ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Class > a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "[K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = self->object.getContent(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getContent", args);
      return NULL;
    }

    static PyObject *t_URL_getDefaultPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getFile(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFile());
      return j2p(result);
    }

    static PyObject *t_URL_getHost(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getHost());
      return j2p(result);
    }

    static PyObject *t_URL_getPath(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_URL_getPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getProtocol(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getProtocol());
      return j2p(result);
    }

    static PyObject *t_URL_getQuery(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getQuery());
      return j2p(result);
    }

    static PyObject *t_URL_getRef(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRef());
      return j2p(result);
    }

    static PyObject *t_URL_getUserInfo(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getUserInfo());
      return j2p(result);
    }

    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_URL_openStream(t_URL *self)
    {
      ::java::io::InputStream result((jobject) NULL);
      OBJ_CALL(result = self->object.openStream());
      return ::java::io::t_InputStream::wrap_Object(result);
    }

    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg)
    {
      URL a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", URL::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.sameFile(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "sameFile", arg);
      return NULL;
    }

    static PyObject *t_URL_toExternalForm(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toExternalForm());
      return j2p(result);
    }

    static PyObject *t_URL_toString(t_URL *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_URL_get__authority(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAuthority());
      return j2p(value);
    }

    static PyObject *t_URL_get__content(t_URL *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getContent());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__file(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFile());
      return j2p(value);
    }

    static PyObject *t_URL_get__host(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getHost());
      return j2p(value);
    }

    static PyObject *t_URL_get__path(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static PyObject *t_URL_get__port(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__protocol(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getProtocol());
      return j2p(value);
    }

    static PyObject *t_URL_get__query(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getQuery());
      return j2p(value);
    }

    static PyObject *t_URL_get__ref(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRef());
      return j2p(value);
    }

    static PyObject *t_URL_get__userInfo(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getUserInfo());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileParser::class$ = NULL;
        jmethodID *EphemerisFileParser::mids$ = NULL;
        bool EphemerisFileParser::live$ = false;

        jclass EphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_c897b47d9e3916d0] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::EphemerisFile EphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::EphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_c897b47d9e3916d0], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args);
        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg);
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data);
        static PyGetSetDef t_EphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileParser)[] = {
          { Py_tp_methods, t_EphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileParser, t_EphemerisFileParser, EphemerisFileParser);
        PyObject *t_EphemerisFileParser::wrap_Object(const EphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileParser), &PY_TYPE_DEF(EphemerisFileParser), module, "EphemerisFileParser", 0);
        }

        void t_EphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "class_", make_descriptor(EphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "wrapfn_", make_descriptor(t_EphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileParser::wrap_Object(EphemerisFileParser(((t_EphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_EphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/UTCScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/BDTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonAbstractTimeScales::class$ = NULL;
      jmethodID *PythonAbstractTimeScales::mids$ = NULL;
      bool PythonAbstractTimeScales::live$ = false;

      jclass PythonAbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonAbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_9391834b1a937fd3] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getEopHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getGLONASS_237364a28a8cf0b4] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGPS_0cd5c45ac1466124] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_3eb0a3a9b450fe42] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_64d2db466ba002ef] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_513baddf28d44704] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_d5c1bf5214e95dd6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_1561497728a78b6a] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_2cdd0fa7c8f02aa9] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_777ef8538a45134b] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_f6e670da699ff3f8] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_c21aaa13d4f3f95e] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_81e037be1ebdb551] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractTimeScales::PythonAbstractTimeScales() : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAbstractTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      ::org::orekit::time::UT1Scale PythonAbstractTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_c21aaa13d4f3f95e], a0.this$));
      }

      jlong PythonAbstractTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractTimeScales::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self);
      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args);
      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data);
      static PyGetSetDef t_PythonAbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractTimeScales)[] = {
        { Py_tp_methods, t_PythonAbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractTimeScales_init_ },
        { Py_tp_getset, t_PythonAbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(PythonAbstractTimeScales, t_PythonAbstractTimeScales, PythonAbstractTimeScales);

      void t_PythonAbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractTimeScales), &PY_TYPE_DEF(PythonAbstractTimeScales), module, "PythonAbstractTimeScales", 1);
      }

      void t_PythonAbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "class_", make_descriptor(PythonAbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "wrapfn_", make_descriptor(t_PythonAbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonAbstractTimeScales_getBDT0 },
          { "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractTimeScales_getEopHistory1 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonAbstractTimeScales_getGLONASS2 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonAbstractTimeScales_getGPS3 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonAbstractTimeScales_getGST4 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonAbstractTimeScales_getIRNSS5 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonAbstractTimeScales_getQZSS6 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonAbstractTimeScales_getTAI7 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonAbstractTimeScales_getTCB8 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonAbstractTimeScales_getTCG9 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonAbstractTimeScales_getTDB10 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonAbstractTimeScales_getTT11 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonAbstractTimeScales_getUTC12 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractTimeScales_pythonDecRef13 },
        };
        env->registerNatives(cls, methods, 14);
      }

      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractTimeScales::wrap_Object(PythonAbstractTimeScales(((t_PythonAbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractTimeScales object((jobject) NULL);

        INT_CALL(object = PythonAbstractTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getUT1(a0));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(PythonAbstractTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEopHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEopHistory", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CenterName::class$ = NULL;
          jmethodID *CenterName::mids$ = NULL;
          bool CenterName::live$ = false;
          CenterName *CenterName::EARTH = NULL;
          CenterName *CenterName::EARTH_MOON = NULL;
          CenterName *CenterName::JUPITER = NULL;
          CenterName *CenterName::MARS = NULL;
          CenterName *CenterName::MERCURY = NULL;
          CenterName *CenterName::MOON = NULL;
          CenterName *CenterName::NEPTUNE = NULL;
          CenterName *CenterName::PLUTO = NULL;
          CenterName *CenterName::SATURN = NULL;
          CenterName *CenterName::SOLAR_SYSTEM_BARYCENTER = NULL;
          CenterName *CenterName::SUN = NULL;
          CenterName *CenterName::URANUS = NULL;
          CenterName *CenterName::VENUS = NULL;

          jclass CenterName::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CenterName");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCelestialBody_40e74583267ad550] = env->getMethodID(cls, "getCelestialBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getCelestialBody_18ab25d924d88f51] = env->getMethodID(cls, "getCelestialBody", "(Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_guessCenter_1fb9161cbce7f53e] = env->getStaticMethodID(cls, "guessCenter", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_05675ec85ded2fd8] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_valueOf_17f9bf4c2612840c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_values_d157b27031769ef0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CenterName;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EARTH = new CenterName(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              EARTH_MOON = new CenterName(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              JUPITER = new CenterName(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MARS = new CenterName(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MERCURY = new CenterName(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MOON = new CenterName(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              NEPTUNE = new CenterName(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              PLUTO = new CenterName(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SATURN = new CenterName(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SOLAR_SYSTEM_BARYCENTER = new CenterName(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SUN = new CenterName(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              URANUS = new CenterName(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              VENUS = new CenterName(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_40e74583267ad550]));
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody(const ::org::orekit::bodies::CelestialBodies & a0) const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_18ab25d924d88f51], a0.this$));
          }

          ::java::lang::String CenterName::guessCenter(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessCenter_1fb9161cbce7f53e], a0.this$));
          }

          CenterName CenterName::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_map_05675ec85ded2fd8], a0.this$));
          }

          CenterName CenterName::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_valueOf_17f9bf4c2612840c], a0.this$));
          }

          JArray< CenterName > CenterName::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CenterName >(env->callStaticObjectMethod(cls, mids$[mid_values_d157b27031769ef0]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CenterName_values(PyTypeObject *type);
          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data);
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data);
          static PyGetSetDef t_CenterName__fields_[] = {
            DECLARE_GET_FIELD(t_CenterName, celestialBody),
            DECLARE_GET_FIELD(t_CenterName, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CenterName__methods_[] = {
            DECLARE_METHOD(t_CenterName, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, of_, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, getCelestialBody, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, guessCenter, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CenterName, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CenterName)[] = {
            { Py_tp_methods, t_CenterName__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CenterName__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CenterName)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CenterName, t_CenterName, CenterName);
          PyObject *t_CenterName::wrap_Object(const CenterName& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CenterName::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CenterName::install(PyObject *module)
          {
            installType(&PY_TYPE(CenterName), &PY_TYPE_DEF(CenterName), module, "CenterName", 0);
          }

          void t_CenterName::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "class_", make_descriptor(CenterName::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "wrapfn_", make_descriptor(t_CenterName::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "boxfn_", make_descriptor(boxObject));
            env->getClass(CenterName::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH_MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH_MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "JUPITER", make_descriptor(t_CenterName::wrap_Object(*CenterName::JUPITER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MARS", make_descriptor(t_CenterName::wrap_Object(*CenterName::MARS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MERCURY", make_descriptor(t_CenterName::wrap_Object(*CenterName::MERCURY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "NEPTUNE", make_descriptor(t_CenterName::wrap_Object(*CenterName::NEPTUNE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "PLUTO", make_descriptor(t_CenterName::wrap_Object(*CenterName::PLUTO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SATURN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SATURN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_CenterName::wrap_Object(*CenterName::SOLAR_SYSTEM_BARYCENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SUN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SUN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "URANUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::URANUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "VENUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::VENUS)));
          }

          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CenterName::initializeClass, 1)))
              return NULL;
            return t_CenterName::wrap_Object(CenterName(((t_CenterName *) arg)->object.this$));
          }
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CenterName::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialBody());
                return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getCelestialBody(a0));
                  return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getCelestialBody", args);
            return NULL;
          }

          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::guessCenter(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessCenter", arg);
            return NULL;
          }

          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::map(a0));
              return t_CenterName::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::valueOf(a0));
              return t_CenterName::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CenterName_values(PyTypeObject *type)
          {
            JArray< CenterName > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::values());
            return JArray<jobject>(result.this$).wrap(t_CenterName::wrap_jobject);
          }
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getCelestialBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonEphemerisGenerator::class$ = NULL;
      jmethodID *PythonEphemerisGenerator::mids$ = NULL;
      bool PythonEphemerisGenerator::live$ = false;

      jclass PythonEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_fa108fc36df3791a] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEphemerisGenerator::PythonEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonEphemerisGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self);
      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEphemerisGenerator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEphemerisGenerator, t_PythonEphemerisGenerator, PythonEphemerisGenerator);

      void t_PythonEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEphemerisGenerator), &PY_TYPE_DEF(PythonEphemerisGenerator), module, "PythonEphemerisGenerator", 1);
      }

      void t_PythonEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "class_", make_descriptor(PythonEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;", (void *) t_PythonEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonEphemerisGenerator::wrap_Object(PythonEphemerisGenerator(((t_PythonEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::BoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuver::class$ = NULL;
              jmethodID *AttitudeManeuver::mids$ = NULL;
              bool AttitudeManeuver::live$ = false;

              jclass AttitudeManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActuatorUsed_3cffd47377eca18a] = env->getMethodID(cls, "getActuatorUsed", "()Ljava/lang/String;");
                  mids$[mid_getBeginTime_557b8123390d8d0c] = env->getMethodID(cls, "getBeginTime", "()D");
                  mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEndTime_557b8123390d8d0c] = env->getMethodID(cls, "getEndTime", "()D");
                  mids$[mid_getID_3cffd47377eca18a] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_3cffd47377eca18a] = env->getMethodID(cls, "getManPurpose", "()Ljava/lang/String;");
                  mids$[mid_getPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTargetAttitude_1e0dc1a6788897b9] = env->getMethodID(cls, "getTargetAttitude", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_getTargetMomFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getTargetMomFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTargetMomentum_f88961cca75a2c0a] = env->getMethodID(cls, "getTargetMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getTargetSpinRate_557b8123390d8d0c] = env->getMethodID(cls, "getTargetSpinRate", "()D");
                  mids$[mid_setActuatorUsed_f5ffdf29129ef90a] = env->getMethodID(cls, "setActuatorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_setBeginTime_10f281d777284cea] = env->getMethodID(cls, "setBeginTime", "(D)V");
                  mids$[mid_setDuration_10f281d777284cea] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEndTime_10f281d777284cea] = env->getMethodID(cls, "setEndTime", "(D)V");
                  mids$[mid_setID_f5ffdf29129ef90a] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_f5ffdf29129ef90a] = env->getMethodID(cls, "setManPurpose", "(Ljava/lang/String;)V");
                  mids$[mid_setPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTargetAttitude_cffe2196131a8abb] = env->getMethodID(cls, "setTargetAttitude", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
                  mids$[mid_setTargetMomFrame_f55eee1236275bb1] = env->getMethodID(cls, "setTargetMomFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTargetMomentum_2810d2bec90e7b1c] = env->getMethodID(cls, "setTargetMomentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setTargetSpinRate_10f281d777284cea] = env->getMethodID(cls, "setTargetSpinRate", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeManeuver::AttitudeManeuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::java::lang::String AttitudeManeuver::getActuatorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActuatorUsed_3cffd47377eca18a]));
              }

              jdouble AttitudeManeuver::getBeginTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeginTime_557b8123390d8d0c]);
              }

              jdouble AttitudeManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
              }

              jdouble AttitudeManeuver::getEndTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEndTime_557b8123390d8d0c]);
              }

              ::java::lang::String AttitudeManeuver::getID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeManeuver::getManPurpose() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPurpose_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeManeuver::getPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevID_3cffd47377eca18a]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeManeuver::getTargetAttitude() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getTargetAttitude_1e0dc1a6788897b9]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeManeuver::getTargetMomFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTargetMomFrame_98f5fcaff3e3f9d2]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudeManeuver::getTargetMomentum() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetMomentum_f88961cca75a2c0a]));
              }

              jdouble AttitudeManeuver::getTargetSpinRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTargetSpinRate_557b8123390d8d0c]);
              }

              void AttitudeManeuver::setActuatorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActuatorUsed_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeManeuver::setBeginTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeginTime_10f281d777284cea], a0);
              }

              void AttitudeManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_10f281d777284cea], a0);
              }

              void AttitudeManeuver::setEndTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEndTime_10f281d777284cea], a0);
              }

              void AttitudeManeuver::setID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeManeuver::setManPurpose(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeManeuver::setPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeManeuver::setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetAttitude_cffe2196131a8abb], a0.this$);
              }

              void AttitudeManeuver::setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomFrame_f55eee1236275bb1], a0.this$);
              }

              void AttitudeManeuver::setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomentum_2810d2bec90e7b1c], a0.this$);
              }

              void AttitudeManeuver::setTargetSpinRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetSpinRate_10f281d777284cea], a0);
              }

              void AttitudeManeuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args);
              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeManeuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, actuatorUsed),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, beginTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, duration),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, endTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, iD),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, manPurpose),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, prevID),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetAttitude),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomFrame),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomentum),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetSpinRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuver__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, getActuatorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getBeginTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getEndTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetAttitude, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomentum, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetSpinRate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, setActuatorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setBeginTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setEndTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setManPurpose, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetAttitude, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomFrame, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomentum, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetSpinRate, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuver)[] = {
                { Py_tp_methods, t_AttitudeManeuver__methods_ },
                { Py_tp_init, (void *) t_AttitudeManeuver_init_ },
                { Py_tp_getset, t_AttitudeManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuver, t_AttitudeManeuver, AttitudeManeuver);

              void t_AttitudeManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuver), &PY_TYPE_DEF(AttitudeManeuver), module, "AttitudeManeuver", 0);
              }

              void t_AttitudeManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "class_", make_descriptor(AttitudeManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "wrapfn_", make_descriptor(t_AttitudeManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuver::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuver::wrap_Object(AttitudeManeuver(((t_AttitudeManeuver *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds)
              {
                AttitudeManeuver object((jobject) NULL);

                INT_CALL(object = AttitudeManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getActuatorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeginTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEndTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setActuatorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActuatorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeginTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeginTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEndTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEndTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetAttitude(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetAttitude", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomentum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomentum", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTargetSpinRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetSpinRate", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeManeuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getActuatorUsed());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setActuatorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actuatorUsed", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeginTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeginTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beginTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEndTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEndTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "endTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iD", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetAttitude(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetAttitude", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomentum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomentum", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTargetSpinRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetSpinRate", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map::class$ = NULL;
    jmethodID *Map::mids$ = NULL;
    bool Map::live$ = false;

    jclass Map::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_221e8e85cb385209] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_221e8e85cb385209] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_copyOf_ca09431f94120606] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_entry_1391a80f2f629267] = env->getStaticMethodID(cls, "entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_e9b6f8dd03d71e12] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_of_1e62c2f73fbdd1c4] = env->getStaticMethodID(cls, "of", "()Ljava/util/Map;");
        mids$[mid_of_be1ef584905f235e] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_afe65da0f1e8ca4d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_a0ec658c23861a1d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_1d5b0576c3fdf61b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_5add7b125575ab54] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_c820332be5621a8f] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_ace850000436e41d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_0ea0405c53d4cebc] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_1b7b49738db4649b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_850a7a0e95f71055] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_ofEntries_031661cea938b506] = env->getStaticMethodID(cls, "ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_e9b6f8dd03d71e12] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5f964797772d10ff] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_e9b6f8dd03d71e12] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_5c8006f3f1f9c96f] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Map::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean Map::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_221e8e85cb385209], a0.this$);
    }

    jboolean Map::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_221e8e85cb385209], a0.this$);
    }

    Map Map::copyOf(const Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_copyOf_ca09431f94120606], a0.this$));
    }

    ::java::util::Map$Entry Map::entry(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map$Entry(env->callStaticObjectMethod(cls, mids$[mid_entry_1391a80f2f629267], a0.this$, a1.this$));
    }

    ::java::util::Set Map::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    jboolean Map::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Map::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object Map::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jint Map::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Map::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Set Map::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    Map Map::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_1e62c2f73fbdd1c4]));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_be1ef584905f235e], a0.this$, a1.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_afe65da0f1e8ca4d], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_a0ec658c23861a1d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_1d5b0576c3fdf61b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_5add7b125575ab54], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_c820332be5621a8f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_ace850000436e41d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_0ea0405c53d4cebc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_1b7b49738db4649b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17, const ::java::lang::Object & a18, const ::java::lang::Object & a19)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_850a7a0e95f71055], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$));
    }

    Map Map::ofEntries(const JArray< ::java::util::Map$Entry > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_ofEntries_031661cea938b506], a0.this$));
    }

    ::java::lang::Object Map::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    void Map::putAll(const Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
    }

    ::java::lang::Object Map::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::Object Map::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jboolean Map::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_5f964797772d10ff], a0.this$, a1.this$);
    }

    ::java::lang::Object Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jboolean Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_5c8006f3f1f9c96f], a0.this$, a1.this$, a2.this$);
    }

    jint Map::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Collection Map::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_of_(t_Map *self, PyObject *args);
    static PyObject *t_Map_clear(t_Map *self);
    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg);
    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg);
    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_entrySet(t_Map *self);
    static PyObject *t_Map_equals(t_Map *self, PyObject *args);
    static PyObject *t_Map_get(t_Map *self, PyObject *arg);
    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args);
    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args);
    static PyObject *t_Map_isEmpty(t_Map *self);
    static PyObject *t_Map_keySet(t_Map *self);
    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_put(t_Map *self, PyObject *args);
    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg);
    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args);
    static PyObject *t_Map_remove(t_Map *self, PyObject *args);
    static PyObject *t_Map_replace(t_Map *self, PyObject *args);
    static PyObject *t_Map_size(t_Map *self);
    static PyObject *t_Map_values(t_Map *self);
    static PyObject *t_Map_get__empty(t_Map *self, void *data);
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data);
    static PyGetSetDef t_Map__fields_[] = {
      DECLARE_GET_FIELD(t_Map, empty),
      DECLARE_GET_FIELD(t_Map, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map__methods_[] = {
      DECLARE_METHOD(t_Map, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map, clear, METH_NOARGS),
      DECLARE_METHOD(t_Map, containsKey, METH_O),
      DECLARE_METHOD(t_Map, containsValue, METH_O),
      DECLARE_METHOD(t_Map, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, entry, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map, get, METH_O),
      DECLARE_METHOD(t_Map, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Map, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Map, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, ofEntries, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, put, METH_VARARGS),
      DECLARE_METHOD(t_Map, putAll, METH_O),
      DECLARE_METHOD(t_Map, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Map, remove, METH_VARARGS),
      DECLARE_METHOD(t_Map, replace, METH_VARARGS),
      DECLARE_METHOD(t_Map, size, METH_NOARGS),
      DECLARE_METHOD(t_Map, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map)[] = {
      { Py_tp_methods, t_Map__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map, t_Map, Map);
    PyObject *t_Map::wrap_Object(const Map& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map::install(PyObject *module)
    {
      installType(&PY_TYPE(Map), &PY_TYPE_DEF(Map), module, "Map", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "Entry", make_descriptor(&PY_TYPE_DEF(Map$Entry)));
    }

    void t_Map::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "class_", make_descriptor(Map::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "wrapfn_", make_descriptor(t_Map::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map::initializeClass, 1)))
        return NULL;
      return t_Map::wrap_Object(Map(((t_Map *) arg)->object.this$));
    }
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map_of_(t_Map *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map_clear(t_Map *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::copyOf(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Map::entry(a0, a1));
        return ::java::util::t_Map$Entry::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "entry", args);
      return NULL;
    }

    static PyObject *t_Map_entrySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Map_equals(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map_get(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getOrDefault", args);
      return NULL;
    }

    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map_isEmpty(t_Map *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Map_keySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Map result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map::of());
          return t_Map::wrap_Object(result);
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 12:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 14:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 16:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 18:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 20:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          ::java::lang::Object a18((jobject) NULL);
          ::java::lang::Object a19((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19));
            return t_Map::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::util::Map$Entry > a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "[K", ::java::util::Map$Entry::initializeClass, &a0, &p0, ::java::util::t_Map$Entry::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::ofEntries(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofEntries", arg);
      return NULL;
    }

    static PyObject *t_Map_put(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "putIfAbsent", args);
      return NULL;
    }

    static PyObject *t_Map_remove(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remove", args);
      return NULL;
    }

    static PyObject *t_Map_replace(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_Map_size(t_Map *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Map_values(t_Map *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map_get__empty(t_Map *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Gradient::class$ = NULL;
        jmethodID *Gradient::mids$ = NULL;
        bool Gradient::live$ = false;

        jclass Gradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Gradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_db212c86bccc027a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_092013acd44a9e63] = env->getMethodID(cls, "<init>", "(D[D)V");
            mids$[mid_abs_b157bc83ac48b3b3] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acos_b157bc83ac48b3b3] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acosh_b157bc83ac48b3b3] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_8450c99fce53950a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_4daf157c6c3e2bac] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asin_b157bc83ac48b3b3] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asinh_b157bc83ac48b3b3] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan_b157bc83ac48b3b3] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan2_8450c99fce53950a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atanh_b157bc83ac48b3b3] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cbrt_b157bc83ac48b3b3] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ceil_b157bc83ac48b3b3] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_compose_8ad940146a4dc764] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_constant_1e33a6f5b190762b] = env->getStaticMethodID(cls, "constant", "(ID)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_8450c99fce53950a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_4daf157c6c3e2bac] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cos_b157bc83ac48b3b3] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cosh_b157bc83ac48b3b3] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_8450c99fce53950a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_4daf157c6c3e2bac] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_b157bc83ac48b3b3] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_expm1_b157bc83ac48b3b3] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_floor_b157bc83ac48b3b3] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_0220b0561b303d27] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_a53a7513ecedada2] = env->getMethodID(cls, "getGradient", "()[D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_75914fee15aa69bc] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPartialDerivative_69cfb132c661aca4] = env->getMethodID(cls, "getPartialDerivative", "(I)D");
            mids$[mid_getPi_b157bc83ac48b3b3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_8450c99fce53950a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_fd21135a85c91f7d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_045e5a30857c0f68] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/Gradient;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_90d7be270d5182ac] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_1a22ff9fc5003cd9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_1fef1967b3b3bfce] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_3528ee32632d941d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_0eede1e5527c2b02] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_19b4c8c7846ae49b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log_b157bc83ac48b3b3] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log10_b157bc83ac48b3b3] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log1p_b157bc83ac48b3b3] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_8450c99fce53950a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_4daf157c6c3e2bac] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_6f1134332d5e73c5] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_negate_b157bc83ac48b3b3] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_newInstance_4daf157c6c3e2bac] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_8450c99fce53950a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_4daf157c6c3e2bac] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_6f1134332d5e73c5] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_8393fa0c9dd710f1] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_reciprocal_b157bc83ac48b3b3] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_8450c99fce53950a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_4daf157c6c3e2bac] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rint_b157bc83ac48b3b3] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rootN_6f1134332d5e73c5] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_scalb_6f1134332d5e73c5] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sign_b157bc83ac48b3b3] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sin_b157bc83ac48b3b3] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_b157bc83ac48b3b3] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_b157bc83ac48b3b3] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_8450c99fce53950a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_4daf157c6c3e2bac] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tan_b157bc83ac48b3b3] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tanh_b157bc83ac48b3b3] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_taylor_86c4a0582e0747ce] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_b157bc83ac48b3b3] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_toDerivativeStructure_9f40c2a430225d38] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_b157bc83ac48b3b3] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ulp_b157bc83ac48b3b3] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_variable_f883e044ad5079c2] = env->getStaticMethodID(cls, "variable", "(IID)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gradient::Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db212c86bccc027a, a0.this$)) {}

        Gradient::Gradient(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_092013acd44a9e63, a0, a1.this$)) {}

        Gradient Gradient::abs() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_abs_b157bc83ac48b3b3]));
        }

        Gradient Gradient::acos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acos_b157bc83ac48b3b3]));
        }

        Gradient Gradient::acosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acosh_b157bc83ac48b3b3]));
        }

        Gradient Gradient::add(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::add(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::asin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asin_b157bc83ac48b3b3]));
        }

        Gradient Gradient::asinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asinh_b157bc83ac48b3b3]));
        }

        Gradient Gradient::atan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan_b157bc83ac48b3b3]));
        }

        Gradient Gradient::atan2(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan2_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::atanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atanh_b157bc83ac48b3b3]));
        }

        Gradient Gradient::cbrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cbrt_b157bc83ac48b3b3]));
        }

        Gradient Gradient::ceil() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ceil_b157bc83ac48b3b3]));
        }

        Gradient Gradient::compose(const JArray< jdouble > & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_compose_8ad940146a4dc764], a0.this$));
        }

        Gradient Gradient::constant(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_constant_1e33a6f5b190762b], a0, a1));
        }

        Gradient Gradient::copySign(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::copySign(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::cos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cos_b157bc83ac48b3b3]));
        }

        Gradient Gradient::cosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cosh_b157bc83ac48b3b3]));
        }

        Gradient Gradient::divide(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::divide(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_4daf157c6c3e2bac], a0));
        }

        jboolean Gradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        Gradient Gradient::exp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_exp_b157bc83ac48b3b3]));
        }

        Gradient Gradient::expm1() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_expm1_b157bc83ac48b3b3]));
        }

        Gradient Gradient::floor() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_floor_b157bc83ac48b3b3]));
        }

        jint Gradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::GradientField Gradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::GradientField(env->callObjectMethod(this$, mids$[mid_getField_0220b0561b303d27]));
        }

        jint Gradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        JArray< jdouble > Gradient::getGradient() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGradient_a53a7513ecedada2]));
        }

        jint Gradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        jdouble Gradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_75914fee15aa69bc], a0.this$);
        }

        jdouble Gradient::getPartialDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_69cfb132c661aca4], a0);
        }

        Gradient Gradient::getPi() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_getPi_b157bc83ac48b3b3]));
        }

        jdouble Gradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        jdouble Gradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint Gradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        Gradient Gradient::hypot(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_hypot_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::linearCombination(const JArray< jdouble > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_fd21135a85c91f7d], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const JArray< Gradient > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_045e5a30857c0f68], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_90d7be270d5182ac], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1a22ff9fc5003cd9], a0, a1.this$, a2, a3.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1fef1967b3b3bfce], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_3528ee32632d941d], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5, const Gradient & a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_0eede1e5527c2b02], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5, jdouble a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_19b4c8c7846ae49b], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        Gradient Gradient::log() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log_b157bc83ac48b3b3]));
        }

        Gradient Gradient::log10() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log10_b157bc83ac48b3b3]));
        }

        Gradient Gradient::log1p() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log1p_b157bc83ac48b3b3]));
        }

        Gradient Gradient::multiply(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::multiply(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::multiply(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_6f1134332d5e73c5], a0));
        }

        Gradient Gradient::negate() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_negate_b157bc83ac48b3b3]));
        }

        Gradient Gradient::newInstance(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_newInstance_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::pow(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::pow(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::pow(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_6f1134332d5e73c5], a0));
        }

        Gradient Gradient::pow(jdouble a0, const Gradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_pow_8393fa0c9dd710f1], a0, a1.this$));
        }

        Gradient Gradient::reciprocal() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_reciprocal_b157bc83ac48b3b3]));
        }

        Gradient Gradient::remainder(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::remainder(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::rint() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rint_b157bc83ac48b3b3]));
        }

        Gradient Gradient::rootN(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rootN_6f1134332d5e73c5], a0));
        }

        Gradient Gradient::scalb(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_scalb_6f1134332d5e73c5], a0));
        }

        Gradient Gradient::sign() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sign_b157bc83ac48b3b3]));
        }

        Gradient Gradient::sin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sin_b157bc83ac48b3b3]));
        }

        ::org::hipparchus::util::FieldSinCos Gradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        Gradient Gradient::sinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sinh_b157bc83ac48b3b3]));
        }

        ::org::hipparchus::util::FieldSinhCosh Gradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        Gradient Gradient::sqrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sqrt_b157bc83ac48b3b3]));
        }

        Gradient Gradient::subtract(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_8450c99fce53950a], a0.this$));
        }

        Gradient Gradient::subtract(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_4daf157c6c3e2bac], a0));
        }

        Gradient Gradient::tan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tan_b157bc83ac48b3b3]));
        }

        Gradient Gradient::tanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tanh_b157bc83ac48b3b3]));
        }

        jdouble Gradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_86c4a0582e0747ce], a0.this$);
        }

        Gradient Gradient::toDegrees() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toDegrees_b157bc83ac48b3b3]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure Gradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_9f40c2a430225d38]));
        }

        Gradient Gradient::toRadians() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toRadians_b157bc83ac48b3b3]));
        }

        Gradient Gradient::ulp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ulp_b157bc83ac48b3b3]));
        }

        Gradient Gradient::variable(jint a0, jint a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_variable_f883e044ad5079c2], a0, a1, a2));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gradient_abs(t_Gradient *self);
        static PyObject *t_Gradient_acos(t_Gradient *self);
        static PyObject *t_Gradient_acosh(t_Gradient *self);
        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_asin(t_Gradient *self);
        static PyObject *t_Gradient_asinh(t_Gradient *self);
        static PyObject *t_Gradient_atan(t_Gradient *self);
        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_atanh(t_Gradient *self);
        static PyObject *t_Gradient_cbrt(t_Gradient *self);
        static PyObject *t_Gradient_ceil(t_Gradient *self);
        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_cos(t_Gradient *self);
        static PyObject *t_Gradient_cosh(t_Gradient *self);
        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_exp(t_Gradient *self);
        static PyObject *t_Gradient_expm1(t_Gradient *self);
        static PyObject *t_Gradient_floor(t_Gradient *self);
        static PyObject *t_Gradient_getExponent(t_Gradient *self);
        static PyObject *t_Gradient_getField(t_Gradient *self);
        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self);
        static PyObject *t_Gradient_getGradient(t_Gradient *self);
        static PyObject *t_Gradient_getOrder(t_Gradient *self);
        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_getPi(t_Gradient *self);
        static PyObject *t_Gradient_getReal(t_Gradient *self);
        static PyObject *t_Gradient_getValue(t_Gradient *self);
        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_log(t_Gradient *self);
        static PyObject *t_Gradient_log10(t_Gradient *self);
        static PyObject *t_Gradient_log1p(t_Gradient *self);
        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_negate(t_Gradient *self);
        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_reciprocal(t_Gradient *self);
        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_rint(t_Gradient *self);
        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_sign(t_Gradient *self);
        static PyObject *t_Gradient_sin(t_Gradient *self);
        static PyObject *t_Gradient_sinCos(t_Gradient *self);
        static PyObject *t_Gradient_sinh(t_Gradient *self);
        static PyObject *t_Gradient_sinhCosh(t_Gradient *self);
        static PyObject *t_Gradient_sqrt(t_Gradient *self);
        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_tan(t_Gradient *self);
        static PyObject *t_Gradient_tanh(t_Gradient *self);
        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_toDegrees(t_Gradient *self);
        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self);
        static PyObject *t_Gradient_toRadians(t_Gradient *self);
        static PyObject *t_Gradient_ulp(t_Gradient *self);
        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data);
        static PyGetSetDef t_Gradient__fields_[] = {
          DECLARE_GET_FIELD(t_Gradient, exponent),
          DECLARE_GET_FIELD(t_Gradient, field),
          DECLARE_GET_FIELD(t_Gradient, freeParameters),
          DECLARE_GET_FIELD(t_Gradient, gradient),
          DECLARE_GET_FIELD(t_Gradient, order),
          DECLARE_GET_FIELD(t_Gradient, pi),
          DECLARE_GET_FIELD(t_Gradient, real),
          DECLARE_GET_FIELD(t_Gradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Gradient__methods_[] = {
          DECLARE_METHOD(t_Gradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, add, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan2, METH_O),
          DECLARE_METHOD(t_Gradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, compose, METH_O),
          DECLARE_METHOD(t_Gradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, hypot, METH_O),
          DECLARE_METHOD(t_Gradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, log, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, newInstance, METH_O),
          DECLARE_METHOD(t_Gradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, rootN, METH_O),
          DECLARE_METHOD(t_Gradient, scalb, METH_O),
          DECLARE_METHOD(t_Gradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, taylor, METH_O),
          DECLARE_METHOD(t_Gradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gradient)[] = {
          { Py_tp_methods, t_Gradient__methods_ },
          { Py_tp_init, (void *) t_Gradient_init_ },
          { Py_tp_getset, t_Gradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gradient, t_Gradient, Gradient);

        void t_Gradient::install(PyObject *module)
        {
          installType(&PY_TYPE(Gradient), &PY_TYPE_DEF(Gradient), module, "Gradient", 0);
        }

        void t_Gradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "class_", make_descriptor(Gradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "wrapfn_", make_descriptor(t_Gradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gradient::initializeClass, 1)))
            return NULL;
          return t_Gradient::wrap_Object(Gradient(((t_Gradient *) arg)->object.this$));
        }
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = Gradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                INT_CALL(object = Gradient(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Gradient_abs(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_Gradient_asin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_asinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_Gradient_atanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cbrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ceil(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::constant(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_Gradient_cos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Gradient_exp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_expm1(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_floor(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getExponent(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getField(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::GradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(result);
        }

        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getGradient(t_Gradient *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return result.wrap();
        }

        static PyObject *t_Gradient_getOrder(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              jdouble result;

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_Gradient_getPi(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getReal(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_getValue(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              JArray< Gradient > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient a6((jobject) NULL);
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              jdouble a6;
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_Gradient_log(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log10(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log1p(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Gradient_negate(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg)
        {
          jdouble a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          Gradient a1((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", Gradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::pow(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_Gradient_reciprocal(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_Gradient_rint(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_Gradient_sign(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinCos(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinhCosh(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sqrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_Gradient_tan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_tanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_Gradient_toDegrees(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_Gradient_toRadians(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ulp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::variable(a0, a1, a2));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }

        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::GradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return value.wrap();
        }

        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data)
        {
          Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_Gradient::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Vertex::class$ = NULL;
          jmethodID *Vertex::mids$ = NULL;
          bool Vertex::live$ = false;

          jclass Vertex::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Vertex");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getIncoming_eb4d44d7506dc6e8] = env->getMethodID(cls, "getIncoming", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");
              mids$[mid_getLocation_0ba7e0560ff59fd8] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getOutgoing_eb4d44d7506dc6e8] = env->getMethodID(cls, "getOutgoing", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getIncoming() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getIncoming_eb4d44d7506dc6e8]));
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Vertex::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getLocation_0ba7e0560ff59fd8]));
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getOutgoing() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getOutgoing_eb4d44d7506dc6e8]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_getIncoming(t_Vertex *self);
          static PyObject *t_Vertex_getLocation(t_Vertex *self);
          static PyObject *t_Vertex_getOutgoing(t_Vertex *self);
          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data);
          static PyGetSetDef t_Vertex__fields_[] = {
            DECLARE_GET_FIELD(t_Vertex, incoming),
            DECLARE_GET_FIELD(t_Vertex, location),
            DECLARE_GET_FIELD(t_Vertex, outgoing),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vertex__methods_[] = {
            DECLARE_METHOD(t_Vertex, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, getIncoming, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getOutgoing, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vertex)[] = {
            { Py_tp_methods, t_Vertex__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Vertex__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vertex)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vertex, t_Vertex, Vertex);

          void t_Vertex::install(PyObject *module)
          {
            installType(&PY_TYPE(Vertex), &PY_TYPE_DEF(Vertex), module, "Vertex", 0);
          }

          void t_Vertex::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "class_", make_descriptor(Vertex::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "wrapfn_", make_descriptor(t_Vertex::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vertex::initializeClass, 1)))
              return NULL;
            return t_Vertex::wrap_Object(Vertex(((t_Vertex *) arg)->object.this$));
          }
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vertex::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vertex_getIncoming(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_getLocation(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Vertex_getOutgoing(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepHandler::class$ = NULL;
        jmethodID *PythonOrekitStepHandler::mids$ = NULL;
        bool PythonOrekitStepHandler::live$ = false;

        jclass PythonOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_729a66b1e94503de] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepHandler::PythonOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self);
        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepHandler, t_PythonOrekitStepHandler, PythonOrekitStepHandler);

        void t_PythonOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepHandler), &PY_TYPE_DEF(PythonOrekitStepHandler), module, "PythonOrekitStepHandler", 1);
        }

        void t_PythonOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "class_", make_descriptor(PythonOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V", (void *) t_PythonOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepHandler::wrap_Object(PythonOrekitStepHandler(((t_PythonOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::OrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldStepNormalizer::class$ = NULL;
        jmethodID *FieldStepNormalizer::mids$ = NULL;
        bool FieldStepNormalizer::live$ = false;

        jclass FieldStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b8859cb3266f41b0] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;)V");
            mids$[mid_init$_0577ee62fac5a062] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_b391cf8c1762e7cd] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_92925b38201de4bb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_747fee420c9ba889] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_e7d5f5a81e2a2b8e] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8859cb3266f41b0, a0, a1.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0577ee62fac5a062, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b391cf8c1762e7cd, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92925b38201de4bb, a0, a1.this$, a2.this$, a3.this$)) {}

        void FieldStepNormalizer::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_747fee420c9ba889], a0.this$);
        }

        void FieldStepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_e7d5f5a81e2a2b8e], a0.this$);
        }

        void FieldStepNormalizer::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args);
        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepNormalizer)[] = {
          { Py_tp_methods, t_FieldStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldStepNormalizer_init_ },
          { Py_tp_getset, t_FieldStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepNormalizer, t_FieldStepNormalizer, FieldStepNormalizer);
        PyObject *t_FieldStepNormalizer::wrap_Object(const FieldStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepNormalizer), &PY_TYPE_DEF(FieldStepNormalizer), module, "FieldStepNormalizer", 0);
        }

        void t_FieldStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "class_", make_descriptor(FieldStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "wrapfn_", make_descriptor(t_FieldStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldStepNormalizer::wrap_Object(FieldStepNormalizer(((t_FieldStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateOptimizer::class$ = NULL;
          jmethodID *MultivariateOptimizer::mids$ = NULL;
          bool MultivariateOptimizer::live$ = false;

          jclass MultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeObjectiveValue_86c4a0582e0747ce] = env->getMethodID(cls, "computeObjectiveValue", "([D)D");
              mids$[mid_getGoalType_bd7f7e2869c755fb] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble MultivariateOptimizer::computeObjectiveValue(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_computeObjectiveValue_86c4a0582e0747ce], a0.this$);
          }

          ::org::hipparchus::optim::nonlinear::scalar::GoalType MultivariateOptimizer::getGoalType() const
          {
            return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_bd7f7e2869c755fb]));
          }

          ::org::hipparchus::optim::PointValuePair MultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self);
          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data);
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultivariateOptimizer, goalType),
            DECLARE_GET_FIELD(t_MultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, computeObjectiveValue, METH_O),
            DECLARE_METHOD(t_MultivariateOptimizer, getGoalType, METH_NOARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultivariateOptimizer, t_MultivariateOptimizer, MultivariateOptimizer);
          PyObject *t_MultivariateOptimizer::wrap_Object(const MultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateOptimizer), &PY_TYPE_DEF(MultivariateOptimizer), module, "MultivariateOptimizer", 0);
          }

          void t_MultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "class_", make_descriptor(MultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "wrapfn_", make_descriptor(t_MultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultivariateOptimizer::wrap_Object(MultivariateOptimizer(((t_MultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.computeObjectiveValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeObjectiveValue", arg);
            return NULL;
          }

          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
            OBJ_CALL(result = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
          }

          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(MultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
            OBJ_CALL(value = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L1Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1Frame::class$ = NULL;
      jmethodID *L1Frame::mids$ = NULL;
      bool L1Frame::live$ = false;

      jclass L1Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a72c2af019e2130] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1Frame::L1Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9a72c2af019e2130, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L1Frame__methods_[] = {
        DECLARE_METHOD(t_L1Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1Frame)[] = {
        { Py_tp_methods, t_L1Frame__methods_ },
        { Py_tp_init, (void *) t_L1Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L1Frame, t_L1Frame, L1Frame);

      void t_L1Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L1Frame), &PY_TYPE_DEF(L1Frame), module, "L1Frame", 0);
      }

      void t_L1Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "class_", make_descriptor(L1Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "wrapfn_", make_descriptor(t_L1Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1Frame::initializeClass, 1)))
          return NULL;
        return t_L1Frame::wrap_Object(L1Frame(((t_L1Frame *) arg)->object.this$));
      }
      static PyObject *t_L1Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1Frame_init_(t_L1Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1Frame(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeMeasurement::class$ = NULL;
        jmethodID *CRD$RangeMeasurement::mids$ = NULL;
        bool CRD$RangeMeasurement::live$ = false;

        jclass CRD$RangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8bee68461ef1d830] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_init$_a710cda32bdb5ed9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DID)V");
            mids$[mid_init$_8cc469ee0a9203d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochEvent_412668abc8d889e9] = env->getMethodID(cls, "getEpochEvent", "()I");
            mids$[mid_getSnr_557b8123390d8d0c] = env->getMethodID(cls, "getSnr", "()D");
            mids$[mid_getSystemConfigurationId_3cffd47377eca18a] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeOfFlight_557b8123390d8d0c] = env->getMethodID(cls, "getTimeOfFlight", "()D");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8bee68461ef1d830, a0.this$, a1, a2)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a710cda32bdb5ed9, a0.this$, a1, a2, a3)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cc469ee0a9203d0, a0.this$, a1, a2, a3, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate CRD$RangeMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jint CRD$RangeMeasurement::getEpochEvent() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochEvent_412668abc8d889e9]);
        }

        jdouble CRD$RangeMeasurement::getSnr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSnr_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$RangeMeasurement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_3cffd47377eca18a]));
        }

        jdouble CRD$RangeMeasurement::getTimeOfFlight() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOfFlight_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$RangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$RangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, epochEvent),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, snr),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, timeOfFlight),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getEpochEvent, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSnr, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getTimeOfFlight, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$RangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$RangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeMeasurement, t_CRD$RangeMeasurement, CRD$RangeMeasurement);

        void t_CRD$RangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeMeasurement), &PY_TYPE_DEF(CRD$RangeMeasurement), module, "CRD$RangeMeasurement", 0);
        }

        void t_CRD$RangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "class_", make_descriptor(CRD$RangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "wrapfn_", make_descriptor(t_CRD$RangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeMeasurement::wrap_Object(CRD$RangeMeasurement(((t_CRD$RangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochEvent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSnr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochEvent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSnr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *SingleParameterFitter::class$ = NULL;
      jmethodID *SingleParameterFitter::mids$ = NULL;
      bool SingleParameterFitter::live$ = false;
      jdouble SingleParameterFitter::MOON_DRACONIC_PULSATION = (jdouble) 0;
      jdouble SingleParameterFitter::SUN_PULSATION = (jdouble) 0;

      jclass SingleParameterFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/SingleParameterFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f21737dc64f9d4b3] = env->getMethodID(cls, "<init>", "(DDDI[D)V");
          mids$[mid_createDefaultDut1FitterLongTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultDut1FitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultDut1FitterShortTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultDut1FitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterLongTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultNutationFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultNutationFitterShortTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultNutationFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterLongTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultPoleFitterLongTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");
          mids$[mid_createDefaultPoleFitterShortTermPrediction_e3f99774da48cc23] = env->getStaticMethodID(cls, "createDefaultPoleFitterShortTermPrediction", "()Lorg/orekit/frames/SingleParameterFitter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MOON_DRACONIC_PULSATION = env->getStaticDoubleField(cls, "MOON_DRACONIC_PULSATION");
          SUN_PULSATION = env->getStaticDoubleField(cls, "SUN_PULSATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingleParameterFitter::SingleParameterFitter(jdouble a0, jdouble a1, jdouble a2, jint a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f21737dc64f9d4b3, a0, a1, a2, a3, a4.this$)) {}

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterLongTermPrediction_e3f99774da48cc23]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultDut1FitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultDut1FitterShortTermPrediction_e3f99774da48cc23]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterLongTermPrediction_e3f99774da48cc23]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultNutationFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultNutationFitterShortTermPrediction_e3f99774da48cc23]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterLongTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterLongTermPrediction_e3f99774da48cc23]));
      }

      SingleParameterFitter SingleParameterFitter::createDefaultPoleFitterShortTermPrediction()
      {
        jclass cls = env->getClass(initializeClass);
        return SingleParameterFitter(env->callStaticObjectMethod(cls, mids$[mid_createDefaultPoleFitterShortTermPrediction_e3f99774da48cc23]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type);
      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type);

      static PyMethodDef t_SingleParameterFitter__methods_[] = {
        DECLARE_METHOD(t_SingleParameterFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultDut1FitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultNutationFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterLongTermPrediction, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_SingleParameterFitter, createDefaultPoleFitterShortTermPrediction, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingleParameterFitter)[] = {
        { Py_tp_methods, t_SingleParameterFitter__methods_ },
        { Py_tp_init, (void *) t_SingleParameterFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingleParameterFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingleParameterFitter, t_SingleParameterFitter, SingleParameterFitter);

      void t_SingleParameterFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SingleParameterFitter), &PY_TYPE_DEF(SingleParameterFitter), module, "SingleParameterFitter", 0);
      }

      void t_SingleParameterFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "class_", make_descriptor(SingleParameterFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "wrapfn_", make_descriptor(t_SingleParameterFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "boxfn_", make_descriptor(boxObject));
        env->getClass(SingleParameterFitter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "MOON_DRACONIC_PULSATION", make_descriptor(SingleParameterFitter::MOON_DRACONIC_PULSATION));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingleParameterFitter), "SUN_PULSATION", make_descriptor(SingleParameterFitter::SUN_PULSATION));
      }

      static PyObject *t_SingleParameterFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingleParameterFitter::initializeClass, 1)))
          return NULL;
        return t_SingleParameterFitter::wrap_Object(SingleParameterFitter(((t_SingleParameterFitter *) arg)->object.this$));
      }
      static PyObject *t_SingleParameterFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingleParameterFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingleParameterFitter_init_(t_SingleParameterFitter *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > a4((jobject) NULL);
        SingleParameterFitter object((jobject) NULL);

        if (!parseArgs(args, "DDDI[D", &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SingleParameterFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultDut1FitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultDut1FitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultNutationFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultNutationFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterLongTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterLongTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }

      static PyObject *t_SingleParameterFitter_createDefaultPoleFitterShortTermPrediction(PyTypeObject *type)
      {
        SingleParameterFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::SingleParameterFitter::createDefaultPoleFitterShortTermPrediction());
        return t_SingleParameterFitter::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *FieldOrekitFixedStepHandler::mids$ = NULL;
        bool FieldOrekitFixedStepHandler::live$ = false;

        jclass FieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_b66c84a5711243d5] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_1b5a30d717840b16] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitFixedStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b66c84a5711243d5], a0.this$);
        }

        void FieldOrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_b66c84a5711243d5], a0.this$);
        }

        void FieldOrekitFixedStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_1b5a30d717840b16], a0.this$, a1.this$, a2.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitFixedStepHandler, t_FieldOrekitFixedStepHandler, FieldOrekitFixedStepHandler);
        PyObject *t_FieldOrekitFixedStepHandler::wrap_Object(const FieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitFixedStepHandler), &PY_TYPE_DEF(FieldOrekitFixedStepHandler), module, "FieldOrekitFixedStepHandler", 0);
        }

        void t_FieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "class_", make_descriptor(FieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitFixedStepHandler::wrap_Object(FieldOrekitFixedStepHandler(((t_FieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GNSSDate::class$ = NULL;
      jmethodID *GNSSDate::mids$ = NULL;
      bool GNSSDate::live$ = false;

      jclass GNSSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GNSSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ffd61ef24fa077be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_3cd9580679dfece7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_de24f59b772a2836] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_6ddcba0cbdf5fcf6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_a083cdf2ad9b92d0] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMilliInWeek_557b8123390d8d0c] = env->getMethodID(cls, "getMilliInWeek", "()D");
          mids$[mid_getRolloverReference_ef81839d8717cc3a] = env->getStaticMethodID(cls, "getRolloverReference", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getSecondsInWeek_557b8123390d8d0c] = env->getMethodID(cls, "getSecondsInWeek", "()D");
          mids$[mid_getWeekNumber_412668abc8d889e9] = env->getMethodID(cls, "getWeekNumber", "()I");
          mids$[mid_setRolloverReference_4d2eb60c6d6ac3df] = env->getStaticMethodID(cls, "setRolloverReference", "(Lorg/orekit/time/DateComponents;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ffd61ef24fa077be, a0.this$, a1.this$)) {}

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cd9580679dfece7, a0.this$, a1.this$, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de24f59b772a2836, a0, a1, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ddcba0cbdf5fcf6, a0, a1, a2.this$, a3.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a083cdf2ad9b92d0, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate GNSSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble GNSSDate::getMilliInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMilliInWeek_557b8123390d8d0c]);
      }

      ::org::orekit::time::DateComponents GNSSDate::getRolloverReference()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::DateComponents(env->callStaticObjectMethod(cls, mids$[mid_getRolloverReference_ef81839d8717cc3a]));
      }

      jdouble GNSSDate::getSecondsInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInWeek_557b8123390d8d0c]);
      }

      jint GNSSDate::getWeekNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getWeekNumber_412668abc8d889e9]);
      }

      void GNSSDate::setRolloverReference(const ::org::orekit::time::DateComponents & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setRolloverReference_4d2eb60c6d6ac3df], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type);
      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self);
      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data);
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data);
      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data);
      static PyGetSetDef t_GNSSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GNSSDate, date),
        DECLARE_GET_FIELD(t_GNSSDate, milliInWeek),
        DECLARE_GETSET_FIELD(t_GNSSDate, rolloverReference),
        DECLARE_GET_FIELD(t_GNSSDate, secondsInWeek),
        DECLARE_GET_FIELD(t_GNSSDate, weekNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GNSSDate__methods_[] = {
        DECLARE_METHOD(t_GNSSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getMilliInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getRolloverReference, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getSecondsInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getWeekNumber, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, setRolloverReference, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GNSSDate)[] = {
        { Py_tp_methods, t_GNSSDate__methods_ },
        { Py_tp_init, (void *) t_GNSSDate_init_ },
        { Py_tp_getset, t_GNSSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GNSSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GNSSDate, t_GNSSDate, GNSSDate);

      void t_GNSSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GNSSDate), &PY_TYPE_DEF(GNSSDate), module, "GNSSDate", 0);
      }

      void t_GNSSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "class_", make_descriptor(GNSSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "wrapfn_", make_descriptor(t_GNSSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GNSSDate::initializeClass, 1)))
          return NULL;
        return t_GNSSDate::wrap_Object(GNSSDate(((t_GNSSDate *) arg)->object.this$));
      }
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GNSSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKkk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3, &a4))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::GNSSDate::getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getWeekNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::GNSSDate::setRolloverReference(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setRolloverReference", arg);
        return NULL;
      }

      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
          {
            INT_CALL(self->object.setRolloverReference(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "rolloverReference", arg);
        return -1;
      }

      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getWeekNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *Relativity::class$ = NULL;
        jmethodID *Relativity::mids$ = NULL;
        bool Relativity::live$ = false;

        jclass Relativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/Relativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relativity::Relativity(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Relativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Relativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean Relativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List Relativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args);
        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self);
        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self);
        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data);
        static PyGetSetDef t_Relativity__fields_[] = {
          DECLARE_GET_FIELD(t_Relativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relativity__methods_[] = {
          DECLARE_METHOD(t_Relativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Relativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Relativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relativity)[] = {
          { Py_tp_methods, t_Relativity__methods_ },
          { Py_tp_init, (void *) t_Relativity_init_ },
          { Py_tp_getset, t_Relativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Relativity, t_Relativity, Relativity);

        void t_Relativity::install(PyObject *module)
        {
          installType(&PY_TYPE(Relativity), &PY_TYPE_DEF(Relativity), module, "Relativity", 0);
        }

        void t_Relativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "class_", make_descriptor(Relativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "wrapfn_", make_descriptor(t_Relativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relativity::initializeClass, 1)))
            return NULL;
          return t_Relativity::wrap_Object(Relativity(((t_Relativity *) arg)->object.this$));
        }
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Relativity object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Relativity(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientFunction::class$ = NULL;
        jmethodID *GradientFunction::mids$ = NULL;
        bool GradientFunction::live$ = false;

        jclass GradientFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d8be4dacca924147] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;)V");
            mids$[mid_value_1db7c087750eaffe] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GradientFunction::GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8be4dacca924147, a0.this$)) {}

        JArray< jdouble > GradientFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_1db7c087750eaffe], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg);

        static PyMethodDef t_GradientFunction__methods_[] = {
          DECLARE_METHOD(t_GradientFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientFunction)[] = {
          { Py_tp_methods, t_GradientFunction__methods_ },
          { Py_tp_init, (void *) t_GradientFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientFunction, t_GradientFunction, GradientFunction);

        void t_GradientFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientFunction), &PY_TYPE_DEF(GradientFunction), module, "GradientFunction", 0);
        }

        void t_GradientFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "class_", make_descriptor(GradientFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "wrapfn_", make_descriptor(t_GradientFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientFunction::initializeClass, 1)))
            return NULL;
          return t_GradientFunction::wrap_Object(GradientFunction(((t_GradientFunction *) arg)->object.this$));
        }
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
          GradientFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0))
          {
            INT_CALL(object = GradientFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuver::class$ = NULL;
              jmethodID *OrbitManeuver::mids$ = NULL;
              bool OrbitManeuver::live$ = false;

              jclass OrbitManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAcceleration_f88961cca75a2c0a] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getAccelerationDirectionSigma_557b8123390d8d0c] = env->getMethodID(cls, "getAccelerationDirectionSigma", "()D");
                  mids$[mid_getAccelerationInterpolation_bc635c6bda6df121] = env->getMethodID(cls, "getAccelerationInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getAccelerationMagnitudeSigma_557b8123390d8d0c] = env->getMethodID(cls, "getAccelerationMagnitudeSigma", "()D");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDeltaMass_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDeployDirSigma_557b8123390d8d0c] = env->getMethodID(cls, "getDeployDirSigma", "()D");
                  mids$[mid_getDeployDv_f88961cca75a2c0a] = env->getMethodID(cls, "getDeployDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeployDvCda_557b8123390d8d0c] = env->getMethodID(cls, "getDeployDvCda", "()D");
                  mids$[mid_getDeployDvRatio_557b8123390d8d0c] = env->getMethodID(cls, "getDeployDvRatio", "()D");
                  mids$[mid_getDeployDvSigma_557b8123390d8d0c] = env->getMethodID(cls, "getDeployDvSigma", "()D");
                  mids$[mid_getDeployId_3cffd47377eca18a] = env->getMethodID(cls, "getDeployId", "()Ljava/lang/String;");
                  mids$[mid_getDeployMass_557b8123390d8d0c] = env->getMethodID(cls, "getDeployMass", "()D");
                  mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getDv_f88961cca75a2c0a] = env->getMethodID(cls, "getDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDvDirSigma_557b8123390d8d0c] = env->getMethodID(cls, "getDvDirSigma", "()D");
                  mids$[mid_getDvMagSigma_557b8123390d8d0c] = env->getMethodID(cls, "getDvMagSigma", "()D");
                  mids$[mid_getThrust_f88961cca75a2c0a] = env->getMethodID(cls, "getThrust", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getThrustDirectionSigma_557b8123390d8d0c] = env->getMethodID(cls, "getThrustDirectionSigma", "()D");
                  mids$[mid_getThrustEfficiency_557b8123390d8d0c] = env->getMethodID(cls, "getThrustEfficiency", "()D");
                  mids$[mid_getThrustInterpolation_bc635c6bda6df121] = env->getMethodID(cls, "getThrustInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getThrustIsp_557b8123390d8d0c] = env->getMethodID(cls, "getThrustIsp", "()D");
                  mids$[mid_getThrustMagnitudeSigma_557b8123390d8d0c] = env->getMethodID(cls, "getThrustMagnitudeSigma", "()D");
                  mids$[mid_setAcceleration_89aad365fb0ed8da] = env->getMethodID(cls, "setAcceleration", "(ID)V");
                  mids$[mid_setAccelerationDirectionSigma_10f281d777284cea] = env->getMethodID(cls, "setAccelerationDirectionSigma", "(D)V");
                  mids$[mid_setAccelerationInterpolation_479e4073dd1c825d] = env->getMethodID(cls, "setAccelerationInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setAccelerationMagnitudeSigma_10f281d777284cea] = env->getMethodID(cls, "setAccelerationMagnitudeSigma", "(D)V");
                  mids$[mid_setDate_20affcbd28542333] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDeltaMass_10f281d777284cea] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDeployDirSigma_10f281d777284cea] = env->getMethodID(cls, "setDeployDirSigma", "(D)V");
                  mids$[mid_setDeployDv_89aad365fb0ed8da] = env->getMethodID(cls, "setDeployDv", "(ID)V");
                  mids$[mid_setDeployDvCda_10f281d777284cea] = env->getMethodID(cls, "setDeployDvCda", "(D)V");
                  mids$[mid_setDeployDvRatio_10f281d777284cea] = env->getMethodID(cls, "setDeployDvRatio", "(D)V");
                  mids$[mid_setDeployDvSigma_10f281d777284cea] = env->getMethodID(cls, "setDeployDvSigma", "(D)V");
                  mids$[mid_setDeployId_f5ffdf29129ef90a] = env->getMethodID(cls, "setDeployId", "(Ljava/lang/String;)V");
                  mids$[mid_setDeployMass_10f281d777284cea] = env->getMethodID(cls, "setDeployMass", "(D)V");
                  mids$[mid_setDuration_10f281d777284cea] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setDv_89aad365fb0ed8da] = env->getMethodID(cls, "setDv", "(ID)V");
                  mids$[mid_setDvDirSigma_10f281d777284cea] = env->getMethodID(cls, "setDvDirSigma", "(D)V");
                  mids$[mid_setDvMagSigma_10f281d777284cea] = env->getMethodID(cls, "setDvMagSigma", "(D)V");
                  mids$[mid_setThrust_89aad365fb0ed8da] = env->getMethodID(cls, "setThrust", "(ID)V");
                  mids$[mid_setThrustDirectionSigma_10f281d777284cea] = env->getMethodID(cls, "setThrustDirectionSigma", "(D)V");
                  mids$[mid_setThrustEfficiency_10f281d777284cea] = env->getMethodID(cls, "setThrustEfficiency", "(D)V");
                  mids$[mid_setThrustInterpolation_479e4073dd1c825d] = env->getMethodID(cls, "setThrustInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setThrustIsp_10f281d777284cea] = env->getMethodID(cls, "setThrustIsp", "(D)V");
                  mids$[mid_setThrustMagnitudeSigma_10f281d777284cea] = env->getMethodID(cls, "setThrustMagnitudeSigma", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuver::OrbitManeuver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getAcceleration() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_f88961cca75a2c0a]));
              }

              jdouble OrbitManeuver::getAccelerationDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationDirectionSigma_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getAccelerationInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getAccelerationInterpolation_bc635c6bda6df121]));
              }

              jdouble OrbitManeuver::getAccelerationMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationMagnitudeSigma_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuver::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              jdouble OrbitManeuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getDeployDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDirSigma_557b8123390d8d0c]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDeployDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeployDv_f88961cca75a2c0a]));
              }

              jdouble OrbitManeuver::getDeployDvCda() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvCda_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getDeployDvRatio() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvRatio_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getDeployDvSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvSigma_557b8123390d8d0c]);
              }

              ::java::lang::String OrbitManeuver::getDeployId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeployId_3cffd47377eca18a]));
              }

              jdouble OrbitManeuver::getDeployMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployMass_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDv_f88961cca75a2c0a]));
              }

              jdouble OrbitManeuver::getDvDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvDirSigma_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getDvMagSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvMagSigma_557b8123390d8d0c]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getThrust() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrust_f88961cca75a2c0a]));
              }

              jdouble OrbitManeuver::getThrustDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustDirectionSigma_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getThrustEfficiency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustEfficiency_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getThrustInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getThrustInterpolation_bc635c6bda6df121]));
              }

              jdouble OrbitManeuver::getThrustIsp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustIsp_557b8123390d8d0c]);
              }

              jdouble OrbitManeuver::getThrustMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitudeSigma_557b8123390d8d0c]);
              }

              void OrbitManeuver::setAcceleration(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcceleration_89aad365fb0ed8da], a0, a1);
              }

              void OrbitManeuver::setAccelerationDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationDirectionSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationInterpolation_479e4073dd1c825d], a0.this$);
              }

              void OrbitManeuver::setAccelerationMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationMagnitudeSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDate_20affcbd28542333], a0.this$);
              }

              void OrbitManeuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDeployDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDirSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDeployDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDv_89aad365fb0ed8da], a0, a1);
              }

              void OrbitManeuver::setDeployDvCda(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvCda_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDeployDvRatio(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvRatio_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDeployDvSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDeployId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployId_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuver::setDeployMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployMass_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDv_89aad365fb0ed8da], a0, a1);
              }

              void OrbitManeuver::setDvDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvDirSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setDvMagSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvMagSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setThrust(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrust_89aad365fb0ed8da], a0, a1);
              }

              void OrbitManeuver::setThrustDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustDirectionSigma_10f281d777284cea], a0);
              }

              void OrbitManeuver::setThrustEfficiency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustEfficiency_10f281d777284cea], a0);
              }

              void OrbitManeuver::setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustInterpolation_479e4073dd1c825d], a0.this$);
              }

              void OrbitManeuver::setThrustIsp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustIsp_10f281d777284cea], a0);
              }

              void OrbitManeuver::setThrustMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustMagnitudeSigma_10f281d777284cea], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuver__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuver, acceleration),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationMagnitudeSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, date),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deltaMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDirSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, deployDv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvCda),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvRatio),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployId),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, duration),
                DECLARE_GET_FIELD(t_OrbitManeuver, dv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvDirSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvMagSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, thrust),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustEfficiency),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustIsp),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustMagnitudeSigma),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuver__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, getAcceleration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvCda, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvRatio, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvMagSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustEfficiency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustIsp, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAcceleration, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationMagnitudeSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDate, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvCda, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvRatio, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployId, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDvDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDvMagSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrust, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setThrustDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustEfficiency, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustIsp, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustMagnitudeSigma, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuver)[] = {
                { Py_tp_methods, t_OrbitManeuver__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuver_init_ },
                { Py_tp_getset, t_OrbitManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuver)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuver, t_OrbitManeuver, OrbitManeuver);

              void t_OrbitManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuver), &PY_TYPE_DEF(OrbitManeuver), module, "OrbitManeuver", 0);
              }

              void t_OrbitManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "class_", make_descriptor(OrbitManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "wrapfn_", make_descriptor(t_OrbitManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuver::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuver::wrap_Object(OrbitManeuver(((t_OrbitManeuver *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds)
              {
                OrbitManeuver object((jobject) NULL);

                INT_CALL(object = OrbitManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployId());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setAcceleration(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcceleration", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setAccelerationInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDate", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDeployDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvCda(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvCda", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvRatio(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvRatio", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setDeployId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployId", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvMagSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvMagSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setThrust(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrust", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustEfficiency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustEfficiency", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setThrustInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustIsp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustIsp", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccelerationInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationMagnitudeSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "date", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvCda(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvCda", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvRatio(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvRatio", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployId());
                return j2p(value);
              }
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setDeployId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployId", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvMagSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvMagSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustEfficiency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustEfficiency", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setThrustInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustIsp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustIsp", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustMagnitudeSigma", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *AbstractSimplex::class$ = NULL;
            jmethodID *AbstractSimplex::mids$ = NULL;
            bool AbstractSimplex::live$ = false;

            jclass AbstractSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_cc18240f4a737f14] = env->getMethodID(cls, "build", "([D)V");
                mids$[mid_evaluate_5af60315979aa937] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
                mids$[mid_getPoint_c5386e3be8fe4b1f] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getPoints_80ecb9f5bff58fab] = env->getMethodID(cls, "getPoints", "()[Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");
                mids$[mid_iterate_5af60315979aa937] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_setPoints_9f3fadcfcf4c9661] = env->getMethodID(cls, "setPoints", "([Lorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_setPoint_0be91cb02ac86354] = env->getMethodID(cls, "setPoint", "(ILorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_replaceWorstPoint_69d0572cc39ea708] = env->getMethodID(cls, "replaceWorstPoint", "(Lorg/hipparchus/optim/PointValuePair;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractSimplex::build(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_build_cc18240f4a737f14], a0.this$);
            }

            void AbstractSimplex::evaluate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_evaluate_5af60315979aa937], a0.this$, a1.this$);
            }

            jint AbstractSimplex::getDimension() const
            {
              return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
            }

            ::org::hipparchus::optim::PointValuePair AbstractSimplex::getPoint(jint a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getPoint_c5386e3be8fe4b1f], a0));
            }

            JArray< ::org::hipparchus::optim::PointValuePair > AbstractSimplex::getPoints() const
            {
              return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getPoints_80ecb9f5bff58fab]));
            }

            jint AbstractSimplex::getSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getSize_412668abc8d889e9]);
            }

            void AbstractSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_5af60315979aa937], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data);
            static PyGetSetDef t_AbstractSimplex__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSimplex, dimension),
              DECLARE_GET_FIELD(t_AbstractSimplex, points),
              DECLARE_GET_FIELD(t_AbstractSimplex, size),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSimplex__methods_[] = {
              DECLARE_METHOD(t_AbstractSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, build, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, evaluate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSimplex, getDimension, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getPoint, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, getPoints, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getSize, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSimplex)[] = {
              { Py_tp_methods, t_AbstractSimplex__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSimplex__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSimplex)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSimplex, t_AbstractSimplex, AbstractSimplex);

            void t_AbstractSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSimplex), &PY_TYPE_DEF(AbstractSimplex), module, "AbstractSimplex", 0);
            }

            void t_AbstractSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "class_", make_descriptor(AbstractSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "wrapfn_", make_descriptor(t_AbstractSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSimplex::initializeClass, 1)))
                return NULL;
              return t_AbstractSimplex::wrap_Object(AbstractSimplex(((t_AbstractSimplex *) arg)->object.this$));
            }
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.build(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "build", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.evaluate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDimension());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPoint(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoints());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "iterate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDimension());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoints());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSize());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Min::class$ = NULL;
        jmethodID *Min::mids$ = NULL;
        bool Min::live$ = false;

        jclass Min::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Min");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Min::Min() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Min::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Min_value(t_Min *self, PyObject *args);

        static PyMethodDef t_Min__methods_[] = {
          DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
          { Py_tp_methods, t_Min__methods_ },
          { Py_tp_init, (void *) t_Min_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Min)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Min, t_Min, Min);

        void t_Min::install(PyObject *module)
        {
          installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
        }

        void t_Min::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Min::initializeClass, 1)))
            return NULL;
          return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
        }
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Min::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
        {
          Min object((jobject) NULL);

          INT_CALL(object = Min());
          self->object = object;

          return 0;
        }

        static PyObject *t_Min_value(t_Min *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getPositionVector_f88961cca75a2c0a] = env->getMethodID(cls, "getPositionVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVelocityVector_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocityVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_setX_10f281d777284cea] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXdot_10f281d777284cea] = env->getMethodID(cls, "setXdot", "(D)V");
                mids$[mid_setY_10f281d777284cea] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYdot_10f281d777284cea] = env->getMethodID(cls, "setYdot", "(D)V");
                mids$[mid_setZ_10f281d777284cea] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZdot_10f281d777284cea] = env->getMethodID(cls, "setZdot", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getPositionVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionVector_f88961cca75a2c0a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getVelocityVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityVector_f88961cca75a2c0a]));
            }

            void StateVector::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_10f281d777284cea], a0);
            }

            void StateVector::setXdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXdot_10f281d777284cea], a0);
            }

            void StateVector::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_10f281d777284cea], a0);
            }

            void StateVector::setYdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYdot_10f281d777284cea], a0);
            }

            void StateVector::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_10f281d777284cea], a0);
            }

            void StateVector::setZdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZdot_10f281d777284cea], a0);
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getPositionVector(t_StateVector *self);
            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self);
            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data);
            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data);
            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GET_FIELD(t_StateVector, positionVector),
              DECLARE_GET_FIELD(t_StateVector, velocityVector),
              DECLARE_SET_FIELD(t_StateVector, x),
              DECLARE_SET_FIELD(t_StateVector, xdot),
              DECLARE_SET_FIELD(t_StateVector, y),
              DECLARE_SET_FIELD(t_StateVector, ydot),
              DECLARE_SET_FIELD(t_StateVector, z),
              DECLARE_SET_FIELD(t_StateVector, zdot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getPositionVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, getVelocityVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setX, METH_O),
              DECLARE_METHOD(t_StateVector, setXdot, METH_O),
              DECLARE_METHOD(t_StateVector, setY, METH_O),
              DECLARE_METHOD(t_StateVector, setYdot, METH_O),
              DECLARE_METHOD(t_StateVector, setZ, METH_O),
              DECLARE_METHOD(t_StateVector, setZdot, METH_O),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getPositionVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xdot", arg);
              return -1;
            }

            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ydot", arg);
              return -1;
            }

            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zdot", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileParser::class$ = NULL;
        jmethodID *PythonEphemerisFileParser::mids$ = NULL;
        bool PythonEphemerisFileParser::live$ = false;

        jclass PythonEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_c897b47d9e3916d0] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileParser::PythonEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEphemerisFileParser::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self);
        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileParser, t_PythonEphemerisFileParser, PythonEphemerisFileParser);

        void t_PythonEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileParser), &PY_TYPE_DEF(PythonEphemerisFileParser), module, "PythonEphemerisFileParser", 1);
        }

        void t_PythonEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "class_", make_descriptor(PythonEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;", (void *) t_PythonEphemerisFileParser_parse0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileParser_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileParser::wrap_Object(PythonEphemerisFileParser(((t_PythonEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileParser_init_(t_PythonEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileParser_finalize(t_PythonEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileParser_pythonExtension(t_PythonEphemerisFileParser *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::EphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::EphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonEphemerisFileParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileParser::mids$[PythonEphemerisFileParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFileParser_get__self(t_PythonEphemerisFileParser *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$UnitListConsumer::class$ = NULL;
            jmethodID *ParseToken$UnitListConsumer::mids$ = NULL;
            bool ParseToken$UnitListConsumer::live$ = false;

            jclass ParseToken$UnitListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4ccaedadb068bdeb] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$UnitListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4ccaedadb068bdeb], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$UnitListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$UnitListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$UnitListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$UnitListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$UnitListConsumer, t_ParseToken$UnitListConsumer, ParseToken$UnitListConsumer);

            void t_ParseToken$UnitListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$UnitListConsumer), &PY_TYPE_DEF(ParseToken$UnitListConsumer), module, "ParseToken$UnitListConsumer", 0);
            }

            void t_ParseToken$UnitListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "class_", make_descriptor(ParseToken$UnitListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "wrapfn_", make_descriptor(t_ParseToken$UnitListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$UnitListConsumer::wrap_Object(ParseToken$UnitListConsumer(((t_ParseToken$UnitListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHmsjPolynomials::class$ = NULL;
            jmethodID *GHmsjPolynomials::mids$ = NULL;
            bool GHmsjPolynomials::live$ = false;

            jclass GHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_62dec2ddd788a71d] = env->getMethodID(cls, "<init>", "(DDDDI)V");
                mids$[mid_getGmsj_093995dc5657c18c] = env->getMethodID(cls, "getGmsj", "(III)D");
                mids$[mid_getHmsj_093995dc5657c18c] = env->getMethodID(cls, "getHmsj", "(III)D");
                mids$[mid_getdGmsdAlpha_093995dc5657c18c] = env->getMethodID(cls, "getdGmsdAlpha", "(III)D");
                mids$[mid_getdGmsdBeta_093995dc5657c18c] = env->getMethodID(cls, "getdGmsdBeta", "(III)D");
                mids$[mid_getdGmsdh_093995dc5657c18c] = env->getMethodID(cls, "getdGmsdh", "(III)D");
                mids$[mid_getdGmsdk_093995dc5657c18c] = env->getMethodID(cls, "getdGmsdk", "(III)D");
                mids$[mid_getdHmsdAlpha_093995dc5657c18c] = env->getMethodID(cls, "getdHmsdAlpha", "(III)D");
                mids$[mid_getdHmsdBeta_093995dc5657c18c] = env->getMethodID(cls, "getdHmsdBeta", "(III)D");
                mids$[mid_getdHmsdh_093995dc5657c18c] = env->getMethodID(cls, "getdHmsdh", "(III)D");
                mids$[mid_getdHmsdk_093995dc5657c18c] = env->getMethodID(cls, "getdHmsdk", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHmsjPolynomials::GHmsjPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62dec2ddd788a71d, a0, a1, a2, a3, a4)) {}

            jdouble GHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGmsj_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHmsj_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdAlpha_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdBeta_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdh_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdk_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdAlpha_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdBeta_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdh_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdk_093995dc5657c18c], a0, a1, a2);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args);

            static PyMethodDef t_GHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHmsjPolynomials)[] = {
              { Py_tp_methods, t_GHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHmsjPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHmsjPolynomials, t_GHmsjPolynomials, GHmsjPolynomials);

            void t_GHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHmsjPolynomials), &PY_TYPE_DEF(GHmsjPolynomials), module, "GHmsjPolynomials", 0);
            }

            void t_GHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "class_", make_descriptor(GHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "wrapfn_", make_descriptor(t_GHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHmsjPolynomials::wrap_Object(GHmsjPolynomials(((t_GHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              GHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = GHmsjPolynomials(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Glonass::class$ = NULL;
        jmethodID *Glonass::mids$ = NULL;
        bool Glonass::live$ = false;
        jdouble Glonass::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Glonass::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Glonass");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d2624b53a7984676] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Glonass::Glonass(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_d2624b53a7984676, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Glonass__methods_[] = {
          DECLARE_METHOD(t_Glonass, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Glonass, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Glonass)[] = {
          { Py_tp_methods, t_Glonass__methods_ },
          { Py_tp_init, (void *) t_Glonass_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Glonass)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Glonass, t_Glonass, Glonass);

        void t_Glonass::install(PyObject *module)
        {
          installType(&PY_TYPE(Glonass), &PY_TYPE_DEF(Glonass), module, "Glonass", 0);
        }

        void t_Glonass::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "class_", make_descriptor(Glonass::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "wrapfn_", make_descriptor(t_Glonass::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "boxfn_", make_descriptor(boxObject));
          env->getClass(Glonass::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "DEFAULT_YAW_RATE", make_descriptor(Glonass::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Glonass::initializeClass, 1)))
            return NULL;
          return t_Glonass::wrap_Object(Glonass(((t_Glonass *) arg)->object.this$));
        }
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Glonass::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Glonass object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Glonass(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *PowellOptimizer::class$ = NULL;
            jmethodID *PowellOptimizer::mids$ = NULL;
            bool PowellOptimizer::live$ = false;

            jclass PowellOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_init$_b2b4889b70ee50e3] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_init$_bbba9c73f193cbe5] = env->getMethodID(cls, "<init>", "(DDDDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b2b4889b70ee50e3, a0, a1, a2.this$)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::optim::ConvergenceChecker & a4) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_bbba9c73f193cbe5, a0, a1, a2, a3, a4.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args);
            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data);
            static PyGetSetDef t_PowellOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_PowellOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PowellOptimizer__methods_[] = {
              DECLARE_METHOD(t_PowellOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PowellOptimizer)[] = {
              { Py_tp_methods, t_PowellOptimizer__methods_ },
              { Py_tp_init, (void *) t_PowellOptimizer_init_ },
              { Py_tp_getset, t_PowellOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PowellOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(PowellOptimizer, t_PowellOptimizer, PowellOptimizer);
            PyObject *t_PowellOptimizer::wrap_Object(const PowellOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PowellOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PowellOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(PowellOptimizer), &PY_TYPE_DEF(PowellOptimizer), module, "PowellOptimizer", 0);
            }

            void t_PowellOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "class_", make_descriptor(PowellOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "wrapfn_", make_descriptor(t_PowellOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PowellOptimizer::initializeClass, 1)))
                return NULL;
              return t_PowellOptimizer::wrap_Object(PowellOptimizer(((t_PowellOptimizer *) arg)->object.this$));
            }
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PowellOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
                  PyTypeObject **p2;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitException::class$ = NULL;
      jmethodID *OrekitException::mids$ = NULL;
      bool OrekitException::live$ = false;

      jclass OrekitException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5a362f030f21d160] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_7e3eb40b1c2d2586] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;Ljava/lang/Throwable;)V");
          mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_unwrap_b461ed04f2b877b6] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/OrekitException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitException::OrekitException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_5a362f030f21d160, a0.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7e3eb40b1c2d2586, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String OrekitException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
      }

      OrekitException OrekitException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_b461ed04f2b877b6], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getParts(t_OrekitException *self);
      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self);
      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data);
      static PyGetSetDef t_OrekitException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitException, message),
        DECLARE_GET_FIELD(t_OrekitException, parts),
        DECLARE_GET_FIELD(t_OrekitException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitException__methods_[] = {
        DECLARE_METHOD(t_OrekitException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, getSpecifier, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, unwrap, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitException)[] = {
        { Py_tp_methods, t_OrekitException__methods_ },
        { Py_tp_init, (void *) t_OrekitException_init_ },
        { Py_tp_getset, t_OrekitException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(OrekitException, t_OrekitException, OrekitException);

      void t_OrekitException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitException), &PY_TYPE_DEF(OrekitException), module, "OrekitException", 0);
      }

      void t_OrekitException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "class_", make_descriptor(OrekitException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "wrapfn_", make_descriptor(t_OrekitException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitException::initializeClass, 1)))
          return NULL;
        return t_OrekitException::wrap_Object(OrekitException(((t_OrekitException *) arg)->object.this$));
      }
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = OrekitException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            ::java::lang::Throwable a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::exception::Localizable::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrekitException(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitException_getParts(t_OrekitException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
        OrekitException result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitException::unwrap(a0));
          return t_OrekitException::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unwrap", arg);
        return NULL;
      }

      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *ClockCorrection::class$ = NULL;
            jmethodID *ClockCorrection::mids$ = NULL;
            bool ClockCorrection::live$ = false;

            jclass ClockCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/ClockCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
                mids$[mid_getDeltaClockC0_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaClockC0", "()D");
                mids$[mid_getDeltaClockC1_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaClockC1", "()D");
                mids$[mid_getDeltaClockC2_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaClockC2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ClockCorrection::ClockCorrection(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

            jdouble ClockCorrection::getDeltaClockC0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC0_557b8123390d8d0c]);
            }

            jdouble ClockCorrection::getDeltaClockC1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC1_557b8123390d8d0c]);
            }

            jdouble ClockCorrection::getDeltaClockC2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC2_557b8123390d8d0c]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data);
            static PyGetSetDef t_ClockCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC0),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC1),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ClockCorrection__methods_[] = {
              DECLARE_METHOD(t_ClockCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC0, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC1, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ClockCorrection)[] = {
              { Py_tp_methods, t_ClockCorrection__methods_ },
              { Py_tp_init, (void *) t_ClockCorrection_init_ },
              { Py_tp_getset, t_ClockCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ClockCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ClockCorrection, t_ClockCorrection, ClockCorrection);

            void t_ClockCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(ClockCorrection), &PY_TYPE_DEF(ClockCorrection), module, "ClockCorrection", 0);
            }

            void t_ClockCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "class_", make_descriptor(ClockCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "wrapfn_", make_descriptor(t_ClockCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ClockCorrection::initializeClass, 1)))
                return NULL;
              return t_ClockCorrection::wrap_Object(ClockCorrection(((t_ClockCorrection *) arg)->object.this$));
            }
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ClockCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ClockCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ClockCorrection(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Section::class$ = NULL;
          jmethodID *Section::mids$ = NULL;
          bool Section::live$ = false;

          jclass Section::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Section");

              mids$ = new jmethodID[max_mid];
              mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Section::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_validate(t_Section *self, PyObject *arg);

          static PyMethodDef t_Section__methods_[] = {
            DECLARE_METHOD(t_Section, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Section)[] = {
            { Py_tp_methods, t_Section__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Section)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Section, t_Section, Section);

          void t_Section::install(PyObject *module)
          {
            installType(&PY_TYPE(Section), &PY_TYPE_DEF(Section), module, "Section", 0);
          }

          void t_Section::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "class_", make_descriptor(Section::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "wrapfn_", make_descriptor(t_Section::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Section::initializeClass, 1)))
              return NULL;
            return t_Section::wrap_Object(Section(((t_Section *) arg)->object.this$));
          }
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Section::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Section_validate(t_Section *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
