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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_sync_7ae3461a92a43152] = env->getMethodID(cls, "sync", "()V");
        mids$[mid_valid_e470b6d9e0d979db] = env->getMethodID(cls, "valid", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new FileDescriptor(env->getStaticObjectField(cls, "err", "Ljava/io/FileDescriptor;"));
        in = new FileDescriptor(env->getStaticObjectField(cls, "in", "Ljava/io/FileDescriptor;"));
        out = new FileDescriptor(env->getStaticObjectField(cls, "out", "Ljava/io/FileDescriptor;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileDescriptor::FileDescriptor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    void FileDescriptor::sync() const
    {
      env->callVoidMethod(this$, mids$[mid_sync_7ae3461a92a43152]);
    }

    jboolean FileDescriptor::valid() const
    {
      return env->callBooleanMethod(this$, mids$[mid_valid_e470b6d9e0d979db]);
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
#include "java/util/OptionalDouble.h"
#include "java/lang/Runnable.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/OptionalDouble.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
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
        mids$[mid_empty_146894f57b982226] = env->getStaticMethodID(cls, "empty", "()Ljava/util/OptionalDouble;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAsDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "getAsDouble", "()D");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_ifPresent_46bb77b3436e630a] = env->getMethodID(cls, "ifPresent", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_ifPresentOrElse_f1961cc866c2c482] = env->getMethodID(cls, "ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_e470b6d9e0d979db] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_954217a0b3f898b1] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/OptionalDouble;");
        mids$[mid_orElse_0ba5fed9597b693e] = env->getMethodID(cls, "orElse", "(D)D");
        mids$[mid_orElseThrow_456d9a2f64d6b28d] = env->getMethodID(cls, "orElseThrow", "()D");
        mids$[mid_orElseThrow_f3ff6fcebd4c553e] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)D");
        mids$[mid_stream_2c8690a58875e3ae] = env->getMethodID(cls, "stream", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OptionalDouble OptionalDouble::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_empty_146894f57b982226]));
    }

    jboolean OptionalDouble::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jdouble OptionalDouble::getAsDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAsDouble_456d9a2f64d6b28d]);
    }

    jint OptionalDouble::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    void OptionalDouble::ifPresent(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresent_46bb77b3436e630a], a0.this$);
    }

    void OptionalDouble::ifPresentOrElse(const ::java::util::function::DoubleConsumer & a0, const ::java::lang::Runnable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresentOrElse_f1961cc866c2c482], a0.this$, a1.this$);
    }

    jboolean OptionalDouble::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    jboolean OptionalDouble::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_e470b6d9e0d979db]);
    }

    OptionalDouble OptionalDouble::of(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_of_954217a0b3f898b1], a0));
    }

    jdouble OptionalDouble::orElse(jdouble a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElse_0ba5fed9597b693e], a0);
    }

    jdouble OptionalDouble::orElseThrow() const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_456d9a2f64d6b28d]);
    }

    jdouble OptionalDouble::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_f3ff6fcebd4c553e], a0.this$);
    }

    ::java::util::stream::DoubleStream OptionalDouble::stream() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_stream_2c8690a58875e3ae]));
    }

    ::java::lang::String OptionalDouble::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedEncodingException::UnsupportedEncodingException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
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
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Iterable::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    ::java::util::Spliterator Iterable::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
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
        mids$[mid_ceiling_ed50a8b49b8274dc] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingIterator_035c6167e6569aac] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_edb7b61b9a16f086] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_floor_ed50a8b49b8274dc] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_5cc25b3ab2f54634] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_92233265f2573726] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_ed50a8b49b8274dc] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lower_ed50a8b49b8274dc] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_dfd7647d9110ac9f] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_subSet_7f0b8ff9f951c500] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_cf0ad46ee1807f0a] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_5cc25b3ab2f54634] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_92233265f2573726] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NavigableSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::Iterator NavigableSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_035c6167e6569aac]));
    }

    NavigableSet NavigableSet::descendingSet() const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_edb7b61b9a16f086]));
    }

    ::java::lang::Object NavigableSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::SortedSet NavigableSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_5cc25b3ab2f54634], a0.this$));
    }

    NavigableSet NavigableSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_92233265f2573726], a0.this$, a1));
    }

    ::java::lang::Object NavigableSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::Iterator NavigableSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    ::java::lang::Object NavigableSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object NavigableSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object NavigableSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_dfd7647d9110ac9f]));
    }

    ::java::util::SortedSet NavigableSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_7f0b8ff9f951c500], a0.this$, a1.this$));
    }

    NavigableSet NavigableSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_cf0ad46ee1807f0a], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet NavigableSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_5cc25b3ab2f54634], a0.this$));
    }

    NavigableSet NavigableSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_92233265f2573726], a0.this$, a1));
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
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassNotFoundException::class$ = NULL;
    jmethodID *ClassNotFoundException::mids$ = NULL;
    bool ClassNotFoundException::live$ = false;

    jclass ClassNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_getCause_67c131e34276cda8] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getException_67c131e34276cda8] = env->getMethodID(cls, "getException", "()Ljava/lang/Throwable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ClassNotFoundException::ClassNotFoundException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}

    ::java::lang::Throwable ClassNotFoundException::getCause() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getCause_67c131e34276cda8]));
    }

    ::java::lang::Throwable ClassNotFoundException::getException() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getException_67c131e34276cda8]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args);
    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self);
    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data);
    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data);
    static PyGetSetDef t_ClassNotFoundException__fields_[] = {
      DECLARE_GET_FIELD(t_ClassNotFoundException, cause),
      DECLARE_GET_FIELD(t_ClassNotFoundException, exception),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassNotFoundException__methods_[] = {
      DECLARE_METHOD(t_ClassNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, getCause, METH_VARARGS),
      DECLARE_METHOD(t_ClassNotFoundException, getException, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassNotFoundException)[] = {
      { Py_tp_methods, t_ClassNotFoundException__methods_ },
      { Py_tp_init, (void *) t_ClassNotFoundException_init_ },
      { Py_tp_getset, t_ClassNotFoundException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassNotFoundException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(ClassNotFoundException, t_ClassNotFoundException, ClassNotFoundException);

    void t_ClassNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassNotFoundException), &PY_TYPE_DEF(ClassNotFoundException), module, "ClassNotFoundException", 0);
    }

    void t_ClassNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "class_", make_descriptor(ClassNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "wrapfn_", make_descriptor(t_ClassNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassNotFoundException::initializeClass, 1)))
        return NULL;
      return t_ClassNotFoundException::wrap_Object(ClassNotFoundException(((t_ClassNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ClassNotFoundException object((jobject) NULL);

          INT_CALL(object = ClassNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ClassNotFoundException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ClassNotFoundException(a0, a1));
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

    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args)
    {
      ::java::lang::Throwable result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCause());
        return ::java::lang::t_Throwable::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ClassNotFoundException), (PyObject *) self, "getCause", args, 2);
    }

    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self)
    {
      ::java::lang::Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(result);
    }

    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }

    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Thread.h"
