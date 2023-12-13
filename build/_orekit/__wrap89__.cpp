#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NumberFormatException::class$ = NULL;
    jmethodID *NumberFormatException::mids$ = NULL;
    bool NumberFormatException::live$ = false;

    jclass NumberFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NumberFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NumberFormatException::NumberFormatException() : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    NumberFormatException::NumberFormatException(const ::java::lang::String & a0) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NumberFormatException__methods_[] = {
      DECLARE_METHOD(t_NumberFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormatException)[] = {
      { Py_tp_methods, t_NumberFormatException__methods_ },
      { Py_tp_init, (void *) t_NumberFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormatException)[] = {
      &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
      NULL
    };

    DEFINE_TYPE(NumberFormatException, t_NumberFormatException, NumberFormatException);

    void t_NumberFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormatException), &PY_TYPE_DEF(NumberFormatException), module, "NumberFormatException", 0);
    }

    void t_NumberFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "class_", make_descriptor(NumberFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "wrapfn_", make_descriptor(t_NumberFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormatException::initializeClass, 1)))
        return NULL;
      return t_NumberFormatException::wrap_Object(NumberFormatException(((t_NumberFormatException *) arg)->object.this$));
    }
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormatException object((jobject) NULL);

          INT_CALL(object = NumberFormatException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NumberFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NumberFormatException(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Cloneable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Cloneable::class$ = NULL;
    jmethodID *Cloneable::mids$ = NULL;
    bool Cloneable::live$ = false;

    jclass Cloneable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Cloneable");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Cloneable__methods_[] = {
      DECLARE_METHOD(t_Cloneable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Cloneable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Cloneable)[] = {
      { Py_tp_methods, t_Cloneable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Cloneable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Cloneable, t_Cloneable, Cloneable);

    void t_Cloneable::install(PyObject *module)
    {
      installType(&PY_TYPE(Cloneable), &PY_TYPE_DEF(Cloneable), module, "Cloneable", 0);
    }

    void t_Cloneable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "class_", make_descriptor(Cloneable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "wrapfn_", make_descriptor(t_Cloneable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Cloneable::initializeClass, 1)))
        return NULL;
      return t_Cloneable::wrap_Object(Cloneable(((t_Cloneable *) arg)->object.this$));
    }
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Cloneable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Dictionary.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Dictionary::class$ = NULL;
    jmethodID *Dictionary::mids$ = NULL;
    bool Dictionary::live$ = false;

    jclass Dictionary::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Dictionary");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_elements_57aeac8743844cd2] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keys_57aeac8743844cd2] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Dictionary::Dictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ::java::util::Enumeration Dictionary::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_57aeac8743844cd2]));
    }

    ::java::lang::Object Dictionary::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    jboolean Dictionary::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Enumeration Dictionary::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_57aeac8743844cd2]));
    }

    ::java::lang::Object Dictionary::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::Object Dictionary::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jint Dictionary::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args);
    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Dictionary_elements(t_Dictionary *self);
    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self);
    static PyObject *t_Dictionary_keys(t_Dictionary *self);
    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args);
    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_size(t_Dictionary *self);
    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data);
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data);
    static PyGetSetDef t_Dictionary__fields_[] = {
      DECLARE_GET_FIELD(t_Dictionary, empty),
      DECLARE_GET_FIELD(t_Dictionary, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Dictionary__methods_[] = {
      DECLARE_METHOD(t_Dictionary, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, of_, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, elements, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, get, METH_O),
      DECLARE_METHOD(t_Dictionary, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, keys, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, put, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, remove, METH_O),
      DECLARE_METHOD(t_Dictionary, size, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Dictionary)[] = {
      { Py_tp_methods, t_Dictionary__methods_ },
      { Py_tp_init, (void *) t_Dictionary_init_ },
      { Py_tp_getset, t_Dictionary__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Dictionary)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Dictionary, t_Dictionary, Dictionary);
    PyObject *t_Dictionary::wrap_Object(const Dictionary& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Dictionary::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Dictionary::install(PyObject *module)
    {
      installType(&PY_TYPE(Dictionary), &PY_TYPE_DEF(Dictionary), module, "Dictionary", 0);
    }

    void t_Dictionary::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "class_", make_descriptor(Dictionary::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "wrapfn_", make_descriptor(t_Dictionary::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Dictionary::initializeClass, 1)))
        return NULL;
      return t_Dictionary::wrap_Object(Dictionary(((t_Dictionary *) arg)->object.this$));
    }
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Dictionary::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds)
    {
      Dictionary object((jobject) NULL);

      INT_CALL(object = Dictionary());
      self->object = object;

      return 0;
    }

    static PyObject *t_Dictionary_elements(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.elements());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[1]);
    }

    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg)
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

    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Dictionary_keys(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.keys());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args)
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

    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Dictionary_size(t_Dictionary *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Thread.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ThreadGroup.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityManager::class$ = NULL;
    jmethodID *SecurityManager::mids$ = NULL;
    bool SecurityManager::live$ = false;

    jclass SecurityManager::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityManager");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_checkAccept_02c6e5855745e0e2] = env->getMethodID(cls, "checkAccept", "(Ljava/lang/String;I)V");
        mids$[mid_checkAccess_f3ba88cc49232adb] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/Thread;)V");
        mids$[mid_checkAccess_7871e439a5e6f852] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
        mids$[mid_checkConnect_02c6e5855745e0e2] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;I)V");
        mids$[mid_checkConnect_5e442dcec322093b] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
        mids$[mid_checkCreateClassLoader_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkCreateClassLoader", "()V");
        mids$[mid_checkDelete_734b91ac30d5f9b4] = env->getMethodID(cls, "checkDelete", "(Ljava/lang/String;)V");
        mids$[mid_checkExec_734b91ac30d5f9b4] = env->getMethodID(cls, "checkExec", "(Ljava/lang/String;)V");
        mids$[mid_checkExit_44ed599e93e8a30c] = env->getMethodID(cls, "checkExit", "(I)V");
        mids$[mid_checkLink_734b91ac30d5f9b4] = env->getMethodID(cls, "checkLink", "(Ljava/lang/String;)V");
        mids$[mid_checkListen_44ed599e93e8a30c] = env->getMethodID(cls, "checkListen", "(I)V");
        mids$[mid_checkPackageAccess_734b91ac30d5f9b4] = env->getMethodID(cls, "checkPackageAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkPackageDefinition_734b91ac30d5f9b4] = env->getMethodID(cls, "checkPackageDefinition", "(Ljava/lang/String;)V");
        mids$[mid_checkPrintJobAccess_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkPrintJobAccess", "()V");
        mids$[mid_checkPropertiesAccess_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkPropertiesAccess", "()V");
        mids$[mid_checkPropertyAccess_734b91ac30d5f9b4] = env->getMethodID(cls, "checkPropertyAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_ce27f4372ce835a9] = env->getMethodID(cls, "checkRead", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkRead_734b91ac30d5f9b4] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_2bd6b3882bcba51f] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_checkSecurityAccess_734b91ac30d5f9b4] = env->getMethodID(cls, "checkSecurityAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkSetFactory_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkSetFactory", "()V");
        mids$[mid_checkWrite_ce27f4372ce835a9] = env->getMethodID(cls, "checkWrite", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkWrite_734b91ac30d5f9b4] = env->getMethodID(cls, "checkWrite", "(Ljava/lang/String;)V");
        mids$[mid_getSecurityContext_541690f9ee81d3ad] = env->getMethodID(cls, "getSecurityContext", "()Ljava/lang/Object;");
        mids$[mid_getThreadGroup_4241f87211c845e3] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getClassContext_5aec5e13d1a5cd63] = env->getMethodID(cls, "getClassContext", "()[Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityManager::SecurityManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    void SecurityManager::checkAccept(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccept_02c6e5855745e0e2], a0.this$, a1);
    }

    void SecurityManager::checkAccess(const ::java::lang::Thread & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_f3ba88cc49232adb], a0.this$);
    }

    void SecurityManager::checkAccess(const ::java::lang::ThreadGroup & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_7871e439a5e6f852], a0.this$);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_02c6e5855745e0e2], a0.this$, a1);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1, const ::java::lang::Object & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_5e442dcec322093b], a0.this$, a1, a2.this$);
    }

    void SecurityManager::checkCreateClassLoader() const
    {
      env->callVoidMethod(this$, mids$[mid_checkCreateClassLoader_a1fa5dae97ea5ed2]);
    }

    void SecurityManager::checkDelete(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkDelete_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkExec(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExec_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkExit(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExit_44ed599e93e8a30c], a0);
    }

    void SecurityManager::checkLink(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkLink_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkListen(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkListen_44ed599e93e8a30c], a0);
    }

    void SecurityManager::checkPackageAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageAccess_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkPackageDefinition(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageDefinition_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkPrintJobAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPrintJobAccess_a1fa5dae97ea5ed2]);
    }

    void SecurityManager::checkPropertiesAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertiesAccess_a1fa5dae97ea5ed2]);
    }

    void SecurityManager::checkPropertyAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertyAccess_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_ce27f4372ce835a9], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_2bd6b3882bcba51f], a0.this$, a1.this$);
    }

    void SecurityManager::checkSecurityAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkSecurityAccess_734b91ac30d5f9b4], a0.this$);
    }

    void SecurityManager::checkSetFactory() const
    {
      env->callVoidMethod(this$, mids$[mid_checkSetFactory_a1fa5dae97ea5ed2]);
    }

    void SecurityManager::checkWrite(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_ce27f4372ce835a9], a0.this$);
    }

    void SecurityManager::checkWrite(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_734b91ac30d5f9b4], a0.this$);
    }

    ::java::lang::Object SecurityManager::getSecurityContext() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecurityContext_541690f9ee81d3ad]));
    }

    ::java::lang::ThreadGroup SecurityManager::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_4241f87211c845e3]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds);
    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self);
    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self);
    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data);
    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data);
    static PyGetSetDef t_SecurityManager__fields_[] = {
      DECLARE_GET_FIELD(t_SecurityManager, securityContext),
      DECLARE_GET_FIELD(t_SecurityManager, threadGroup),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SecurityManager__methods_[] = {
      DECLARE_METHOD(t_SecurityManager, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, checkAccept, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkAccess, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkConnect, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkCreateClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkDelete, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExec, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExit, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkLink, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkListen, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageDefinition, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPrintJobAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertiesAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertyAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkRead, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkSecurityAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkSetFactory, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkWrite, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, getSecurityContext, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, getThreadGroup, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityManager)[] = {
      { Py_tp_methods, t_SecurityManager__methods_ },
      { Py_tp_init, (void *) t_SecurityManager_init_ },
      { Py_tp_getset, t_SecurityManager__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityManager)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(SecurityManager, t_SecurityManager, SecurityManager);

    void t_SecurityManager::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityManager), &PY_TYPE_DEF(SecurityManager), module, "SecurityManager", 0);
    }

    void t_SecurityManager::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "class_", make_descriptor(SecurityManager::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "wrapfn_", make_descriptor(t_SecurityManager::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityManager::initializeClass, 1)))
        return NULL;
      return t_SecurityManager::wrap_Object(SecurityManager(((t_SecurityManager *) arg)->object.this$));
    }
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityManager::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds)
    {
      SecurityManager object((jobject) NULL);

      INT_CALL(object = SecurityManager());
      self->object = object;

      return 0;
    }

    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        OBJ_CALL(self->object.checkAccept(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccept", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Thread a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Thread::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ThreadGroup::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccess", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          ::java::lang::Object a2((jobject) NULL);

          if (!parseArgs(args, "sIo", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkConnect", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkCreateClassLoader());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkDelete(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkDelete", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkExec(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExec", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkExit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExit", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkLink(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkLink", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkListen(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkListen", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageDefinition(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageDefinition", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPrintJobAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPropertiesAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPropertyAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPropertyAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.checkRead(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkRead", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkSecurityAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkSecurityAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkSetFactory());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkWrite", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self)
    {
      ::java::lang::ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data)
    {
      ::java::lang::ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "java/util/function/IntConsumer.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfInt::class$ = NULL;
    jmethodID *Spliterator$OfInt::mids$ = NULL;
    bool Spliterator$OfInt::live$ = false;

    jclass Spliterator$OfInt::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfInt");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_c05e4b881b953056] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/IntConsumer;)V");
        mids$[mid_tryAdvance_d0cbe94f809390ed] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/IntConsumer;)Z");
        mids$[mid_trySplit_6842021a23a1f692] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfInt;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfInt::forEachRemaining(const ::java::util::function::IntConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_c05e4b881b953056], a0.this$);
    }

    jboolean Spliterator$OfInt::tryAdvance(const ::java::util::function::IntConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_d0cbe94f809390ed], a0.this$);
    }

    Spliterator$OfInt Spliterator$OfInt::trySplit() const
    {
      return Spliterator$OfInt(env->callObjectMethod(this$, mids$[mid_trySplit_6842021a23a1f692]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfInt_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfInt_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfInt_of_(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_forEachRemaining(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_tryAdvance(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_trySplit(t_Spliterator$OfInt *self, PyObject *args);
    static PyObject *t_Spliterator$OfInt_get__parameters_(t_Spliterator$OfInt *self, void *data);
    static PyGetSetDef t_Spliterator$OfInt__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfInt, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfInt__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfInt, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfInt, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfInt, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfInt, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfInt)[] = {
      { Py_tp_methods, t_Spliterator$OfInt__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfInt__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfInt)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator$OfPrimitive),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfInt, t_Spliterator$OfInt, Spliterator$OfInt);
    PyObject *t_Spliterator$OfInt::wrap_Object(const Spliterator$OfInt& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfInt::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfInt *self = (t_Spliterator$OfInt *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfInt::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfInt::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfInt *self = (t_Spliterator$OfInt *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator$OfInt::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfInt), &PY_TYPE_DEF(Spliterator$OfInt), module, "Spliterator$OfInt", 0);
    }

    void t_Spliterator$OfInt::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "class_", make_descriptor(Spliterator$OfInt::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "wrapfn_", make_descriptor(t_Spliterator$OfInt::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfInt), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfInt_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfInt::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfInt::wrap_Object(Spliterator$OfInt(((t_Spliterator$OfInt *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfInt_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfInt::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfInt_of_(t_Spliterator$OfInt *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfInt_forEachRemaining(t_Spliterator$OfInt *self, PyObject *args)
    {
      ::java::util::function::IntConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::IntConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfInt_tryAdvance(t_Spliterator$OfInt *self, PyObject *args)
    {
      ::java::util::function::IntConsumer a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::util::function::IntConsumer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfInt_trySplit(t_Spliterator$OfInt *self, PyObject *args)
    {
      Spliterator$OfInt result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return t_Spliterator$OfInt::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfInt), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfInt_get__parameters_(t_Spliterator$OfInt *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableSet.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableSet::class$ = NULL;
    jmethodID *NavigableSet::mids$ = NULL;
    bool NavigableSet::live$ = false;

    jclass NavigableSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceiling_5804c890f94a02b6] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_ea2f3a2f5483365c] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_floor_5804c890f94a02b6] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_15bf8d17699caf41] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_6fb332cca18e073d] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_5804c890f94a02b6] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lower_5804c890f94a02b6] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_541690f9ee81d3ad] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_541690f9ee81d3ad] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_subSet_4e206fa37c57fda5] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_04d25a3c1eb67588] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_15bf8d17699caf41] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_6fb332cca18e073d] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NavigableSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_5804c890f94a02b6], a0.this$));
    }

    ::java::util::Iterator NavigableSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_fc7780bc5d5b73b0]));
    }

    NavigableSet NavigableSet::descendingSet() const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_ea2f3a2f5483365c]));
    }

    ::java::lang::Object NavigableSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_5804c890f94a02b6], a0.this$));
    }

    ::java::util::SortedSet NavigableSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_15bf8d17699caf41], a0.this$));
    }

    NavigableSet NavigableSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_6fb332cca18e073d], a0.this$, a1));
    }

    ::java::lang::Object NavigableSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_5804c890f94a02b6], a0.this$));
    }

    ::java::util::Iterator NavigableSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    ::java::lang::Object NavigableSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object NavigableSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object NavigableSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_541690f9ee81d3ad]));
    }

    ::java::util::SortedSet NavigableSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_4e206fa37c57fda5], a0.this$, a1.this$));
    }

    NavigableSet NavigableSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_04d25a3c1eb67588], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet NavigableSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_15bf8d17699caf41], a0.this$));
    }

    NavigableSet NavigableSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_6fb332cca18e073d], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self);
    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self);
    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self);
    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self);
    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data);
    static PyGetSetDef t_NavigableSet__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableSet__methods_[] = {
      DECLARE_METHOD(t_NavigableSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, ceiling, METH_O),
      DECLARE_METHOD(t_NavigableSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, floor, METH_O),
      DECLARE_METHOD(t_NavigableSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, higher, METH_O),
      DECLARE_METHOD(t_NavigableSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, lower, METH_O),
      DECLARE_METHOD(t_NavigableSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableSet)[] = {
      { Py_tp_methods, t_NavigableSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_NavigableSet *)) get_generic_iterator< t_NavigableSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableSet)[] = {
      &PY_TYPE_DEF(::java::util::SortedSet),
      NULL
    };

    DEFINE_TYPE(NavigableSet, t_NavigableSet, NavigableSet);
    PyObject *t_NavigableSet::wrap_Object(const NavigableSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_NavigableSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_NavigableSet::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableSet), &PY_TYPE_DEF(NavigableSet), module, "NavigableSet", 0);
    }

    void t_NavigableSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "class_", make_descriptor(NavigableSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "wrapfn_", make_descriptor(t_NavigableSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableSet::initializeClass, 1)))
        return NULL;
      return t_NavigableSet::wrap_Object(NavigableSet(((t_NavigableSet *) arg)->object.this$));
    }
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self)
    {
      NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "headSet", args, 2);
    }

    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "subSet", args, 2);
    }

    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "tailSet", args, 2);
    }
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Serializable::class$ = NULL;
    jmethodID *Serializable::mids$ = NULL;
    bool Serializable::live$ = false;

    jclass Serializable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Serializable");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Serializable__methods_[] = {
      DECLARE_METHOD(t_Serializable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Serializable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Serializable)[] = {
      { Py_tp_methods, t_Serializable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Serializable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Serializable, t_Serializable, Serializable);

    void t_Serializable::install(PyObject *module)
    {
      installType(&PY_TYPE(Serializable), &PY_TYPE_DEF(Serializable), module, "Serializable", 0);
    }

    void t_Serializable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "class_", make_descriptor(Serializable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "wrapfn_", make_descriptor(t_Serializable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Serializable::initializeClass, 1)))
        return NULL;
      return t_Serializable::wrap_Object(Serializable(((t_Serializable *) arg)->object.this$));
    }
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Serializable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Class.h"
#include "java/lang/Exception.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *AutoCloseable::class$ = NULL;
    jmethodID *AutoCloseable::mids$ = NULL;
    bool AutoCloseable::live$ = false;

    jclass AutoCloseable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/AutoCloseable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AutoCloseable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self);

    static PyMethodDef t_AutoCloseable__methods_[] = {
      DECLARE_METHOD(t_AutoCloseable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, close, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AutoCloseable)[] = {
      { Py_tp_methods, t_AutoCloseable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AutoCloseable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AutoCloseable, t_AutoCloseable, AutoCloseable);

    void t_AutoCloseable::install(PyObject *module)
    {
      installType(&PY_TYPE(AutoCloseable), &PY_TYPE_DEF(AutoCloseable), module, "AutoCloseable", 0);
    }

    void t_AutoCloseable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "class_", make_descriptor(AutoCloseable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "wrapfn_", make_descriptor(t_AutoCloseable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AutoCloseable::initializeClass, 1)))
        return NULL;
      return t_AutoCloseable::wrap_Object(AutoCloseable(((t_AutoCloseable *) arg)->object.this$));
    }
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AutoCloseable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$LanguageRange::class$ = NULL;
    jmethodID *Locale$LanguageRange::mids$ = NULL;
    bool Locale$LanguageRange::live$ = false;
    jdouble Locale$LanguageRange::MAX_WEIGHT = (jdouble) 0;
    jdouble Locale$LanguageRange::MIN_WEIGHT = (jdouble) 0;

    jclass Locale$LanguageRange::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$LanguageRange");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_b7ec643e4edd96c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getRange_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRange", "()Ljava/lang/String;");
        mids$[mid_getWeight_b74f83833fdad017] = env->getMethodID(cls, "getWeight", "()D");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_mapEquivalents_fcdde4c00845eeb6] = env->getStaticMethodID(cls, "mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_parse_abe6e889bc24795d] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_parse_e7529bd689493c03] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_WEIGHT = env->getStaticDoubleField(cls, "MAX_WEIGHT");
        MIN_WEIGHT = env->getStaticDoubleField(cls, "MIN_WEIGHT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7ec643e4edd96c5, a0.this$, a1)) {}

    jboolean Locale$LanguageRange::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::String Locale$LanguageRange::getRange() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRange_1c1fa1e935d6cdcf]));
    }

    jdouble Locale$LanguageRange::getWeight() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getWeight_b74f83833fdad017]);
    }

    jint Locale$LanguageRange::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    ::java::util::List Locale$LanguageRange::mapEquivalents(const ::java::util::List & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_mapEquivalents_fcdde4c00845eeb6], a0.this$, a1.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_abe6e889bc24795d], a0.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_e7529bd689493c03], a0.this$, a1.this$));
    }

    ::java::lang::String Locale$LanguageRange::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$LanguageRange_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$LanguageRange_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale$LanguageRange_init_(t_Locale$LanguageRange *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale$LanguageRange_equals(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_getRange(t_Locale$LanguageRange *self);
    static PyObject *t_Locale$LanguageRange_getWeight(t_Locale$LanguageRange *self);
    static PyObject *t_Locale$LanguageRange_hashCode(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_mapEquivalents(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$LanguageRange_parse(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$LanguageRange_toString(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_get__range(t_Locale$LanguageRange *self, void *data);
    static PyObject *t_Locale$LanguageRange_get__weight(t_Locale$LanguageRange *self, void *data);
    static PyGetSetDef t_Locale$LanguageRange__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$LanguageRange, range),
      DECLARE_GET_FIELD(t_Locale$LanguageRange, weight),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$LanguageRange__methods_[] = {
      DECLARE_METHOD(t_Locale$LanguageRange, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, getRange, METH_NOARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, getWeight, METH_NOARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, mapEquivalents, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, parse, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$LanguageRange)[] = {
      { Py_tp_methods, t_Locale$LanguageRange__methods_ },
      { Py_tp_init, (void *) t_Locale$LanguageRange_init_ },
      { Py_tp_getset, t_Locale$LanguageRange__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$LanguageRange)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale$LanguageRange, t_Locale$LanguageRange, Locale$LanguageRange);

    void t_Locale$LanguageRange::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$LanguageRange), &PY_TYPE_DEF(Locale$LanguageRange), module, "Locale$LanguageRange", 0);
    }

    void t_Locale$LanguageRange::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "class_", make_descriptor(Locale$LanguageRange::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "wrapfn_", make_descriptor(t_Locale$LanguageRange::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$LanguageRange::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "MAX_WEIGHT", make_descriptor(Locale$LanguageRange::MAX_WEIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "MIN_WEIGHT", make_descriptor(Locale$LanguageRange::MIN_WEIGHT));
    }

    static PyObject *t_Locale$LanguageRange_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$LanguageRange::initializeClass, 1)))
        return NULL;
      return t_Locale$LanguageRange::wrap_Object(Locale$LanguageRange(((t_Locale$LanguageRange *) arg)->object.this$));
    }
    static PyObject *t_Locale$LanguageRange_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$LanguageRange::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale$LanguageRange_init_(t_Locale$LanguageRange *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale$LanguageRange object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale$LanguageRange(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Locale$LanguageRange object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = Locale$LanguageRange(a0, a1));
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

    static PyObject *t_Locale$LanguageRange_equals(t_Locale$LanguageRange *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_getRange(t_Locale$LanguageRange *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRange());
      return j2p(result);
    }

    static PyObject *t_Locale$LanguageRange_getWeight(t_Locale$LanguageRange *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getWeight());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Locale$LanguageRange_hashCode(t_Locale$LanguageRange *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_mapEquivalents(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale$LanguageRange::mapEquivalents(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
      }

      PyErr_SetArgsError(type, "mapEquivalents", args);
      return NULL;
    }

    static PyObject *t_Locale$LanguageRange_parse(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Locale$LanguageRange::parse(a0));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "sK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale$LanguageRange::parse(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
          }
        }
      }

      PyErr_SetArgsError(type, "parse", args);
      return NULL;
    }

    static PyObject *t_Locale$LanguageRange_toString(t_Locale$LanguageRange *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_get__range(t_Locale$LanguageRange *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRange());
      return j2p(value);
    }

    static PyObject *t_Locale$LanguageRange_get__weight(t_Locale$LanguageRange *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getWeight());
      return PyFloat_FromDouble((double) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Console.h"
#include "java/io/Flushable.h"
#include "java/io/Console.h"
#include "java/io/Reader.h"
#include "java/io/PrintWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Console::class$ = NULL;
    jmethodID *Console::mids$ = NULL;
    bool Console::live$ = false;

    jclass Console::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Console");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_a753c4a6aa81d280] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_printf_a753c4a6aa81d280] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_readLine_1c1fa1e935d6cdcf] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLine_a04f4df1a34e49bc] = env->getMethodID(cls, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_readPassword_53a37b9a05d57059] = env->getMethodID(cls, "readPassword", "()[C");
        mids$[mid_readPassword_58e18f61460dea56] = env->getMethodID(cls, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
        mids$[mid_reader_b2bc6d3e210c2dd4] = env->getMethodID(cls, "reader", "()Ljava/io/Reader;");
        mids$[mid_writer_b79b488bbc5cc057] = env->getMethodID(cls, "writer", "()Ljava/io/PrintWriter;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Console::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    Console Console::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_format_a753c4a6aa81d280], a0.this$, a1.this$));
    }

    Console Console::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_printf_a753c4a6aa81d280], a0.this$, a1.this$));
    }

    ::java::lang::String Console::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Console::readLine(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_a04f4df1a34e49bc], a0.this$, a1.this$));
    }

    JArray< jchar > Console::readPassword() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_53a37b9a05d57059]));
    }

    JArray< jchar > Console::readPassword(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_58e18f61460dea56], a0.this$, a1.this$));
    }

    ::java::io::Reader Console::reader() const
    {
      return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_reader_b2bc6d3e210c2dd4]));
    }

    ::java::io::PrintWriter Console::writer() const
    {
      return ::java::io::PrintWriter(env->callObjectMethod(this$, mids$[mid_writer_b79b488bbc5cc057]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_flush(t_Console *self);
    static PyObject *t_Console_format(t_Console *self, PyObject *args);
    static PyObject *t_Console_printf(t_Console *self, PyObject *args);
    static PyObject *t_Console_readLine(t_Console *self, PyObject *args);
    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args);
    static PyObject *t_Console_reader(t_Console *self);
    static PyObject *t_Console_writer(t_Console *self);

    static PyMethodDef t_Console__methods_[] = {
      DECLARE_METHOD(t_Console, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, flush, METH_NOARGS),
      DECLARE_METHOD(t_Console, format, METH_VARARGS),
      DECLARE_METHOD(t_Console, printf, METH_VARARGS),
      DECLARE_METHOD(t_Console, readLine, METH_VARARGS),
      DECLARE_METHOD(t_Console, readPassword, METH_VARARGS),
      DECLARE_METHOD(t_Console, reader, METH_NOARGS),
      DECLARE_METHOD(t_Console, writer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Console)[] = {
      { Py_tp_methods, t_Console__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Console)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Console, t_Console, Console);

    void t_Console::install(PyObject *module)
    {
      installType(&PY_TYPE(Console), &PY_TYPE_DEF(Console), module, "Console", 0);
    }

    void t_Console::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "class_", make_descriptor(Console::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "wrapfn_", make_descriptor(t_Console::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Console::initializeClass, 1)))
        return NULL;
      return t_Console::wrap_Object(Console(((t_Console *) arg)->object.this$));
    }
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Console::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Console_flush(t_Console *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Console_format(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.format(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_Console_printf(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.printf(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_Console_readLine(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.readLine());
          return j2p(result);
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readLine(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readLine", args);
      return NULL;
    }

    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jchar > result((jobject) NULL);
          OBJ_CALL(result = self->object.readPassword());
          return result.wrap();
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readPassword(a0, a1));
            return result.wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readPassword", args);
      return NULL;
    }

    static PyObject *t_Console_reader(t_Console *self)
    {
      ::java::io::Reader result((jobject) NULL);
      OBJ_CALL(result = self->object.reader());
      return ::java::io::t_Reader::wrap_Object(result);
    }

    static PyObject *t_Console_writer(t_Console *self)
    {
      ::java::io::PrintWriter result((jobject) NULL);
      OBJ_CALL(result = self->object.writer());
      return ::java::io::t_PrintWriter::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StringBuffer::class$ = NULL;
    jmethodID *StringBuffer::mids$ = NULL;
    bool StringBuffer::live$ = false;

    jclass StringBuffer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StringBuffer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_902d69c788edaf18] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_fa3378c84c73c389] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
        mids$[mid_append_6ca3f4f4f896dca7] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuffer;");
        mids$[mid_append_42f96e3bc49c61ac] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_append_826f6e0ca1f4ffed] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuffer;");
        mids$[mid_append_1e5da03d09e26c49] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuffer;");
        mids$[mid_append_72fb30885e89c135] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuffer;");
        mids$[mid_append_44f616479c34a342] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuffer;");
        mids$[mid_append_5dfcd56c557a6531] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_append_ea749a7520ec3726] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_append_8d95941741691e18] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_append_69cca44123d02dab] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuffer;");
        mids$[mid_append_b447a3eb13d2d19b] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuffer;");
        mids$[mid_append_3107e5564546aed8] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_appendCodePoint_5dfcd56c557a6531] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_capacity_55546ef6a647f39b] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_f41af25e73e22f74] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0e7cf35192c3effe] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0e7cf35192c3effe] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_92ecd94558bf0c68] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_91c511f9684a490f] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuffer;)I");
        mids$[mid_delete_218365242bbef6b3] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_deleteCharAt_5dfcd56c557a6531] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_ensureCapacity_44ed599e93e8a30c] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_cc06cb22124df445] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_7c969bab81d289ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_b86e44840f8e76d1] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuffer;");
        mids$[mid_insert_ecff9b94e6c87832] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_37006c27c67a6d26] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_6ded3e0ae9f2e0e2] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuffer;");
        mids$[mid_insert_bfda01dc7b136f17] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuffer;");
        mids$[mid_insert_81771ec591e22854] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuffer;");
        mids$[mid_insert_218365242bbef6b3] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_insert_f0254728b08c3986] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_049a66b753ac35eb] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_b33d0f8053813292] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_7fe89215d4be2797] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuffer;");
        mids$[mid_insert_9c20be3a115a7e19] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_lastIndexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_7c969bab81d289ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_55546ef6a647f39b] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_92ecd94558bf0c68] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_dbe9640be2cd8bda] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_reverse_9ddc431ab9a0d12b] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuffer;");
        mids$[mid_setCharAt_563c77446852e53d] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_44ed599e93e8a30c] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_e866f407305d4016] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_2a9bffd3d5397f7c] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_e91e53c42d39aef9] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuffer::StringBuffer() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    StringBuffer::StringBuffer(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    StringBuffer::StringBuffer(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    StringBuffer::StringBuffer(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_902d69c788edaf18, a0.this$)) {}

    StringBuffer StringBuffer::append(const StringBuffer & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_fa3378c84c73c389], a0.this$));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_6ca3f4f4f896dca7], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::String & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_42f96e3bc49c61ac], a0.this$));
    }

    StringBuffer StringBuffer::append(jboolean a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_826f6e0ca1f4ffed], a0));
    }

    StringBuffer StringBuffer::append(jchar a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_1e5da03d09e26c49], a0));
    }

    StringBuffer StringBuffer::append(jdouble a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_72fb30885e89c135], a0));
    }

    StringBuffer StringBuffer::append(jfloat a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_44f616479c34a342], a0));
    }

    StringBuffer StringBuffer::append(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_5dfcd56c557a6531], a0));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_ea749a7520ec3726], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::Object & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_8d95941741691e18], a0.this$));
    }

    StringBuffer StringBuffer::append(jlong a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_69cca44123d02dab], a0));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_b447a3eb13d2d19b], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_3107e5564546aed8], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::appendCodePoint(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_appendCodePoint_5dfcd56c557a6531], a0));
    }

    jint StringBuffer::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_55546ef6a647f39b]);
    }

    jchar StringBuffer::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_f41af25e73e22f74], a0);
    }

    jint StringBuffer::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0e7cf35192c3effe], a0);
    }

    jint StringBuffer::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0e7cf35192c3effe], a0);
    }

    jint StringBuffer::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_92ecd94558bf0c68], a0, a1);
    }

    jint StringBuffer::compareTo(const StringBuffer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_91c511f9684a490f], a0.this$);
    }

    StringBuffer StringBuffer::delete$(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_delete_218365242bbef6b3], a0, a1));
    }

    StringBuffer StringBuffer::deleteCharAt(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_deleteCharAt_5dfcd56c557a6531], a0));
    }

    void StringBuffer::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_44ed599e93e8a30c], a0);
    }

    void StringBuffer::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_cc06cb22124df445], a0, a1, a2.this$, a3);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_7c969bab81d289ef], a0.this$, a1);
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_b86e44840f8e76d1], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_ecff9b94e6c87832], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jboolean a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_37006c27c67a6d26], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jchar a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_6ded3e0ae9f2e0e2], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jdouble a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_bfda01dc7b136f17], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jfloat a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_81771ec591e22854], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_218365242bbef6b3], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_f0254728b08c3986], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_049a66b753ac35eb], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jlong a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_b33d0f8053813292], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_7fe89215d4be2797], a0, a1.this$, a2, a3));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_9c20be3a115a7e19], a0, a1.this$, a2, a3));
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_7c969bab81d289ef], a0.this$, a1);
    }

    jint StringBuffer::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_55546ef6a647f39b]);
    }

    jint StringBuffer::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_92ecd94558bf0c68], a0, a1);
    }

    StringBuffer StringBuffer::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_replace_dbe9640be2cd8bda], a0, a1, a2.this$));
    }

    StringBuffer StringBuffer::reverse() const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_reverse_9ddc431ab9a0d12b]));
    }

    void StringBuffer::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_563c77446852e53d], a0, a1);
    }

    void StringBuffer::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_44ed599e93e8a30c], a0);
    }

    ::java::lang::CharSequence StringBuffer::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_e866f407305d4016], a0, a1));
    }

    ::java::lang::String StringBuffer::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String StringBuffer::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_e91e53c42d39aef9], a0, a1));
    }

    ::java::lang::String StringBuffer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    void StringBuffer::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StringBuffer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringBuffer_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringBuffer_init_(t_StringBuffer *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringBuffer_append(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_appendCodePoint(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_capacity(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_charAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointBefore(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointCount(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_compareTo(t_StringBuffer *self, PyObject *arg);
    static PyObject *t_StringBuffer_delete(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_deleteCharAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_ensureCapacity(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_getChars(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_indexOf(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_insert(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_lastIndexOf(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_length(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_offsetByCodePoints(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_replace(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_reverse(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_setCharAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_setLength(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_subSequence(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_substring(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_toString(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_trimToSize(t_StringBuffer *self, PyObject *args);

    static PyMethodDef t_StringBuffer__methods_[] = {
      DECLARE_METHOD(t_StringBuffer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuffer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuffer, append, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, appendCodePoint, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, capacity, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, charAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointBefore, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, compareTo, METH_O),
      DECLARE_METHOD(t_StringBuffer, delete, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, deleteCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, ensureCapacity, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, getChars, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, insert, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, length, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, replace, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, reverse, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, setCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, setLength, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, substring, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, trimToSize, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringBuffer)[] = {
      { Py_tp_methods, t_StringBuffer__methods_ },
      { Py_tp_init, (void *) t_StringBuffer_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringBuffer)[] = {
      &PY_TYPE_DEF(::java::lang::AbstractStringBuilder),
      NULL
    };

    DEFINE_TYPE(StringBuffer, t_StringBuffer, StringBuffer);

    void t_StringBuffer::install(PyObject *module)
    {
      installType(&PY_TYPE(StringBuffer), &PY_TYPE_DEF(StringBuffer), module, "StringBuffer", 0);
    }

    void t_StringBuffer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "class_", make_descriptor(StringBuffer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "wrapfn_", make_descriptor(t_StringBuffer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringBuffer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringBuffer::initializeClass, 1)))
        return NULL;
      return t_StringBuffer::wrap_Object(StringBuffer(((t_StringBuffer *) arg)->object.this$));
    }
    static PyObject *t_StringBuffer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringBuffer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringBuffer_init_(t_StringBuffer *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringBuffer object((jobject) NULL);

          INT_CALL(object = StringBuffer());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = StringBuffer(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringBuffer(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            INT_CALL(object = StringBuffer(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringBuffer_append(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          StringBuffer a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "k", StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jchar a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringBuffer_appendCodePoint(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.appendCodePoint(a0));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "appendCodePoint", args, 2);
    }

    static PyObject *t_StringBuffer_capacity(t_StringBuffer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.capacity());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "capacity", args, 2);
    }

    static PyObject *t_StringBuffer_charAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jchar result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "charAt", args, 2);
    }

    static PyObject *t_StringBuffer_codePointAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointAt", args, 2);
    }

    static PyObject *t_StringBuffer_codePointBefore(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointBefore", args, 2);
    }

    static PyObject *t_StringBuffer_codePointCount(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointCount", args, 2);
    }

    static PyObject *t_StringBuffer_compareTo(t_StringBuffer *self, PyObject *arg)
    {
      StringBuffer a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", StringBuffer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_StringBuffer_delete(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.delete$(a0, a1));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "delete", args, 2);
    }

    static PyObject *t_StringBuffer_deleteCharAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.deleteCharAt(a0));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "deleteCharAt", args, 2);
    }

    static PyObject *t_StringBuffer_ensureCapacity(t_StringBuffer *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "ensureCapacity", args, 2);
    }

    static PyObject *t_StringBuffer_getChars(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "getChars", args, 2);
    }

    static PyObject *t_StringBuffer_indexOf(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_StringBuffer_insert(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I[C", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::String a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Is", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jboolean a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jchar a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jdouble a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jfloat a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jint a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IO", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Io", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jlong a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I[CII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IOII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "insert", args, 2);
    }

    static PyObject *t_StringBuffer_lastIndexOf(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_StringBuffer_length(t_StringBuffer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.length());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "length", args, 2);
    }

    static PyObject *t_StringBuffer_offsetByCodePoints(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "offsetByCodePoints", args, 2);
    }

    static PyObject *t_StringBuffer_replace(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::String a2((jobject) NULL);
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "IIs", &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_StringBuffer_reverse(t_StringBuffer *self, PyObject *args)
    {
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reverse());
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "reverse", args, 2);
    }

    static PyObject *t_StringBuffer_setCharAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jchar a1;

      if (!parseArgs(args, "IC", &a0, &a1))
      {
        OBJ_CALL(self->object.setCharAt(a0, a1));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "setCharAt", args, 2);
    }

    static PyObject *t_StringBuffer_setLength(t_StringBuffer *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setLength(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "setLength", args, 2);
    }

    static PyObject *t_StringBuffer_subSequence(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "subSequence", args, 2);
    }

    static PyObject *t_StringBuffer_substring(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "substring", args, 2);
    }

    static PyObject *t_StringBuffer_toString(t_StringBuffer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringBuffer_trimToSize(t_StringBuffer *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.trimToSize());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "trimToSize", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Comparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Comparator::class$ = NULL;
    jmethodID *Comparator::mids$ = NULL;
    bool Comparator::live$ = false;

    jclass Comparator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Comparator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compare_b6586f8beb510be0] = env->getMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_naturalOrder_127b1bec8b0c3ae1] = env->getStaticMethodID(cls, "naturalOrder", "()Ljava/util/Comparator;");
        mids$[mid_nullsFirst_09cb371d3e63c195] = env->getStaticMethodID(cls, "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_nullsLast_09cb371d3e63c195] = env->getStaticMethodID(cls, "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_reverseOrder_127b1bec8b0c3ae1] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reversed_127b1bec8b0c3ae1] = env->getMethodID(cls, "reversed", "()Ljava/util/Comparator;");
        mids$[mid_thenComparing_09cb371d3e63c195] = env->getMethodID(cls, "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparator::compare(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callIntMethod(this$, mids$[mid_compare_b6586f8beb510be0], a0.this$, a1.this$);
    }

    jboolean Comparator::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    Comparator Comparator::naturalOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_naturalOrder_127b1bec8b0c3ae1]));
    }

    Comparator Comparator::nullsFirst(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsFirst_09cb371d3e63c195], a0.this$));
    }

    Comparator Comparator::nullsLast(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsLast_09cb371d3e63c195], a0.this$));
    }

    Comparator Comparator::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_127b1bec8b0c3ae1]));
    }

    Comparator Comparator::reversed() const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_reversed_127b1bec8b0c3ae1]));
    }

    Comparator Comparator::thenComparing(const Comparator & a0) const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_thenComparing_09cb371d3e63c195], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Comparator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_of_(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_compare(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_equals(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_naturalOrder(PyTypeObject *type);
    static PyObject *t_Comparator_nullsFirst(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_nullsLast(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_reverseOrder(PyTypeObject *type);
    static PyObject *t_Comparator_reversed(t_Comparator *self);
    static PyObject *t_Comparator_thenComparing(t_Comparator *self, PyObject *arg);
    static PyObject *t_Comparator_get__parameters_(t_Comparator *self, void *data);
    static PyGetSetDef t_Comparator__fields_[] = {
      DECLARE_GET_FIELD(t_Comparator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Comparator__methods_[] = {
      DECLARE_METHOD(t_Comparator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, compare, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, equals, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, naturalOrder, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Comparator, nullsFirst, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, nullsLast, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, reverseOrder, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Comparator, reversed, METH_NOARGS),
      DECLARE_METHOD(t_Comparator, thenComparing, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Comparator)[] = {
      { Py_tp_methods, t_Comparator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Comparator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Comparator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Comparator, t_Comparator, Comparator);
    PyObject *t_Comparator::wrap_Object(const Comparator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparator *self = (t_Comparator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Comparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparator *self = (t_Comparator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Comparator::install(PyObject *module)
    {
      installType(&PY_TYPE(Comparator), &PY_TYPE_DEF(Comparator), module, "Comparator", 0);
    }

    void t_Comparator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "class_", make_descriptor(Comparator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "wrapfn_", make_descriptor(t_Comparator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Comparator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Comparator::initializeClass, 1)))
        return NULL;
      return t_Comparator::wrap_Object(Comparator(((t_Comparator *) arg)->object.this$));
    }
    static PyObject *t_Comparator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Comparator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Comparator_of_(t_Comparator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Comparator_compare(t_Comparator *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compare", args);
      return NULL;
    }

    static PyObject *t_Comparator_equals(t_Comparator *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Comparator), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Comparator_naturalOrder(PyTypeObject *type)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Comparator::naturalOrder());
      return t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Comparator_nullsFirst(PyTypeObject *type, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = ::java::util::Comparator::nullsFirst(a0));
        return t_Comparator::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nullsFirst", arg);
      return NULL;
    }

    static PyObject *t_Comparator_nullsLast(PyTypeObject *type, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = ::java::util::Comparator::nullsLast(a0));
        return t_Comparator::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nullsLast", arg);
      return NULL;
    }

    static PyObject *t_Comparator_reverseOrder(PyTypeObject *type)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Comparator::reverseOrder());
      return t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Comparator_reversed(t_Comparator *self)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.reversed());
      return t_Comparator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Comparator_thenComparing(t_Comparator *self, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = self->object.thenComparing(a0));
        return t_Comparator::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "thenComparing", arg);
      return NULL;
    }
    static PyObject *t_Comparator_get__parameters_(t_Comparator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *UnsupportedEncodingException::class$ = NULL;
    jmethodID *UnsupportedEncodingException::mids$ = NULL;
    bool UnsupportedEncodingException::live$ = false;

    jclass UnsupportedEncodingException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/UnsupportedEncodingException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedEncodingException::UnsupportedEncodingException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_UnsupportedEncodingException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_UnsupportedEncodingException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_UnsupportedEncodingException_init_(t_UnsupportedEncodingException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_UnsupportedEncodingException__methods_[] = {
      DECLARE_METHOD(t_UnsupportedEncodingException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_UnsupportedEncodingException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(UnsupportedEncodingException)[] = {
      { Py_tp_methods, t_UnsupportedEncodingException__methods_ },
      { Py_tp_init, (void *) t_UnsupportedEncodingException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(UnsupportedEncodingException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(UnsupportedEncodingException, t_UnsupportedEncodingException, UnsupportedEncodingException);

    void t_UnsupportedEncodingException::install(PyObject *module)
    {
      installType(&PY_TYPE(UnsupportedEncodingException), &PY_TYPE_DEF(UnsupportedEncodingException), module, "UnsupportedEncodingException", 0);
    }

    void t_UnsupportedEncodingException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "class_", make_descriptor(UnsupportedEncodingException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "wrapfn_", make_descriptor(t_UnsupportedEncodingException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedEncodingException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_UnsupportedEncodingException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, UnsupportedEncodingException::initializeClass, 1)))
        return NULL;
      return t_UnsupportedEncodingException::wrap_Object(UnsupportedEncodingException(((t_UnsupportedEncodingException *) arg)->object.this$));
    }
    static PyObject *t_UnsupportedEncodingException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, UnsupportedEncodingException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_UnsupportedEncodingException_init_(t_UnsupportedEncodingException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          UnsupportedEncodingException object((jobject) NULL);

          INT_CALL(object = UnsupportedEncodingException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          UnsupportedEncodingException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = UnsupportedEncodingException(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/OptionalDouble.h"
#include "java/lang/Runnable.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/OptionalDouble.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *OptionalDouble::class$ = NULL;
    jmethodID *OptionalDouble::mids$ = NULL;
    bool OptionalDouble::live$ = false;

    jclass OptionalDouble::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/OptionalDouble");

        mids$ = new jmethodID[max_mid];
        mids$[mid_empty_a58140050545434b] = env->getStaticMethodID(cls, "empty", "()Ljava/util/OptionalDouble;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAsDouble_b74f83833fdad017] = env->getMethodID(cls, "getAsDouble", "()D");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_ifPresent_85691ac11e338ac3] = env->getMethodID(cls, "ifPresent", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_ifPresentOrElse_45e69547b92f94bd] = env->getMethodID(cls, "ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_9ab94ac1dc23b105] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_35e22db7ad859742] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/OptionalDouble;");
        mids$[mid_orElse_04fd0666b613d2ab] = env->getMethodID(cls, "orElse", "(D)D");
        mids$[mid_orElseThrow_b74f83833fdad017] = env->getMethodID(cls, "orElseThrow", "()D");
        mids$[mid_orElseThrow_a720d4bc78d0f73d] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)D");
        mids$[mid_stream_48a8801871033f9c] = env->getMethodID(cls, "stream", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OptionalDouble OptionalDouble::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_empty_a58140050545434b]));
    }

    jboolean OptionalDouble::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jdouble OptionalDouble::getAsDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAsDouble_b74f83833fdad017]);
    }

    jint OptionalDouble::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    void OptionalDouble::ifPresent(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresent_85691ac11e338ac3], a0.this$);
    }

    void OptionalDouble::ifPresentOrElse(const ::java::util::function::DoubleConsumer & a0, const ::java::lang::Runnable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresentOrElse_45e69547b92f94bd], a0.this$, a1.this$);
    }

    jboolean OptionalDouble::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    jboolean OptionalDouble::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_9ab94ac1dc23b105]);
    }

    OptionalDouble OptionalDouble::of(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_of_35e22db7ad859742], a0));
    }

    jdouble OptionalDouble::orElse(jdouble a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElse_04fd0666b613d2ab], a0);
    }

    jdouble OptionalDouble::orElseThrow() const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_b74f83833fdad017]);
    }

    jdouble OptionalDouble::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_a720d4bc78d0f73d], a0.this$);
    }

    ::java::util::stream::DoubleStream OptionalDouble::stream() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_stream_48a8801871033f9c]));
    }

    ::java::lang::String OptionalDouble::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_OptionalDouble_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OptionalDouble_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OptionalDouble_empty(PyTypeObject *type);
    static PyObject *t_OptionalDouble_equals(t_OptionalDouble *self, PyObject *args);
    static PyObject *t_OptionalDouble_getAsDouble(t_OptionalDouble *self);
    static PyObject *t_OptionalDouble_hashCode(t_OptionalDouble *self, PyObject *args);
    static PyObject *t_OptionalDouble_ifPresent(t_OptionalDouble *self, PyObject *arg);
    static PyObject *t_OptionalDouble_ifPresentOrElse(t_OptionalDouble *self, PyObject *args);
    static PyObject *t_OptionalDouble_isEmpty(t_OptionalDouble *self);
    static PyObject *t_OptionalDouble_isPresent(t_OptionalDouble *self);
    static PyObject *t_OptionalDouble_of(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OptionalDouble_orElse(t_OptionalDouble *self, PyObject *arg);
    static PyObject *t_OptionalDouble_orElseThrow(t_OptionalDouble *self, PyObject *args);
    static PyObject *t_OptionalDouble_stream(t_OptionalDouble *self);
    static PyObject *t_OptionalDouble_toString(t_OptionalDouble *self, PyObject *args);
    static PyObject *t_OptionalDouble_get__asDouble(t_OptionalDouble *self, void *data);
    static PyObject *t_OptionalDouble_get__present(t_OptionalDouble *self, void *data);
    static PyGetSetDef t_OptionalDouble__fields_[] = {
      DECLARE_GET_FIELD(t_OptionalDouble, asDouble),
      DECLARE_GET_FIELD(t_OptionalDouble, present),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_OptionalDouble__methods_[] = {
      DECLARE_METHOD(t_OptionalDouble, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OptionalDouble, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OptionalDouble, empty, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OptionalDouble, equals, METH_VARARGS),
      DECLARE_METHOD(t_OptionalDouble, getAsDouble, METH_NOARGS),
      DECLARE_METHOD(t_OptionalDouble, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_OptionalDouble, ifPresent, METH_O),
      DECLARE_METHOD(t_OptionalDouble, ifPresentOrElse, METH_VARARGS),
      DECLARE_METHOD(t_OptionalDouble, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_OptionalDouble, isPresent, METH_NOARGS),
      DECLARE_METHOD(t_OptionalDouble, of, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OptionalDouble, orElse, METH_O),
      DECLARE_METHOD(t_OptionalDouble, orElseThrow, METH_VARARGS),
      DECLARE_METHOD(t_OptionalDouble, stream, METH_NOARGS),
      DECLARE_METHOD(t_OptionalDouble, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OptionalDouble)[] = {
      { Py_tp_methods, t_OptionalDouble__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_OptionalDouble__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OptionalDouble)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OptionalDouble, t_OptionalDouble, OptionalDouble);

    void t_OptionalDouble::install(PyObject *module)
    {
      installType(&PY_TYPE(OptionalDouble), &PY_TYPE_DEF(OptionalDouble), module, "OptionalDouble", 0);
    }

    void t_OptionalDouble::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OptionalDouble), "class_", make_descriptor(OptionalDouble::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OptionalDouble), "wrapfn_", make_descriptor(t_OptionalDouble::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OptionalDouble), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OptionalDouble_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OptionalDouble::initializeClass, 1)))
        return NULL;
      return t_OptionalDouble::wrap_Object(OptionalDouble(((t_OptionalDouble *) arg)->object.this$));
    }
    static PyObject *t_OptionalDouble_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OptionalDouble::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_OptionalDouble_empty(PyTypeObject *type)
    {
      OptionalDouble result((jobject) NULL);
      OBJ_CALL(result = ::java::util::OptionalDouble::empty());
      return t_OptionalDouble::wrap_Object(result);
    }

    static PyObject *t_OptionalDouble_equals(t_OptionalDouble *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(OptionalDouble), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_OptionalDouble_getAsDouble(t_OptionalDouble *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getAsDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_OptionalDouble_hashCode(t_OptionalDouble *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(OptionalDouble), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_OptionalDouble_ifPresent(t_OptionalDouble *self, PyObject *arg)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.ifPresent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ifPresent", arg);
      return NULL;
    }

    static PyObject *t_OptionalDouble_ifPresentOrElse(t_OptionalDouble *self, PyObject *args)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);
      ::java::lang::Runnable a1((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::util::function::DoubleConsumer::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.ifPresentOrElse(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ifPresentOrElse", args);
      return NULL;
    }

    static PyObject *t_OptionalDouble_isEmpty(t_OptionalDouble *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_OptionalDouble_isPresent(t_OptionalDouble *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPresent());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_OptionalDouble_of(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      OptionalDouble result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::util::OptionalDouble::of(a0));
        return t_OptionalDouble::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "of", arg);
      return NULL;
    }

    static PyObject *t_OptionalDouble_orElse(t_OptionalDouble *self, PyObject *arg)
    {
      jdouble a0;
      jdouble result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.orElse(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError((PyObject *) self, "orElse", arg);
      return NULL;
    }

    static PyObject *t_OptionalDouble_orElseThrow(t_OptionalDouble *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jdouble result;
          OBJ_CALL(result = self->object.orElseThrow());
          return PyFloat_FromDouble((double) result);
        }
        break;
       case 1:
        {
          ::java::util::function::Supplier a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(result = self->object.orElseThrow(a0));
            return PyFloat_FromDouble((double) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "orElseThrow", args);
      return NULL;
    }

    static PyObject *t_OptionalDouble_stream(t_OptionalDouble *self)
    {
      ::java::util::stream::DoubleStream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_DoubleStream::wrap_Object(result);
    }

    static PyObject *t_OptionalDouble_toString(t_OptionalDouble *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(OptionalDouble), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_OptionalDouble_get__asDouble(t_OptionalDouble *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getAsDouble());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_OptionalDouble_get__present(t_OptionalDouble *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPresent());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *UnsupportedOperationException::class$ = NULL;
    jmethodID *UnsupportedOperationException::mids$ = NULL;
    bool UnsupportedOperationException::live$ = false;

    jclass UnsupportedOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/UnsupportedOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_UnsupportedOperationException__methods_[] = {
      DECLARE_METHOD(t_UnsupportedOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_UnsupportedOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(UnsupportedOperationException)[] = {
      { Py_tp_methods, t_UnsupportedOperationException__methods_ },
      { Py_tp_init, (void *) t_UnsupportedOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(UnsupportedOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(UnsupportedOperationException, t_UnsupportedOperationException, UnsupportedOperationException);

    void t_UnsupportedOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(UnsupportedOperationException), &PY_TYPE_DEF(UnsupportedOperationException), module, "UnsupportedOperationException", 0);
    }

    void t_UnsupportedOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "class_", make_descriptor(UnsupportedOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "wrapfn_", make_descriptor(t_UnsupportedOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_UnsupportedOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, UnsupportedOperationException::initializeClass, 1)))
        return NULL;
      return t_UnsupportedOperationException::wrap_Object(UnsupportedOperationException(((t_UnsupportedOperationException *) arg)->object.this$));
    }
    static PyObject *t_UnsupportedOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, UnsupportedOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_UnsupportedOperationException_init_(t_UnsupportedOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          UnsupportedOperationException object((jobject) NULL);

          INT_CALL(object = UnsupportedOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = UnsupportedOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          UnsupportedOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnsupportedOperationException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileDescriptor.h"
#include "java/io/FileDescriptor.h"
#include "java/io/SyncFailedException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileDescriptor::class$ = NULL;
    jmethodID *FileDescriptor::mids$ = NULL;
    bool FileDescriptor::live$ = false;
    FileDescriptor *FileDescriptor::err = NULL;
    FileDescriptor *FileDescriptor::in = NULL;
    FileDescriptor *FileDescriptor::out = NULL;

    jclass FileDescriptor::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileDescriptor");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_sync_a1fa5dae97ea5ed2] = env->getMethodID(cls, "sync", "()V");
        mids$[mid_valid_9ab94ac1dc23b105] = env->getMethodID(cls, "valid", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new FileDescriptor(env->getStaticObjectField(cls, "err", "Ljava/io/FileDescriptor;"));
        in = new FileDescriptor(env->getStaticObjectField(cls, "in", "Ljava/io/FileDescriptor;"));
        out = new FileDescriptor(env->getStaticObjectField(cls, "out", "Ljava/io/FileDescriptor;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileDescriptor::FileDescriptor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    void FileDescriptor::sync() const
    {
      env->callVoidMethod(this$, mids$[mid_sync_a1fa5dae97ea5ed2]);
    }

    jboolean FileDescriptor::valid() const
    {
      return env->callBooleanMethod(this$, mids$[mid_valid_9ab94ac1dc23b105]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileDescriptor_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileDescriptor_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileDescriptor_init_(t_FileDescriptor *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileDescriptor_sync(t_FileDescriptor *self);
    static PyObject *t_FileDescriptor_valid(t_FileDescriptor *self);

    static PyMethodDef t_FileDescriptor__methods_[] = {
      DECLARE_METHOD(t_FileDescriptor, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileDescriptor, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileDescriptor, sync, METH_NOARGS),
      DECLARE_METHOD(t_FileDescriptor, valid, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileDescriptor)[] = {
      { Py_tp_methods, t_FileDescriptor__methods_ },
      { Py_tp_init, (void *) t_FileDescriptor_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileDescriptor)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileDescriptor, t_FileDescriptor, FileDescriptor);

    void t_FileDescriptor::install(PyObject *module)
    {
      installType(&PY_TYPE(FileDescriptor), &PY_TYPE_DEF(FileDescriptor), module, "FileDescriptor", 0);
    }

    void t_FileDescriptor::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "class_", make_descriptor(FileDescriptor::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "wrapfn_", make_descriptor(t_FileDescriptor::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "boxfn_", make_descriptor(boxObject));
      env->getClass(FileDescriptor::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "err", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "in", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "out", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::out)));
    }

    static PyObject *t_FileDescriptor_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileDescriptor::initializeClass, 1)))
        return NULL;
      return t_FileDescriptor::wrap_Object(FileDescriptor(((t_FileDescriptor *) arg)->object.this$));
    }
    static PyObject *t_FileDescriptor_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileDescriptor::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileDescriptor_init_(t_FileDescriptor *self, PyObject *args, PyObject *kwds)
    {
      FileDescriptor object((jobject) NULL);

      INT_CALL(object = FileDescriptor());
      self->object = object;

      return 0;
    }

    static PyObject *t_FileDescriptor_sync(t_FileDescriptor *self)
    {
      OBJ_CALL(self->object.sync());
      Py_RETURN_NONE;
    }

    static PyObject *t_FileDescriptor_valid(t_FileDescriptor *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.valid());
      Py_RETURN_BOOL(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter::class$ = NULL;
    jmethodID *ObjectInputFilter::mids$ = NULL;
    bool ObjectInputFilter::live$ = false;

    jclass ObjectInputFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_checkInput_f4ee27329d8366de] = env->getMethodID(cls, "checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::io::ObjectInputFilter$Status ObjectInputFilter::checkInput(const ::java::io::ObjectInputFilter$FilterInfo & a0) const
    {
      return ::java::io::ObjectInputFilter$Status(env->callObjectMethod(this$, mids$[mid_checkInput_f4ee27329d8366de], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter_checkInput(t_ObjectInputFilter *self, PyObject *arg);

    static PyMethodDef t_ObjectInputFilter__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter, checkInput, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter)[] = {
      { Py_tp_methods, t_ObjectInputFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter, t_ObjectInputFilter, ObjectInputFilter);

    void t_ObjectInputFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter), &PY_TYPE_DEF(ObjectInputFilter), module, "ObjectInputFilter", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "Status", make_descriptor(&PY_TYPE_DEF(ObjectInputFilter$Status)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "FilterInfo", make_descriptor(&PY_TYPE_DEF(ObjectInputFilter$FilterInfo)));
    }

    void t_ObjectInputFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "class_", make_descriptor(ObjectInputFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "wrapfn_", make_descriptor(t_ObjectInputFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter::wrap_Object(ObjectInputFilter(((t_ObjectInputFilter *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter_checkInput(t_ObjectInputFilter *self, PyObject *arg)
    {
      ::java::io::ObjectInputFilter$FilterInfo a0((jobject) NULL);
      ::java::io::ObjectInputFilter$Status result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectInputFilter$FilterInfo::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.checkInput(a0));
        return ::java::io::t_ObjectInputFilter$Status::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "checkInput", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Iterable::class$ = NULL;
    jmethodID *Iterable::mids$ = NULL;
    bool Iterable::live$ = false;

    jclass Iterable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Iterable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Iterable::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    ::java::util::Spliterator Iterable::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Iterable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterable_of_(t_Iterable *self, PyObject *args);
    static PyObject *t_Iterable_iterator(t_Iterable *self);
    static PyObject *t_Iterable_spliterator(t_Iterable *self);
    static PyObject *t_Iterable_get__parameters_(t_Iterable *self, void *data);
    static PyGetSetDef t_Iterable__fields_[] = {
      DECLARE_GET_FIELD(t_Iterable, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterable__methods_[] = {
      DECLARE_METHOD(t_Iterable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterable, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterable, iterator, METH_NOARGS),
      DECLARE_METHOD(t_Iterable, spliterator, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterable)[] = {
      { Py_tp_methods, t_Iterable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterable__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Iterable *)) get_generic_iterator< t_Iterable >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterable, t_Iterable, Iterable);
    PyObject *t_Iterable::wrap_Object(const Iterable& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterable::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterable *self = (t_Iterable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterable::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterable::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterable *self = (t_Iterable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterable::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterable), &PY_TYPE_DEF(Iterable), module, "Iterable", 0);
    }

    void t_Iterable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "class_", make_descriptor(Iterable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "wrapfn_", make_descriptor(t_Iterable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterable::initializeClass, 1)))
        return NULL;
      return t_Iterable::wrap_Object(Iterable(((t_Iterable *) arg)->object.this$));
    }
    static PyObject *t_Iterable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterable_of_(t_Iterable *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterable_iterator(t_Iterable *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Iterable_spliterator(t_Iterable *self)
    {
      ::java::util::Spliterator result((jobject) NULL);
      OBJ_CALL(result = self->object.spliterator());
      return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
    }
    static PyObject *t_Iterable_get__parameters_(t_Iterable *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator::class$ = NULL;
    jmethodID *Spliterator::mids$ = NULL;
    bool Spliterator::live$ = false;
    jint Spliterator::CONCURRENT = (jint) 0;
    jint Spliterator::DISTINCT = (jint) 0;
    jint Spliterator::IMMUTABLE = (jint) 0;
    jint Spliterator::NONNULL = (jint) 0;
    jint Spliterator::ORDERED = (jint) 0;
    jint Spliterator::SIZED = (jint) 0;
    jint Spliterator::SORTED = (jint) 0;
    jint Spliterator::SUBSIZED = (jint) 0;

    jclass Spliterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_characteristics_55546ef6a647f39b] = env->getMethodID(cls, "characteristics", "()I");
        mids$[mid_estimateSize_6c0ce7e438e5ded4] = env->getMethodID(cls, "estimateSize", "()J");
        mids$[mid_getComparator_127b1bec8b0c3ae1] = env->getMethodID(cls, "getComparator", "()Ljava/util/Comparator;");
        mids$[mid_getExactSizeIfKnown_6c0ce7e438e5ded4] = env->getMethodID(cls, "getExactSizeIfKnown", "()J");
        mids$[mid_hasCharacteristics_96f51a3f36d3a2a7] = env->getMethodID(cls, "hasCharacteristics", "(I)Z");
        mids$[mid_trySplit_fe8f811ebd6e639a] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CONCURRENT = env->getStaticIntField(cls, "CONCURRENT");
        DISTINCT = env->getStaticIntField(cls, "DISTINCT");
        IMMUTABLE = env->getStaticIntField(cls, "IMMUTABLE");
        NONNULL = env->getStaticIntField(cls, "NONNULL");
        ORDERED = env->getStaticIntField(cls, "ORDERED");
        SIZED = env->getStaticIntField(cls, "SIZED");
        SORTED = env->getStaticIntField(cls, "SORTED");
        SUBSIZED = env->getStaticIntField(cls, "SUBSIZED");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Spliterator::characteristics() const
    {
      return env->callIntMethod(this$, mids$[mid_characteristics_55546ef6a647f39b]);
    }

    jlong Spliterator::estimateSize() const
    {
      return env->callLongMethod(this$, mids$[mid_estimateSize_6c0ce7e438e5ded4]);
    }

    ::java::util::Comparator Spliterator::getComparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_getComparator_127b1bec8b0c3ae1]));
    }

    jlong Spliterator::getExactSizeIfKnown() const
    {
      return env->callLongMethod(this$, mids$[mid_getExactSizeIfKnown_6c0ce7e438e5ded4]);
    }

    jboolean Spliterator::hasCharacteristics(jint a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasCharacteristics_96f51a3f36d3a2a7], a0);
    }

    Spliterator Spliterator::trySplit() const
    {
      return Spliterator(env->callObjectMethod(this$, mids$[mid_trySplit_fe8f811ebd6e639a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args);
    static PyObject *t_Spliterator_characteristics(t_Spliterator *self);
    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self);
    static PyObject *t_Spliterator_getComparator(t_Spliterator *self);
    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self);
    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg);
    static PyObject *t_Spliterator_trySplit(t_Spliterator *self);
    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data);
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data);
    static PyGetSetDef t_Spliterator__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator, comparator),
      DECLARE_GET_FIELD(t_Spliterator, exactSizeIfKnown),
      DECLARE_GET_FIELD(t_Spliterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator__methods_[] = {
      DECLARE_METHOD(t_Spliterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator, characteristics, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, estimateSize, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getComparator, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, getExactSizeIfKnown, METH_NOARGS),
      DECLARE_METHOD(t_Spliterator, hasCharacteristics, METH_O),
      DECLARE_METHOD(t_Spliterator, trySplit, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator)[] = {
      { Py_tp_methods, t_Spliterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Spliterator, t_Spliterator, Spliterator);
    PyObject *t_Spliterator::wrap_Object(const Spliterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator *self = (t_Spliterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator), &PY_TYPE_DEF(Spliterator), module, "Spliterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfDouble", make_descriptor(&PY_TYPE_DEF(Spliterator$OfDouble)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfLong", make_descriptor(&PY_TYPE_DEF(Spliterator$OfLong)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfInt", make_descriptor(&PY_TYPE_DEF(Spliterator$OfInt)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "OfPrimitive", make_descriptor(&PY_TYPE_DEF(Spliterator$OfPrimitive)));
    }

    void t_Spliterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "class_", make_descriptor(Spliterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "wrapfn_", make_descriptor(t_Spliterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "boxfn_", make_descriptor(boxObject));
      env->getClass(Spliterator::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "CONCURRENT", make_descriptor(Spliterator::CONCURRENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "DISTINCT", make_descriptor(Spliterator::DISTINCT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "IMMUTABLE", make_descriptor(Spliterator::IMMUTABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "NONNULL", make_descriptor(Spliterator::NONNULL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "ORDERED", make_descriptor(Spliterator::ORDERED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SIZED", make_descriptor(Spliterator::SIZED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SORTED", make_descriptor(Spliterator::SORTED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator), "SUBSIZED", make_descriptor(Spliterator::SUBSIZED));
    }

    static PyObject *t_Spliterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator::initializeClass, 1)))
        return NULL;
      return t_Spliterator::wrap_Object(Spliterator(((t_Spliterator *) arg)->object.this$));
    }
    static PyObject *t_Spliterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator_of_(t_Spliterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator_characteristics(t_Spliterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.characteristics());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Spliterator_estimateSize(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.estimateSize());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_getComparator(t_Spliterator *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Spliterator_getExactSizeIfKnown(t_Spliterator *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Spliterator_hasCharacteristics(t_Spliterator *self, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.hasCharacteristics(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasCharacteristics", arg);
      return NULL;
    }

    static PyObject *t_Spliterator_trySplit(t_Spliterator *self)
    {
      Spliterator result((jobject) NULL);
      OBJ_CALL(result = self->object.trySplit());
      return t_Spliterator::wrap_Object(result, self->parameters[0]);
    }
    static PyObject *t_Spliterator_get__parameters_(t_Spliterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Spliterator_get__comparator(t_Spliterator *self, void *data)
    {
      ::java::util::Comparator value((jobject) NULL);
      OBJ_CALL(value = self->object.getComparator());
      return ::java::util::t_Comparator::wrap_Object(value);
    }

    static PyObject *t_Spliterator_get__exactSizeIfKnown(t_Spliterator *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getExactSizeIfKnown());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Readable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Readable::class$ = NULL;
    jmethodID *Readable::mids$ = NULL;
    bool Readable::live$ = false;

    jclass Readable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Readable");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Readable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Readable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Readable__methods_[] = {
      DECLARE_METHOD(t_Readable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Readable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Readable)[] = {
      { Py_tp_methods, t_Readable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Readable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Readable, t_Readable, Readable);

    void t_Readable::install(PyObject *module)
    {
      installType(&PY_TYPE(Readable), &PY_TYPE_DEF(Readable), module, "Readable", 0);
    }

    void t_Readable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Readable), "class_", make_descriptor(Readable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Readable), "wrapfn_", make_descriptor(t_Readable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Readable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Readable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Readable::initializeClass, 1)))
        return NULL;
      return t_Readable::wrap_Object(Readable(((t_Readable *) arg)->object.this$));
    }
    static PyObject *t_Readable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Readable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$FilteringMode::class$ = NULL;
    jmethodID *Locale$FilteringMode::mids$ = NULL;
    bool Locale$FilteringMode::live$ = false;
    Locale$FilteringMode *Locale$FilteringMode::AUTOSELECT_FILTERING = NULL;
    Locale$FilteringMode *Locale$FilteringMode::EXTENDED_FILTERING = NULL;
    Locale$FilteringMode *Locale$FilteringMode::IGNORE_EXTENDED_RANGES = NULL;
    Locale$FilteringMode *Locale$FilteringMode::MAP_EXTENDED_RANGES = NULL;
    Locale$FilteringMode *Locale$FilteringMode::REJECT_EXTENDED_RANGES = NULL;

    jclass Locale$FilteringMode::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$FilteringMode");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_8ea2c58d1dbf75bf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;");
        mids$[mid_values_16e997a292b175a6] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$FilteringMode;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        AUTOSELECT_FILTERING = new Locale$FilteringMode(env->getStaticObjectField(cls, "AUTOSELECT_FILTERING", "Ljava/util/Locale$FilteringMode;"));
        EXTENDED_FILTERING = new Locale$FilteringMode(env->getStaticObjectField(cls, "EXTENDED_FILTERING", "Ljava/util/Locale$FilteringMode;"));
        IGNORE_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "IGNORE_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        MAP_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "MAP_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        REJECT_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "REJECT_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$FilteringMode Locale$FilteringMode::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$FilteringMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8ea2c58d1dbf75bf], a0.this$));
    }

    JArray< Locale$FilteringMode > Locale$FilteringMode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$FilteringMode >(env->callStaticObjectMethod(cls, mids$[mid_values_16e997a292b175a6]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$FilteringMode_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$FilteringMode_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$FilteringMode_of_(t_Locale$FilteringMode *self, PyObject *args);
    static PyObject *t_Locale$FilteringMode_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$FilteringMode_values(PyTypeObject *type);
    static PyObject *t_Locale$FilteringMode_get__parameters_(t_Locale$FilteringMode *self, void *data);
    static PyGetSetDef t_Locale$FilteringMode__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$FilteringMode, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$FilteringMode__methods_[] = {
      DECLARE_METHOD(t_Locale$FilteringMode, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$FilteringMode, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$FilteringMode)[] = {
      { Py_tp_methods, t_Locale$FilteringMode__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$FilteringMode__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$FilteringMode)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$FilteringMode, t_Locale$FilteringMode, Locale$FilteringMode);
    PyObject *t_Locale$FilteringMode::wrap_Object(const Locale$FilteringMode& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$FilteringMode::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$FilteringMode *self = (t_Locale$FilteringMode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$FilteringMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$FilteringMode::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$FilteringMode *self = (t_Locale$FilteringMode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$FilteringMode::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$FilteringMode), &PY_TYPE_DEF(Locale$FilteringMode), module, "Locale$FilteringMode", 0);
    }

    void t_Locale$FilteringMode::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "class_", make_descriptor(Locale$FilteringMode::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "wrapfn_", make_descriptor(t_Locale$FilteringMode::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$FilteringMode::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "AUTOSELECT_FILTERING", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::AUTOSELECT_FILTERING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "EXTENDED_FILTERING", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::EXTENDED_FILTERING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "IGNORE_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::IGNORE_EXTENDED_RANGES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "MAP_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::MAP_EXTENDED_RANGES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "REJECT_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::REJECT_EXTENDED_RANGES)));
    }

    static PyObject *t_Locale$FilteringMode_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$FilteringMode::initializeClass, 1)))
        return NULL;
      return t_Locale$FilteringMode::wrap_Object(Locale$FilteringMode(((t_Locale$FilteringMode *) arg)->object.this$));
    }
    static PyObject *t_Locale$FilteringMode_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$FilteringMode::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$FilteringMode_of_(t_Locale$FilteringMode *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$FilteringMode_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$FilteringMode result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$FilteringMode::valueOf(a0));
        return t_Locale$FilteringMode::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$FilteringMode_values(PyTypeObject *type)
    {
      JArray< Locale$FilteringMode > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$FilteringMode::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$FilteringMode::wrap_jobject);
    }
    static PyObject *t_Locale$FilteringMode_get__parameters_(t_Locale$FilteringMode *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StringBuilder::class$ = NULL;
    jmethodID *StringBuilder::mids$ = NULL;
    bool StringBuilder::live$ = false;

    jclass StringBuilder::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StringBuilder");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_902d69c788edaf18] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_eaf3dbbe8784abe8] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
        mids$[mid_append_60666db53c5b6ff6] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
        mids$[mid_append_d7f33ece59807efe] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_append_1a984036c7a418a8] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
        mids$[mid_append_e1ef0a90caab12b1] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
        mids$[mid_append_4136421e4010964e] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
        mids$[mid_append_7f35b1ce88919449] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
        mids$[mid_append_3131a63bcbb46a0e] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_append_f3de7c767fb9db3e] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_append_7fb954e26d2c2ba8] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_append_c9be8ccc27b6d3d0] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
        mids$[mid_append_85cc82ac5ff3bf6c] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
        mids$[mid_append_c90be53f3f034b2f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_appendCodePoint_3131a63bcbb46a0e] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_compareTo_7eaeb3f2ac2a5ee7] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuilder;)I");
        mids$[mid_delete_57f14c54eea385e8] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_deleteCharAt_3131a63bcbb46a0e] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_indexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_7c969bab81d289ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_e491aa6ca9aaa9ec] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
        mids$[mid_insert_27ec6ebf960d2b36] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_03438f7a5e3f3482] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_3f3466f78dbd2832] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
        mids$[mid_insert_2976292770885946] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
        mids$[mid_insert_6e2b08c50ff3f4e8] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
        mids$[mid_insert_57f14c54eea385e8] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_insert_a9c2d1fe30557a4c] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_f7710146c89f9ad4] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_be480f02a6f4d23e] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_80f63834055f1167] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
        mids$[mid_insert_32cd181c7712e29d] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_lastIndexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_7c969bab81d289ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_replace_5fd2d8c00b76997f] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_reverse_0a26bdc413493a71] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuilder::StringBuilder() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    StringBuilder::StringBuilder(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    StringBuilder::StringBuilder(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    StringBuilder::StringBuilder(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_902d69c788edaf18, a0.this$)) {}

    StringBuilder StringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_eaf3dbbe8784abe8], a0.this$));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_60666db53c5b6ff6], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::String & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_d7f33ece59807efe], a0.this$));
    }

    StringBuilder StringBuilder::append(jboolean a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_1a984036c7a418a8], a0));
    }

    StringBuilder StringBuilder::append(jchar a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_e1ef0a90caab12b1], a0));
    }

    StringBuilder StringBuilder::append(jdouble a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_4136421e4010964e], a0));
    }

    StringBuilder StringBuilder::append(jfloat a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_7f35b1ce88919449], a0));
    }

    StringBuilder StringBuilder::append(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_3131a63bcbb46a0e], a0));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_f3de7c767fb9db3e], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::Object & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_7fb954e26d2c2ba8], a0.this$));
    }

    StringBuilder StringBuilder::append(jlong a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_c9be8ccc27b6d3d0], a0));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_85cc82ac5ff3bf6c], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_c90be53f3f034b2f], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::appendCodePoint(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_3131a63bcbb46a0e], a0));
    }

    jint StringBuilder::compareTo(const StringBuilder & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_7eaeb3f2ac2a5ee7], a0.this$);
    }

    StringBuilder StringBuilder::delete$(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_delete_57f14c54eea385e8], a0, a1));
    }

    StringBuilder StringBuilder::deleteCharAt(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_3131a63bcbb46a0e], a0));
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_7c969bab81d289ef], a0.this$, a1);
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e491aa6ca9aaa9ec], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_27ec6ebf960d2b36], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jboolean a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_03438f7a5e3f3482], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jchar a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3f3466f78dbd2832], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jdouble a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_2976292770885946], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jfloat a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6e2b08c50ff3f4e8], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_57f14c54eea385e8], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_a9c2d1fe30557a4c], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_f7710146c89f9ad4], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jlong a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_be480f02a6f4d23e], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_80f63834055f1167], a0, a1.this$, a2, a3));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_32cd181c7712e29d], a0, a1.this$, a2, a3));
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_7c969bab81d289ef], a0.this$, a1);
    }

    StringBuilder StringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_replace_5fd2d8c00b76997f], a0, a1, a2.this$));
    }

    StringBuilder StringBuilder::reverse() const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_0a26bdc413493a71]));
    }

    ::java::lang::String StringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StringBuilder_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringBuilder_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringBuilder_init_(t_StringBuilder *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringBuilder_append(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_appendCodePoint(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_compareTo(t_StringBuilder *self, PyObject *arg);
    static PyObject *t_StringBuilder_delete(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_deleteCharAt(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_indexOf(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_insert(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_lastIndexOf(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_replace(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_reverse(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_toString(t_StringBuilder *self, PyObject *args);

    static PyMethodDef t_StringBuilder__methods_[] = {
      DECLARE_METHOD(t_StringBuilder, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuilder, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuilder, append, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, appendCodePoint, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, compareTo, METH_O),
      DECLARE_METHOD(t_StringBuilder, delete, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, deleteCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, insert, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, replace, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, reverse, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringBuilder)[] = {
      { Py_tp_methods, t_StringBuilder__methods_ },
      { Py_tp_init, (void *) t_StringBuilder_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringBuilder)[] = {
      &PY_TYPE_DEF(::java::lang::AbstractStringBuilder),
      NULL
    };

    DEFINE_TYPE(StringBuilder, t_StringBuilder, StringBuilder);

    void t_StringBuilder::install(PyObject *module)
    {
      installType(&PY_TYPE(StringBuilder), &PY_TYPE_DEF(StringBuilder), module, "StringBuilder", 0);
    }

    void t_StringBuilder::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "class_", make_descriptor(StringBuilder::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "wrapfn_", make_descriptor(t_StringBuilder::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringBuilder_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringBuilder::initializeClass, 1)))
        return NULL;
      return t_StringBuilder::wrap_Object(StringBuilder(((t_StringBuilder *) arg)->object.this$));
    }
    static PyObject *t_StringBuilder_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringBuilder::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringBuilder_init_(t_StringBuilder *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringBuilder object((jobject) NULL);

          INT_CALL(object = StringBuilder());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = StringBuilder(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringBuilder(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            INT_CALL(object = StringBuilder(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringBuilder_append(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jchar a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jlong a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuilder::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringBuilder_appendCodePoint(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.appendCodePoint(a0));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "appendCodePoint", args, 2);
    }

    static PyObject *t_StringBuilder_compareTo(t_StringBuilder *self, PyObject *arg)
    {
      StringBuilder a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", StringBuilder::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_StringBuilder_delete(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.delete$(a0, a1));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "delete", args, 2);
    }

    static PyObject *t_StringBuilder_deleteCharAt(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.deleteCharAt(a0));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "deleteCharAt", args, 2);
    }

    static PyObject *t_StringBuilder_indexOf(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_StringBuilder_insert(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[C", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::String a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Is", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jboolean a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jchar a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jdouble a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jfloat a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jint a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IO", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Io", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jlong a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[CII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IOII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuilder::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "insert", args, 2);
    }

    static PyObject *t_StringBuilder_lastIndexOf(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_StringBuilder_replace(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::String a2((jobject) NULL);
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "IIs", &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_StringBuilder_reverse(t_StringBuilder *self, PyObject *args)
    {
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reverse());
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "reverse", args, 2);
    }

    static PyObject *t_StringBuilder_toString(t_StringBuilder *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *InterruptedException::class$ = NULL;
    jmethodID *InterruptedException::mids$ = NULL;
    bool InterruptedException::live$ = false;

    jclass InterruptedException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/InterruptedException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InterruptedException::InterruptedException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    InterruptedException::InterruptedException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_InterruptedException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InterruptedException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InterruptedException_init_(t_InterruptedException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InterruptedException__methods_[] = {
      DECLARE_METHOD(t_InterruptedException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InterruptedException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InterruptedException)[] = {
      { Py_tp_methods, t_InterruptedException__methods_ },
      { Py_tp_init, (void *) t_InterruptedException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InterruptedException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(InterruptedException, t_InterruptedException, InterruptedException);

    void t_InterruptedException::install(PyObject *module)
    {
      installType(&PY_TYPE(InterruptedException), &PY_TYPE_DEF(InterruptedException), module, "InterruptedException", 0);
    }

    void t_InterruptedException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "class_", make_descriptor(InterruptedException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "wrapfn_", make_descriptor(t_InterruptedException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InterruptedException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InterruptedException::initializeClass, 1)))
        return NULL;
      return t_InterruptedException::wrap_Object(InterruptedException(((t_InterruptedException *) arg)->object.this$));
    }
    static PyObject *t_InterruptedException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InterruptedException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InterruptedException_init_(t_InterruptedException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          InterruptedException object((jobject) NULL);

          INT_CALL(object = InterruptedException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InterruptedException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InterruptedException(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Runnable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Runnable::class$ = NULL;
    jmethodID *Runnable::mids$ = NULL;
    bool Runnable::live$ = false;

    jclass Runnable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Runnable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_run_a1fa5dae97ea5ed2] = env->getMethodID(cls, "run", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Runnable::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Runnable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Runnable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Runnable_run(t_Runnable *self);

    static PyMethodDef t_Runnable__methods_[] = {
      DECLARE_METHOD(t_Runnable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Runnable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Runnable, run, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Runnable)[] = {
      { Py_tp_methods, t_Runnable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Runnable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Runnable, t_Runnable, Runnable);

    void t_Runnable::install(PyObject *module)
    {
      installType(&PY_TYPE(Runnable), &PY_TYPE_DEF(Runnable), module, "Runnable", 0);
    }

    void t_Runnable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "class_", make_descriptor(Runnable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "wrapfn_", make_descriptor(t_Runnable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Runnable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Runnable::initializeClass, 1)))
        return NULL;
      return t_Runnable::wrap_Object(Runnable(((t_Runnable *) arg)->object.this$));
    }
    static PyObject *t_Runnable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Runnable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Runnable_run(t_Runnable *self)
    {
      OBJ_CALL(self->object.run());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Hashtable.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Hashtable::class$ = NULL;
    jmethodID *Hashtable::mids$ = NULL;
    bool Hashtable::live$ = false;

    jclass Hashtable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Hashtable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_6648520b18d8ef1d] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_71c8ec50293ab209] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_57aeac8743844cd2] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_2329cf24e33e570d] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_57aeac8743844cd2] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_2329cf24e33e570d] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_b13624253707cc45] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_2329cf24e33e570d] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9e90e99288cb1520] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_a1fa5dae97ea5ed2] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Hashtable::Hashtable() : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Hashtable::Hashtable(jint a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    Hashtable::Hashtable(const ::java::util::Map & a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_6648520b18d8ef1d, a0.this$)) {}

    Hashtable::Hashtable(jint a0, jfloat a1) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_71c8ec50293ab209, a0, a1)) {}

    void Hashtable::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object Hashtable::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean Hashtable::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Hashtable::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Hashtable::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Enumeration Hashtable::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_57aeac8743844cd2]));
    }

    ::java::util::Set Hashtable::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    jboolean Hashtable::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Hashtable::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object Hashtable::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jint Hashtable::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Hashtable::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Set Hashtable::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    ::java::util::Enumeration Hashtable::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_57aeac8743844cd2]));
    }

    ::java::lang::Object Hashtable::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    void Hashtable::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
    }

    ::java::lang::Object Hashtable::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::Object Hashtable::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jboolean Hashtable::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_b13624253707cc45], a0.this$, a1.this$);
    }

    ::java::lang::Object Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jboolean Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9e90e99288cb1520], a0.this$, a1.this$, a2.this$);
    }

    jint Hashtable::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::lang::String Hashtable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::util::Collection Hashtable::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Hashtable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Hashtable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Hashtable_of_(t_Hashtable *self, PyObject *args);
    static int t_Hashtable_init_(t_Hashtable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Hashtable_clear(t_Hashtable *self);
    static PyObject *t_Hashtable_clone(t_Hashtable *self);
    static PyObject *t_Hashtable_contains(t_Hashtable *self, PyObject *arg);
    static PyObject *t_Hashtable_containsKey(t_Hashtable *self, PyObject *arg);
    static PyObject *t_Hashtable_containsValue(t_Hashtable *self, PyObject *arg);
    static PyObject *t_Hashtable_elements(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_entrySet(t_Hashtable *self);
    static PyObject *t_Hashtable_equals(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_get(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_getOrDefault(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_hashCode(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_isEmpty(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_keySet(t_Hashtable *self);
    static PyObject *t_Hashtable_keys(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_put(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_putAll(t_Hashtable *self, PyObject *arg);
    static PyObject *t_Hashtable_putIfAbsent(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_remove(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_replace(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_size(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_toString(t_Hashtable *self, PyObject *args);
    static PyObject *t_Hashtable_values(t_Hashtable *self);
    static PyObject *t_Hashtable_get__empty(t_Hashtable *self, void *data);
    static PyObject *t_Hashtable_get__parameters_(t_Hashtable *self, void *data);
    static PyGetSetDef t_Hashtable__fields_[] = {
      DECLARE_GET_FIELD(t_Hashtable, empty),
      DECLARE_GET_FIELD(t_Hashtable, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Hashtable__methods_[] = {
      DECLARE_METHOD(t_Hashtable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Hashtable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Hashtable, of_, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, clear, METH_NOARGS),
      DECLARE_METHOD(t_Hashtable, clone, METH_NOARGS),
      DECLARE_METHOD(t_Hashtable, contains, METH_O),
      DECLARE_METHOD(t_Hashtable, containsKey, METH_O),
      DECLARE_METHOD(t_Hashtable, containsValue, METH_O),
      DECLARE_METHOD(t_Hashtable, elements, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Hashtable, equals, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, get, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Hashtable, keys, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, put, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, putAll, METH_O),
      DECLARE_METHOD(t_Hashtable, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, remove, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, replace, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, size, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, toString, METH_VARARGS),
      DECLARE_METHOD(t_Hashtable, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Hashtable)[] = {
      { Py_tp_methods, t_Hashtable__methods_ },
      { Py_tp_init, (void *) t_Hashtable_init_ },
      { Py_tp_getset, t_Hashtable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Hashtable)[] = {
      &PY_TYPE_DEF(::java::util::Dictionary),
      NULL
    };

    DEFINE_TYPE(Hashtable, t_Hashtable, Hashtable);
    PyObject *t_Hashtable::wrap_Object(const Hashtable& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Hashtable::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Hashtable *self = (t_Hashtable *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Hashtable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Hashtable::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Hashtable *self = (t_Hashtable *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Hashtable::install(PyObject *module)
    {
      installType(&PY_TYPE(Hashtable), &PY_TYPE_DEF(Hashtable), module, "Hashtable", 0);
    }

    void t_Hashtable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Hashtable), "class_", make_descriptor(Hashtable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Hashtable), "wrapfn_", make_descriptor(t_Hashtable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Hashtable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Hashtable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Hashtable::initializeClass, 1)))
        return NULL;
      return t_Hashtable::wrap_Object(Hashtable(((t_Hashtable *) arg)->object.this$));
    }
    static PyObject *t_Hashtable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Hashtable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Hashtable_of_(t_Hashtable *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Hashtable_init_(t_Hashtable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Hashtable object((jobject) NULL);

          INT_CALL(object = Hashtable());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          Hashtable object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Hashtable(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          Hashtable object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = Hashtable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          Hashtable object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = Hashtable(a0, a1));
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

    static PyObject *t_Hashtable_clear(t_Hashtable *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Hashtable_clone(t_Hashtable *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Hashtable_contains(t_Hashtable *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_Hashtable_containsKey(t_Hashtable *self, PyObject *arg)
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

    static PyObject *t_Hashtable_containsValue(t_Hashtable *self, PyObject *arg)
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

    static PyObject *t_Hashtable_elements(t_Hashtable *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.elements());
        return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "elements", args, 2);
    }

    static PyObject *t_Hashtable_entrySet(t_Hashtable *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Hashtable_equals(t_Hashtable *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Hashtable_get(t_Hashtable *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_Hashtable_getOrDefault(t_Hashtable *self, PyObject *args)
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

    static PyObject *t_Hashtable_hashCode(t_Hashtable *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Hashtable_isEmpty(t_Hashtable *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Hashtable_keySet(t_Hashtable *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Hashtable_keys(t_Hashtable *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keys());
        return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "keys", args, 2);
    }

    static PyObject *t_Hashtable_put(t_Hashtable *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_Hashtable_putAll(t_Hashtable *self, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Hashtable_putIfAbsent(t_Hashtable *self, PyObject *args)
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

    static PyObject *t_Hashtable_remove(t_Hashtable *self, PyObject *args)
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

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Hashtable_replace(t_Hashtable *self, PyObject *args)
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

    static PyObject *t_Hashtable_size(t_Hashtable *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Hashtable_toString(t_Hashtable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Hashtable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Hashtable_values(t_Hashtable *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Hashtable_get__parameters_(t_Hashtable *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Hashtable_get__empty(t_Hashtable *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Optional.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Optional::class$ = NULL;
    jmethodID *Optional::mids$ = NULL;
    bool Optional::live$ = false;

    jclass Optional::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Optional");

        mids$ = new jmethodID[max_mid];
        mids$[mid_empty_9fe5189c8c3b230d] = env->getStaticMethodID(cls, "empty", "()Ljava/util/Optional;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_541690f9ee81d3ad] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_9ab94ac1dc23b105] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_9cbbcd2b19204a9a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_ofNullable_9cbbcd2b19204a9a] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_or_c21c430465811668] = env->getMethodID(cls, "or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;");
        mids$[mid_orElse_5804c890f94a02b6] = env->getMethodID(cls, "orElse", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_orElseGet_800ae6b5a8263b1c] = env->getMethodID(cls, "orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_orElseThrow_541690f9ee81d3ad] = env->getMethodID(cls, "orElseThrow", "()Ljava/lang/Object;");
        mids$[mid_orElseThrow_800ae6b5a8263b1c] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_stream_14e21bf777ff0ccf] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Optional Optional::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_empty_9fe5189c8c3b230d]));
    }

    jboolean Optional::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Optional::get$() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_541690f9ee81d3ad]));
    }

    jint Optional::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Optional::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    jboolean Optional::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_9ab94ac1dc23b105]);
    }

    Optional Optional::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_of_9cbbcd2b19204a9a], a0.this$));
    }

    Optional Optional::ofNullable(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_9cbbcd2b19204a9a], a0.this$));
    }

    Optional Optional::or$(const ::java::util::function::Supplier & a0) const
    {
      return Optional(env->callObjectMethod(this$, mids$[mid_or_c21c430465811668], a0.this$));
    }

    ::java::lang::Object Optional::orElse(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElse_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object Optional::orElseGet(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseGet_800ae6b5a8263b1c], a0.this$));
    }

    ::java::lang::Object Optional::orElseThrow() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_541690f9ee81d3ad]));
    }

    ::java::lang::Object Optional::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_800ae6b5a8263b1c], a0.this$));
    }

    ::java::util::stream::Stream Optional::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_14e21bf777ff0ccf]));
    }

    ::java::lang::String Optional::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Optional_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Optional_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Optional_of_(t_Optional *self, PyObject *args);
    static PyObject *t_Optional_empty(PyTypeObject *type);
    static PyObject *t_Optional_equals(t_Optional *self, PyObject *args);
    static PyObject *t_Optional_get(t_Optional *self);
    static PyObject *t_Optional_hashCode(t_Optional *self, PyObject *args);
    static PyObject *t_Optional_isEmpty(t_Optional *self);
    static PyObject *t_Optional_isPresent(t_Optional *self);
    static PyObject *t_Optional_of(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Optional_ofNullable(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Optional_or(t_Optional *self, PyObject *arg);
    static PyObject *t_Optional_orElse(t_Optional *self, PyObject *arg);
    static PyObject *t_Optional_orElseGet(t_Optional *self, PyObject *arg);
    static PyObject *t_Optional_orElseThrow(t_Optional *self, PyObject *args);
    static PyObject *t_Optional_stream(t_Optional *self);
    static PyObject *t_Optional_toString(t_Optional *self, PyObject *args);
    static PyObject *t_Optional_get__present(t_Optional *self, void *data);
    static PyObject *t_Optional_get__parameters_(t_Optional *self, void *data);
    static PyGetSetDef t_Optional__fields_[] = {
      DECLARE_GET_FIELD(t_Optional, present),
      DECLARE_GET_FIELD(t_Optional, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Optional__methods_[] = {
      DECLARE_METHOD(t_Optional, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Optional, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Optional, of_, METH_VARARGS),
      DECLARE_METHOD(t_Optional, empty, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Optional, equals, METH_VARARGS),
      DECLARE_METHOD(t_Optional, get, METH_NOARGS),
      DECLARE_METHOD(t_Optional, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Optional, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Optional, isPresent, METH_NOARGS),
      DECLARE_METHOD(t_Optional, of, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Optional, ofNullable, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Optional, or, METH_O),
      DECLARE_METHOD(t_Optional, orElse, METH_O),
      DECLARE_METHOD(t_Optional, orElseGet, METH_O),
      DECLARE_METHOD(t_Optional, orElseThrow, METH_VARARGS),
      DECLARE_METHOD(t_Optional, stream, METH_NOARGS),
      DECLARE_METHOD(t_Optional, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Optional)[] = {
      { Py_tp_methods, t_Optional__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Optional__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Optional)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Optional, t_Optional, Optional);
    PyObject *t_Optional::wrap_Object(const Optional& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Optional::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Optional *self = (t_Optional *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Optional::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Optional::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Optional *self = (t_Optional *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Optional::install(PyObject *module)
    {
      installType(&PY_TYPE(Optional), &PY_TYPE_DEF(Optional), module, "Optional", 0);
    }

    void t_Optional::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Optional), "class_", make_descriptor(Optional::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Optional), "wrapfn_", make_descriptor(t_Optional::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Optional), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Optional_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Optional::initializeClass, 1)))
        return NULL;
      return t_Optional::wrap_Object(Optional(((t_Optional *) arg)->object.this$));
    }
    static PyObject *t_Optional_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Optional::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Optional_of_(t_Optional *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Optional_empty(PyTypeObject *type)
    {
      Optional result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Optional::empty());
      return t_Optional::wrap_Object(result);
    }

    static PyObject *t_Optional_equals(t_Optional *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Optional), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Optional_get(t_Optional *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.get$());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Optional_hashCode(t_Optional *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Optional), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Optional_isEmpty(t_Optional *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Optional_isPresent(t_Optional *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPresent());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Optional_of(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      Optional result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Optional::of(a0));
        return t_Optional::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "of", arg);
      return NULL;
    }

    static PyObject *t_Optional_ofNullable(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      Optional result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Optional::ofNullable(a0));
        return t_Optional::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofNullable", arg);
      return NULL;
    }

    static PyObject *t_Optional_or(t_Optional *self, PyObject *arg)
    {
      ::java::util::function::Supplier a0((jobject) NULL);
      PyTypeObject **p0;
      Optional result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
      {
        OBJ_CALL(result = self->object.or$(a0));
        return t_Optional::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "or", arg);
      return NULL;
    }

    static PyObject *t_Optional_orElse(t_Optional *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.orElse(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "orElse", arg);
      return NULL;
    }

    static PyObject *t_Optional_orElseGet(t_Optional *self, PyObject *arg)
    {
      ::java::util::function::Supplier a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
      {
        OBJ_CALL(result = self->object.orElseGet(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "orElseGet", arg);
      return NULL;
    }

    static PyObject *t_Optional_orElseThrow(t_Optional *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.orElseThrow());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::function::Supplier a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(result = self->object.orElseThrow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "orElseThrow", args);
      return NULL;
    }

    static PyObject *t_Optional_stream(t_Optional *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Optional_toString(t_Optional *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Optional), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Optional_get__parameters_(t_Optional *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Optional_get__present(t_Optional *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPresent());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Appendable.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Appendable::class$ = NULL;
    jmethodID *Appendable::mids$ = NULL;
    bool Appendable::live$ = false;

    jclass Appendable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Appendable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_4c1de7c45659e618] = env->getMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
        mids$[mid_append_424aa1916df636cd] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
        mids$[mid_append_df3e7cbdb59c2e93] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Appendable Appendable::append(jchar a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_4c1de7c45659e618], a0));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_424aa1916df636cd], a0.this$));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_df3e7cbdb59c2e93], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Appendable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Appendable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Appendable_append(t_Appendable *self, PyObject *args);

    static PyMethodDef t_Appendable__methods_[] = {
      DECLARE_METHOD(t_Appendable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Appendable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Appendable, append, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Appendable)[] = {
      { Py_tp_methods, t_Appendable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Appendable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Appendable, t_Appendable, Appendable);

    void t_Appendable::install(PyObject *module)
    {
      installType(&PY_TYPE(Appendable), &PY_TYPE_DEF(Appendable), module, "Appendable", 0);
    }

    void t_Appendable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Appendable), "class_", make_descriptor(Appendable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Appendable), "wrapfn_", make_descriptor(t_Appendable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Appendable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Appendable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Appendable::initializeClass, 1)))
        return NULL;
      return t_Appendable::wrap_Object(Appendable(((t_Appendable *) arg)->object.this$));
    }
    static PyObject *t_Appendable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Appendable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Appendable_append(t_Appendable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Appendable result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Appendable::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Appendable result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Appendable::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Appendable result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Appendable::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/CharSequence.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Appendable.h"
#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *AbstractStringBuilder::class$ = NULL;
    jmethodID *AbstractStringBuilder::mids$ = NULL;
    bool AbstractStringBuilder::live$ = false;

    jclass AbstractStringBuilder::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/AbstractStringBuilder");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_eeac46bfc5f19911] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_8ac7bbdcf0772301] = env->getMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_08954f20614f99db] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_6651db8017a8ea53] = env->getMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_eda3b36379a08278] = env->getMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_dc1ead4f63fabc8d] = env->getMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_ff567bdc3be68f09] = env->getMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_7305a33cb3e778be] = env->getMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_c0ab81aca510f711] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_99bead36cc783dc8] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_5906a161daedef20] = env->getMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_ea386cc9cae6c17c] = env->getMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_3663a1a487f3dd95] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_appendCodePoint_7305a33cb3e778be] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_capacity_55546ef6a647f39b] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_f41af25e73e22f74] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0e7cf35192c3effe] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0e7cf35192c3effe] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_92ecd94558bf0c68] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_delete_60790849b0f0e1a8] = env->getMethodID(cls, "delete", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_deleteCharAt_7305a33cb3e778be] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_ensureCapacity_44ed599e93e8a30c] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_cc06cb22124df445] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_7c969bab81d289ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_33fc2f95fbac3d97] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_1d1ac2fd9bef7ed4] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_01cbf6814da1cd55] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_d77df14c68e11d0c] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_6558d544bddc1743] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_d02424327d0fecba] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_60790849b0f0e1a8] = env->getMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_9746bc0a4b697bb0] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_a84a06cbeb7afbb2] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_e678c6eeb049af0c] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_0d71fee93d9b2c2f] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_a606b35b64d29ff6] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_lastIndexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_7c969bab81d289ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_55546ef6a647f39b] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_92ecd94558bf0c68] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_5c2ff25829a959e6] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_reverse_c0b9788e67e64e56] = env->getMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
        mids$[mid_setCharAt_563c77446852e53d] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_44ed599e93e8a30c] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_e866f407305d4016] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_2a9bffd3d5397f7c] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_e91e53c42d39aef9] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_eeac46bfc5f19911], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_8ac7bbdcf0772301], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::String & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_08954f20614f99db], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jboolean a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_6651db8017a8ea53], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jchar a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_eda3b36379a08278], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jdouble a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_dc1ead4f63fabc8d], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jfloat a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_ff567bdc3be68f09], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_7305a33cb3e778be], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_c0ab81aca510f711], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::Object & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_99bead36cc783dc8], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jlong a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_5906a161daedef20], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_ea386cc9cae6c17c], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_3663a1a487f3dd95], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::appendCodePoint(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_7305a33cb3e778be], a0));
    }

    jint AbstractStringBuilder::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_55546ef6a647f39b]);
    }

    jchar AbstractStringBuilder::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_f41af25e73e22f74], a0);
    }

    jint AbstractStringBuilder::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0e7cf35192c3effe], a0);
    }

    jint AbstractStringBuilder::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0e7cf35192c3effe], a0);
    }

    jint AbstractStringBuilder::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_92ecd94558bf0c68], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::delete$(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_delete_60790849b0f0e1a8], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::deleteCharAt(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_7305a33cb3e778be], a0));
    }

    void AbstractStringBuilder::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_44ed599e93e8a30c], a0);
    }

    void AbstractStringBuilder::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_cc06cb22124df445], a0, a1, a2.this$, a3);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_7c969bab81d289ef], a0.this$, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_33fc2f95fbac3d97], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_1d1ac2fd9bef7ed4], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jboolean a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_01cbf6814da1cd55], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jchar a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_d77df14c68e11d0c], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jdouble a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6558d544bddc1743], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jfloat a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_d02424327d0fecba], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_60790849b0f0e1a8], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9746bc0a4b697bb0], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_a84a06cbeb7afbb2], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jlong a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e678c6eeb049af0c], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_0d71fee93d9b2c2f], a0, a1.this$, a2, a3));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_a606b35b64d29ff6], a0, a1.this$, a2, a3));
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_7c969bab81d289ef], a0.this$, a1);
    }

    jint AbstractStringBuilder::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_55546ef6a647f39b]);
    }

    jint AbstractStringBuilder::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_92ecd94558bf0c68], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_replace_5c2ff25829a959e6], a0, a1, a2.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::reverse() const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_c0b9788e67e64e56]));
    }

    void AbstractStringBuilder::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_563c77446852e53d], a0, a1);
    }

    void AbstractStringBuilder::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_44ed599e93e8a30c], a0);
    }

    ::java::lang::CharSequence AbstractStringBuilder::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_e866f407305d4016], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_2a9bffd3d5397f7c], a0));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_e91e53c42d39aef9], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    void AbstractStringBuilder::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_AbstractStringBuilder_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_append(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_appendCodePoint(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_capacity(t_AbstractStringBuilder *self);
    static PyObject *t_AbstractStringBuilder_charAt(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_codePointAt(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_codePointBefore(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_codePointCount(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_delete(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_deleteCharAt(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_ensureCapacity(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_getChars(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_indexOf(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_insert(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_lastIndexOf(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_length(t_AbstractStringBuilder *self);
    static PyObject *t_AbstractStringBuilder_offsetByCodePoints(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_replace(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_reverse(t_AbstractStringBuilder *self);
    static PyObject *t_AbstractStringBuilder_setCharAt(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_setLength(t_AbstractStringBuilder *self, PyObject *arg);
    static PyObject *t_AbstractStringBuilder_subSequence(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_substring(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_toString(t_AbstractStringBuilder *self, PyObject *args);
    static PyObject *t_AbstractStringBuilder_trimToSize(t_AbstractStringBuilder *self);

    static PyMethodDef t_AbstractStringBuilder__methods_[] = {
      DECLARE_METHOD(t_AbstractStringBuilder, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractStringBuilder, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractStringBuilder, append, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, appendCodePoint, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, capacity, METH_NOARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, charAt, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, codePointAt, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, codePointBefore, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, delete, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, deleteCharAt, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, ensureCapacity, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, getChars, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, insert, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, length, METH_NOARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, replace, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, reverse, METH_NOARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, setCharAt, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, setLength, METH_O),
      DECLARE_METHOD(t_AbstractStringBuilder, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, substring, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractStringBuilder, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractStringBuilder)[] = {
      { Py_tp_methods, t_AbstractStringBuilder__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractStringBuilder)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractStringBuilder, t_AbstractStringBuilder, AbstractStringBuilder);

    void t_AbstractStringBuilder::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractStringBuilder), &PY_TYPE_DEF(AbstractStringBuilder), module, "AbstractStringBuilder", 0);
    }

    void t_AbstractStringBuilder::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStringBuilder), "class_", make_descriptor(AbstractStringBuilder::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStringBuilder), "wrapfn_", make_descriptor(t_AbstractStringBuilder::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStringBuilder), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractStringBuilder_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractStringBuilder::initializeClass, 1)))
        return NULL;
      return t_AbstractStringBuilder::wrap_Object(AbstractStringBuilder(((t_AbstractStringBuilder *) arg)->object.this$));
    }
    static PyObject *t_AbstractStringBuilder_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractStringBuilder::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractStringBuilder_append(t_AbstractStringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jchar a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jlong a0;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_appendCodePoint(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;
      AbstractStringBuilder result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.appendCodePoint(a0));
        return t_AbstractStringBuilder::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "appendCodePoint", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_capacity(t_AbstractStringBuilder *self)
    {
      jint result;
      OBJ_CALL(result = self->object.capacity());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractStringBuilder_charAt(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_codePointAt(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_codePointBefore(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_codePointCount(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_delete(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      AbstractStringBuilder result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.delete$(a0, a1));
        return t_AbstractStringBuilder::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "delete", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_deleteCharAt(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;
      AbstractStringBuilder result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.deleteCharAt(a0));
        return t_AbstractStringBuilder::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "deleteCharAt", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_ensureCapacity(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_getChars(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_indexOf(t_AbstractStringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_insert(t_AbstractStringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[C", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::String a1((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Is", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jboolean a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jchar a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jdouble a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jfloat a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jint a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IO", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Io", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jlong a1;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint a3;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[CII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          jint a2;
          jint a3;
          AbstractStringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IOII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_AbstractStringBuilder::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "insert", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_lastIndexOf(t_AbstractStringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_length(t_AbstractStringBuilder *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractStringBuilder_offsetByCodePoints(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_replace(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::String a2((jobject) NULL);
      AbstractStringBuilder result((jobject) NULL);

      if (!parseArgs(args, "IIs", &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        return t_AbstractStringBuilder::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_reverse(t_AbstractStringBuilder *self)
    {
      AbstractStringBuilder result((jobject) NULL);
      OBJ_CALL(result = self->object.reverse());
      return t_AbstractStringBuilder::wrap_Object(result);
    }

    static PyObject *t_AbstractStringBuilder_setCharAt(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jchar a1;

      if (!parseArgs(args, "IC", &a0, &a1))
      {
        OBJ_CALL(self->object.setCharAt(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCharAt", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_setLength(t_AbstractStringBuilder *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setLength(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setLength", arg);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_subSequence(t_AbstractStringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_substring(t_AbstractStringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_AbstractStringBuilder_toString(t_AbstractStringBuilder *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractStringBuilder), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractStringBuilder_trimToSize(t_AbstractStringBuilder *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/SortedMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *SortedMap::class$ = NULL;
    jmethodID *SortedMap::mids$ = NULL;
    bool SortedMap::live$ = false;

    jclass SortedMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/SortedMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparator_127b1bec8b0c3ae1] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_firstKey_541690f9ee81d3ad] = env->getMethodID(cls, "firstKey", "()Ljava/lang/Object;");
        mids$[mid_headMap_c34ad1b261346963] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_lastKey_541690f9ee81d3ad] = env->getMethodID(cls, "lastKey", "()Ljava/lang/Object;");
        mids$[mid_subMap_a2a04c1f48ab1459] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_c34ad1b261346963] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedMap::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_127b1bec8b0c3ae1]));
    }

    ::java::util::Set SortedMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    ::java::lang::Object SortedMap::firstKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_firstKey_541690f9ee81d3ad]));
    }

    SortedMap SortedMap::headMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_c34ad1b261346963], a0.this$));
    }

    ::java::util::Set SortedMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    ::java::lang::Object SortedMap::lastKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lastKey_541690f9ee81d3ad]));
    }

    SortedMap SortedMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_a2a04c1f48ab1459], a0.this$, a1.this$));
    }

    SortedMap SortedMap::tailMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_c34ad1b261346963], a0.this$));
    }

    ::java::util::Collection SortedMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_SortedMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedMap_of_(t_SortedMap *self, PyObject *args);
    static PyObject *t_SortedMap_comparator(t_SortedMap *self);
    static PyObject *t_SortedMap_entrySet(t_SortedMap *self, PyObject *args);
    static PyObject *t_SortedMap_firstKey(t_SortedMap *self);
    static PyObject *t_SortedMap_headMap(t_SortedMap *self, PyObject *arg);
    static PyObject *t_SortedMap_keySet(t_SortedMap *self, PyObject *args);
    static PyObject *t_SortedMap_lastKey(t_SortedMap *self);
    static PyObject *t_SortedMap_subMap(t_SortedMap *self, PyObject *args);
    static PyObject *t_SortedMap_tailMap(t_SortedMap *self, PyObject *arg);
    static PyObject *t_SortedMap_values(t_SortedMap *self, PyObject *args);
    static PyObject *t_SortedMap_get__parameters_(t_SortedMap *self, void *data);
    static PyGetSetDef t_SortedMap__fields_[] = {
      DECLARE_GET_FIELD(t_SortedMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SortedMap__methods_[] = {
      DECLARE_METHOD(t_SortedMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_SortedMap, comparator, METH_NOARGS),
      DECLARE_METHOD(t_SortedMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_SortedMap, firstKey, METH_NOARGS),
      DECLARE_METHOD(t_SortedMap, headMap, METH_O),
      DECLARE_METHOD(t_SortedMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_SortedMap, lastKey, METH_NOARGS),
      DECLARE_METHOD(t_SortedMap, subMap, METH_VARARGS),
      DECLARE_METHOD(t_SortedMap, tailMap, METH_O),
      DECLARE_METHOD(t_SortedMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SortedMap)[] = {
      { Py_tp_methods, t_SortedMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_SortedMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SortedMap)[] = {
      &PY_TYPE_DEF(::java::util::Map),
      NULL
    };

    DEFINE_TYPE(SortedMap, t_SortedMap, SortedMap);
    PyObject *t_SortedMap::wrap_Object(const SortedMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_SortedMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedMap *self = (t_SortedMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_SortedMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_SortedMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedMap *self = (t_SortedMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_SortedMap::install(PyObject *module)
    {
      installType(&PY_TYPE(SortedMap), &PY_TYPE_DEF(SortedMap), module, "SortedMap", 0);
    }

    void t_SortedMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedMap), "class_", make_descriptor(SortedMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedMap), "wrapfn_", make_descriptor(t_SortedMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SortedMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SortedMap::initializeClass, 1)))
        return NULL;
      return t_SortedMap::wrap_Object(SortedMap(((t_SortedMap *) arg)->object.this$));
    }
    static PyObject *t_SortedMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SortedMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_SortedMap_of_(t_SortedMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_SortedMap_comparator(t_SortedMap *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_SortedMap_entrySet(t_SortedMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(SortedMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_SortedMap_firstKey(t_SortedMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.firstKey());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedMap_headMap(t_SortedMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedMap result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.headMap(a0));
        return t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "headMap", arg);
      return NULL;
    }

    static PyObject *t_SortedMap_keySet(t_SortedMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(SortedMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_SortedMap_lastKey(t_SortedMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.lastKey());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedMap_subMap(t_SortedMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      SortedMap result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.subMap(a0, a1));
        return t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "subMap", args);
      return NULL;
    }

    static PyObject *t_SortedMap_tailMap(t_SortedMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedMap result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.tailMap(a0));
        return t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "tailMap", arg);
      return NULL;
    }

    static PyObject *t_SortedMap_values(t_SortedMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(SortedMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_SortedMap_get__parameters_(t_SortedMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/CharSequence.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *CharSequence::class$ = NULL;
    jmethodID *CharSequence::mids$ = NULL;
    bool CharSequence::live$ = false;

    jclass CharSequence::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/CharSequence");

        mids$ = new jmethodID[max_mid];
        mids$[mid_charAt_f41af25e73e22f74] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_compare_9b7c3deb149780b0] = env->getStaticMethodID(cls, "compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
        mids$[mid_length_55546ef6a647f39b] = env->getMethodID(cls, "length", "()I");
        mids$[mid_subSequence_e866f407305d4016] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jchar CharSequence::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_f41af25e73e22f74], a0);
    }

    jint CharSequence::compare(const CharSequence & a0, const CharSequence & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_9b7c3deb149780b0], a0.this$, a1.this$);
    }

    jint CharSequence::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_55546ef6a647f39b]);
    }

    CharSequence CharSequence::subSequence(jint a0, jint a1) const
    {
      return CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_e866f407305d4016], a0, a1));
    }

    ::java::lang::String CharSequence::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_CharSequence_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CharSequence_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CharSequence_charAt(t_CharSequence *self, PyObject *arg);
    static PyObject *t_CharSequence_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_CharSequence_length(t_CharSequence *self);
    static PyObject *t_CharSequence_subSequence(t_CharSequence *self, PyObject *args);
    static PyObject *t_CharSequence_toString(t_CharSequence *self, PyObject *args);

    static PyMethodDef t_CharSequence__methods_[] = {
      DECLARE_METHOD(t_CharSequence, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CharSequence, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CharSequence, charAt, METH_O),
      DECLARE_METHOD(t_CharSequence, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_CharSequence, length, METH_NOARGS),
      DECLARE_METHOD(t_CharSequence, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_CharSequence, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CharSequence)[] = {
      { Py_tp_methods, t_CharSequence__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CharSequence)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(CharSequence, t_CharSequence, CharSequence);

    void t_CharSequence::install(PyObject *module)
    {
      installType(&PY_TYPE(CharSequence), &PY_TYPE_DEF(CharSequence), module, "CharSequence", 0);
    }

    void t_CharSequence::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharSequence), "class_", make_descriptor(CharSequence::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharSequence), "wrapfn_", make_descriptor(t_CharSequence::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharSequence), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CharSequence_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CharSequence::initializeClass, 1)))
        return NULL;
      return t_CharSequence::wrap_Object(CharSequence(((t_CharSequence *) arg)->object.this$));
    }
    static PyObject *t_CharSequence_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CharSequence::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CharSequence_charAt(t_CharSequence *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_CharSequence_compare(PyTypeObject *type, PyObject *args)
    {
      CharSequence a0((jobject) NULL);
      CharSequence a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::CharSequence::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_CharSequence_length(t_CharSequence *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CharSequence_subSequence(t_CharSequence *self, PyObject *args)
    {
      jint a0;
      jint a1;
      CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_CharSequence_toString(t_CharSequence *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(CharSequence), (PyObject *) self, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *DoubleSummaryStatistics::class$ = NULL;
    jmethodID *DoubleSummaryStatistics::mids$ = NULL;
    bool DoubleSummaryStatistics::live$ = false;

    jclass DoubleSummaryStatistics::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/DoubleSummaryStatistics");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_355b25c254536058] = env->getMethodID(cls, "<init>", "(JDDD)V");
        mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");
        mids$[mid_combine_1880d89d9943057f] = env->getMethodID(cls, "combine", "(Ljava/util/DoubleSummaryStatistics;)V");
        mids$[mid_getAverage_b74f83833fdad017] = env->getMethodID(cls, "getAverage", "()D");
        mids$[mid_getCount_6c0ce7e438e5ded4] = env->getMethodID(cls, "getCount", "()J");
        mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
        mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
        mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DoubleSummaryStatistics::DoubleSummaryStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    DoubleSummaryStatistics::DoubleSummaryStatistics(jlong a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_355b25c254536058, a0, a1, a2, a3)) {}

    void DoubleSummaryStatistics::accept(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
    }

    void DoubleSummaryStatistics::combine(const DoubleSummaryStatistics & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_combine_1880d89d9943057f], a0.this$);
    }

    jdouble DoubleSummaryStatistics::getAverage() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAverage_b74f83833fdad017]);
    }

    jlong DoubleSummaryStatistics::getCount() const
    {
      return env->callLongMethod(this$, mids$[mid_getCount_6c0ce7e438e5ded4]);
    }

    jdouble DoubleSummaryStatistics::getMax() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
    }

    jdouble DoubleSummaryStatistics::getMin() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
    }

    jdouble DoubleSummaryStatistics::getSum() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
    }

    ::java::lang::String DoubleSummaryStatistics::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args);
    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data);
    static PyGetSetDef t_DoubleSummaryStatistics__fields_[] = {
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, average),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, count),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, max),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, min),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, sum),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DoubleSummaryStatistics__methods_[] = {
      DECLARE_METHOD(t_DoubleSummaryStatistics, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, accept, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, combine, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getAverage, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getCount, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMax, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMin, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getSum, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DoubleSummaryStatistics)[] = {
      { Py_tp_methods, t_DoubleSummaryStatistics__methods_ },
      { Py_tp_init, (void *) t_DoubleSummaryStatistics_init_ },
      { Py_tp_getset, t_DoubleSummaryStatistics__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DoubleSummaryStatistics)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DoubleSummaryStatistics, t_DoubleSummaryStatistics, DoubleSummaryStatistics);

    void t_DoubleSummaryStatistics::install(PyObject *module)
    {
      installType(&PY_TYPE(DoubleSummaryStatistics), &PY_TYPE_DEF(DoubleSummaryStatistics), module, "DoubleSummaryStatistics", 0);
    }

    void t_DoubleSummaryStatistics::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "class_", make_descriptor(DoubleSummaryStatistics::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "wrapfn_", make_descriptor(t_DoubleSummaryStatistics::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DoubleSummaryStatistics::initializeClass, 1)))
        return NULL;
      return t_DoubleSummaryStatistics::wrap_Object(DoubleSummaryStatistics(((t_DoubleSummaryStatistics *) arg)->object.this$));
    }
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DoubleSummaryStatistics::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DoubleSummaryStatistics object((jobject) NULL);

          INT_CALL(object = DoubleSummaryStatistics());
          self->object = object;
          break;
        }
       case 4:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          DoubleSummaryStatistics object((jobject) NULL);

          if (!parseArgs(args, "JDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = DoubleSummaryStatistics(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.accept(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      DoubleSummaryStatistics a0((jobject) NULL);

      if (!parseArg(arg, "k", DoubleSummaryStatistics::initializeClass, &a0))
      {
        OBJ_CALL(self->object.combine(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "combine", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getAverage());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMax());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMin());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getSum());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(DoubleSummaryStatistics), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getAverage());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMax());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMin());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getSum());
      return PyFloat_FromDouble((double) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StackTraceElement::class$ = NULL;
    jmethodID *StackTraceElement::mids$ = NULL;
    bool StackTraceElement::live$ = false;

    jclass StackTraceElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StackTraceElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_711bd0f43086f576] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_init$_fd1937e5fdd589c2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClassLoaderName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getClassLoaderName", "()Ljava/lang/String;");
        mids$[mid_getClassName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getFileName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
        mids$[mid_getLineNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLineNumber", "()I");
        mids$[mid_getMethodName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMethodName", "()Ljava/lang/String;");
        mids$[mid_getModuleName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getModuleName", "()Ljava/lang/String;");
        mids$[mid_getModuleVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getModuleVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isNativeMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isNativeMethod", "()Z");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_711bd0f43086f576, a0.this$, a1.this$, a2.this$, a3)) {}

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd1937e5fdd589c2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

    jboolean StackTraceElement::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::String StackTraceElement::getClassLoaderName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassLoaderName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String StackTraceElement::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String StackTraceElement::getFileName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_1c1fa1e935d6cdcf]));
    }

    jint StackTraceElement::getLineNumber() const
    {
      return env->callIntMethod(this$, mids$[mid_getLineNumber_55546ef6a647f39b]);
    }

    ::java::lang::String StackTraceElement::getMethodName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMethodName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String StackTraceElement::getModuleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String StackTraceElement::getModuleVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleVersion_1c1fa1e935d6cdcf]));
    }

    jint StackTraceElement::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean StackTraceElement::isNativeMethod() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNativeMethod_9ab94ac1dc23b105]);
    }

    ::java::lang::String StackTraceElement::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self);
    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args);
    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data);
    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data);
    static PyGetSetDef t_StackTraceElement__fields_[] = {
      DECLARE_GET_FIELD(t_StackTraceElement, classLoaderName),
      DECLARE_GET_FIELD(t_StackTraceElement, className),
      DECLARE_GET_FIELD(t_StackTraceElement, fileName),
      DECLARE_GET_FIELD(t_StackTraceElement, lineNumber),
      DECLARE_GET_FIELD(t_StackTraceElement, methodName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleName),
      DECLARE_GET_FIELD(t_StackTraceElement, moduleVersion),
      DECLARE_GET_FIELD(t_StackTraceElement, nativeMethod),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_StackTraceElement__methods_[] = {
      DECLARE_METHOD(t_StackTraceElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StackTraceElement, equals, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassLoaderName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getClassName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getFileName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getLineNumber, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getMethodName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleName, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, getModuleVersion, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_StackTraceElement, isNativeMethod, METH_NOARGS),
      DECLARE_METHOD(t_StackTraceElement, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StackTraceElement)[] = {
      { Py_tp_methods, t_StackTraceElement__methods_ },
      { Py_tp_init, (void *) t_StackTraceElement_init_ },
      { Py_tp_getset, t_StackTraceElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StackTraceElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(StackTraceElement, t_StackTraceElement, StackTraceElement);

    void t_StackTraceElement::install(PyObject *module)
    {
      installType(&PY_TYPE(StackTraceElement), &PY_TYPE_DEF(StackTraceElement), module, "StackTraceElement", 0);
    }

    void t_StackTraceElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "class_", make_descriptor(StackTraceElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "wrapfn_", make_descriptor(t_StackTraceElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StackTraceElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StackTraceElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StackTraceElement::initializeClass, 1)))
        return NULL;
      return t_StackTraceElement::wrap_Object(StackTraceElement(((t_StackTraceElement *) arg)->object.this$));
    }
    static PyObject *t_StackTraceElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StackTraceElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StackTraceElement_init_(t_StackTraceElement *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "sssI", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        goto err;
       case 7:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::String a3((jobject) NULL);
          ::java::lang::String a4((jobject) NULL);
          ::java::lang::String a5((jobject) NULL);
          jint a6;
          StackTraceElement object((jobject) NULL);

          if (!parseArgs(args, "ssssssI", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = StackTraceElement(a0, a1, a2, a3, a4, a5, a6));
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

    static PyObject *t_StackTraceElement_equals(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_StackTraceElement_getClassLoaderName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoaderName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getClassName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getFileName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFileName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getLineNumber(t_StackTraceElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getLineNumber());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_StackTraceElement_getMethodName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMethodName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleName(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleName());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_getModuleVersion(t_StackTraceElement *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getModuleVersion());
      return j2p(result);
    }

    static PyObject *t_StackTraceElement_hashCode(t_StackTraceElement *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_StackTraceElement_isNativeMethod(t_StackTraceElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNativeMethod());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_StackTraceElement_toString(t_StackTraceElement *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StackTraceElement), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StackTraceElement_get__classLoaderName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoaderName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__className(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__fileName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFileName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__lineNumber(t_StackTraceElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getLineNumber());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_StackTraceElement_get__methodName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMethodName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleName(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleName());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__moduleVersion(t_StackTraceElement *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getModuleVersion());
      return j2p(value);
    }

    static PyObject *t_StackTraceElement_get__nativeMethod(t_StackTraceElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNativeMethod());
      Py_RETURN_BOOL(value);
    }
  }
}
