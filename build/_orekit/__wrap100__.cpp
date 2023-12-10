#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/IOException.h"
#include "java/io/ObjectOutput.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream$PutField::class$ = NULL;
    jmethodID *ObjectOutputStream$PutField::mids$ = NULL;
    bool ObjectOutputStream$PutField::live$ = false;

    jclass ObjectOutputStream$PutField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream$PutField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_put_d1dd1bdcf55f8f80] = env->getMethodID(cls, "put", "(Ljava/lang/String;Z)V");
        mids$[mid_put_d8db59d524369146] = env->getMethodID(cls, "put", "(Ljava/lang/String;B)V");
        mids$[mid_put_7519d48499ecc9f1] = env->getMethodID(cls, "put", "(Ljava/lang/String;C)V");
        mids$[mid_put_dc256bfc3daae929] = env->getMethodID(cls, "put", "(Ljava/lang/String;D)V");
        mids$[mid_put_a9e5853450c40585] = env->getMethodID(cls, "put", "(Ljava/lang/String;F)V");
        mids$[mid_put_cabf0c57aa55c764] = env->getMethodID(cls, "put", "(Ljava/lang/String;I)V");
        mids$[mid_put_69697a1d09839056] = env->getMethodID(cls, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_put_c20964352be13a9e] = env->getMethodID(cls, "put", "(Ljava/lang/String;J)V");
        mids$[mid_put_7e517bdb222888df] = env->getMethodID(cls, "put", "(Ljava/lang/String;S)V");
        mids$[mid_write_c18dd8e10ca01609] = env->getMethodID(cls, "write", "(Ljava/io/ObjectOutput;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream$PutField::ObjectOutputStream$PutField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_d1dd1bdcf55f8f80], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jbyte a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_d8db59d524369146], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_7519d48499ecc9f1], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jdouble a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_dc256bfc3daae929], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jfloat a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_a9e5853450c40585], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_cabf0c57aa55c764], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_69697a1d09839056], a0.this$, a1.this$);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jlong a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_c20964352be13a9e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jshort a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_7e517bdb222888df], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::write(const ::java::io::ObjectOutput & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_c18dd8e10ca01609], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args);
    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream$PutField__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream$PutField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, put, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, write, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream$PutField)[] = {
      { Py_tp_methods, t_ObjectOutputStream$PutField__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream$PutField_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream$PutField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream$PutField, t_ObjectOutputStream$PutField, ObjectOutputStream$PutField);

    void t_ObjectOutputStream$PutField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream$PutField), &PY_TYPE_DEF(ObjectOutputStream$PutField), module, "ObjectOutputStream$PutField", 0);
    }

    void t_ObjectOutputStream$PutField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "class_", make_descriptor(ObjectOutputStream$PutField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "wrapfn_", make_descriptor(t_ObjectOutputStream$PutField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream$PutField::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream$PutField::wrap_Object(ObjectOutputStream$PutField(((t_ObjectOutputStream$PutField *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream$PutField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds)
    {
      ObjectOutputStream$PutField object((jobject) NULL);

      INT_CALL(object = ObjectOutputStream$PutField());
      self->object = object;

      return 0;
    }

    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "sB", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "sC", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "sF", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "sS", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg)
    {
      ::java::io::ObjectOutput a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectOutput::initializeClass, &a0))
      {
        OBJ_CALL(self->object.write(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "write", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/FieldPosition.h"
#include "java/text/Format$Field.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *FieldPosition::class$ = NULL;
    jmethodID *FieldPosition::mids$ = NULL;
    bool FieldPosition::live$ = false;

    jclass FieldPosition::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/FieldPosition");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_fc614ca28d5c4727] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;)V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_1fb84685894eb9b6] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;I)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBeginIndex_f2f64475e4580546] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_f2f64475e4580546] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getField_f2f64475e4580546] = env->getMethodID(cls, "getField", "()I");
        mids$[mid_getFieldAttribute_79c8167006688aa7] = env->getMethodID(cls, "getFieldAttribute", "()Ljava/text/Format$Field;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setBeginIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "setBeginIndex", "(I)V");
        mids$[mid_setEndIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "setEndIndex", "(I)V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc614ca28d5c4727, a0.this$)) {}

    FieldPosition::FieldPosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1fb84685894eb9b6, a0.this$, a1)) {}

    jboolean FieldPosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint FieldPosition::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_f2f64475e4580546]);
    }

    jint FieldPosition::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_f2f64475e4580546]);
    }

    jint FieldPosition::getField() const
    {
      return env->callIntMethod(this$, mids$[mid_getField_f2f64475e4580546]);
    }

    ::java::text::Format$Field FieldPosition::getFieldAttribute() const
    {
      return ::java::text::Format$Field(env->callObjectMethod(this$, mids$[mid_getFieldAttribute_79c8167006688aa7]));
    }

    jint FieldPosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    void FieldPosition::setBeginIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setBeginIndex_0a2a1ac2721c0336], a0);
    }

    void FieldPosition::setEndIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setEndIndex_0a2a1ac2721c0336], a0);
    }

    ::java::lang::String FieldPosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_FieldPosition_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldPosition_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FieldPosition_init_(t_FieldPosition *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FieldPosition_equals(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_getBeginIndex(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getEndIndex(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getField(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getFieldAttribute(t_FieldPosition *self);
    static PyObject *t_FieldPosition_hashCode(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_setBeginIndex(t_FieldPosition *self, PyObject *arg);
    static PyObject *t_FieldPosition_setEndIndex(t_FieldPosition *self, PyObject *arg);
    static PyObject *t_FieldPosition_toString(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_get__beginIndex(t_FieldPosition *self, void *data);
    static int t_FieldPosition_set__beginIndex(t_FieldPosition *self, PyObject *arg, void *data);
    static PyObject *t_FieldPosition_get__endIndex(t_FieldPosition *self, void *data);
    static int t_FieldPosition_set__endIndex(t_FieldPosition *self, PyObject *arg, void *data);
    static PyObject *t_FieldPosition_get__field(t_FieldPosition *self, void *data);
    static PyObject *t_FieldPosition_get__fieldAttribute(t_FieldPosition *self, void *data);
    static PyGetSetDef t_FieldPosition__fields_[] = {
      DECLARE_GETSET_FIELD(t_FieldPosition, beginIndex),
      DECLARE_GETSET_FIELD(t_FieldPosition, endIndex),
      DECLARE_GET_FIELD(t_FieldPosition, field),
      DECLARE_GET_FIELD(t_FieldPosition, fieldAttribute),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldPosition__methods_[] = {
      DECLARE_METHOD(t_FieldPosition, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldPosition, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldPosition, equals, METH_VARARGS),
      DECLARE_METHOD(t_FieldPosition, getBeginIndex, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getEndIndex, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getFieldAttribute, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_FieldPosition, setBeginIndex, METH_O),
      DECLARE_METHOD(t_FieldPosition, setEndIndex, METH_O),
      DECLARE_METHOD(t_FieldPosition, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldPosition)[] = {
      { Py_tp_methods, t_FieldPosition__methods_ },
      { Py_tp_init, (void *) t_FieldPosition_init_ },
      { Py_tp_getset, t_FieldPosition__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldPosition)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldPosition, t_FieldPosition, FieldPosition);

    void t_FieldPosition::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldPosition), &PY_TYPE_DEF(FieldPosition), module, "FieldPosition", 0);
    }

    void t_FieldPosition::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "class_", make_descriptor(FieldPosition::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "wrapfn_", make_descriptor(t_FieldPosition::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldPosition_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldPosition::initializeClass, 1)))
        return NULL;
      return t_FieldPosition::wrap_Object(FieldPosition(((t_FieldPosition *) arg)->object.this$));
    }
    static PyObject *t_FieldPosition_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldPosition::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FieldPosition_init_(t_FieldPosition *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::text::Format$Field a0((jobject) NULL);
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::text::Format$Field::initializeClass, &a0))
          {
            INT_CALL(object = FieldPosition(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = FieldPosition(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::text::Format$Field a0((jobject) NULL);
          jint a1;
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::text::Format$Field::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FieldPosition(a0, a1));
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

    static PyObject *t_FieldPosition_equals(t_FieldPosition *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_FieldPosition_getBeginIndex(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getBeginIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getEndIndex(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getEndIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getField(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getField());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getFieldAttribute(t_FieldPosition *self)
    {
      ::java::text::Format$Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getFieldAttribute());
      return ::java::text::t_Format$Field::wrap_Object(result);
    }

    static PyObject *t_FieldPosition_hashCode(t_FieldPosition *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_FieldPosition_setBeginIndex(t_FieldPosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setBeginIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setBeginIndex", arg);
      return NULL;
    }

    static PyObject *t_FieldPosition_setEndIndex(t_FieldPosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setEndIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setEndIndex", arg);
      return NULL;
    }

    static PyObject *t_FieldPosition_toString(t_FieldPosition *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_FieldPosition_get__beginIndex(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getBeginIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_FieldPosition_set__beginIndex(t_FieldPosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setBeginIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "beginIndex", arg);
      return -1;
    }

    static PyObject *t_FieldPosition_get__endIndex(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getEndIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_FieldPosition_set__endIndex(t_FieldPosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setEndIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "endIndex", arg);
      return -1;
    }

    static PyObject *t_FieldPosition_get__field(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getField());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_FieldPosition_get__fieldAttribute(t_FieldPosition *self, void *data)
    {
      ::java::text::Format$Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getFieldAttribute());
      return ::java::text::t_Format$Field::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParsePosition::class$ = NULL;
    jmethodID *ParsePosition::mids$ = NULL;
    bool ParsePosition::live$ = false;

    jclass ParsePosition::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParsePosition");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getErrorIndex_f2f64475e4580546] = env->getMethodID(cls, "getErrorIndex", "()I");
        mids$[mid_getIndex_f2f64475e4580546] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setErrorIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "setErrorIndex", "(I)V");
        mids$[mid_setIndex_0a2a1ac2721c0336] = env->getMethodID(cls, "setIndex", "(I)V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParsePosition::ParsePosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    jboolean ParsePosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint ParsePosition::getErrorIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorIndex_f2f64475e4580546]);
    }

    jint ParsePosition::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_f2f64475e4580546]);
    }

    jint ParsePosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    void ParsePosition::setErrorIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setErrorIndex_0a2a1ac2721c0336], a0);
    }

    void ParsePosition::setIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setIndex_0a2a1ac2721c0336], a0);
    }

    ::java::lang::String ParsePosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data);
    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data);
    static PyGetSetDef t_ParsePosition__fields_[] = {
      DECLARE_GETSET_FIELD(t_ParsePosition, errorIndex),
      DECLARE_GETSET_FIELD(t_ParsePosition, index),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParsePosition__methods_[] = {
      DECLARE_METHOD(t_ParsePosition, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, equals, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, getErrorIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, getIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, setErrorIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, setIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParsePosition)[] = {
      { Py_tp_methods, t_ParsePosition__methods_ },
      { Py_tp_init, (void *) t_ParsePosition_init_ },
      { Py_tp_getset, t_ParsePosition__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParsePosition)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ParsePosition, t_ParsePosition, ParsePosition);

    void t_ParsePosition::install(PyObject *module)
    {
      installType(&PY_TYPE(ParsePosition), &PY_TYPE_DEF(ParsePosition), module, "ParsePosition", 0);
    }

    void t_ParsePosition::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "class_", make_descriptor(ParsePosition::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "wrapfn_", make_descriptor(t_ParsePosition::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParsePosition::initializeClass, 1)))
        return NULL;
      return t_ParsePosition::wrap_Object(ParsePosition(((t_ParsePosition *) arg)->object.this$));
    }
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParsePosition::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds)
    {
      jint a0;
      ParsePosition object((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        INT_CALL(object = ParsePosition(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setErrorIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setErrorIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setErrorIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "errorIndex", arg);
      return -1;
    }

    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "index", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ClassLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/util/stream/Stream.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/lang/Package.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassLoader::class$ = NULL;
    jmethodID *ClassLoader::mids$ = NULL;
    bool ClassLoader::live$ = false;

    jclass ClassLoader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassLoader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clearAssertionStatus_7ae3461a92a43152] = env->getMethodID(cls, "clearAssertionStatus", "()V");
        mids$[mid_getDefinedPackage_f7c808f242d7007d] = env->getMethodID(cls, "getDefinedPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getDefinedPackages_24dcadba5c7fd8f6] = env->getMethodID(cls, "getDefinedPackages", "()[Ljava/lang/Package;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_9f59dd0605cf9d96] = env->getMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
        mids$[mid_getPlatformClassLoader_9f59dd0605cf9d96] = env->getStaticMethodID(cls, "getPlatformClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getResource_4b560f872f3037b3] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_e48d48998e90da79] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getResources_2e136456ddf0ab85] = env->getMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getSystemClassLoader_9f59dd0605cf9d96] = env->getStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getSystemResource_4b560f872f3037b3] = env->getStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getSystemResourceAsStream_e48d48998e90da79] = env->getStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSystemResources_2e136456ddf0ab85] = env->getStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getUnnamedModule_c94272da82329f0f] = env->getMethodID(cls, "getUnnamedModule", "()Ljava/lang/Module;");
        mids$[mid_isRegisteredAsParallelCapable_e470b6d9e0d979db] = env->getMethodID(cls, "isRegisteredAsParallelCapable", "()Z");
        mids$[mid_loadClass_8cb3351ef7334fdc] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resources_1c57947609c2810a] = env->getMethodID(cls, "resources", "(Ljava/lang/String;)Ljava/util/stream/Stream;");
        mids$[mid_setClassAssertionStatus_d1dd1bdcf55f8f80] = env->getMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_setDefaultAssertionStatus_50a2e0b139e80a58] = env->getMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
        mids$[mid_setPackageAssertionStatus_d1dd1bdcf55f8f80] = env->getMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_loadClass_5e29079533cadb94] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;");
        mids$[mid_definePackage_f74e2edfca0e8647] = env->getMethodID(cls, "definePackage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;");
        mids$[mid_getPackage_f7c808f242d7007d] = env->getMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_setSigners_da4a6a76a32f7871] = env->getMethodID(cls, "setSigners", "(Ljava/lang/Class;[Ljava/lang/Object;)V");
        mids$[mid_findResource_4b560f872f3037b3] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_findResource_66fbe1c6454cadf1] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getClassLoadingLock_f3d00a864d7248c7] = env->getMethodID(cls, "getClassLoadingLock", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_findLoadedClass_8cb3351ef7334fdc] = env->getMethodID(cls, "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_8cb3351ef7334fdc] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_cf078d88ae8c1f80] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveClass_f9fd73a09eca27dc] = env->getMethodID(cls, "resolveClass", "(Ljava/lang/Class;)V");
        mids$[mid_defineClass_5be1a60ab65d3ae9] = env->getMethodID(cls, "defineClass", "([BII)Ljava/lang/Class;");
        mids$[mid_defineClass_2bb354dcbda9167b] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;");
        mids$[mid_defineClass_186acf264293ee56] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_defineClass_624b759c8319ed76] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_findSystemClass_8cb3351ef7334fdc] = env->getMethodID(cls, "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findResources_2e136456ddf0ab85] = env->getMethodID(cls, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_registerAsParallelCapable_e470b6d9e0d979db] = env->getStaticMethodID(cls, "registerAsParallelCapable", "()Z");
        mids$[mid_getPackages_24dcadba5c7fd8f6] = env->getMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_findLibrary_43625fc1c3d86afe] = env->getMethodID(cls, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ClassLoader::clearAssertionStatus() const
    {
      env->callVoidMethod(this$, mids$[mid_clearAssertionStatus_7ae3461a92a43152]);
    }

    ::java::lang::Package ClassLoader::getDefinedPackage(const ::java::lang::String & a0) const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getDefinedPackage_f7c808f242d7007d], a0.this$));
    }

    JArray< ::java::lang::Package > ClassLoader::getDefinedPackages() const
    {
      return JArray< ::java::lang::Package >(env->callObjectMethod(this$, mids$[mid_getDefinedPackages_24dcadba5c7fd8f6]));
    }

    ::java::lang::String ClassLoader::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    ClassLoader ClassLoader::getParent() const
    {
      return ClassLoader(env->callObjectMethod(this$, mids$[mid_getParent_9f59dd0605cf9d96]));
    }

    ClassLoader ClassLoader::getPlatformClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getPlatformClassLoader_9f59dd0605cf9d96]));
    }

    ::java::net::URL ClassLoader::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_4b560f872f3037b3], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_e48d48998e90da79], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getResources(const ::java::lang::String & a0) const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getResources_2e136456ddf0ab85], a0.this$));
    }

    ClassLoader ClassLoader::getSystemClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getSystemClassLoader_9f59dd0605cf9d96]));
    }

    ::java::net::URL ClassLoader::getSystemResource(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::net::URL(env->callStaticObjectMethod(cls, mids$[mid_getSystemResource_4b560f872f3037b3], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getSystemResourceAsStream(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::InputStream(env->callStaticObjectMethod(cls, mids$[mid_getSystemResourceAsStream_e48d48998e90da79], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getSystemResources(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_getSystemResources_2e136456ddf0ab85], a0.this$));
    }

    ::java::lang::Module ClassLoader::getUnnamedModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getUnnamedModule_c94272da82329f0f]));
    }

    jboolean ClassLoader::isRegisteredAsParallelCapable() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isRegisteredAsParallelCapable_e470b6d9e0d979db]);
    }

    ::java::lang::Class ClassLoader::loadClass(const ::java::lang::String & a0) const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_loadClass_8cb3351ef7334fdc], a0.this$));
    }

    ::java::util::stream::Stream ClassLoader::resources(const ::java::lang::String & a0) const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_resources_1c57947609c2810a], a0.this$));
    }

    void ClassLoader::setClassAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setClassAssertionStatus_d1dd1bdcf55f8f80], a0.this$, a1);
    }

    void ClassLoader::setDefaultAssertionStatus(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDefaultAssertionStatus_50a2e0b139e80a58], a0);
    }

    void ClassLoader::setPackageAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setPackageAssertionStatus_d1dd1bdcf55f8f80], a0.this$, a1);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassLoader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_clearAssertionStatus(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getDefinedPackage(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getDefinedPackages(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getName(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getParent(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getPlatformClassLoader(PyTypeObject *type);
    static PyObject *t_ClassLoader_getResource(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getResourceAsStream(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getResources(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemClassLoader(PyTypeObject *type);
    static PyObject *t_ClassLoader_getSystemResource(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemResourceAsStream(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemResources(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getUnnamedModule(t_ClassLoader *self);
    static PyObject *t_ClassLoader_isRegisteredAsParallelCapable(t_ClassLoader *self);
    static PyObject *t_ClassLoader_loadClass(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_resources(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_setClassAssertionStatus(t_ClassLoader *self, PyObject *args);
    static PyObject *t_ClassLoader_setDefaultAssertionStatus(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_setPackageAssertionStatus(t_ClassLoader *self, PyObject *args);
    static int t_ClassLoader_set__defaultAssertionStatus(t_ClassLoader *self, PyObject *arg, void *data);
    static PyObject *t_ClassLoader_get__definedPackages(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__name(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__parent(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__platformClassLoader(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__registeredAsParallelCapable(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__systemClassLoader(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__unnamedModule(t_ClassLoader *self, void *data);
    static PyGetSetDef t_ClassLoader__fields_[] = {
      DECLARE_SET_FIELD(t_ClassLoader, defaultAssertionStatus),
      DECLARE_GET_FIELD(t_ClassLoader, definedPackages),
      DECLARE_GET_FIELD(t_ClassLoader, name),
      DECLARE_GET_FIELD(t_ClassLoader, parent),
      DECLARE_GET_FIELD(t_ClassLoader, platformClassLoader),
      DECLARE_GET_FIELD(t_ClassLoader, registeredAsParallelCapable),
      DECLARE_GET_FIELD(t_ClassLoader, systemClassLoader),
      DECLARE_GET_FIELD(t_ClassLoader, unnamedModule),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassLoader__methods_[] = {
      DECLARE_METHOD(t_ClassLoader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, clearAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getDefinedPackage, METH_O),
      DECLARE_METHOD(t_ClassLoader, getDefinedPackages, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getName, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getParent, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getPlatformClassLoader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getResource, METH_O),
      DECLARE_METHOD(t_ClassLoader, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_ClassLoader, getResources, METH_O),
      DECLARE_METHOD(t_ClassLoader, getSystemClassLoader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResource, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResourceAsStream, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResources, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getUnnamedModule, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, isRegisteredAsParallelCapable, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, loadClass, METH_O),
      DECLARE_METHOD(t_ClassLoader, resources, METH_O),
      DECLARE_METHOD(t_ClassLoader, setClassAssertionStatus, METH_VARARGS),
      DECLARE_METHOD(t_ClassLoader, setDefaultAssertionStatus, METH_O),
      DECLARE_METHOD(t_ClassLoader, setPackageAssertionStatus, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassLoader)[] = {
      { Py_tp_methods, t_ClassLoader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ClassLoader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassLoader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ClassLoader, t_ClassLoader, ClassLoader);

    void t_ClassLoader::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassLoader), &PY_TYPE_DEF(ClassLoader), module, "ClassLoader", 0);
    }

    void t_ClassLoader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "class_", make_descriptor(ClassLoader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "wrapfn_", make_descriptor(t_ClassLoader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassLoader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassLoader::initializeClass, 1)))
        return NULL;
      return t_ClassLoader::wrap_Object(ClassLoader(((t_ClassLoader *) arg)->object.this$));
    }
    static PyObject *t_ClassLoader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassLoader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ClassLoader_clearAssertionStatus(t_ClassLoader *self)
    {
      OBJ_CALL(self->object.clearAssertionStatus());
      Py_RETURN_NONE;
    }

    static PyObject *t_ClassLoader_getDefinedPackage(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Package result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getDefinedPackage(a0));
        return ::java::lang::t_Package::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getDefinedPackage", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getDefinedPackages(t_ClassLoader *self)
    {
      JArray< ::java::lang::Package > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDefinedPackages());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Package::wrap_jobject);
    }

    static PyObject *t_ClassLoader_getName(t_ClassLoader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ClassLoader_getParent(t_ClassLoader *self)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getPlatformClassLoader(PyTypeObject *type)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ClassLoader::getPlatformClassLoader());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getResource(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getResourceAsStream(t_ClassLoader *self, PyObject *arg)
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

    static PyObject *t_ClassLoader_getResources(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResources(a0));
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError((PyObject *) self, "getResources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemClassLoader(PyTypeObject *type)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ClassLoader::getSystemClassLoader());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getSystemResource(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getSystemResource", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemResourceAsStream(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getSystemResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemResources(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResources(a0));
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError(type, "getSystemResources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getUnnamedModule(t_ClassLoader *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnnamedModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_isRegisteredAsParallelCapable(t_ClassLoader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isRegisteredAsParallelCapable());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ClassLoader_loadClass(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Class result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.loadClass(a0));
        return ::java::lang::t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "loadClass", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_resources(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::stream::Stream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.resources(a0));
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError((PyObject *) self, "resources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_setClassAssertionStatus(t_ClassLoader *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean a1;

      if (!parseArgs(args, "sZ", &a0, &a1))
      {
        OBJ_CALL(self->object.setClassAssertionStatus(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setClassAssertionStatus", args);
      return NULL;
    }

    static PyObject *t_ClassLoader_setDefaultAssertionStatus(t_ClassLoader *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDefaultAssertionStatus(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDefaultAssertionStatus", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_setPackageAssertionStatus(t_ClassLoader *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean a1;

      if (!parseArgs(args, "sZ", &a0, &a1))
      {
        OBJ_CALL(self->object.setPackageAssertionStatus(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPackageAssertionStatus", args);
      return NULL;
    }

    static int t_ClassLoader_set__defaultAssertionStatus(t_ClassLoader *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDefaultAssertionStatus(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "defaultAssertionStatus", arg);
      return -1;
    }

    static PyObject *t_ClassLoader_get__definedPackages(t_ClassLoader *self, void *data)
    {
      JArray< ::java::lang::Package > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefinedPackages());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Package::wrap_jobject);
    }

    static PyObject *t_ClassLoader_get__name(t_ClassLoader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ClassLoader_get__parent(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__platformClassLoader(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getPlatformClassLoader());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__registeredAsParallelCapable(t_ClassLoader *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isRegisteredAsParallelCapable());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ClassLoader_get__systemClassLoader(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getSystemClassLoader());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__unnamedModule(t_ClassLoader *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnnamedModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NoSuchElementException::class$ = NULL;
    jmethodID *NoSuchElementException::mids$ = NULL;
    bool NoSuchElementException::live$ = false;

    jclass NoSuchElementException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NoSuchElementException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NoSuchElementException::NoSuchElementException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    NoSuchElementException::NoSuchElementException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NoSuchElementException__methods_[] = {
      DECLARE_METHOD(t_NoSuchElementException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NoSuchElementException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NoSuchElementException)[] = {
      { Py_tp_methods, t_NoSuchElementException__methods_ },
      { Py_tp_init, (void *) t_NoSuchElementException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NoSuchElementException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NoSuchElementException, t_NoSuchElementException, NoSuchElementException);

    void t_NoSuchElementException::install(PyObject *module)
    {
      installType(&PY_TYPE(NoSuchElementException), &PY_TYPE_DEF(NoSuchElementException), module, "NoSuchElementException", 0);
    }

    void t_NoSuchElementException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "class_", make_descriptor(NoSuchElementException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "wrapfn_", make_descriptor(t_NoSuchElementException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NoSuchElementException::initializeClass, 1)))
        return NULL;
      return t_NoSuchElementException::wrap_Object(NoSuchElementException(((t_NoSuchElementException *) arg)->object.this$));
    }
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NoSuchElementException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NoSuchElementException object((jobject) NULL);

          INT_CALL(object = NoSuchElementException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NoSuchElementException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NoSuchElementException(a0));
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
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *RandomAccess::class$ = NULL;
    jmethodID *RandomAccess::mids$ = NULL;
    bool RandomAccess::live$ = false;

    jclass RandomAccess::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/RandomAccess");

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
  namespace util {
    static PyObject *t_RandomAccess_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RandomAccess_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_RandomAccess__methods_[] = {
      DECLARE_METHOD(t_RandomAccess, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RandomAccess, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RandomAccess)[] = {
      { Py_tp_methods, t_RandomAccess__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RandomAccess)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(RandomAccess, t_RandomAccess, RandomAccess);

    void t_RandomAccess::install(PyObject *module)
    {
      installType(&PY_TYPE(RandomAccess), &PY_TYPE_DEF(RandomAccess), module, "RandomAccess", 0);
    }

    void t_RandomAccess::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "class_", make_descriptor(RandomAccess::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "wrapfn_", make_descriptor(t_RandomAccess::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RandomAccess_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RandomAccess::initializeClass, 1)))
        return NULL;
      return t_RandomAccess::wrap_Object(RandomAccess(((t_RandomAccess *) arg)->object.this$));
    }
    static PyObject *t_RandomAccess_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RandomAccess::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e91f0c25c14e98ea] = env->getMethodID(cls, "<init>", "(JDDD)V");
        mids$[mid_accept_77e0f9a1f260e2e5] = env->getMethodID(cls, "accept", "(D)V");
        mids$[mid_combine_c0ba40af689196dd] = env->getMethodID(cls, "combine", "(Ljava/util/DoubleSummaryStatistics;)V");
        mids$[mid_getAverage_456d9a2f64d6b28d] = env->getMethodID(cls, "getAverage", "()D");
        mids$[mid_getCount_a27fc9afd27e559d] = env->getMethodID(cls, "getCount", "()J");
        mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
        mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
        mids$[mid_getSum_456d9a2f64d6b28d] = env->getMethodID(cls, "getSum", "()D");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DoubleSummaryStatistics::DoubleSummaryStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    DoubleSummaryStatistics::DoubleSummaryStatistics(jlong a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e91f0c25c14e98ea, a0, a1, a2, a3)) {}

    void DoubleSummaryStatistics::accept(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_accept_77e0f9a1f260e2e5], a0);
    }

    void DoubleSummaryStatistics::combine(const DoubleSummaryStatistics & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_combine_c0ba40af689196dd], a0.this$);
    }

    jdouble DoubleSummaryStatistics::getAverage() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAverage_456d9a2f64d6b28d]);
    }

    jlong DoubleSummaryStatistics::getCount() const
    {
      return env->callLongMethod(this$, mids$[mid_getCount_a27fc9afd27e559d]);
    }

    jdouble DoubleSummaryStatistics::getMax() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
    }

    jdouble DoubleSummaryStatistics::getMin() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
    }

    jdouble DoubleSummaryStatistics::getSum() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getSum_456d9a2f64d6b28d]);
    }

    ::java::lang::String DoubleSummaryStatistics::toString() const
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
#include "java/util/Deque.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Deque::class$ = NULL;
    jmethodID *Deque::mids$ = NULL;
    bool Deque::live$ = false;

    jclass Deque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Deque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_7ca0d9438822cb0b] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_7ca0d9438822cb0b] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_035c6167e6569aac] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_dfd7647d9110ac9f] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_dfd7647d9110ac9f] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_229c87223f486349] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_229c87223f486349] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_229c87223f486349] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_dfd7647d9110ac9f] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_dfd7647d9110ac9f] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_dfd7647d9110ac9f] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_dfd7647d9110ac9f] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_dfd7647d9110ac9f] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_7ca0d9438822cb0b] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_dfd7647d9110ac9f] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_229c87223f486349] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_dfd7647d9110ac9f] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_229c87223f486349] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Deque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean Deque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    void Deque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_7ca0d9438822cb0b], a0.this$);
    }

    void Deque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_7ca0d9438822cb0b], a0.this$);
    }

    jboolean Deque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    ::java::util::Iterator Deque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_035c6167e6569aac]));
    }

    ::java::lang::Object Deque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_dfd7647d9110ac9f]));
    }

    ::java::util::Iterator Deque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jboolean Deque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_229c87223f486349], a0.this$);
    }

    jboolean Deque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_229c87223f486349], a0.this$);
    }

    jboolean Deque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Deque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Deque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_dfd7647d9110ac9f]));
    }

    void Deque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_7ca0d9438822cb0b], a0.this$);
    }

    ::java::lang::Object Deque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_dfd7647d9110ac9f]));
    }

    jboolean Deque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Deque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_dfd7647d9110ac9f]));
    }

    jboolean Deque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Deque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_dfd7647d9110ac9f]));
    }

    jboolean Deque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_229c87223f486349], a0.this$);
    }

    jint Deque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Deque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Deque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Deque_of_(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_add(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_addAll(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_addFirst(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_addLast(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_contains(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_descendingIterator(t_Deque *self);
    static PyObject *t_Deque_element(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_getFirst(t_Deque *self);
    static PyObject *t_Deque_getLast(t_Deque *self);
    static PyObject *t_Deque_iterator(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_offer(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_offerFirst(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_offerLast(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_peek(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_peekFirst(t_Deque *self);
    static PyObject *t_Deque_peekLast(t_Deque *self);
    static PyObject *t_Deque_poll(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_pollFirst(t_Deque *self);
    static PyObject *t_Deque_pollLast(t_Deque *self);
    static PyObject *t_Deque_pop(t_Deque *self);
    static PyObject *t_Deque_push(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_remove(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_removeFirst(t_Deque *self);
    static PyObject *t_Deque_removeFirstOccurrence(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_removeLast(t_Deque *self);
    static PyObject *t_Deque_removeLastOccurrence(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_size(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_get__first(t_Deque *self, void *data);
    static PyObject *t_Deque_get__last(t_Deque *self, void *data);
    static PyObject *t_Deque_get__parameters_(t_Deque *self, void *data);
    static PyGetSetDef t_Deque__fields_[] = {
      DECLARE_GET_FIELD(t_Deque, first),
      DECLARE_GET_FIELD(t_Deque, last),
      DECLARE_GET_FIELD(t_Deque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Deque__methods_[] = {
      DECLARE_METHOD(t_Deque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Deque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Deque, of_, METH_VARARGS),
      DECLARE_METHOD(t_Deque, add, METH_VARARGS),
      DECLARE_METHOD(t_Deque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Deque, addFirst, METH_O),
      DECLARE_METHOD(t_Deque, addLast, METH_O),
      DECLARE_METHOD(t_Deque, contains, METH_VARARGS),
      DECLARE_METHOD(t_Deque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_Deque, element, METH_VARARGS),
      DECLARE_METHOD(t_Deque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Deque, offer, METH_VARARGS),
      DECLARE_METHOD(t_Deque, offerFirst, METH_O),
      DECLARE_METHOD(t_Deque, offerLast, METH_O),
      DECLARE_METHOD(t_Deque, peek, METH_VARARGS),
      DECLARE_METHOD(t_Deque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, poll, METH_VARARGS),
      DECLARE_METHOD(t_Deque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, pop, METH_NOARGS),
      DECLARE_METHOD(t_Deque, push, METH_O),
      DECLARE_METHOD(t_Deque, remove, METH_VARARGS),
      DECLARE_METHOD(t_Deque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_Deque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_Deque, size, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Deque)[] = {
      { Py_tp_methods, t_Deque__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Deque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Deque *)) get_generic_iterator< t_Deque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Deque)[] = {
      &PY_TYPE_DEF(::java::util::Queue),
      NULL
    };

    DEFINE_TYPE(Deque, t_Deque, Deque);
    PyObject *t_Deque::wrap_Object(const Deque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Deque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Deque *self = (t_Deque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Deque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Deque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Deque *self = (t_Deque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Deque::install(PyObject *module)
    {
      installType(&PY_TYPE(Deque), &PY_TYPE_DEF(Deque), module, "Deque", 0);
    }

    void t_Deque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "class_", make_descriptor(Deque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "wrapfn_", make_descriptor(t_Deque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Deque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Deque::initializeClass, 1)))
        return NULL;
      return t_Deque::wrap_Object(Deque(((t_Deque *) arg)->object.this$));
    }
    static PyObject *t_Deque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Deque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Deque_of_(t_Deque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Deque_add(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Deque_addAll(t_Deque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Deque_addFirst(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_Deque_addLast(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_Deque_contains(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Deque_descendingIterator(t_Deque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Deque_element(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.element());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "element", args, 2);
    }

    static PyObject *t_Deque_getFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_getLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_iterator(t_Deque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Deque_offer(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "offer", args, 2);
    }

    static PyObject *t_Deque_offerFirst(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_Deque_offerLast(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_Deque_peek(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.peek());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "peek", args, 2);
    }

    static PyObject *t_Deque_peekFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_peekLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_poll(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.poll());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "poll", args, 2);
    }

    static PyObject *t_Deque_pollFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_pollLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_pop(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_push(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_Deque_remove(t_Deque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Deque_removeFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_removeFirstOccurrence(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_Deque_removeLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_removeLastOccurrence(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_Deque_size(t_Deque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "size", args, 2);
    }
    static PyObject *t_Deque_get__parameters_(t_Deque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Deque_get__first(t_Deque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_Deque_get__last(t_Deque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Queue.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Queue::class$ = NULL;
    jmethodID *Queue::mids$ = NULL;
    bool Queue::live$ = false;

    jclass Queue::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Queue");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_element_dfd7647d9110ac9f] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_offer_229c87223f486349] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_dfd7647d9110ac9f] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_poll_dfd7647d9110ac9f] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_remove_dfd7647d9110ac9f] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Queue::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Queue::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_dfd7647d9110ac9f]));
    }

    jboolean Queue::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Queue::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Queue::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_dfd7647d9110ac9f]));
    }

    ::java::lang::Object Queue::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_dfd7647d9110ac9f]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Queue_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Queue_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Queue_of_(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_add(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_element(t_Queue *self);
    static PyObject *t_Queue_offer(t_Queue *self, PyObject *arg);
    static PyObject *t_Queue_peek(t_Queue *self);
    static PyObject *t_Queue_poll(t_Queue *self);
    static PyObject *t_Queue_remove(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_get__parameters_(t_Queue *self, void *data);
    static PyGetSetDef t_Queue__fields_[] = {
      DECLARE_GET_FIELD(t_Queue, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Queue__methods_[] = {
      DECLARE_METHOD(t_Queue, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Queue, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Queue, of_, METH_VARARGS),
      DECLARE_METHOD(t_Queue, add, METH_VARARGS),
      DECLARE_METHOD(t_Queue, element, METH_NOARGS),
      DECLARE_METHOD(t_Queue, offer, METH_O),
      DECLARE_METHOD(t_Queue, peek, METH_NOARGS),
      DECLARE_METHOD(t_Queue, poll, METH_NOARGS),
      DECLARE_METHOD(t_Queue, remove, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Queue)[] = {
      { Py_tp_methods, t_Queue__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Queue__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Queue)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Queue, t_Queue, Queue);
    PyObject *t_Queue::wrap_Object(const Queue& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Queue::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Queue *self = (t_Queue *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Queue::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Queue::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Queue *self = (t_Queue *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Queue::install(PyObject *module)
    {
      installType(&PY_TYPE(Queue), &PY_TYPE_DEF(Queue), module, "Queue", 0);
    }

    void t_Queue::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "class_", make_descriptor(Queue::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "wrapfn_", make_descriptor(t_Queue::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Queue_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Queue::initializeClass, 1)))
        return NULL;
      return t_Queue::wrap_Object(Queue(((t_Queue *) arg)->object.this$));
    }
    static PyObject *t_Queue_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Queue::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Queue_of_(t_Queue *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Queue_add(t_Queue *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Queue), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Queue_element(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_offer(t_Queue *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_Queue_peek(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_poll(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_remove(t_Queue *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.remove());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Queue), (PyObject *) self, "remove", args, 2);
    }
    static PyObject *t_Queue_get__parameters_(t_Queue *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Class.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfLong::class$ = NULL;
    jmethodID *Spliterator$OfLong::mids$ = NULL;
    bool Spliterator$OfLong::live$ = false;

    jclass Spliterator$OfLong::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfLong");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_ae0a38e10a876268] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/LongConsumer;)V");
        mids$[mid_tryAdvance_9e19f44cd8fbc8c9] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/LongConsumer;)Z");
        mids$[mid_trySplit_fba0c0c93abce90a] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfLong;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfLong::forEachRemaining(const ::java::util::function::LongConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_ae0a38e10a876268], a0.this$);
    }

    jboolean Spliterator$OfLong::tryAdvance(const ::java::util::function::LongConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_9e19f44cd8fbc8c9], a0.this$);
    }

    Spliterator$OfLong Spliterator$OfLong::trySplit() const
    {
      return Spliterator$OfLong(env->callObjectMethod(this$, mids$[mid_trySplit_fba0c0c93abce90a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfLong_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfLong_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfLong_of_(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_forEachRemaining(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_tryAdvance(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_trySplit(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_get__parameters_(t_Spliterator$OfLong *self, void *data);
    static PyGetSetDef t_Spliterator$OfLong__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfLong, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfLong__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfLong, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfLong, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfLong, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfLong)[] = {
      { Py_tp_methods, t_Spliterator$OfLong__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfLong__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfLong)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator$OfPrimitive),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfLong, t_Spliterator$OfLong, Spliterator$OfLong);
    PyObject *t_Spliterator$OfLong::wrap_Object(const Spliterator$OfLong& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfLong::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfLong *self = (t_Spliterator$OfLong *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfLong::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfLong::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfLong *self = (t_Spliterator$OfLong *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator$OfLong::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfLong), &PY_TYPE_DEF(Spliterator$OfLong), module, "Spliterator$OfLong", 0);
    }

    void t_Spliterator$OfLong::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "class_", make_descriptor(Spliterator$OfLong::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "wrapfn_", make_descriptor(t_Spliterator$OfLong::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfLong_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfLong::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfLong::wrap_Object(Spliterator$OfLong(((t_Spliterator$OfLong *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfLong_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfLong::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfLong_of_(t_Spliterator$OfLong *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfLong_forEachRemaining(t_Spliterator$OfLong *self, PyObject *args)
    {
      ::java::util::function::LongConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::LongConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfLong_tryAdvance(t_Spliterator$OfLong *self, PyObject *args)
    {
      ::java::util::function::LongConsumer a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::util::function::LongConsumer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfLong_trySplit(t_Spliterator$OfLong *self, PyObject *args)
    {
      Spliterator$OfLong result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return t_Spliterator$OfLong::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfLong_get__parameters_(t_Spliterator$OfLong *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ResourceBundle.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle::class$ = NULL;
    jmethodID *ResourceBundle::mids$ = NULL;
    bool ResourceBundle::live$ = false;

    jclass ResourceBundle::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clearCache_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearCache", "()V");
        mids$[mid_clearCache_9d86b3b4fa2f4a01] = env->getStaticMethodID(cls, "clearCache", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_containsKey_6b161f495ea569b8] = env->getMethodID(cls, "containsKey", "(Ljava/lang/String;)Z");
        mids$[mid_getBaseBundleName_0090f7797e403f43] = env->getMethodID(cls, "getBaseBundleName", "()Ljava/lang/String;");
        mids$[mid_getBundle_425de97a61e47560] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_8a153c72d56f6efe] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_33767e35b0a269f4] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_bd32d557436ba459] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_a97bf6ce95c5ce27] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_b9889c4f08cb9f0a] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_751b39e21330a3bf] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_6f108b24bbd564e6] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getKeys_44964b2b3d187632] = env->getMethodID(cls, "getKeys", "()Ljava/util/Enumeration;");
        mids$[mid_getLocale_5e8efe29e6703a20] = env->getMethodID(cls, "getLocale", "()Ljava/util/Locale;");
        mids$[mid_getObject_f3d00a864d7248c7] = env->getMethodID(cls, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_getString_43625fc1c3d86afe] = env->getMethodID(cls, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getStringArray_1c925abc6f702288] = env->getMethodID(cls, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_handleGetObject_f3d00a864d7248c7] = env->getMethodID(cls, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_handleKeySet_e9e1a6780fe94297] = env->getMethodID(cls, "handleKeySet", "()Ljava/util/Set;");
        mids$[mid_setParent_13cfe5475bd60ad9] = env->getMethodID(cls, "setParent", "(Ljava/util/ResourceBundle;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ResourceBundle::ResourceBundle() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    void ResourceBundle::clearCache()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_7ae3461a92a43152]);
    }

    void ResourceBundle::clearCache(const ::java::lang::ClassLoader & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_9d86b3b4fa2f4a01], a0.this$);
    }

    jboolean ResourceBundle::containsKey(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_6b161f495ea569b8], a0.this$);
    }

    ::java::lang::String ResourceBundle::getBaseBundleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBaseBundleName_0090f7797e403f43]));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_425de97a61e47560], a0.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::lang::Module & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_8a153c72d56f6efe], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_33767e35b0a269f4], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::ResourceBundle$Control & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_bd32d557436ba459], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_a97bf6ce95c5ce27], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::Module & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_b9889c4f08cb9f0a], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::util::ResourceBundle$Control & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_751b39e21330a3bf], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2, const ::java::util::ResourceBundle$Control & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_6f108b24bbd564e6], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::java::util::Enumeration ResourceBundle::getKeys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getKeys_44964b2b3d187632]));
    }

    ::java::util::Locale ResourceBundle::getLocale() const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getLocale_5e8efe29e6703a20]));
    }

    ::java::lang::Object ResourceBundle::getObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getObject_f3d00a864d7248c7], a0.this$));
    }

    ::java::lang::String ResourceBundle::getString(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getString_43625fc1c3d86afe], a0.this$));
    }

    JArray< ::java::lang::String > ResourceBundle::getStringArray(const ::java::lang::String & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getStringArray_1c925abc6f702288], a0.this$));
    }

    ::java::util::Set ResourceBundle::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data);
    static PyGetSetDef t_ResourceBundle__fields_[] = {
      DECLARE_GET_FIELD(t_ResourceBundle, baseBundleName),
      DECLARE_GET_FIELD(t_ResourceBundle, keys),
      DECLARE_GET_FIELD(t_ResourceBundle, locale),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ResourceBundle__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, clearCache, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, containsKey, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getBaseBundleName, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getBundle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, getKeys, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getLocale, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getObject, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getString, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getStringArray, METH_O),
      DECLARE_METHOD(t_ResourceBundle, keySet, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle)[] = {
      { Py_tp_methods, t_ResourceBundle__methods_ },
      { Py_tp_init, (void *) t_ResourceBundle_init_ },
      { Py_tp_getset, t_ResourceBundle__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle, t_ResourceBundle, ResourceBundle);

    void t_ResourceBundle::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle), &PY_TYPE_DEF(ResourceBundle), module, "ResourceBundle", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "Control", make_descriptor(&PY_TYPE_DEF(ResourceBundle$Control)));
    }

    void t_ResourceBundle::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "class_", make_descriptor(ResourceBundle::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "wrapfn_", make_descriptor(t_ResourceBundle::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle::wrap_Object(ResourceBundle(((t_ResourceBundle *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds)
    {
      ResourceBundle object((jobject) NULL);

      INT_CALL(object = ResourceBundle());
      self->object = object;

      return 0;
    }

    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(::java::util::ResourceBundle::clearCache());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::lang::ClassLoader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ClassLoader::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::ResourceBundle::clearCache(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "clearCache", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getBaseBundleName());
      return j2p(result);
    }

    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Module a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle$Control a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::Module a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::util::ResourceBundle$Control a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ::java::util::ResourceBundle$Control a3((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skkk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2, a3));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self)
    {
      ::java::util::Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(result);
    }

    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getObject(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getObject", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getString", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::String > result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getStringArray(a0));
        return JArray<jstring>(result.this$).wrap();
      }

      PyErr_SetArgsError((PyObject *) self, "getStringArray", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getBaseBundleName());
      return j2p(value);
    }

    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data)
    {
      ::java::util::Enumeration value((jobject) NULL);
      OBJ_CALL(value = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(value);
    }

    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data)
    {
      ::java::util::Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Map.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator::class$ = NULL;
    jmethodID *AttributedCharacterIterator::mids$ = NULL;
    bool AttributedCharacterIterator::live$ = false;

    jclass AttributedCharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAllAttributeKeys_e9e1a6780fe94297] = env->getMethodID(cls, "getAllAttributeKeys", "()Ljava/util/Set;");
        mids$[mid_getAttribute_331a91ce4e725dc5] = env->getMethodID(cls, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
        mids$[mid_getAttributes_d6753b7055940a54] = env->getMethodID(cls, "getAttributes", "()Ljava/util/Map;");
        mids$[mid_getRunLimit_f2f64475e4580546] = env->getMethodID(cls, "getRunLimit", "()I");
        mids$[mid_getRunLimit_2e7e960d6074d4cd] = env->getMethodID(cls, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunLimit_beb513c9bdd614d1] = env->getMethodID(cls, "getRunLimit", "(Ljava/util/Set;)I");
        mids$[mid_getRunStart_f2f64475e4580546] = env->getMethodID(cls, "getRunStart", "()I");
        mids$[mid_getRunStart_2e7e960d6074d4cd] = env->getMethodID(cls, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunStart_beb513c9bdd614d1] = env->getMethodID(cls, "getRunStart", "(Ljava/util/Set;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set AttributedCharacterIterator::getAllAttributeKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getAllAttributeKeys_e9e1a6780fe94297]));
    }

    ::java::lang::Object AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_331a91ce4e725dc5], a0.this$));
    }

    ::java::util::Map AttributedCharacterIterator::getAttributes() const
    {
      return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAttributes_d6753b7055940a54]));
    }

    jint AttributedCharacterIterator::getRunLimit() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_f2f64475e4580546]);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_2e7e960d6074d4cd], a0.this$);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_beb513c9bdd614d1], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_f2f64475e4580546]);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_2e7e960d6074d4cd], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_beb513c9bdd614d1], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data);
    static PyGetSetDef t_AttributedCharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, allAttributeKeys),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, attributes),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runLimit),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runStart),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AttributedCharacterIterator__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAllAttributeKeys, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttribute, METH_O),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttributes, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunLimit, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunStart, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AttributedCharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator)[] = {
      &PY_TYPE_DEF(::java::text::CharacterIterator),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator, t_AttributedCharacterIterator, AttributedCharacterIterator);

    void t_AttributedCharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator), &PY_TYPE_DEF(AttributedCharacterIterator), module, "AttributedCharacterIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "Attribute", make_descriptor(&PY_TYPE_DEF(AttributedCharacterIterator$Attribute)));
    }

    void t_AttributedCharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "class_", make_descriptor(AttributedCharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "wrapfn_", make_descriptor(t_AttributedCharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator::wrap_Object(AttributedCharacterIterator(((t_AttributedCharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute));
    }

    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg)
    {
      ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.getAttribute(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getAttribute", arg);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunLimit());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunLimit", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunStart());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunStart", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunLimit());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunStart());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter.h"
#include "java/lang/Class.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
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
        mids$[mid_checkInput_9a8c66293ee3d4bc] = env->getMethodID(cls, "checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::io::ObjectInputFilter$Status ObjectInputFilter::checkInput(const ::java::io::ObjectInputFilter$FilterInfo & a0) const
    {
      return ::java::io::ObjectInputFilter$Status(env->callObjectMethod(this$, mids$[mid_checkInput_9a8c66293ee3d4bc], a0.this$));
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
#include "java/io/ObjectInput.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInput::class$ = NULL;
    jmethodID *ObjectInput::mids$ = NULL;
    bool ObjectInput::live$ = false;

    jclass ObjectInput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_available_f2f64475e4580546] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_11d417f25cf33664] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_4e993e185759f10d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readObject_dfd7647d9110ac9f] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint ObjectInput::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_f2f64475e4580546]);
    }

    void ObjectInput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    jint ObjectInput::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_11d417f25cf33664], a0.this$);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_4e993e185759f10d], a0.this$, a1, a2);
    }

    ::java::lang::Object ObjectInput::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_dfd7647d9110ac9f]));
    }

    jlong ObjectInput::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInput_available(t_ObjectInput *self);
    static PyObject *t_ObjectInput_close(t_ObjectInput *self);
    static PyObject *t_ObjectInput_read(t_ObjectInput *self, PyObject *args);
    static PyObject *t_ObjectInput_readObject(t_ObjectInput *self);
    static PyObject *t_ObjectInput_skip(t_ObjectInput *self, PyObject *arg);

    static PyMethodDef t_ObjectInput__methods_[] = {
      DECLARE_METHOD(t_ObjectInput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInput, available, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, close, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, read, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInput, readObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, skip, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInput)[] = {
      { Py_tp_methods, t_ObjectInput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInput)[] = {
      &PY_TYPE_DEF(::java::io::DataInput),
      NULL
    };

    DEFINE_TYPE(ObjectInput, t_ObjectInput, ObjectInput);

    void t_ObjectInput::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInput), &PY_TYPE_DEF(ObjectInput), module, "ObjectInput", 0);
    }

    void t_ObjectInput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "class_", make_descriptor(ObjectInput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "wrapfn_", make_descriptor(t_ObjectInput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInput::initializeClass, 1)))
        return NULL;
      return t_ObjectInput::wrap_Object(ObjectInput(((t_ObjectInput *) arg)->object.this$));
    }
    static PyObject *t_ObjectInput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInput_available(t_ObjectInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInput_close(t_ObjectInput *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectInput_read(t_ObjectInput *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_ObjectInput_readObject(t_ObjectInput *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readObject());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInput_skip(t_ObjectInput *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalAccessException::class$ = NULL;
    jmethodID *IllegalAccessException::mids$ = NULL;
    bool IllegalAccessException::live$ = false;

    jclass IllegalAccessException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalAccessException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalAccessException::IllegalAccessException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    IllegalAccessException::IllegalAccessException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalAccessException__methods_[] = {
      DECLARE_METHOD(t_IllegalAccessException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalAccessException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalAccessException)[] = {
      { Py_tp_methods, t_IllegalAccessException__methods_ },
      { Py_tp_init, (void *) t_IllegalAccessException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalAccessException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(IllegalAccessException, t_IllegalAccessException, IllegalAccessException);

    void t_IllegalAccessException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalAccessException), &PY_TYPE_DEF(IllegalAccessException), module, "IllegalAccessException", 0);
    }

    void t_IllegalAccessException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "class_", make_descriptor(IllegalAccessException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "wrapfn_", make_descriptor(t_IllegalAccessException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalAccessException::initializeClass, 1)))
        return NULL;
      return t_IllegalAccessException::wrap_Object(IllegalAccessException(((t_IllegalAccessException *) arg)->object.this$));
    }
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalAccessException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalAccessException object((jobject) NULL);

          INT_CALL(object = IllegalAccessException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalAccessException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalAccessException(a0));
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
#include "java/io/SerializablePermission.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *SerializablePermission::class$ = NULL;
    jmethodID *SerializablePermission::mids$ = NULL;
    bool SerializablePermission::live$ = false;

    jclass SerializablePermission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/SerializablePermission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_SerializablePermission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SerializablePermission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SerializablePermission_init_(t_SerializablePermission *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SerializablePermission__methods_[] = {
      DECLARE_METHOD(t_SerializablePermission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SerializablePermission, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SerializablePermission)[] = {
      { Py_tp_methods, t_SerializablePermission__methods_ },
      { Py_tp_init, (void *) t_SerializablePermission_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SerializablePermission)[] = {
      &PY_TYPE_DEF(::java::security::BasicPermission),
      NULL
    };

    DEFINE_TYPE(SerializablePermission, t_SerializablePermission, SerializablePermission);

    void t_SerializablePermission::install(PyObject *module)
    {
      installType(&PY_TYPE(SerializablePermission), &PY_TYPE_DEF(SerializablePermission), module, "SerializablePermission", 0);
    }

    void t_SerializablePermission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "class_", make_descriptor(SerializablePermission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "wrapfn_", make_descriptor(t_SerializablePermission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SerializablePermission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SerializablePermission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SerializablePermission::initializeClass, 1)))
        return NULL;
      return t_SerializablePermission::wrap_Object(SerializablePermission(((t_SerializablePermission *) arg)->object.this$));
    }
    static PyObject *t_SerializablePermission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SerializablePermission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SerializablePermission_init_(t_SerializablePermission *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          SerializablePermission object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = SerializablePermission(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          SerializablePermission object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = SerializablePermission(a0, a1));
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
#include "java/io/SyncFailedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *SyncFailedException::class$ = NULL;
    jmethodID *SyncFailedException::mids$ = NULL;
    bool SyncFailedException::live$ = false;

    jclass SyncFailedException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/SyncFailedException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SyncFailedException::SyncFailedException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_SyncFailedException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SyncFailedException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SyncFailedException_init_(t_SyncFailedException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SyncFailedException__methods_[] = {
      DECLARE_METHOD(t_SyncFailedException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SyncFailedException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SyncFailedException)[] = {
      { Py_tp_methods, t_SyncFailedException__methods_ },
      { Py_tp_init, (void *) t_SyncFailedException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SyncFailedException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(SyncFailedException, t_SyncFailedException, SyncFailedException);

    void t_SyncFailedException::install(PyObject *module)
    {
      installType(&PY_TYPE(SyncFailedException), &PY_TYPE_DEF(SyncFailedException), module, "SyncFailedException", 0);
    }

    void t_SyncFailedException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "class_", make_descriptor(SyncFailedException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "wrapfn_", make_descriptor(t_SyncFailedException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SyncFailedException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SyncFailedException::initializeClass, 1)))
        return NULL;
      return t_SyncFailedException::wrap_Object(SyncFailedException(((t_SyncFailedException *) arg)->object.this$));
    }
    static PyObject *t_SyncFailedException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SyncFailedException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SyncFailedException_init_(t_SyncFailedException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      SyncFailedException object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = SyncFailedException(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/io/Serializable.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator$Attribute::class$ = NULL;
    jmethodID *AttributedCharacterIterator$Attribute::mids$ = NULL;
    bool AttributedCharacterIterator$Attribute::live$ = false;
    AttributedCharacterIterator$Attribute *AttributedCharacterIterator$Attribute::INPUT_METHOD_SEGMENT = NULL;
    AttributedCharacterIterator$Attribute *AttributedCharacterIterator$Attribute::LANGUAGE = NULL;
    AttributedCharacterIterator$Attribute *AttributedCharacterIterator$Attribute::READING = NULL;

    jclass AttributedCharacterIterator$Attribute::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator$Attribute");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_readResolve_dfd7647d9110ac9f] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        INPUT_METHOD_SEGMENT = new AttributedCharacterIterator$Attribute(env->getStaticObjectField(cls, "INPUT_METHOD_SEGMENT", "Ljava/text/AttributedCharacterIterator$Attribute;"));
        LANGUAGE = new AttributedCharacterIterator$Attribute(env->getStaticObjectField(cls, "LANGUAGE", "Ljava/text/AttributedCharacterIterator$Attribute;"));
        READING = new AttributedCharacterIterator$Attribute(env->getStaticObjectField(cls, "READING", "Ljava/text/AttributedCharacterIterator$Attribute;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AttributedCharacterIterator$Attribute::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint AttributedCharacterIterator$Attribute::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    ::java::lang::String AttributedCharacterIterator$Attribute::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator$Attribute_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator$Attribute_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator$Attribute_equals(t_AttributedCharacterIterator$Attribute *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator$Attribute_hashCode(t_AttributedCharacterIterator$Attribute *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator$Attribute_toString(t_AttributedCharacterIterator$Attribute *self, PyObject *args);

    static PyMethodDef t_AttributedCharacterIterator$Attribute__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator$Attribute, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator$Attribute, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator$Attribute, equals, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator$Attribute, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator$Attribute, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator$Attribute)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator$Attribute__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator$Attribute)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator$Attribute, t_AttributedCharacterIterator$Attribute, AttributedCharacterIterator$Attribute);

    void t_AttributedCharacterIterator$Attribute::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator$Attribute), &PY_TYPE_DEF(AttributedCharacterIterator$Attribute), module, "AttributedCharacterIterator$Attribute", 0);
    }

    void t_AttributedCharacterIterator$Attribute::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "class_", make_descriptor(AttributedCharacterIterator$Attribute::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "wrapfn_", make_descriptor(t_AttributedCharacterIterator$Attribute::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "boxfn_", make_descriptor(boxObject));
      env->getClass(AttributedCharacterIterator$Attribute::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "INPUT_METHOD_SEGMENT", make_descriptor(t_AttributedCharacterIterator$Attribute::wrap_Object(*AttributedCharacterIterator$Attribute::INPUT_METHOD_SEGMENT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "LANGUAGE", make_descriptor(t_AttributedCharacterIterator$Attribute::wrap_Object(*AttributedCharacterIterator$Attribute::LANGUAGE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator$Attribute), "READING", make_descriptor(t_AttributedCharacterIterator$Attribute::wrap_Object(*AttributedCharacterIterator$Attribute::READING)));
    }

    static PyObject *t_AttributedCharacterIterator$Attribute_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator$Attribute::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator$Attribute::wrap_Object(AttributedCharacterIterator$Attribute(((t_AttributedCharacterIterator$Attribute *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator$Attribute_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator$Attribute::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator$Attribute_equals(t_AttributedCharacterIterator$Attribute *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AttributedCharacterIterator$Attribute), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AttributedCharacterIterator$Attribute_hashCode(t_AttributedCharacterIterator$Attribute *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AttributedCharacterIterator$Attribute), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AttributedCharacterIterator$Attribute_toString(t_AttributedCharacterIterator$Attribute *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AttributedCharacterIterator$Attribute), (PyObject *) self, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System$Logger$Level::class$ = NULL;
    jmethodID *System$Logger$Level::mids$ = NULL;
    bool System$Logger$Level::live$ = false;
    System$Logger$Level *System$Logger$Level::ALL = NULL;
    System$Logger$Level *System$Logger$Level::DEBUG$ = NULL;
    System$Logger$Level *System$Logger$Level::ERROR$ = NULL;
    System$Logger$Level *System$Logger$Level::INFO = NULL;
    System$Logger$Level *System$Logger$Level::OFF = NULL;
    System$Logger$Level *System$Logger$Level::TRACE = NULL;
    System$Logger$Level *System$Logger$Level::WARNING = NULL;

    jclass System$Logger$Level::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System$Logger$Level");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSeverity_f2f64475e4580546] = env->getMethodID(cls, "getSeverity", "()I");
        mids$[mid_valueOf_f37adb0c643a2b54] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/System$Logger$Level;");
        mids$[mid_values_2798e018553540be] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/System$Logger$Level;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        ALL = new System$Logger$Level(env->getStaticObjectField(cls, "ALL", "Ljava/lang/System$Logger$Level;"));
        DEBUG$ = new System$Logger$Level(env->getStaticObjectField(cls, "DEBUG", "Ljava/lang/System$Logger$Level;"));
        ERROR$ = new System$Logger$Level(env->getStaticObjectField(cls, "ERROR", "Ljava/lang/System$Logger$Level;"));
        INFO = new System$Logger$Level(env->getStaticObjectField(cls, "INFO", "Ljava/lang/System$Logger$Level;"));
        OFF = new System$Logger$Level(env->getStaticObjectField(cls, "OFF", "Ljava/lang/System$Logger$Level;"));
        TRACE = new System$Logger$Level(env->getStaticObjectField(cls, "TRACE", "Ljava/lang/System$Logger$Level;"));
        WARNING = new System$Logger$Level(env->getStaticObjectField(cls, "WARNING", "Ljava/lang/System$Logger$Level;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger$Level::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jint System$Logger$Level::getSeverity() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeverity_f2f64475e4580546]);
    }

    System$Logger$Level System$Logger$Level::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return System$Logger$Level(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f37adb0c643a2b54], a0.this$));
    }

    JArray< System$Logger$Level > System$Logger$Level::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< System$Logger$Level >(env->callStaticObjectMethod(cls, mids$[mid_values_2798e018553540be]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System$Logger$Level_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger$Level_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger$Level_of_(t_System$Logger$Level *self, PyObject *args);
    static PyObject *t_System$Logger$Level_getName(t_System$Logger$Level *self);
    static PyObject *t_System$Logger$Level_getSeverity(t_System$Logger$Level *self);
    static PyObject *t_System$Logger$Level_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_System$Logger$Level_values(PyTypeObject *type);
    static PyObject *t_System$Logger$Level_get__name(t_System$Logger$Level *self, void *data);
    static PyObject *t_System$Logger$Level_get__severity(t_System$Logger$Level *self, void *data);
    static PyObject *t_System$Logger$Level_get__parameters_(t_System$Logger$Level *self, void *data);
    static PyGetSetDef t_System$Logger$Level__fields_[] = {
      DECLARE_GET_FIELD(t_System$Logger$Level, name),
      DECLARE_GET_FIELD(t_System$Logger$Level, severity),
      DECLARE_GET_FIELD(t_System$Logger$Level, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System$Logger$Level__methods_[] = {
      DECLARE_METHOD(t_System$Logger$Level, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger$Level, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger$Level, of_, METH_VARARGS),
      DECLARE_METHOD(t_System$Logger$Level, getName, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger$Level, getSeverity, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger$Level, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System$Logger$Level, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System$Logger$Level)[] = {
      { Py_tp_methods, t_System$Logger$Level__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System$Logger$Level__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System$Logger$Level)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(System$Logger$Level, t_System$Logger$Level, System$Logger$Level);
    PyObject *t_System$Logger$Level::wrap_Object(const System$Logger$Level& object, PyTypeObject *p0)
    {
      PyObject *obj = t_System$Logger$Level::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_System$Logger$Level *self = (t_System$Logger$Level *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_System$Logger$Level::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_System$Logger$Level::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_System$Logger$Level *self = (t_System$Logger$Level *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_System$Logger$Level::install(PyObject *module)
    {
      installType(&PY_TYPE(System$Logger$Level), &PY_TYPE_DEF(System$Logger$Level), module, "System$Logger$Level", 0);
    }

    void t_System$Logger$Level::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "class_", make_descriptor(System$Logger$Level::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "wrapfn_", make_descriptor(t_System$Logger$Level::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "boxfn_", make_descriptor(boxObject));
      env->getClass(System$Logger$Level::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "ALL", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::ALL)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "DEBUG", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::DEBUG$)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "ERROR", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::ERROR$)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "INFO", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::INFO)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "OFF", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::OFF)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "TRACE", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::TRACE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger$Level), "WARNING", make_descriptor(t_System$Logger$Level::wrap_Object(*System$Logger$Level::WARNING)));
    }

    static PyObject *t_System$Logger$Level_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System$Logger$Level::initializeClass, 1)))
        return NULL;
      return t_System$Logger$Level::wrap_Object(System$Logger$Level(((t_System$Logger$Level *) arg)->object.this$));
    }
    static PyObject *t_System$Logger$Level_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System$Logger$Level::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System$Logger$Level_of_(t_System$Logger$Level *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_System$Logger$Level_getName(t_System$Logger$Level *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_System$Logger$Level_getSeverity(t_System$Logger$Level *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getSeverity());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_System$Logger$Level_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      System$Logger$Level result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System$Logger$Level::valueOf(a0));
        return t_System$Logger$Level::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_System$Logger$Level_values(PyTypeObject *type)
    {
      JArray< System$Logger$Level > result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System$Logger$Level::values());
      return JArray<jobject>(result.this$).wrap(t_System$Logger$Level::wrap_jobject);
    }
    static PyObject *t_System$Logger$Level_get__parameters_(t_System$Logger$Level *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_System$Logger$Level_get__name(t_System$Logger$Level *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_System$Logger$Level_get__severity(t_System$Logger$Level *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getSeverity());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectStreamClass.h"
#include "java/io/ObjectStreamField.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/io/ObjectStreamClass.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamClass::class$ = NULL;
    jmethodID *ObjectStreamClass::mids$ = NULL;
    bool ObjectStreamClass::live$ = false;
    JArray< ::java::io::ObjectStreamField > *ObjectStreamClass::NO_FIELDS = NULL;

    jclass ObjectStreamClass::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamClass");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forClass_8f66acc08d2a174c] = env->getMethodID(cls, "forClass", "()Ljava/lang/Class;");
        mids$[mid_getField_416db66042eed71e] = env->getMethodID(cls, "getField", "(Ljava/lang/String;)Ljava/io/ObjectStreamField;");
        mids$[mid_getFields_9a5c7ee21ac0602b] = env->getMethodID(cls, "getFields", "()[Ljava/io/ObjectStreamField;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSerialVersionUID_a27fc9afd27e559d] = env->getMethodID(cls, "getSerialVersionUID", "()J");
        mids$[mid_lookup_229579f78ca1ccc8] = env->getStaticMethodID(cls, "lookup", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_lookupAny_229579f78ca1ccc8] = env->getStaticMethodID(cls, "lookupAny", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        NO_FIELDS = new JArray< ::java::io::ObjectStreamField >(env->getStaticObjectField(cls, "NO_FIELDS", "[Ljava/io/ObjectStreamField;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Class ObjectStreamClass::forClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_forClass_8f66acc08d2a174c]));
    }

    ::java::io::ObjectStreamField ObjectStreamClass::getField(const ::java::lang::String & a0) const
    {
      return ::java::io::ObjectStreamField(env->callObjectMethod(this$, mids$[mid_getField_416db66042eed71e], a0.this$));
    }

    JArray< ::java::io::ObjectStreamField > ObjectStreamClass::getFields() const
    {
      return JArray< ::java::io::ObjectStreamField >(env->callObjectMethod(this$, mids$[mid_getFields_9a5c7ee21ac0602b]));
    }

    ::java::lang::String ObjectStreamClass::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jlong ObjectStreamClass::getSerialVersionUID() const
    {
      return env->callLongMethod(this$, mids$[mid_getSerialVersionUID_a27fc9afd27e559d]);
    }

    ObjectStreamClass ObjectStreamClass::lookup(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookup_229579f78ca1ccc8], a0.this$));
    }

    ObjectStreamClass ObjectStreamClass::lookupAny(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookupAny_229579f78ca1ccc8], a0.this$));
    }

    ::java::lang::String ObjectStreamClass::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectStreamClass_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_forClass(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getField(t_ObjectStreamClass *self, PyObject *arg);
    static PyObject *t_ObjectStreamClass_getFields(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getName(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_getSerialVersionUID(t_ObjectStreamClass *self);
    static PyObject *t_ObjectStreamClass_lookup(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_lookupAny(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamClass_toString(t_ObjectStreamClass *self, PyObject *args);
    static PyObject *t_ObjectStreamClass_get__fields(t_ObjectStreamClass *self, void *data);
    static PyObject *t_ObjectStreamClass_get__name(t_ObjectStreamClass *self, void *data);
    static PyObject *t_ObjectStreamClass_get__serialVersionUID(t_ObjectStreamClass *self, void *data);
    static PyGetSetDef t_ObjectStreamClass__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectStreamClass, fields),
      DECLARE_GET_FIELD(t_ObjectStreamClass, name),
      DECLARE_GET_FIELD(t_ObjectStreamClass, serialVersionUID),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectStreamClass__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamClass, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, forClass, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getField, METH_O),
      DECLARE_METHOD(t_ObjectStreamClass, getFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getName, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, getSerialVersionUID, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamClass, lookup, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, lookupAny, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamClass, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamClass)[] = {
      { Py_tp_methods, t_ObjectStreamClass__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ObjectStreamClass__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamClass)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamClass, t_ObjectStreamClass, ObjectStreamClass);

    void t_ObjectStreamClass::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamClass), &PY_TYPE_DEF(ObjectStreamClass), module, "ObjectStreamClass", 0);
    }

    void t_ObjectStreamClass::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "class_", make_descriptor(ObjectStreamClass::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "wrapfn_", make_descriptor(t_ObjectStreamClass::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectStreamClass::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamClass), "NO_FIELDS", make_descriptor(JArray<jobject>(ObjectStreamClass::NO_FIELDS->this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject)));
    }

    static PyObject *t_ObjectStreamClass_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamClass::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamClass::wrap_Object(ObjectStreamClass(((t_ObjectStreamClass *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamClass_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamClass::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectStreamClass_forClass(t_ObjectStreamClass *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.forClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectStreamClass_getField(t_ObjectStreamClass *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::ObjectStreamField result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getField(a0));
        return ::java::io::t_ObjectStreamField::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getField", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_getFields(t_ObjectStreamClass *self)
    {
      JArray< ::java::io::ObjectStreamField > result((jobject) NULL);
      OBJ_CALL(result = self->object.getFields());
      return JArray<jobject>(result.this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject);
    }

    static PyObject *t_ObjectStreamClass_getName(t_ObjectStreamClass *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamClass_getSerialVersionUID(t_ObjectStreamClass *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getSerialVersionUID());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectStreamClass_lookup(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ObjectStreamClass result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::io::ObjectStreamClass::lookup(a0));
        return t_ObjectStreamClass::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_lookupAny(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ObjectStreamClass result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::io::ObjectStreamClass::lookupAny(a0));
        return t_ObjectStreamClass::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookupAny", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamClass_toString(t_ObjectStreamClass *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ObjectStreamClass), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ObjectStreamClass_get__fields(t_ObjectStreamClass *self, void *data)
    {
      JArray< ::java::io::ObjectStreamField > value((jobject) NULL);
      OBJ_CALL(value = self->object.getFields());
      return JArray<jobject>(value.this$).wrap(::java::io::t_ObjectStreamField::wrap_jobject);
    }

    static PyObject *t_ObjectStreamClass_get__name(t_ObjectStreamClass *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamClass_get__serialVersionUID(t_ObjectStreamClass *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getSerialVersionUID());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ThreadGroup::class$ = NULL;
    jmethodID *ThreadGroup::mids$ = NULL;
    bool ThreadGroup::live$ = false;

    jclass ThreadGroup::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ThreadGroup");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_203b61e7fc95b723] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_activeCount_f2f64475e4580546] = env->getMethodID(cls, "activeCount", "()I");
        mids$[mid_activeGroupCount_f2f64475e4580546] = env->getMethodID(cls, "activeGroupCount", "()I");
        mids$[mid_allowThreadSuspension_677f083a4e44dce2] = env->getMethodID(cls, "allowThreadSuspension", "(Z)Z");
        mids$[mid_checkAccess_7ae3461a92a43152] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_destroy_7ae3461a92a43152] = env->getMethodID(cls, "destroy", "()V");
        mids$[mid_enumerate_be0b9183e9f8fdcc] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_enumerate_d5e4f720e8283319] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;)I");
        mids$[mid_enumerate_af1dd81845c5f065] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;Z)I");
        mids$[mid_enumerate_7ffe8978ff7193a9] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;Z)I");
        mids$[mid_getMaxPriority_f2f64475e4580546] = env->getMethodID(cls, "getMaxPriority", "()I");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_c5a0b769e930fe0b] = env->getMethodID(cls, "getParent", "()Ljava/lang/ThreadGroup;");
        mids$[mid_interrupt_7ae3461a92a43152] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_isDaemon_e470b6d9e0d979db] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isDestroyed_e470b6d9e0d979db] = env->getMethodID(cls, "isDestroyed", "()Z");
        mids$[mid_list_7ae3461a92a43152] = env->getMethodID(cls, "list", "()V");
        mids$[mid_parentOf_aa91ddd6a3a4bb80] = env->getMethodID(cls, "parentOf", "(Ljava/lang/ThreadGroup;)Z");
        mids$[mid_resume_7ae3461a92a43152] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_setDaemon_50a2e0b139e80a58] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setMaxPriority_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxPriority", "(I)V");
        mids$[mid_stop_7ae3461a92a43152] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_7ae3461a92a43152] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_uncaughtException_af8835c850fff4fc] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ThreadGroup::ThreadGroup(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    ThreadGroup::ThreadGroup(const ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_203b61e7fc95b723, a0.this$, a1.this$)) {}

    jint ThreadGroup::activeCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeCount_f2f64475e4580546]);
    }

    jint ThreadGroup::activeGroupCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeGroupCount_f2f64475e4580546]);
    }

    jboolean ThreadGroup::allowThreadSuspension(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_allowThreadSuspension_677f083a4e44dce2], a0);
    }

    void ThreadGroup::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_7ae3461a92a43152]);
    }

    void ThreadGroup::destroy() const
    {
      env->callVoidMethod(this$, mids$[mid_destroy_7ae3461a92a43152]);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_be0b9183e9f8fdcc], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_d5e4f720e8283319], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_af1dd81845c5f065], a0.this$, a1);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_7ffe8978ff7193a9], a0.this$, a1);
    }

    jint ThreadGroup::getMaxPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaxPriority_f2f64475e4580546]);
    }

    ::java::lang::String ThreadGroup::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    ThreadGroup ThreadGroup::getParent() const
    {
      return ThreadGroup(env->callObjectMethod(this$, mids$[mid_getParent_c5a0b769e930fe0b]));
    }

    void ThreadGroup::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_7ae3461a92a43152]);
    }

    jboolean ThreadGroup::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_e470b6d9e0d979db]);
    }

    jboolean ThreadGroup::isDestroyed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDestroyed_e470b6d9e0d979db]);
    }

    void ThreadGroup::list() const
    {
      env->callVoidMethod(this$, mids$[mid_list_7ae3461a92a43152]);
    }

    jboolean ThreadGroup::parentOf(const ThreadGroup & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_parentOf_aa91ddd6a3a4bb80], a0.this$);
    }

    void ThreadGroup::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_7ae3461a92a43152]);
    }

    void ThreadGroup::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_50a2e0b139e80a58], a0);
    }

    void ThreadGroup::setMaxPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaxPriority_0a2a1ac2721c0336], a0);
    }

    void ThreadGroup::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_7ae3461a92a43152]);
    }

    void ThreadGroup::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_7ae3461a92a43152]);
    }

    ::java::lang::String ThreadGroup::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void ThreadGroup::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_af8835c850fff4fc], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ThreadGroup_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ThreadGroup_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ThreadGroup_init_(t_ThreadGroup *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ThreadGroup_activeCount(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_activeGroupCount(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_allowThreadSuspension(t_ThreadGroup *self, PyObject *arg);
    static PyObject *t_ThreadGroup_checkAccess(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_destroy(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_enumerate(t_ThreadGroup *self, PyObject *args);
    static PyObject *t_ThreadGroup_getMaxPriority(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_getName(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_getParent(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_interrupt(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_isDaemon(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_isDestroyed(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_list(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_parentOf(t_ThreadGroup *self, PyObject *arg);
    static PyObject *t_ThreadGroup_resume(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_setDaemon(t_ThreadGroup *self, PyObject *arg);
    static PyObject *t_ThreadGroup_setMaxPriority(t_ThreadGroup *self, PyObject *arg);
    static PyObject *t_ThreadGroup_stop(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_suspend(t_ThreadGroup *self);
    static PyObject *t_ThreadGroup_toString(t_ThreadGroup *self, PyObject *args);
    static PyObject *t_ThreadGroup_uncaughtException(t_ThreadGroup *self, PyObject *args);
    static PyObject *t_ThreadGroup_get__daemon(t_ThreadGroup *self, void *data);
    static int t_ThreadGroup_set__daemon(t_ThreadGroup *self, PyObject *arg, void *data);
    static PyObject *t_ThreadGroup_get__destroyed(t_ThreadGroup *self, void *data);
    static PyObject *t_ThreadGroup_get__maxPriority(t_ThreadGroup *self, void *data);
    static int t_ThreadGroup_set__maxPriority(t_ThreadGroup *self, PyObject *arg, void *data);
    static PyObject *t_ThreadGroup_get__name(t_ThreadGroup *self, void *data);
    static PyObject *t_ThreadGroup_get__parent(t_ThreadGroup *self, void *data);
    static PyGetSetDef t_ThreadGroup__fields_[] = {
      DECLARE_GETSET_FIELD(t_ThreadGroup, daemon),
      DECLARE_GET_FIELD(t_ThreadGroup, destroyed),
      DECLARE_GETSET_FIELD(t_ThreadGroup, maxPriority),
      DECLARE_GET_FIELD(t_ThreadGroup, name),
      DECLARE_GET_FIELD(t_ThreadGroup, parent),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ThreadGroup__methods_[] = {
      DECLARE_METHOD(t_ThreadGroup, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ThreadGroup, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ThreadGroup, activeCount, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, activeGroupCount, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, allowThreadSuspension, METH_O),
      DECLARE_METHOD(t_ThreadGroup, checkAccess, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, destroy, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, enumerate, METH_VARARGS),
      DECLARE_METHOD(t_ThreadGroup, getMaxPriority, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, getName, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, getParent, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, interrupt, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, isDaemon, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, isDestroyed, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, list, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, parentOf, METH_O),
      DECLARE_METHOD(t_ThreadGroup, resume, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, setDaemon, METH_O),
      DECLARE_METHOD(t_ThreadGroup, setMaxPriority, METH_O),
      DECLARE_METHOD(t_ThreadGroup, stop, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, suspend, METH_NOARGS),
      DECLARE_METHOD(t_ThreadGroup, toString, METH_VARARGS),
      DECLARE_METHOD(t_ThreadGroup, uncaughtException, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ThreadGroup)[] = {
      { Py_tp_methods, t_ThreadGroup__methods_ },
      { Py_tp_init, (void *) t_ThreadGroup_init_ },
      { Py_tp_getset, t_ThreadGroup__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ThreadGroup)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ThreadGroup, t_ThreadGroup, ThreadGroup);

    void t_ThreadGroup::install(PyObject *module)
    {
      installType(&PY_TYPE(ThreadGroup), &PY_TYPE_DEF(ThreadGroup), module, "ThreadGroup", 0);
    }

    void t_ThreadGroup::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ThreadGroup), "class_", make_descriptor(ThreadGroup::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ThreadGroup), "wrapfn_", make_descriptor(t_ThreadGroup::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ThreadGroup), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ThreadGroup_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ThreadGroup::initializeClass, 1)))
        return NULL;
      return t_ThreadGroup::wrap_Object(ThreadGroup(((t_ThreadGroup *) arg)->object.this$));
    }
    static PyObject *t_ThreadGroup_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ThreadGroup::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ThreadGroup_init_(t_ThreadGroup *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ThreadGroup object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ThreadGroup(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ThreadGroup a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ThreadGroup object((jobject) NULL);

          if (!parseArgs(args, "ks", ThreadGroup::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ThreadGroup(a0, a1));
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

    static PyObject *t_ThreadGroup_activeCount(t_ThreadGroup *self)
    {
      jint result;
      OBJ_CALL(result = self->object.activeCount());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ThreadGroup_activeGroupCount(t_ThreadGroup *self)
    {
      jint result;
      OBJ_CALL(result = self->object.activeGroupCount());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ThreadGroup_allowThreadSuspension(t_ThreadGroup *self, PyObject *arg)
    {
      jboolean a0;
      jboolean result;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(result = self->object.allowThreadSuspension(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "allowThreadSuspension", arg);
      return NULL;
    }

    static PyObject *t_ThreadGroup_checkAccess(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.checkAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_destroy(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.destroy());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_enumerate(t_ThreadGroup *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< ::java::lang::Thread > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[k", ::java::lang::Thread::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.enumerate(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ThreadGroup > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[k", ThreadGroup::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.enumerate(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Thread > a0((jobject) NULL);
          jboolean a1;
          jint result;

          if (!parseArgs(args, "[kZ", ::java::lang::Thread::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.enumerate(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ThreadGroup > a0((jobject) NULL);
          jboolean a1;
          jint result;

          if (!parseArgs(args, "[kZ", ThreadGroup::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.enumerate(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "enumerate", args);
      return NULL;
    }

    static PyObject *t_ThreadGroup_getMaxPriority(t_ThreadGroup *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaxPriority());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ThreadGroup_getName(t_ThreadGroup *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ThreadGroup_getParent(t_ThreadGroup *self)
    {
      ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_ThreadGroup_interrupt(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.interrupt());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_isDaemon(t_ThreadGroup *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDaemon());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ThreadGroup_isDestroyed(t_ThreadGroup *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDestroyed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ThreadGroup_list(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.list());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_parentOf(t_ThreadGroup *self, PyObject *arg)
    {
      ThreadGroup a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ThreadGroup::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.parentOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "parentOf", arg);
      return NULL;
    }

    static PyObject *t_ThreadGroup_resume(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.resume());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_setDaemon(t_ThreadGroup *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDaemon(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDaemon", arg);
      return NULL;
    }

    static PyObject *t_ThreadGroup_setMaxPriority(t_ThreadGroup *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaxPriority(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaxPriority", arg);
      return NULL;
    }

    static PyObject *t_ThreadGroup_stop(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.stop());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_suspend(t_ThreadGroup *self)
    {
      OBJ_CALL(self->object.suspend());
      Py_RETURN_NONE;
    }

    static PyObject *t_ThreadGroup_toString(t_ThreadGroup *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ThreadGroup), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ThreadGroup_uncaughtException(t_ThreadGroup *self, PyObject *args)
    {
      ::java::lang::Thread a0((jobject) NULL);
      ::java::lang::Throwable a1((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::lang::Thread::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.uncaughtException(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "uncaughtException", args);
      return NULL;
    }

    static PyObject *t_ThreadGroup_get__daemon(t_ThreadGroup *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDaemon());
      Py_RETURN_BOOL(value);
    }
    static int t_ThreadGroup_set__daemon(t_ThreadGroup *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDaemon(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "daemon", arg);
      return -1;
    }

    static PyObject *t_ThreadGroup_get__destroyed(t_ThreadGroup *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDestroyed());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ThreadGroup_get__maxPriority(t_ThreadGroup *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaxPriority());
      return PyLong_FromLong((long) value);
    }
    static int t_ThreadGroup_set__maxPriority(t_ThreadGroup *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaxPriority(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maxPriority", arg);
      return -1;
    }

    static PyObject *t_ThreadGroup_get__name(t_ThreadGroup *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ThreadGroup_get__parent(t_ThreadGroup *self, void *data)
    {
      ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return t_ThreadGroup::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer.h"
#include "java/util/List.h"
#include "java/util/Optional.h"
#include "java/lang/Module.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ModuleLayer::class$ = NULL;
    jmethodID *ModuleLayer::mids$ = NULL;
    bool ModuleLayer::live$ = false;

    jclass ModuleLayer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ModuleLayer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_boot_b969436b816ffa6a] = env->getStaticMethodID(cls, "boot", "()Ljava/lang/ModuleLayer;");
        mids$[mid_empty_b969436b816ffa6a] = env->getStaticMethodID(cls, "empty", "()Ljava/lang/ModuleLayer;");
        mids$[mid_findLoader_532df1dececfab70] = env->getMethodID(cls, "findLoader", "(Ljava/lang/String;)Ljava/lang/ClassLoader;");
        mids$[mid_findModule_15a04797e6377ac1] = env->getMethodID(cls, "findModule", "(Ljava/lang/String;)Ljava/util/Optional;");
        mids$[mid_modules_e9e1a6780fe94297] = env->getMethodID(cls, "modules", "()Ljava/util/Set;");
        mids$[mid_parents_a6156df500549a58] = env->getMethodID(cls, "parents", "()Ljava/util/List;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer ModuleLayer::boot()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_boot_b969436b816ffa6a]));
    }

    ModuleLayer ModuleLayer::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_empty_b969436b816ffa6a]));
    }

    ::java::lang::ClassLoader ModuleLayer::findLoader(const ::java::lang::String & a0) const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_findLoader_532df1dececfab70], a0.this$));
    }

    ::java::util::Optional ModuleLayer::findModule(const ::java::lang::String & a0) const
    {
      return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findModule_15a04797e6377ac1], a0.this$));
    }

    ::java::util::Set ModuleLayer::modules() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_modules_e9e1a6780fe94297]));
    }

    ::java::util::List ModuleLayer::parents() const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parents_a6156df500549a58]));
    }

    ::java::lang::String ModuleLayer::toString() const
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
    static PyObject *t_ModuleLayer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer_boot(PyTypeObject *type);
    static PyObject *t_ModuleLayer_empty(PyTypeObject *type);
    static PyObject *t_ModuleLayer_findLoader(t_ModuleLayer *self, PyObject *arg);
    static PyObject *t_ModuleLayer_findModule(t_ModuleLayer *self, PyObject *arg);
    static PyObject *t_ModuleLayer_modules(t_ModuleLayer *self);
    static PyObject *t_ModuleLayer_parents(t_ModuleLayer *self);
    static PyObject *t_ModuleLayer_toString(t_ModuleLayer *self, PyObject *args);

    static PyMethodDef t_ModuleLayer__methods_[] = {
      DECLARE_METHOD(t_ModuleLayer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer, boot, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer, empty, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer, findLoader, METH_O),
      DECLARE_METHOD(t_ModuleLayer, findModule, METH_O),
      DECLARE_METHOD(t_ModuleLayer, modules, METH_NOARGS),
      DECLARE_METHOD(t_ModuleLayer, parents, METH_NOARGS),
      DECLARE_METHOD(t_ModuleLayer, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ModuleLayer)[] = {
      { Py_tp_methods, t_ModuleLayer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ModuleLayer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ModuleLayer, t_ModuleLayer, ModuleLayer);

    void t_ModuleLayer::install(PyObject *module)
    {
      installType(&PY_TYPE(ModuleLayer), &PY_TYPE_DEF(ModuleLayer), module, "ModuleLayer", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer), "Controller", make_descriptor(&PY_TYPE_DEF(ModuleLayer$Controller)));
    }

    void t_ModuleLayer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer), "class_", make_descriptor(ModuleLayer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer), "wrapfn_", make_descriptor(t_ModuleLayer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ModuleLayer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ModuleLayer::initializeClass, 1)))
        return NULL;
      return t_ModuleLayer::wrap_Object(ModuleLayer(((t_ModuleLayer *) arg)->object.this$));
    }
    static PyObject *t_ModuleLayer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ModuleLayer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ModuleLayer_boot(PyTypeObject *type)
    {
      ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ModuleLayer::boot());
      return t_ModuleLayer::wrap_Object(result);
    }

    static PyObject *t_ModuleLayer_empty(PyTypeObject *type)
    {
      ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ModuleLayer::empty());
      return t_ModuleLayer::wrap_Object(result);
    }

    static PyObject *t_ModuleLayer_findLoader(t_ModuleLayer *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::ClassLoader result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.findLoader(a0));
        return ::java::lang::t_ClassLoader::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "findLoader", arg);
      return NULL;
    }

    static PyObject *t_ModuleLayer_findModule(t_ModuleLayer *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Optional result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.findModule(a0));
        return ::java::util::t_Optional::wrap_Object(result, ::java::lang::PY_TYPE(Module));
      }

      PyErr_SetArgsError((PyObject *) self, "findModule", arg);
      return NULL;
    }

    static PyObject *t_ModuleLayer_modules(t_ModuleLayer *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.modules());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Module));
    }

    static PyObject *t_ModuleLayer_parents(t_ModuleLayer *self)
    {
      ::java::util::List result((jobject) NULL);
      OBJ_CALL(result = self->object.parents());
      return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(ModuleLayer));
    }

    static PyObject *t_ModuleLayer_toString(t_ModuleLayer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ModuleLayer), (PyObject *) self, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/DataOutput.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *DataOutput::class$ = NULL;
    jmethodID *DataOutput::mids$ = NULL;
    bool DataOutput::live$ = false;

    jclass DataOutput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/DataOutput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_50a2e0b139e80a58] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_0a2a1ac2721c0336] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_e939c6558ae8d313] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_0a2a1ac2721c0336] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_e939c6558ae8d313] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_77e0f9a1f260e2e5] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFloat_ca234f4580d28ea3] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_0a2a1ac2721c0336] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_fefb08975c10f0a1] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeShort_0a2a1ac2721c0336] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_e939c6558ae8d313] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void DataOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void DataOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void DataOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    void DataOutput::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_50a2e0b139e80a58], a0);
    }

    void DataOutput::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_0a2a1ac2721c0336], a0);
    }

    void DataOutput::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_e939c6558ae8d313], a0.this$);
    }

    void DataOutput::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_0a2a1ac2721c0336], a0);
    }

    void DataOutput::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_e939c6558ae8d313], a0.this$);
    }

    void DataOutput::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_77e0f9a1f260e2e5], a0);
    }

    void DataOutput::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_ca234f4580d28ea3], a0);
    }

    void DataOutput::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_0a2a1ac2721c0336], a0);
    }

    void DataOutput::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_fefb08975c10f0a1], a0);
    }

    void DataOutput::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_0a2a1ac2721c0336], a0);
    }

    void DataOutput::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_e939c6558ae8d313], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_DataOutput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataOutput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataOutput_write(t_DataOutput *self, PyObject *args);
    static PyObject *t_DataOutput_writeBoolean(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeByte(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeBytes(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeChar(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeChars(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeDouble(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeFloat(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeInt(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeLong(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeShort(t_DataOutput *self, PyObject *arg);
    static PyObject *t_DataOutput_writeUTF(t_DataOutput *self, PyObject *arg);

    static PyMethodDef t_DataOutput__methods_[] = {
      DECLARE_METHOD(t_DataOutput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataOutput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataOutput, write, METH_VARARGS),
      DECLARE_METHOD(t_DataOutput, writeBoolean, METH_O),
      DECLARE_METHOD(t_DataOutput, writeByte, METH_O),
      DECLARE_METHOD(t_DataOutput, writeBytes, METH_O),
      DECLARE_METHOD(t_DataOutput, writeChar, METH_O),
      DECLARE_METHOD(t_DataOutput, writeChars, METH_O),
      DECLARE_METHOD(t_DataOutput, writeDouble, METH_O),
      DECLARE_METHOD(t_DataOutput, writeFloat, METH_O),
      DECLARE_METHOD(t_DataOutput, writeInt, METH_O),
      DECLARE_METHOD(t_DataOutput, writeLong, METH_O),
      DECLARE_METHOD(t_DataOutput, writeShort, METH_O),
      DECLARE_METHOD(t_DataOutput, writeUTF, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DataOutput)[] = {
      { Py_tp_methods, t_DataOutput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DataOutput)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DataOutput, t_DataOutput, DataOutput);

    void t_DataOutput::install(PyObject *module)
    {
      installType(&PY_TYPE(DataOutput), &PY_TYPE_DEF(DataOutput), module, "DataOutput", 0);
    }

    void t_DataOutput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataOutput), "class_", make_descriptor(DataOutput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataOutput), "wrapfn_", make_descriptor(t_DataOutput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataOutput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DataOutput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DataOutput::initializeClass, 1)))
        return NULL;
      return t_DataOutput::wrap_Object(DataOutput(((t_DataOutput *) arg)->object.this$));
    }
    static PyObject *t_DataOutput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DataOutput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_DataOutput_write(t_DataOutput *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }

    static PyObject *t_DataOutput_writeBoolean(t_DataOutput *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeByte(t_DataOutput *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeBytes(t_DataOutput *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeChar(t_DataOutput *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeChars(t_DataOutput *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeDouble(t_DataOutput *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeFloat(t_DataOutput *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeInt(t_DataOutput *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeLong(t_DataOutput *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeShort(t_DataOutput *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_DataOutput_writeUTF(t_DataOutput *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/PrimitiveIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *PrimitiveIterator::class$ = NULL;
    jmethodID *PrimitiveIterator::mids$ = NULL;
    bool PrimitiveIterator::live$ = false;

    jclass PrimitiveIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/PrimitiveIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_7ca0d9438822cb0b] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_7ca0d9438822cb0b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "java/util/PrimitiveIterator$OfDouble.h"

namespace java {
  namespace util {
    static PyObject *t_PrimitiveIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator_of_(t_PrimitiveIterator *self, PyObject *args);
    static PyObject *t_PrimitiveIterator_forEachRemaining(t_PrimitiveIterator *self, PyObject *args);
    static PyObject *t_PrimitiveIterator_get__parameters_(t_PrimitiveIterator *self, void *data);
    static PyGetSetDef t_PrimitiveIterator__fields_[] = {
      DECLARE_GET_FIELD(t_PrimitiveIterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_PrimitiveIterator__methods_[] = {
      DECLARE_METHOD(t_PrimitiveIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator, forEachRemaining, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrimitiveIterator)[] = {
      { Py_tp_methods, t_PrimitiveIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_PrimitiveIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrimitiveIterator)[] = {
      &PY_TYPE_DEF(::java::util::Iterator),
      NULL
    };

    DEFINE_TYPE(PrimitiveIterator, t_PrimitiveIterator, PrimitiveIterator);
    PyObject *t_PrimitiveIterator::wrap_Object(const PrimitiveIterator& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator *self = (t_PrimitiveIterator *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_PrimitiveIterator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator *self = (t_PrimitiveIterator *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_PrimitiveIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(PrimitiveIterator), &PY_TYPE_DEF(PrimitiveIterator), module, "PrimitiveIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator), "OfDouble", make_descriptor(&PY_TYPE_DEF(PrimitiveIterator$OfDouble)));
    }

    void t_PrimitiveIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator), "class_", make_descriptor(PrimitiveIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator), "wrapfn_", make_descriptor(t_PrimitiveIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrimitiveIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrimitiveIterator::initializeClass, 1)))
        return NULL;
      return t_PrimitiveIterator::wrap_Object(PrimitiveIterator(((t_PrimitiveIterator *) arg)->object.this$));
    }
    static PyObject *t_PrimitiveIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrimitiveIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_PrimitiveIterator_of_(t_PrimitiveIterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_PrimitiveIterator_forEachRemaining(t_PrimitiveIterator *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArgs(args, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrimitiveIterator), (PyObject *) self, "forEachRemaining", args, 2);
    }
    static PyObject *t_PrimitiveIterator_get__parameters_(t_PrimitiveIterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/security/Permission.h"
#include "java/io/Serializable.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace security {

    ::java::lang::Class *Permission::class$ = NULL;
    jmethodID *Permission::mids$ = NULL;
    bool Permission::live$ = false;

    jclass Permission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/security/Permission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_checkGuard_7ca0d9438822cb0b] = env->getMethodID(cls, "checkGuard", "(Ljava/lang/Object;)V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_0090f7797e403f43] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_a24701876290d2d8] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Permission::Permission(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    void Permission::checkGuard(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkGuard_7ca0d9438822cb0b], a0.this$);
    }

    jboolean Permission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::String Permission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_0090f7797e403f43]));
    }

    ::java::lang::String Permission::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jint Permission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Permission::implies(const Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_a24701876290d2d8], a0.this$);
    }

    ::java::lang::String Permission::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace security {
    static PyObject *t_Permission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Permission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Permission_init_(t_Permission *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Permission_checkGuard(t_Permission *self, PyObject *arg);
    static PyObject *t_Permission_equals(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_getActions(t_Permission *self);
    static PyObject *t_Permission_getName(t_Permission *self);
    static PyObject *t_Permission_hashCode(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_implies(t_Permission *self, PyObject *arg);
    static PyObject *t_Permission_toString(t_Permission *self, PyObject *args);
    static PyObject *t_Permission_get__actions(t_Permission *self, void *data);
    static PyObject *t_Permission_get__name(t_Permission *self, void *data);
    static PyGetSetDef t_Permission__fields_[] = {
      DECLARE_GET_FIELD(t_Permission, actions),
      DECLARE_GET_FIELD(t_Permission, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Permission__methods_[] = {
      DECLARE_METHOD(t_Permission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Permission, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Permission, checkGuard, METH_O),
      DECLARE_METHOD(t_Permission, equals, METH_VARARGS),
      DECLARE_METHOD(t_Permission, getActions, METH_NOARGS),
      DECLARE_METHOD(t_Permission, getName, METH_NOARGS),
      DECLARE_METHOD(t_Permission, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Permission, implies, METH_O),
      DECLARE_METHOD(t_Permission, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Permission)[] = {
      { Py_tp_methods, t_Permission__methods_ },
      { Py_tp_init, (void *) t_Permission_init_ },
      { Py_tp_getset, t_Permission__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Permission)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Permission, t_Permission, Permission);

    void t_Permission::install(PyObject *module)
    {
      installType(&PY_TYPE(Permission), &PY_TYPE_DEF(Permission), module, "Permission", 0);
    }

    void t_Permission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "class_", make_descriptor(Permission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "wrapfn_", make_descriptor(t_Permission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Permission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Permission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Permission::initializeClass, 1)))
        return NULL;
      return t_Permission::wrap_Object(Permission(((t_Permission *) arg)->object.this$));
    }
    static PyObject *t_Permission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Permission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Permission_init_(t_Permission *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      Permission object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = Permission(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Permission_checkGuard(t_Permission *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.checkGuard(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkGuard", arg);
      return NULL;
    }

    static PyObject *t_Permission_equals(t_Permission *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Permission_getActions(t_Permission *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getActions());
      return j2p(result);
    }

    static PyObject *t_Permission_getName(t_Permission *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Permission_hashCode(t_Permission *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Permission_implies(t_Permission *self, PyObject *arg)
    {
      Permission a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Permission::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.implies(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "implies", arg);
      return NULL;
    }

    static PyObject *t_Permission_toString(t_Permission *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Permission), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Permission_get__actions(t_Permission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getActions());
      return j2p(value);
    }

    static PyObject *t_Permission_get__name(t_Permission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/CharacterIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *CharacterIterator::class$ = NULL;
    jmethodID *CharacterIterator::mids$ = NULL;
    bool CharacterIterator::live$ = false;
    jchar CharacterIterator::DONE = (jchar) 0;

    jclass CharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/CharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_current_29e026b9d068f1c7] = env->getMethodID(cls, "current", "()C");
        mids$[mid_first_29e026b9d068f1c7] = env->getMethodID(cls, "first", "()C");
        mids$[mid_getBeginIndex_f2f64475e4580546] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_f2f64475e4580546] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getIndex_f2f64475e4580546] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_last_29e026b9d068f1c7] = env->getMethodID(cls, "last", "()C");
        mids$[mid_next_29e026b9d068f1c7] = env->getMethodID(cls, "next", "()C");
        mids$[mid_previous_29e026b9d068f1c7] = env->getMethodID(cls, "previous", "()C");
        mids$[mid_setIndex_52047e692b58eb87] = env->getMethodID(cls, "setIndex", "(I)C");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DONE = env->getStaticCharField(cls, "DONE");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object CharacterIterator::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jchar CharacterIterator::current() const
    {
      return env->callCharMethod(this$, mids$[mid_current_29e026b9d068f1c7]);
    }

    jchar CharacterIterator::first() const
    {
      return env->callCharMethod(this$, mids$[mid_first_29e026b9d068f1c7]);
    }

    jint CharacterIterator::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_f2f64475e4580546]);
    }

    jint CharacterIterator::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_f2f64475e4580546]);
    }

    jint CharacterIterator::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_f2f64475e4580546]);
    }

    jchar CharacterIterator::last() const
    {
      return env->callCharMethod(this$, mids$[mid_last_29e026b9d068f1c7]);
    }

    jchar CharacterIterator::next() const
    {
      return env->callCharMethod(this$, mids$[mid_next_29e026b9d068f1c7]);
    }

    jchar CharacterIterator::previous() const
    {
      return env->callCharMethod(this$, mids$[mid_previous_29e026b9d068f1c7]);
    }

    jchar CharacterIterator::setIndex(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_setIndex_52047e692b58eb87], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_CharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CharacterIterator_clone(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_current(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_first(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_getBeginIndex(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_getEndIndex(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_getIndex(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_last(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_next(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_previous(t_CharacterIterator *self);
    static PyObject *t_CharacterIterator_setIndex(t_CharacterIterator *self, PyObject *arg);
    static PyObject *t_CharacterIterator_get__beginIndex(t_CharacterIterator *self, void *data);
    static PyObject *t_CharacterIterator_get__endIndex(t_CharacterIterator *self, void *data);
    static PyObject *t_CharacterIterator_get__index(t_CharacterIterator *self, void *data);
    static int t_CharacterIterator_set__index(t_CharacterIterator *self, PyObject *arg, void *data);
    static PyGetSetDef t_CharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_CharacterIterator, beginIndex),
      DECLARE_GET_FIELD(t_CharacterIterator, endIndex),
      DECLARE_GETSET_FIELD(t_CharacterIterator, index),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CharacterIterator__methods_[] = {
      DECLARE_METHOD(t_CharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CharacterIterator, clone, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, current, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, first, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, getBeginIndex, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, getEndIndex, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, getIndex, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, last, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, next, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, previous, METH_NOARGS),
      DECLARE_METHOD(t_CharacterIterator, setIndex, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CharacterIterator)[] = {
      { Py_tp_methods, t_CharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CharacterIterator)[] = {
      &PY_TYPE_DEF(::java::lang::Cloneable),
      NULL
    };

    DEFINE_TYPE(CharacterIterator, t_CharacterIterator, CharacterIterator);

    void t_CharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(CharacterIterator), &PY_TYPE_DEF(CharacterIterator), module, "CharacterIterator", 0);
    }

    void t_CharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharacterIterator), "class_", make_descriptor(CharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharacterIterator), "wrapfn_", make_descriptor(t_CharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharacterIterator), "boxfn_", make_descriptor(boxObject));
      env->getClass(CharacterIterator::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(CharacterIterator), "DONE", make_descriptor(CharacterIterator::DONE));
    }

    static PyObject *t_CharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CharacterIterator::initializeClass, 1)))
        return NULL;
      return t_CharacterIterator::wrap_Object(CharacterIterator(((t_CharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_CharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CharacterIterator_clone(t_CharacterIterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_CharacterIterator_current(t_CharacterIterator *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.current());
      return c2p(result);
    }

    static PyObject *t_CharacterIterator_first(t_CharacterIterator *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.first());
      return c2p(result);
    }

    static PyObject *t_CharacterIterator_getBeginIndex(t_CharacterIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getBeginIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CharacterIterator_getEndIndex(t_CharacterIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getEndIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CharacterIterator_getIndex(t_CharacterIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CharacterIterator_last(t_CharacterIterator *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.last());
      return c2p(result);
    }

    static PyObject *t_CharacterIterator_next(t_CharacterIterator *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.next());
      return c2p(result);
    }

    static PyObject *t_CharacterIterator_previous(t_CharacterIterator *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.previous());
      return c2p(result);
    }

    static PyObject *t_CharacterIterator_setIndex(t_CharacterIterator *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.setIndex(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
      return NULL;
    }

    static PyObject *t_CharacterIterator_get__beginIndex(t_CharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getBeginIndex());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CharacterIterator_get__endIndex(t_CharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getEndIndex());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CharacterIterator_get__index(t_CharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_CharacterIterator_set__index(t_CharacterIterator *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "index", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *InvalidPropertiesFormatException::class$ = NULL;
    jmethodID *InvalidPropertiesFormatException::mids$ = NULL;
    bool InvalidPropertiesFormatException::live$ = false;

    jclass InvalidPropertiesFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/InvalidPropertiesFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_InvalidPropertiesFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InvalidPropertiesFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InvalidPropertiesFormatException_init_(t_InvalidPropertiesFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InvalidPropertiesFormatException__methods_[] = {
      DECLARE_METHOD(t_InvalidPropertiesFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InvalidPropertiesFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InvalidPropertiesFormatException)[] = {
      { Py_tp_methods, t_InvalidPropertiesFormatException__methods_ },
      { Py_tp_init, (void *) t_InvalidPropertiesFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InvalidPropertiesFormatException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(InvalidPropertiesFormatException, t_InvalidPropertiesFormatException, InvalidPropertiesFormatException);

    void t_InvalidPropertiesFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(InvalidPropertiesFormatException), &PY_TYPE_DEF(InvalidPropertiesFormatException), module, "InvalidPropertiesFormatException", 0);
    }

    void t_InvalidPropertiesFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "class_", make_descriptor(InvalidPropertiesFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "wrapfn_", make_descriptor(t_InvalidPropertiesFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InvalidPropertiesFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InvalidPropertiesFormatException::initializeClass, 1)))
        return NULL;
      return t_InvalidPropertiesFormatException::wrap_Object(InvalidPropertiesFormatException(((t_InvalidPropertiesFormatException *) arg)->object.this$));
    }
    static PyObject *t_InvalidPropertiesFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InvalidPropertiesFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InvalidPropertiesFormatException_init_(t_InvalidPropertiesFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InvalidPropertiesFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InvalidPropertiesFormatException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          InvalidPropertiesFormatException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = InvalidPropertiesFormatException(a0));
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
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfPrimitive::class$ = NULL;
    jmethodID *Spliterator$OfPrimitive::mids$ = NULL;
    bool Spliterator$OfPrimitive::live$ = false;

    jclass Spliterator$OfPrimitive::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfPrimitive");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_7ca0d9438822cb0b] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");
        mids$[mid_tryAdvance_229c87223f486349] = env->getMethodID(cls, "tryAdvance", "(Ljava/lang/Object;)Z");
        mids$[mid_trySplit_95c423487f2915e1] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfPrimitive;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfPrimitive::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_7ca0d9438822cb0b], a0.this$);
    }

    jboolean Spliterator$OfPrimitive::tryAdvance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_229c87223f486349], a0.this$);
    }

    Spliterator$OfPrimitive Spliterator$OfPrimitive::trySplit() const
    {
      return Spliterator$OfPrimitive(env->callObjectMethod(this$, mids$[mid_trySplit_95c423487f2915e1]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfPrimitive_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfPrimitive_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfPrimitive_of_(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_forEachRemaining(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_tryAdvance(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_trySplit(t_Spliterator$OfPrimitive *self, PyObject *args);
    static PyObject *t_Spliterator$OfPrimitive_get__parameters_(t_Spliterator$OfPrimitive *self, void *data);
    static PyGetSetDef t_Spliterator$OfPrimitive__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfPrimitive, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfPrimitive__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfPrimitive, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfPrimitive, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfPrimitive)[] = {
      { Py_tp_methods, t_Spliterator$OfPrimitive__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfPrimitive__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfPrimitive)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfPrimitive, t_Spliterator$OfPrimitive, Spliterator$OfPrimitive);
    PyObject *t_Spliterator$OfPrimitive::wrap_Object(const Spliterator$OfPrimitive& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
    {
      PyObject *obj = t_Spliterator$OfPrimitive::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfPrimitive *self = (t_Spliterator$OfPrimitive *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
        self->parameters[2] = p2;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfPrimitive::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
    {
      PyObject *obj = t_Spliterator$OfPrimitive::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfPrimitive *self = (t_Spliterator$OfPrimitive *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
        self->parameters[2] = p2;
      }
      return obj;
    }

    void t_Spliterator$OfPrimitive::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfPrimitive), &PY_TYPE_DEF(Spliterator$OfPrimitive), module, "Spliterator$OfPrimitive", 0);
    }

    void t_Spliterator$OfPrimitive::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "class_", make_descriptor(Spliterator$OfPrimitive::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "wrapfn_", make_descriptor(t_Spliterator$OfPrimitive::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfPrimitive), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfPrimitive_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfPrimitive::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfPrimitive::wrap_Object(Spliterator$OfPrimitive(((t_Spliterator$OfPrimitive *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfPrimitive_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfPrimitive::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfPrimitive_of_(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      if (!parseArg(args, "T", 3, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfPrimitive_forEachRemaining(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArgs(args, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfPrimitive_tryAdvance(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfPrimitive_trySplit(t_Spliterator$OfPrimitive *self, PyObject *args)
    {
      Spliterator$OfPrimitive result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return self->parameters[2] != NULL ? wrapType(self->parameters[2], result.this$) : t_Spliterator$OfPrimitive::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfPrimitive), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfPrimitive_get__parameters_(t_Spliterator$OfPrimitive *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