#include "java/io/FileDescriptor.h"
#include "java/security/Permission.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_checkAccept_cabf0c57aa55c764] = env->getMethodID(cls, "checkAccept", "(Ljava/lang/String;I)V");
        mids$[mid_checkAccess_28b6e9ba57539e9f] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/Thread;)V");
        mids$[mid_checkAccess_2e0869284097f0fc] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
        mids$[mid_checkConnect_cabf0c57aa55c764] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;I)V");
        mids$[mid_checkConnect_beb1bf63a0ce4b7a] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
        mids$[mid_checkCreateClassLoader_7ae3461a92a43152] = env->getMethodID(cls, "checkCreateClassLoader", "()V");
        mids$[mid_checkDelete_e939c6558ae8d313] = env->getMethodID(cls, "checkDelete", "(Ljava/lang/String;)V");
        mids$[mid_checkExec_e939c6558ae8d313] = env->getMethodID(cls, "checkExec", "(Ljava/lang/String;)V");
        mids$[mid_checkExit_0a2a1ac2721c0336] = env->getMethodID(cls, "checkExit", "(I)V");
        mids$[mid_checkLink_e939c6558ae8d313] = env->getMethodID(cls, "checkLink", "(Ljava/lang/String;)V");
        mids$[mid_checkListen_0a2a1ac2721c0336] = env->getMethodID(cls, "checkListen", "(I)V");
        mids$[mid_checkPackageAccess_e939c6558ae8d313] = env->getMethodID(cls, "checkPackageAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkPackageDefinition_e939c6558ae8d313] = env->getMethodID(cls, "checkPackageDefinition", "(Ljava/lang/String;)V");
        mids$[mid_checkPermission_482fc9108529f42a] = env->getMethodID(cls, "checkPermission", "(Ljava/security/Permission;)V");
        mids$[mid_checkPermission_b8fcb42054b201a9] = env->getMethodID(cls, "checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V");
        mids$[mid_checkPrintJobAccess_7ae3461a92a43152] = env->getMethodID(cls, "checkPrintJobAccess", "()V");
        mids$[mid_checkPropertiesAccess_7ae3461a92a43152] = env->getMethodID(cls, "checkPropertiesAccess", "()V");
        mids$[mid_checkPropertyAccess_e939c6558ae8d313] = env->getMethodID(cls, "checkPropertyAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_451cf111c3bab36d] = env->getMethodID(cls, "checkRead", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkRead_e939c6558ae8d313] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_69697a1d09839056] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_checkSecurityAccess_e939c6558ae8d313] = env->getMethodID(cls, "checkSecurityAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkSetFactory_7ae3461a92a43152] = env->getMethodID(cls, "checkSetFactory", "()V");
        mids$[mid_checkWrite_451cf111c3bab36d] = env->getMethodID(cls, "checkWrite", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkWrite_e939c6558ae8d313] = env->getMethodID(cls, "checkWrite", "(Ljava/lang/String;)V");
        mids$[mid_getSecurityContext_dfd7647d9110ac9f] = env->getMethodID(cls, "getSecurityContext", "()Ljava/lang/Object;");
        mids$[mid_getThreadGroup_c5a0b769e930fe0b] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getClassContext_9fe3f453b1078a3c] = env->getMethodID(cls, "getClassContext", "()[Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityManager::SecurityManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    void SecurityManager::checkAccept(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccept_cabf0c57aa55c764], a0.this$, a1);
    }

    void SecurityManager::checkAccess(const ::java::lang::Thread & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_28b6e9ba57539e9f], a0.this$);
    }

    void SecurityManager::checkAccess(const ::java::lang::ThreadGroup & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_2e0869284097f0fc], a0.this$);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_cabf0c57aa55c764], a0.this$, a1);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1, const ::java::lang::Object & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_beb1bf63a0ce4b7a], a0.this$, a1, a2.this$);
    }

    void SecurityManager::checkCreateClassLoader() const
    {
      env->callVoidMethod(this$, mids$[mid_checkCreateClassLoader_7ae3461a92a43152]);
    }

    void SecurityManager::checkDelete(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkDelete_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkExec(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExec_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkExit(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExit_0a2a1ac2721c0336], a0);
    }

    void SecurityManager::checkLink(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkLink_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkListen(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkListen_0a2a1ac2721c0336], a0);
    }

    void SecurityManager::checkPackageAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageAccess_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkPackageDefinition(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageDefinition_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkPermission(const ::java::security::Permission & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPermission_482fc9108529f42a], a0.this$);
    }

    void SecurityManager::checkPermission(const ::java::security::Permission & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPermission_b8fcb42054b201a9], a0.this$, a1.this$);
    }

    void SecurityManager::checkPrintJobAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPrintJobAccess_7ae3461a92a43152]);
    }

    void SecurityManager::checkPropertiesAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertiesAccess_7ae3461a92a43152]);
    }

    void SecurityManager::checkPropertyAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertyAccess_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_451cf111c3bab36d], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_69697a1d09839056], a0.this$, a1.this$);
    }

    void SecurityManager::checkSecurityAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkSecurityAccess_e939c6558ae8d313], a0.this$);
    }

    void SecurityManager::checkSetFactory() const
    {
      env->callVoidMethod(this$, mids$[mid_checkSetFactory_7ae3461a92a43152]);
    }

    void SecurityManager::checkWrite(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_451cf111c3bab36d], a0.this$);
    }

    void SecurityManager::checkWrite(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_e939c6558ae8d313], a0.this$);
    }

    ::java::lang::Object SecurityManager::getSecurityContext() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecurityContext_dfd7647d9110ac9f]));
    }

    ::java::lang::ThreadGroup SecurityManager::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_c5a0b769e930fe0b]));
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
    static PyObject *t_SecurityManager_checkPermission(t_SecurityManager *self, PyObject *args);
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
      DECLARE_METHOD(t_SecurityManager, checkPermission, METH_VARARGS),
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

    static PyObject *t_SecurityManager_checkPermission(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::security::Permission a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::security::Permission::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkPermission(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::security::Permission a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "ko", ::java::security::Permission::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.checkPermission(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkPermission", args);
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
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_d77f10dac029c69d] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_fa8f5d48ee424651] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
        mids$[mid_append_534b4e41ec880cae] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
        mids$[mid_append_5f19be2f6db7abbd] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_append_6663da7e0639d104] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
        mids$[mid_append_a960a594334810c2] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
        mids$[mid_append_843cd84ad22988e0] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
        mids$[mid_append_0d57976ebc59b319] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
        mids$[mid_append_f085109d198d622a] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_append_082793cbe2d9d1e6] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_append_af8f283a3389dd42] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_append_673412bef2cd320f] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
        mids$[mid_append_bc65d94c4c7afd09] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
        mids$[mid_append_c6323851041862ca] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_appendCodePoint_f085109d198d622a] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_compareTo_68bdd967160764f2] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuilder;)I");
        mids$[mid_delete_e57dda636d270552] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_deleteCharAt_f085109d198d622a] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_indexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_4918d8aef83f928e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_d6b8a895ab694d5f] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
        mids$[mid_insert_e0372c521d30712a] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_3592d69ed34d3e5d] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_3246f6607b301170] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
        mids$[mid_insert_8c3668c492bf154f] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
        mids$[mid_insert_2fcd9b97ada86ce7] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
        mids$[mid_insert_e57dda636d270552] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_insert_934e3e07ce24a594] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_6fe224b70cafcd20] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_78cb38d22903561e] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_c7742f1c316c4f5e] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
        mids$[mid_insert_d07c8e2cadd18181] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_lastIndexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_4918d8aef83f928e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_replace_08c4dc5657b17769] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_reverse_bc6e901998de2662] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuilder::StringBuilder() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    StringBuilder::StringBuilder(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    StringBuilder::StringBuilder(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    StringBuilder::StringBuilder(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_d77f10dac029c69d, a0.this$)) {}

    StringBuilder StringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_fa8f5d48ee424651], a0.this$));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_534b4e41ec880cae], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::String & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_5f19be2f6db7abbd], a0.this$));
    }

    StringBuilder StringBuilder::append(jboolean a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_6663da7e0639d104], a0));
    }

    StringBuilder StringBuilder::append(jchar a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_a960a594334810c2], a0));
    }

    StringBuilder StringBuilder::append(jdouble a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_843cd84ad22988e0], a0));
    }

    StringBuilder StringBuilder::append(jfloat a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_0d57976ebc59b319], a0));
    }

    StringBuilder StringBuilder::append(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_f085109d198d622a], a0));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_082793cbe2d9d1e6], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::Object & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_af8f283a3389dd42], a0.this$));
    }

    StringBuilder StringBuilder::append(jlong a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_673412bef2cd320f], a0));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_bc65d94c4c7afd09], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_c6323851041862ca], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::appendCodePoint(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_f085109d198d622a], a0));
    }

    jint StringBuilder::compareTo(const StringBuilder & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_68bdd967160764f2], a0.this$);
    }

    StringBuilder StringBuilder::delete$(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_delete_e57dda636d270552], a0, a1));
    }

    StringBuilder StringBuilder::deleteCharAt(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_f085109d198d622a], a0));
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_4918d8aef83f928e], a0.this$, a1);
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_d6b8a895ab694d5f], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e0372c521d30712a], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jboolean a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3592d69ed34d3e5d], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jchar a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3246f6607b301170], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jdouble a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_8c3668c492bf154f], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jfloat a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_2fcd9b97ada86ce7], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e57dda636d270552], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_934e3e07ce24a594], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6fe224b70cafcd20], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jlong a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_78cb38d22903561e], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_c7742f1c316c4f5e], a0, a1.this$, a2, a3));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_d07c8e2cadd18181], a0, a1.this$, a2, a3));
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_4918d8aef83f928e], a0.this$, a1);
    }

    StringBuilder StringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_replace_08c4dc5657b17769], a0, a1, a2.this$));
    }

    StringBuilder StringBuilder::reverse() const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_bc6e901998de2662]));
    }

    ::java::lang::String StringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ConcurrentModificationException::class$ = NULL;
    jmethodID *ConcurrentModificationException::mids$ = NULL;
    bool ConcurrentModificationException::live$ = false;

    jclass ConcurrentModificationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ConcurrentModificationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ConcurrentModificationException__methods_[] = {
      DECLARE_METHOD(t_ConcurrentModificationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ConcurrentModificationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ConcurrentModificationException)[] = {
      { Py_tp_methods, t_ConcurrentModificationException__methods_ },
      { Py_tp_init, (void *) t_ConcurrentModificationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ConcurrentModificationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(ConcurrentModificationException, t_ConcurrentModificationException, ConcurrentModificationException);

    void t_ConcurrentModificationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ConcurrentModificationException), &PY_TYPE_DEF(ConcurrentModificationException), module, "ConcurrentModificationException", 0);
    }

    void t_ConcurrentModificationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "class_", make_descriptor(ConcurrentModificationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "wrapfn_", make_descriptor(t_ConcurrentModificationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ConcurrentModificationException::initializeClass, 1)))
        return NULL;
      return t_ConcurrentModificationException::wrap_Object(ConcurrentModificationException(((t_ConcurrentModificationException *) arg)->object.this$));
    }
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ConcurrentModificationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ConcurrentModificationException object((jobject) NULL);

          INT_CALL(object = ConcurrentModificationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ConcurrentModificationException(a0, a1));
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
        mids$[mid_run_7ae3461a92a43152] = env->getMethodID(cls, "run", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Runnable::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_7ae3461a92a43152]);
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
#include "java/io/FileFilter.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileFilter::class$ = NULL;
    jmethodID *FileFilter::mids$ = NULL;
    bool FileFilter::live$ = false;

    jclass FileFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_667e23095e41ed38] = env->getMethodID(cls, "accept", "(Ljava/io/File;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FileFilter::accept(const ::java::io::File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_667e23095e41ed38], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg);

    static PyMethodDef t_FileFilter__methods_[] = {
      DECLARE_METHOD(t_FileFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, accept, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileFilter)[] = {
      { Py_tp_methods, t_FileFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileFilter, t_FileFilter, FileFilter);

    void t_FileFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FileFilter), &PY_TYPE_DEF(FileFilter), module, "FileFilter", 0);
    }

    void t_FileFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "class_", make_descriptor(FileFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "wrapfn_", make_descriptor(t_FileFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileFilter::initializeClass, 1)))
        return NULL;
      return t_FileFilter::wrap_Object(FileFilter(((t_FileFilter *) arg)->object.this$));
    }
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg)
    {
      ::java::io::File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.accept(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/ObjectStreamClass.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputStream$GetField::class$ = NULL;
    jmethodID *ObjectInputStream$GetField::mids$ = NULL;
    bool ObjectInputStream$GetField::live$ = false;

    jclass ObjectInputStream$GetField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputStream$GetField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_defaulted_6b161f495ea569b8] = env->getMethodID(cls, "defaulted", "(Ljava/lang/String;)Z");
        mids$[mid_get_9876c2abf74da7e0] = env->getMethodID(cls, "get", "(Ljava/lang/String;Z)Z");
        mids$[mid_get_ee15bcb5cc1b1c51] = env->getMethodID(cls, "get", "(Ljava/lang/String;B)B");
        mids$[mid_get_c4a813c023f75fad] = env->getMethodID(cls, "get", "(Ljava/lang/String;C)C");
        mids$[mid_get_e722af06fdba4ebe] = env->getMethodID(cls, "get", "(Ljava/lang/String;D)D");
        mids$[mid_get_47d906e7e1c7a09f] = env->getMethodID(cls, "get", "(Ljava/lang/String;F)F");
        mids$[mid_get_4918d8aef83f928e] = env->getMethodID(cls, "get", "(Ljava/lang/String;I)I");
        mids$[mid_get_40b7949a09a23362] = env->getMethodID(cls, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_get_164a181bcf5b61aa] = env->getMethodID(cls, "get", "(Ljava/lang/String;J)J");
        mids$[mid_get_fc00726672f3fd8a] = env->getMethodID(cls, "get", "(Ljava/lang/String;S)S");
        mids$[mid_getObjectStreamClass_8ad6f15d09fb9e15] = env->getMethodID(cls, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream$GetField::ObjectInputStream$GetField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    jboolean ObjectInputStream$GetField::defaulted(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_defaulted_6b161f495ea569b8], a0.this$);
    }

    jboolean ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_get_9876c2abf74da7e0], a0.this$, a1);
    }

    jbyte ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jbyte a1) const
    {
      return env->callByteMethod(this$, mids$[mid_get_ee15bcb5cc1b1c51], a0.this$, a1);
    }

    jchar ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jchar a1) const
    {
      return env->callCharMethod(this$, mids$[mid_get_c4a813c023f75fad], a0.this$, a1);
    }

    jdouble ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jdouble a1) const
    {
      return env->callDoubleMethod(this$, mids$[mid_get_e722af06fdba4ebe], a0.this$, a1);
    }

    jfloat ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jfloat a1) const
    {
      return env->callFloatMethod(this$, mids$[mid_get_47d906e7e1c7a09f], a0.this$, a1);
    }

    jint ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_get_4918d8aef83f928e], a0.this$, a1);
    }

    ::java::lang::Object ObjectInputStream$GetField::get$(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_40b7949a09a23362], a0.this$, a1.this$));
    }

    jlong ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jlong a1) const
    {
      return env->callLongMethod(this$, mids$[mid_get_164a181bcf5b61aa], a0.this$, a1);
    }

    jshort ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jshort a1) const
    {
      return env->callShortMethod(this$, mids$[mid_get_fc00726672f3fd8a], a0.this$, a1);
    }

    ::java::io::ObjectStreamClass ObjectInputStream$GetField::getObjectStreamClass() const
    {
      return ::java::io::ObjectStreamClass(env->callObjectMethod(this$, mids$[mid_getObjectStreamClass_8ad6f15d09fb9e15]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputStream$GetField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputStream$GetField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectInputStream$GetField_init_(t_ObjectInputStream$GetField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectInputStream$GetField_defaulted(t_ObjectInputStream$GetField *self, PyObject *arg);
    static PyObject *t_ObjectInputStream$GetField_get(t_ObjectInputStream$GetField *self, PyObject *args);
    static PyObject *t_ObjectInputStream$GetField_getObjectStreamClass(t_ObjectInputStream$GetField *self);
    static PyObject *t_ObjectInputStream$GetField_get__objectStreamClass(t_ObjectInputStream$GetField *self, void *data);
    static PyGetSetDef t_ObjectInputStream$GetField__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectInputStream$GetField, objectStreamClass),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputStream$GetField__methods_[] = {
      DECLARE_METHOD(t_ObjectInputStream$GetField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, defaulted, METH_O),
      DECLARE_METHOD(t_ObjectInputStream$GetField, get, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, getObjectStreamClass, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputStream$GetField)[] = {
      { Py_tp_methods, t_ObjectInputStream$GetField__methods_ },
      { Py_tp_init, (void *) t_ObjectInputStream$GetField_init_ },
      { Py_tp_getset, t_ObjectInputStream$GetField__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputStream$GetField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputStream$GetField, t_ObjectInputStream$GetField, ObjectInputStream$GetField);

    void t_ObjectInputStream$GetField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputStream$GetField), &PY_TYPE_DEF(ObjectInputStream$GetField), module, "ObjectInputStream$GetField", 0);
    }

    void t_ObjectInputStream$GetField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "class_", make_descriptor(ObjectInputStream$GetField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "wrapfn_", make_descriptor(t_ObjectInputStream$GetField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputStream$GetField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputStream$GetField::initializeClass, 1)))
        return NULL;
      return t_ObjectInputStream$GetField::wrap_Object(ObjectInputStream$GetField(((t_ObjectInputStream$GetField *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputStream$GetField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputStream$GetField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectInputStream$GetField_init_(t_ObjectInputStream$GetField *self, PyObject *args, PyObject *kwds)
    {
      ObjectInputStream$GetField object((jobject) NULL);

      INT_CALL(object = ObjectInputStream$GetField());
      self->object = object;

      return 0;
    }

    static PyObject *t_ObjectInputStream$GetField_defaulted(t_ObjectInputStream$GetField *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.defaulted(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "defaulted", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream$GetField_get(t_ObjectInputStream$GetField *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte a1;
          jbyte result;

          if (!parseArgs(args, "sB", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jchar a1;
          jchar result;

          if (!parseArgs(args, "sC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return c2p(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyFloat_FromDouble((double) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jfloat a1;
          jfloat result;

          if (!parseArgs(args, "sF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyFloat_FromDouble((double) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          jlong result;

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jshort a1;
          jshort result;

          if (!parseArgs(args, "sS", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "get", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream$GetField_getObjectStreamClass(t_ObjectInputStream$GetField *self)
    {
      ::java::io::ObjectStreamClass result((jobject) NULL);
      OBJ_CALL(result = self->object.getObjectStreamClass());
      return ::java::io::t_ObjectStreamClass::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream$GetField_get__objectStreamClass(t_ObjectInputStream$GetField *self, void *data)
    {
      ::java::io::ObjectStreamClass value((jobject) NULL);
      OBJ_CALL(value = self->object.getObjectStreamClass());
      return ::java::io::t_ObjectStreamClass::wrap_Object(value);
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
#include "java/util/Set.h"
#include "java/util/Enumeration.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_8b4e3987d7532731] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_75c5b1de54fd54f2] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_229c87223f486349] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_229c87223f486349] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_44964b2b3d187632] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_286de79696ab0806] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_44964b2b3d187632] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_286de79696ab0806] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_f8c930c8a53ce61d] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_286de79696ab0806] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9f7c677a07c1445a] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_7ae3461a92a43152] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Hashtable::Hashtable() : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Hashtable::Hashtable(jint a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    Hashtable::Hashtable(const ::java::util::Map & a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_8b4e3987d7532731, a0.this$)) {}

    Hashtable::Hashtable(jint a0, jfloat a1) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_75c5b1de54fd54f2, a0, a1)) {}

    void Hashtable::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object Hashtable::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean Hashtable::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean Hashtable::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_229c87223f486349], a0.this$);
    }

    jboolean Hashtable::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_229c87223f486349], a0.this$);
    }

    ::java::util::Enumeration Hashtable::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_44964b2b3d187632]));
    }

    ::java::util::Set Hashtable::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    jboolean Hashtable::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Hashtable::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object Hashtable::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_286de79696ab0806], a0.this$, a1.this$));
    }

    jint Hashtable::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Hashtable::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Set Hashtable::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    ::java::util::Enumeration Hashtable::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_44964b2b3d187632]));
    }

    ::java::lang::Object Hashtable::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    void Hashtable::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
    }

    ::java::lang::Object Hashtable::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::Object Hashtable::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jboolean Hashtable::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_f8c930c8a53ce61d], a0.this$, a1.this$);
    }

    ::java::lang::Object Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_286de79696ab0806], a0.this$, a1.this$));
    }

    jboolean Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9f7c677a07c1445a], a0.this$, a1.this$, a2.this$);
    }

    jint Hashtable::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::lang::String Hashtable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::util::Collection Hashtable::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
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
#include "java/util/stream/Stream.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
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
        mids$[mid_empty_c56b7edc0c3c7d86] = env->getStaticMethodID(cls, "empty", "()Ljava/util/Optional;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_dfd7647d9110ac9f] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_e470b6d9e0d979db] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_12b54e05079c4c5a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_ofNullable_12b54e05079c4c5a] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_or_d247648b34e7f6e2] = env->getMethodID(cls, "or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;");
        mids$[mid_orElse_ed50a8b49b8274dc] = env->getMethodID(cls, "orElse", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_orElseGet_922eb0b8fc21a80d] = env->getMethodID(cls, "orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_orElseThrow_dfd7647d9110ac9f] = env->getMethodID(cls, "orElseThrow", "()Ljava/lang/Object;");
        mids$[mid_orElseThrow_922eb0b8fc21a80d] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_stream_a68a17dd093f796d] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Optional Optional::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_empty_c56b7edc0c3c7d86]));
    }

    jboolean Optional::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Optional::get$() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_dfd7647d9110ac9f]));
    }

    jint Optional::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Optional::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    jboolean Optional::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_e470b6d9e0d979db]);
    }

    Optional Optional::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_of_12b54e05079c4c5a], a0.this$));
    }

    Optional Optional::ofNullable(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_12b54e05079c4c5a], a0.this$));
    }

    Optional Optional::or$(const ::java::util::function::Supplier & a0) const
    {
      return Optional(env->callObjectMethod(this$, mids$[mid_or_d247648b34e7f6e2], a0.this$));
    }

    ::java::lang::Object Optional::orElse(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElse_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object Optional::orElseGet(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseGet_922eb0b8fc21a80d], a0.this$));
    }

    ::java::lang::Object Optional::orElseThrow() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Optional::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_922eb0b8fc21a80d], a0.this$));
    }

    ::java::util::stream::Stream Optional::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_a68a17dd093f796d]));
    }

    ::java::lang::String Optional::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "java/util/Locale$LanguageRange.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/lang/Class.h"
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
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_dc256bfc3daae929] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getRange_0090f7797e403f43] = env->getMethodID(cls, "getRange", "()Ljava/lang/String;");
        mids$[mid_getWeight_456d9a2f64d6b28d] = env->getMethodID(cls, "getWeight", "()D");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_mapEquivalents_e10553a3d53385b8] = env->getStaticMethodID(cls, "mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_parse_720e76ad3b86a46a] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_parse_f6d606db891c20a7] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_WEIGHT = env->getStaticDoubleField(cls, "MAX_WEIGHT");
        MIN_WEIGHT = env->getStaticDoubleField(cls, "MIN_WEIGHT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc256bfc3daae929, a0.this$, a1)) {}

    jboolean Locale$LanguageRange::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String Locale$LanguageRange::getRange() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRange_0090f7797e403f43]));
    }

    jdouble Locale$LanguageRange::getWeight() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getWeight_456d9a2f64d6b28d]);
    }

    jint Locale$LanguageRange::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    ::java::util::List Locale$LanguageRange::mapEquivalents(const ::java::util::List & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_mapEquivalents_e10553a3d53385b8], a0.this$, a1.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_720e76ad3b86a46a], a0.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_f6d606db891c20a7], a0.this$, a1.this$));
    }

    ::java::lang::String Locale$LanguageRange::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "java/lang/Appendable.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
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
        mids$[mid_append_428a6d4b3119729b] = env->getMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
        mids$[mid_append_f01ba8217793200e] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
        mids$[mid_append_2ae3e27af98e4248] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Appendable Appendable::append(jchar a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_428a6d4b3119729b], a0));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_f01ba8217793200e], a0.this$));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_2ae3e27af98e4248], a0.this$, a1, a2));
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
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
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
        mids$[mid_append_a7f9e24d54f82e7c] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_e07b6958d316ef26] = env->getMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_094038b24f05c210] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_52409847a4351914] = env->getMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_a163f5b4ff8c1475] = env->getMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_05a87123a30e1204] = env->getMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_5062e3be717b6b28] = env->getMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_0b4b027b59141751] = env->getMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_c75f8a74e560bfd4] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_e88f92449c45bc8a] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_e95a4479e5e16041] = env->getMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_9febeb146f58279d] = env->getMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_7dbec4c35feb59b6] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_appendCodePoint_0b4b027b59141751] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_capacity_f2f64475e4580546] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_52047e692b58eb87] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_38565d58479aa24a] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_38565d58479aa24a] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_d9790ac9eecfe931] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_delete_cfa0a453cf433343] = env->getMethodID(cls, "delete", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_deleteCharAt_0b4b027b59141751] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_ensureCapacity_0a2a1ac2721c0336] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_6a4fae412727af3a] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_4918d8aef83f928e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_55c09eeabccc6cb5] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_b8002054b59d7524] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_6b4ad20a80a21354] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_21c9928a7558695a] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_3c0bcc27a258ae58] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_66ea3ff032e56a4c] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_cfa0a453cf433343] = env->getMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_b105c4fd379b16d3] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_f44ebefe2198fb84] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_cc4e92aea9565e65] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_6599dfc97deb717c] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_7f17da23221acefe] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_lastIndexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_4918d8aef83f928e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_f2f64475e4580546] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_d9790ac9eecfe931] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_496bb4de9b7f94f7] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_reverse_abde0dd7f2414337] = env->getMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
        mids$[mid_setCharAt_897ba55cae2e4418] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_0a2a1ac2721c0336] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_d0ccff93b0cd9262] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_90cbcc0b7a5ddae9] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_a1a389fa4c946a7a] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_7ae3461a92a43152] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_a7f9e24d54f82e7c], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_e07b6958d316ef26], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::String & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_094038b24f05c210], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jboolean a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_52409847a4351914], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jchar a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_a163f5b4ff8c1475], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jdouble a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_05a87123a30e1204], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jfloat a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_5062e3be717b6b28], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_0b4b027b59141751], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_c75f8a74e560bfd4], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::Object & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_e88f92449c45bc8a], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jlong a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_e95a4479e5e16041], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_9febeb146f58279d], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_7dbec4c35feb59b6], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::appendCodePoint(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_0b4b027b59141751], a0));
    }

    jint AbstractStringBuilder::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_f2f64475e4580546]);
    }

    jchar AbstractStringBuilder::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_52047e692b58eb87], a0);
    }

    jint AbstractStringBuilder::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_38565d58479aa24a], a0);
    }

    jint AbstractStringBuilder::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_38565d58479aa24a], a0);
    }

    jint AbstractStringBuilder::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_d9790ac9eecfe931], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::delete$(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_delete_cfa0a453cf433343], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::deleteCharAt(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_0b4b027b59141751], a0));
    }

    void AbstractStringBuilder::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_0a2a1ac2721c0336], a0);
    }

    void AbstractStringBuilder::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_6a4fae412727af3a], a0, a1, a2.this$, a3);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_4918d8aef83f928e], a0.this$, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_55c09eeabccc6cb5], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b8002054b59d7524], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jboolean a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6b4ad20a80a21354], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jchar a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_21c9928a7558695a], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jdouble a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3c0bcc27a258ae58], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jfloat a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_66ea3ff032e56a4c], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_cfa0a453cf433343], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b105c4fd379b16d3], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_f44ebefe2198fb84], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jlong a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_cc4e92aea9565e65], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6599dfc97deb717c], a0, a1.this$, a2, a3));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_7f17da23221acefe], a0, a1.this$, a2, a3));
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_4918d8aef83f928e], a0.this$, a1);
    }

    jint AbstractStringBuilder::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_f2f64475e4580546]);
    }

    jint AbstractStringBuilder::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_d9790ac9eecfe931], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_replace_496bb4de9b7f94f7], a0, a1, a2.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::reverse() const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_abde0dd7f2414337]));
    }

    void AbstractStringBuilder::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_897ba55cae2e4418], a0, a1);
    }

    void AbstractStringBuilder::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_0a2a1ac2721c0336], a0);
    }

    ::java::lang::CharSequence AbstractStringBuilder::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_d0ccff93b0cd9262], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_a1a389fa4c946a7a], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void AbstractStringBuilder::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_7ae3461a92a43152]);
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
#include "java/util/SortedMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
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
        mids$[mid_comparator_838794f9a43cf98e] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_firstKey_dfd7647d9110ac9f] = env->getMethodID(cls, "firstKey", "()Ljava/lang/Object;");
        mids$[mid_headMap_bdec4bc419d678c0] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_lastKey_dfd7647d9110ac9f] = env->getMethodID(cls, "lastKey", "()Ljava/lang/Object;");
        mids$[mid_subMap_a46755e50d8df53f] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_bdec4bc419d678c0] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedMap::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_838794f9a43cf98e]));
    }

    ::java::util::Set SortedMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    ::java::lang::Object SortedMap::firstKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_firstKey_dfd7647d9110ac9f]));
    }

    SortedMap SortedMap::headMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_bdec4bc419d678c0], a0.this$));
    }

    ::java::util::Set SortedMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    ::java::lang::Object SortedMap::lastKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lastKey_dfd7647d9110ac9f]));
    }

    SortedMap SortedMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_a46755e50d8df53f], a0.this$, a1.this$));
    }

    SortedMap SortedMap::tailMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_bdec4bc419d678c0], a0.this$));
    }

    ::java::util::Collection SortedMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
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
        mids$[mid_charAt_52047e692b58eb87] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_compare_8d43db0710f4ca1f] = env->getStaticMethodID(cls, "compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
        mids$[mid_length_f2f64475e4580546] = env->getMethodID(cls, "length", "()I");
        mids$[mid_subSequence_d0ccff93b0cd9262] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jchar CharSequence::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_52047e692b58eb87], a0);
    }

    jint CharSequence::compare(const CharSequence & a0, const CharSequence & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_8d43db0710f4ca1f], a0.this$, a1.this$);
    }

    jint CharSequence::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_f2f64475e4580546]);
    }

    CharSequence CharSequence::subSequence(jint a0, jint a1) const
    {
      return CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_d0ccff93b0cd9262], a0, a1));
    }

    ::java::lang::String CharSequence::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "java/io/Console.h"
#include "java/io/Flushable.h"
#include "java/io/Console.h"
#include "java/io/PrintWriter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/Reader.h"
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
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_b1a86248963b4de8] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_printf_b1a86248963b4de8] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_readLine_0090f7797e403f43] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLine_800b9a7564ae3d87] = env->getMethodID(cls, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_readPassword_946e97d3d5d65de5] = env->getMethodID(cls, "readPassword", "()[C");
        mids$[mid_readPassword_afd36805b5ed4832] = env->getMethodID(cls, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
        mids$[mid_reader_8476c88b3f0eb61c] = env->getMethodID(cls, "reader", "()Ljava/io/Reader;");
        mids$[mid_writer_8241e51f5b5595a7] = env->getMethodID(cls, "writer", "()Ljava/io/PrintWriter;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Console::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    Console Console::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_format_b1a86248963b4de8], a0.this$, a1.this$));
    }

    Console Console::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_printf_b1a86248963b4de8], a0.this$, a1.this$));
    }

    ::java::lang::String Console::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_0090f7797e403f43]));
    }

    ::java::lang::String Console::readLine(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_800b9a7564ae3d87], a0.this$, a1.this$));
    }

    JArray< jchar > Console::readPassword() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_946e97d3d5d65de5]));
    }

    JArray< jchar > Console::readPassword(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_afd36805b5ed4832], a0.this$, a1.this$));
    }

    ::java::io::Reader Console::reader() const
    {
      return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_reader_8476c88b3f0eb61c]));
    }

    ::java::io::PrintWriter Console::writer() const
    {
      return ::java::io::PrintWriter(env->callObjectMethod(this$, mids$[mid_writer_8241e51f5b5595a7]));
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
#include "java/io/ObjectOutput.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutput::class$ = NULL;
    jmethodID *ObjectOutput::mids$ = NULL;
    bool ObjectOutput::live$ = false;

    jclass ObjectOutput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeObject_7ca0d9438822cb0b] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectOutput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void ObjectOutput::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void ObjectOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    void ObjectOutput::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_7ca0d9438822cb0b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args);
    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg);

    static PyMethodDef t_ObjectOutput__methods_[] = {
      DECLARE_METHOD(t_ObjectOutput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, close, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, flush, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutput, writeObject, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutput)[] = {
      { Py_tp_methods, t_ObjectOutput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutput)[] = {
      &PY_TYPE_DEF(::java::io::DataOutput),
      NULL
    };

    DEFINE_TYPE(ObjectOutput, t_ObjectOutput, ObjectOutput);

    void t_ObjectOutput::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutput), &PY_TYPE_DEF(ObjectOutput), module, "ObjectOutput", 0);
    }

    void t_ObjectOutput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "class_", make_descriptor(ObjectOutput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "wrapfn_", make_descriptor(t_ObjectOutput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutput::initializeClass, 1)))
        return NULL;
      return t_ObjectOutput::wrap_Object(ObjectOutput(((t_ObjectOutput *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ObjectOutput), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Module.h"
#include "java/io/IOException.h"
#include "java/lang/ModuleLayer.h"
#include "java/io/InputStream.h"
#include "java/lang/Module.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Module::class$ = NULL;
    jmethodID *Module::mids$ = NULL;
    bool Module::live$ = false;

    jclass Module::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Module");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addExports_7eb9e12d9c13f1cc] = env->getMethodID(cls, "addExports", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addOpens_7eb9e12d9c13f1cc] = env->getMethodID(cls, "addOpens", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addReads_7f4fa6a059a8a219] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addUses_eb99eaacbad92542] = env->getMethodID(cls, "addUses", "(Ljava/lang/Class;)Ljava/lang/Module;");
        mids$[mid_canRead_a4b71b277731613e] = env->getMethodID(cls, "canRead", "(Ljava/lang/Module;)Z");
        mids$[mid_canUse_ddf0fdab108a07e2] = env->getMethodID(cls, "canUse", "(Ljava/lang/Class;)Z");
        mids$[mid_getClassLoader_9f59dd0605cf9d96] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getLayer_b969436b816ffa6a] = env->getMethodID(cls, "getLayer", "()Ljava/lang/ModuleLayer;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackages_e9e1a6780fe94297] = env->getMethodID(cls, "getPackages", "()Ljava/util/Set;");
        mids$[mid_getResourceAsStream_e48d48998e90da79] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_isExported_6b161f495ea569b8] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;)Z");
        mids$[mid_isExported_0d9c16c347a9c8c4] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_isNamed_e470b6d9e0d979db] = env->getMethodID(cls, "isNamed", "()Z");
        mids$[mid_isOpen_6b161f495ea569b8] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;)Z");
        mids$[mid_isOpen_0d9c16c347a9c8c4] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Module Module::addExports(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addExports_7eb9e12d9c13f1cc], a0.this$, a1.this$));
    }

    Module Module::addOpens(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addOpens_7eb9e12d9c13f1cc], a0.this$, a1.this$));
    }

    Module Module::addReads(const Module & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addReads_7f4fa6a059a8a219], a0.this$));
    }

    Module Module::addUses(const ::java::lang::Class & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addUses_eb99eaacbad92542], a0.this$));
    }

    jboolean Module::canRead(const Module & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_a4b71b277731613e], a0.this$);
    }

    jboolean Module::canUse(const ::java::lang::Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canUse_ddf0fdab108a07e2], a0.this$);
    }

    ::java::lang::ClassLoader Module::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_9f59dd0605cf9d96]));
    }

    ::java::lang::ModuleLayer Module::getLayer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_getLayer_b969436b816ffa6a]));
    }

    ::java::lang::String Module::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    ::java::util::Set Module::getPackages() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getPackages_e9e1a6780fe94297]));
    }

    ::java::io::InputStream Module::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_e48d48998e90da79], a0.this$));
    }

    jboolean Module::isExported(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_6b161f495ea569b8], a0.this$);
    }

    jboolean Module::isExported(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_0d9c16c347a9c8c4], a0.this$, a1.this$);
    }

    jboolean Module::isNamed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNamed_e470b6d9e0d979db]);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_6b161f495ea569b8], a0.this$);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_0d9c16c347a9c8c4], a0.this$, a1.this$);
    }

    ::java::lang::String Module::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Module_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Module_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Module_addExports(t_Module *self, PyObject *args);
    static PyObject *t_Module_addOpens(t_Module *self, PyObject *args);
    static PyObject *t_Module_addReads(t_Module *self, PyObject *arg);
    static PyObject *t_Module_addUses(t_Module *self, PyObject *arg);
    static PyObject *t_Module_canRead(t_Module *self, PyObject *arg);
    static PyObject *t_Module_canUse(t_Module *self, PyObject *arg);
    static PyObject *t_Module_getClassLoader(t_Module *self);
    static PyObject *t_Module_getLayer(t_Module *self);
    static PyObject *t_Module_getName(t_Module *self);
    static PyObject *t_Module_getPackages(t_Module *self);
    static PyObject *t_Module_getResourceAsStream(t_Module *self, PyObject *arg);
    static PyObject *t_Module_isExported(t_Module *self, PyObject *args);
    static PyObject *t_Module_isNamed(t_Module *self);
    static PyObject *t_Module_isOpen(t_Module *self, PyObject *args);
    static PyObject *t_Module_toString(t_Module *self, PyObject *args);
    static PyObject *t_Module_get__classLoader(t_Module *self, void *data);
    static PyObject *t_Module_get__layer(t_Module *self, void *data);
    static PyObject *t_Module_get__name(t_Module *self, void *data);
    static PyObject *t_Module_get__named(t_Module *self, void *data);
    static PyObject *t_Module_get__packages(t_Module *self, void *data);
    static PyGetSetDef t_Module__fields_[] = {
      DECLARE_GET_FIELD(t_Module, classLoader),
      DECLARE_GET_FIELD(t_Module, layer),
      DECLARE_GET_FIELD(t_Module, name),
      DECLARE_GET_FIELD(t_Module, named),
      DECLARE_GET_FIELD(t_Module, packages),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Module__methods_[] = {
      DECLARE_METHOD(t_Module, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Module, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Module, addExports, METH_VARARGS),
      DECLARE_METHOD(t_Module, addOpens, METH_VARARGS),
      DECLARE_METHOD(t_Module, addReads, METH_O),
      DECLARE_METHOD(t_Module, addUses, METH_O),
      DECLARE_METHOD(t_Module, canRead, METH_O),
      DECLARE_METHOD(t_Module, canUse, METH_O),
      DECLARE_METHOD(t_Module, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Module, getLayer, METH_NOARGS),
      DECLARE_METHOD(t_Module, getName, METH_NOARGS),
      DECLARE_METHOD(t_Module, getPackages, METH_NOARGS),
      DECLARE_METHOD(t_Module, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Module, isExported, METH_VARARGS),
      DECLARE_METHOD(t_Module, isNamed, METH_NOARGS),
      DECLARE_METHOD(t_Module, isOpen, METH_VARARGS),
      DECLARE_METHOD(t_Module, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Module)[] = {
      { Py_tp_methods, t_Module__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Module__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Module)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Module, t_Module, Module);

    void t_Module::install(PyObject *module)
    {
      installType(&PY_TYPE(Module), &PY_TYPE_DEF(Module), module, "Module", 0);
    }

    void t_Module::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "class_", make_descriptor(Module::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "wrapfn_", make_descriptor(t_Module::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Module_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Module::initializeClass, 1)))
        return NULL;
      return t_Module::wrap_Object(Module(((t_Module *) arg)->object.this$));
    }
    static PyObject *t_Module_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Module::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Module_addExports(t_Module *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Module a1((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addExports(a0, a1));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addExports", args);
      return NULL;
    }

    static PyObject *t_Module_addOpens(t_Module *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Module a1((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addOpens(a0, a1));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addOpens", args);
      return NULL;
    }

    static PyObject *t_Module_addReads(t_Module *self, PyObject *arg)
    {
      Module a0((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArg(arg, "k", Module::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.addReads(a0));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addReads", arg);
      return NULL;
    }

    static PyObject *t_Module_addUses(t_Module *self, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      Module result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.addUses(a0));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addUses", arg);
      return NULL;
    }

    static PyObject *t_Module_canRead(t_Module *self, PyObject *arg)
    {
      Module a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Module::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.canRead(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "canRead", arg);
      return NULL;
    }

    static PyObject *t_Module_canUse(t_Module *self, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.canUse(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "canUse", arg);
      return NULL;
    }

    static PyObject *t_Module_getClassLoader(t_Module *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Module_getLayer(t_Module *self)
    {
      ::java::lang::ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = self->object.getLayer());
      return ::java::lang::t_ModuleLayer::wrap_Object(result);
    }

    static PyObject *t_Module_getName(t_Module *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Module_getPackages(t_Module *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackages());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Module_getResourceAsStream(t_Module *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Module_isExported(t_Module *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isExported(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Module a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.isExported(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isExported", args);
      return NULL;
    }

    static PyObject *t_Module_isNamed(t_Module *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNamed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Module_isOpen(t_Module *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isOpen(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Module a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.isOpen(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isOpen", args);
      return NULL;
    }

    static PyObject *t_Module_toString(t_Module *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Module), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Module_get__classLoader(t_Module *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Module_get__layer(t_Module *self, void *data)
    {
      ::java::lang::ModuleLayer value((jobject) NULL);
      OBJ_CALL(value = self->object.getLayer());
      return ::java::lang::t_ModuleLayer::wrap_Object(value);
    }

    static PyObject *t_Module_get__name(t_Module *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Module_get__named(t_Module *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNamed());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Module_get__packages(t_Module *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackages());
      return ::java::util::t_Set::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$Category.h"
#include "java/util/Locale$Category.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$Category::class$ = NULL;
    jmethodID *Locale$Category::mids$ = NULL;
    bool Locale$Category::live$ = false;
    Locale$Category *Locale$Category::DISPLAY = NULL;
    Locale$Category *Locale$Category::FORMAT = NULL;

    jclass Locale$Category::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$Category");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_41b22a2b1c930420] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;");
        mids$[mid_values_27b29be8fc0310e5] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$Category;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DISPLAY = new Locale$Category(env->getStaticObjectField(cls, "DISPLAY", "Ljava/util/Locale$Category;"));
        FORMAT = new Locale$Category(env->getStaticObjectField(cls, "FORMAT", "Ljava/util/Locale$Category;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$Category Locale$Category::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$Category(env->callStaticObjectMethod(cls, mids$[mid_valueOf_41b22a2b1c930420], a0.this$));
    }

    JArray< Locale$Category > Locale$Category::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$Category >(env->callStaticObjectMethod(cls, mids$[mid_values_27b29be8fc0310e5]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$Category_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$Category_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$Category_of_(t_Locale$Category *self, PyObject *args);
    static PyObject *t_Locale$Category_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$Category_values(PyTypeObject *type);
    static PyObject *t_Locale$Category_get__parameters_(t_Locale$Category *self, void *data);
    static PyGetSetDef t_Locale$Category__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$Category, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$Category__methods_[] = {
      DECLARE_METHOD(t_Locale$Category, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$Category, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$Category)[] = {
      { Py_tp_methods, t_Locale$Category__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$Category__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$Category)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$Category, t_Locale$Category, Locale$Category);
    PyObject *t_Locale$Category::wrap_Object(const Locale$Category& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$Category::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$Category *self = (t_Locale$Category *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$Category::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$Category::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$Category *self = (t_Locale$Category *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$Category::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$Category), &PY_TYPE_DEF(Locale$Category), module, "Locale$Category", 0);
    }

    void t_Locale$Category::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "class_", make_descriptor(Locale$Category::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "wrapfn_", make_descriptor(t_Locale$Category::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$Category::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "DISPLAY", make_descriptor(t_Locale$Category::wrap_Object(*Locale$Category::DISPLAY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "FORMAT", make_descriptor(t_Locale$Category::wrap_Object(*Locale$Category::FORMAT)));
    }

    static PyObject *t_Locale$Category_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$Category::initializeClass, 1)))
        return NULL;
      return t_Locale$Category::wrap_Object(Locale$Category(((t_Locale$Category *) arg)->object.this$));
    }
    static PyObject *t_Locale$Category_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$Category::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$Category_of_(t_Locale$Category *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$Category_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$Category result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$Category::valueOf(a0));
        return t_Locale$Category::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$Category_values(PyTypeObject *type)
    {
      JArray< Locale$Category > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$Category::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$Category::wrap_jobject);
    }
    static PyObject *t_Locale$Category_get__parameters_(t_Locale$Category *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator$OfInt.h"
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
        mids$[mid_forEachRemaining_64bd7cd37c5a3179] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/IntConsumer;)V");
        mids$[mid_tryAdvance_91d08c022b6ca5ab] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/IntConsumer;)Z");
        mids$[mid_trySplit_6c3ef0a5dba4667c] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfInt;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfInt::forEachRemaining(const ::java::util::function::IntConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_64bd7cd37c5a3179], a0.this$);
    }

    jboolean Spliterator$OfInt::tryAdvance(const ::java::util::function::IntConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_91d08c022b6ca5ab], a0.this$);
    }

    Spliterator$OfInt Spliterator$OfInt::trySplit() const
    {
      return Spliterator$OfInt(env->callObjectMethod(this$, mids$[mid_trySplit_6c3ef0a5dba4667c]));
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
#include "java/lang/Comparable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Comparable::class$ = NULL;
    jmethodID *Comparable::mids$ = NULL;
    bool Comparable::live$ = false;

    jclass Comparable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Comparable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_ac8c1b6f384391ef] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparable::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_ac8c1b6f384391ef], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Comparable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparable_of_(t_Comparable *self, PyObject *args);
    static PyObject *t_Comparable_compareTo(t_Comparable *self, PyObject *arg);
    static PyObject *t_Comparable_get__parameters_(t_Comparable *self, void *data);
    static PyGetSetDef t_Comparable__fields_[] = {
      DECLARE_GET_FIELD(t_Comparable, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Comparable__methods_[] = {
      DECLARE_METHOD(t_Comparable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparable, of_, METH_VARARGS),
      DECLARE_METHOD(t_Comparable, compareTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Comparable)[] = {
      { Py_tp_methods, t_Comparable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Comparable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Comparable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Comparable, t_Comparable, Comparable);
    PyObject *t_Comparable::wrap_Object(const Comparable& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparable::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparable *self = (t_Comparable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Comparable::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparable::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparable *self = (t_Comparable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Comparable::install(PyObject *module)
    {
      installType(&PY_TYPE(Comparable), &PY_TYPE_DEF(Comparable), module, "Comparable", 0);
    }

    void t_Comparable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "class_", make_descriptor(Comparable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "wrapfn_", make_descriptor(t_Comparable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Comparable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Comparable::initializeClass, 1)))
        return NULL;
      return t_Comparable::wrap_Object(Comparable(((t_Comparable *) arg)->object.this$));
    }
    static PyObject *t_Comparable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Comparable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Comparable_of_(t_Comparable *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Comparable_compareTo(t_Comparable *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }
    static PyObject *t_Comparable_get__parameters_(t_Comparable *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map$Entry::class$ = NULL;
    jmethodID *Map$Entry::mids$ = NULL;
    bool Map$Entry::live$ = false;

    jclass Map$Entry::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map$Entry");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparingByKey_838794f9a43cf98e] = env->getStaticMethodID(cls, "comparingByKey", "()Ljava/util/Comparator;");
        mids$[mid_comparingByKey_3d37843ecb21deb5] = env->getStaticMethodID(cls, "comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_comparingByValue_838794f9a43cf98e] = env->getStaticMethodID(cls, "comparingByValue", "()Ljava/util/Comparator;");
        mids$[mid_comparingByValue_3d37843ecb21deb5] = env->getStaticMethodID(cls, "comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getKey_dfd7647d9110ac9f] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
        mids$[mid_getValue_dfd7647d9110ac9f] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setValue_ed50a8b49b8274dc] = env->getMethodID(cls, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator Map$Entry::comparingByKey()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_838794f9a43cf98e]));
    }

    ::java::util::Comparator Map$Entry::comparingByKey(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_3d37843ecb21deb5], a0.this$));
    }

    ::java::util::Comparator Map$Entry::comparingByValue()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_838794f9a43cf98e]));
    }

    ::java::util::Comparator Map$Entry::comparingByValue(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_3d37843ecb21deb5], a0.this$));
    }

    jboolean Map$Entry::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Map$Entry::getKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Map$Entry::getValue() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_dfd7647d9110ac9f]));
    }

    jint Map$Entry::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    ::java::lang::Object Map$Entry::setValue(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setValue_ed50a8b49b8274dc], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map$Entry_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map$Entry_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map$Entry_of_(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_comparingByKey(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map$Entry_comparingByValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map$Entry_equals(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_getKey(t_Map$Entry *self);
    static PyObject *t_Map$Entry_getValue(t_Map$Entry *self);
    static PyObject *t_Map$Entry_hashCode(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_setValue(t_Map$Entry *self, PyObject *arg);
    static PyObject *t_Map$Entry_get__key(t_Map$Entry *self, void *data);
    static PyObject *t_Map$Entry_get__value(t_Map$Entry *self, void *data);
    static int t_Map$Entry_set__value(t_Map$Entry *self, PyObject *arg, void *data);
    static PyObject *t_Map$Entry_get__parameters_(t_Map$Entry *self, void *data);
    static PyGetSetDef t_Map$Entry__fields_[] = {
      DECLARE_GET_FIELD(t_Map$Entry, key),
      DECLARE_GETSET_FIELD(t_Map$Entry, value),
      DECLARE_GET_FIELD(t_Map$Entry, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map$Entry__methods_[] = {
      DECLARE_METHOD(t_Map$Entry, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, comparingByKey, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, comparingByValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, getKey, METH_NOARGS),
      DECLARE_METHOD(t_Map$Entry, getValue, METH_NOARGS),
      DECLARE_METHOD(t_Map$Entry, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, setValue, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map$Entry)[] = {
      { Py_tp_methods, t_Map$Entry__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map$Entry__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map$Entry)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map$Entry, t_Map$Entry, Map$Entry);
    PyObject *t_Map$Entry::wrap_Object(const Map$Entry& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map$Entry::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map$Entry *self = (t_Map$Entry *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map$Entry::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map$Entry *self = (t_Map$Entry *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map$Entry::install(PyObject *module)
    {
      installType(&PY_TYPE(Map$Entry), &PY_TYPE_DEF(Map$Entry), module, "Map$Entry", 0);
    }

    void t_Map$Entry::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "class_", make_descriptor(Map$Entry::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "wrapfn_", make_descriptor(t_Map$Entry::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map$Entry_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map$Entry::initializeClass, 1)))
        return NULL;
      return t_Map$Entry::wrap_Object(Map$Entry(((t_Map$Entry *) arg)->object.this$));
    }
    static PyObject *t_Map$Entry_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map$Entry::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map$Entry_of_(t_Map$Entry *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map$Entry_comparingByKey(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map$Entry::comparingByKey());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Map$Entry::comparingByKey(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "comparingByKey", args);
      return NULL;
    }

    static PyObject *t_Map$Entry_comparingByValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map$Entry::comparingByValue());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Map$Entry::comparingByValue(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "comparingByValue", args);
      return NULL;
    }

    static PyObject *t_Map$Entry_equals(t_Map$Entry *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map$Entry), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map$Entry_getKey(t_Map$Entry *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getKey());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Map$Entry_getValue(t_Map$Entry *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getValue());
      return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Map$Entry_hashCode(t_Map$Entry *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map$Entry), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map$Entry_setValue(t_Map$Entry *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(result = self->object.setValue(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setValue", arg);
      return NULL;
    }
    static PyObject *t_Map$Entry_get__parameters_(t_Map$Entry *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map$Entry_get__key(t_Map$Entry *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getKey());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_Map$Entry_get__value(t_Map$Entry *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getValue());
      return ::java::lang::t_Object::wrap_Object(value);
    }
    static int t_Map$Entry_set__value(t_Map$Entry *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Object value((jobject) NULL);
        if (!parseArg(arg, "o", &value))
        {
          INT_CALL(self->object.setValue(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "value", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputValidation::class$ = NULL;
    jmethodID *ObjectInputValidation::mids$ = NULL;
    bool ObjectInputValidation::live$ = false;

    jclass ObjectInputValidation::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputValidation");

        mids$ = new jmethodID[max_mid];
        mids$[mid_validateObject_7ae3461a92a43152] = env->getMethodID(cls, "validateObject", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectInputValidation::validateObject() const
    {
      env->callVoidMethod(this$, mids$[mid_validateObject_7ae3461a92a43152]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputValidation_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputValidation_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputValidation_validateObject(t_ObjectInputValidation *self);

    static PyMethodDef t_ObjectInputValidation__methods_[] = {
      DECLARE_METHOD(t_ObjectInputValidation, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputValidation, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputValidation, validateObject, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputValidation)[] = {
      { Py_tp_methods, t_ObjectInputValidation__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputValidation)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputValidation, t_ObjectInputValidation, ObjectInputValidation);

    void t_ObjectInputValidation::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputValidation), &PY_TYPE_DEF(ObjectInputValidation), module, "ObjectInputValidation", 0);
    }

    void t_ObjectInputValidation::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "class_", make_descriptor(ObjectInputValidation::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "wrapfn_", make_descriptor(t_ObjectInputValidation::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputValidation_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputValidation::initializeClass, 1)))
        return NULL;
      return t_ObjectInputValidation::wrap_Object(ObjectInputValidation(((t_ObjectInputValidation *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputValidation_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputValidation::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputValidation_validateObject(t_ObjectInputValidation *self)
    {
      OBJ_CALL(self->object.validateObject());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Closeable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Closeable::class$ = NULL;
    jmethodID *Closeable::mids$ = NULL;
    bool Closeable::live$ = false;

    jclass Closeable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Closeable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Closeable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Closeable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Closeable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Closeable_close(t_Closeable *self, PyObject *args);

    static PyMethodDef t_Closeable__methods_[] = {
      DECLARE_METHOD(t_Closeable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Closeable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Closeable, close, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Closeable)[] = {
      { Py_tp_methods, t_Closeable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Closeable)[] = {
      &PY_TYPE_DEF(::java::lang::AutoCloseable),
      NULL
    };

    DEFINE_TYPE(Closeable, t_Closeable, Closeable);

    void t_Closeable::install(PyObject *module)
    {
      installType(&PY_TYPE(Closeable), &PY_TYPE_DEF(Closeable), module, "Closeable", 0);
    }

    void t_Closeable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "class_", make_descriptor(Closeable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "wrapfn_", make_descriptor(t_Closeable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Closeable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Closeable::initializeClass, 1)))
        return NULL;
      return t_Closeable::wrap_Object(Closeable(((t_Closeable *) arg)->object.this$));
    }
    static PyObject *t_Closeable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Closeable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Closeable_close(t_Closeable *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Closeable), (PyObject *) self, "close", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ListIterator::class$ = NULL;
    jmethodID *ListIterator::mids$ = NULL;
    bool ListIterator::live$ = false;

    jclass ListIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ListIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_7ca0d9438822cb0b] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)V");
        mids$[mid_hasNext_e470b6d9e0d979db] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_hasPrevious_e470b6d9e0d979db] = env->getMethodID(cls, "hasPrevious", "()Z");
        mids$[mid_next_dfd7647d9110ac9f] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_nextIndex_f2f64475e4580546] = env->getMethodID(cls, "nextIndex", "()I");
        mids$[mid_previous_dfd7647d9110ac9f] = env->getMethodID(cls, "previous", "()Ljava/lang/Object;");
        mids$[mid_previousIndex_f2f64475e4580546] = env->getMethodID(cls, "previousIndex", "()I");
        mids$[mid_remove_7ae3461a92a43152] = env->getMethodID(cls, "remove", "()V");
        mids$[mid_set_7ca0d9438822cb0b] = env->getMethodID(cls, "set", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ListIterator::add(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_add_7ca0d9438822cb0b], a0.this$);
    }

    jboolean ListIterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_e470b6d9e0d979db]);
    }

    jboolean ListIterator::hasPrevious() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasPrevious_e470b6d9e0d979db]);
    }

    ::java::lang::Object ListIterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_dfd7647d9110ac9f]));
    }

    jint ListIterator::nextIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_nextIndex_f2f64475e4580546]);
    }

    ::java::lang::Object ListIterator::previous() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_previous_dfd7647d9110ac9f]));
    }

    jint ListIterator::previousIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_previousIndex_f2f64475e4580546]);
    }

    void ListIterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_7ae3461a92a43152]);
    }

    void ListIterator::set(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_set_7ca0d9438822cb0b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ListIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ListIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ListIterator_of_(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_add(t_ListIterator *self, PyObject *arg);
    static PyObject *t_ListIterator_hasNext(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_hasPrevious(t_ListIterator *self);
    static PyObject *t_ListIterator_next(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_nextIndex(t_ListIterator *self);
    static PyObject *t_ListIterator_previous(t_ListIterator *self);
    static PyObject *t_ListIterator_previousIndex(t_ListIterator *self);
    static PyObject *t_ListIterator_remove(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_set(t_ListIterator *self, PyObject *arg);
    static PyObject *t_ListIterator_get__parameters_(t_ListIterator *self, void *data);
    static PyGetSetDef t_ListIterator__fields_[] = {
      DECLARE_GET_FIELD(t_ListIterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ListIterator__methods_[] = {
      DECLARE_METHOD(t_ListIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ListIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ListIterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, add, METH_O),
      DECLARE_METHOD(t_ListIterator, hasNext, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, hasPrevious, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, next, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, nextIndex, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, previous, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, previousIndex, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, remove, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, set, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ListIterator)[] = {
      { Py_tp_methods, t_ListIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ListIterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ListIterator)[] = {
      &PY_TYPE_DEF(::java::util::Iterator),
      NULL
    };

    DEFINE_TYPE(ListIterator, t_ListIterator, ListIterator);
    PyObject *t_ListIterator::wrap_Object(const ListIterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ListIterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ListIterator *self = (t_ListIterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ListIterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ListIterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ListIterator *self = (t_ListIterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ListIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(ListIterator), &PY_TYPE_DEF(ListIterator), module, "ListIterator", 0);
    }

    void t_ListIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "class_", make_descriptor(ListIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "wrapfn_", make_descriptor(t_ListIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ListIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ListIterator::initializeClass, 1)))
        return NULL;
      return t_ListIterator::wrap_Object(ListIterator(((t_ListIterator *) arg)->object.this$));
    }
    static PyObject *t_ListIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ListIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ListIterator_of_(t_ListIterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_ListIterator_add(t_ListIterator *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.add(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_ListIterator_hasNext(t_ListIterator *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "hasNext", args, 2);
    }

    static PyObject *t_ListIterator_hasPrevious(t_ListIterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasPrevious());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ListIterator_next(t_ListIterator *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.next());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "next", args, 2);
    }

    static PyObject *t_ListIterator_nextIndex(t_ListIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.nextIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ListIterator_previous(t_ListIterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.previous());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ListIterator_previousIndex(t_ListIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.previousIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ListIterator_remove(t_ListIterator *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ListIterator_set(t_ListIterator *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.set(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "set", arg);
      return NULL;
    }
    static PyObject *t_ListIterator_get__parameters_(t_ListIterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
