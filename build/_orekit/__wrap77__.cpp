#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Short.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Short::class$ = NULL;
    jmethodID *Short::mids$ = NULL;
    bool Short::live$ = false;
    jint Short::BYTES = (jint) 0;
    jshort Short::MAX_VALUE = (jshort) 0;
    jshort Short::MIN_VALUE = (jshort) 0;
    jint Short::SIZE = (jint) 0;
    ::java::lang::Class *Short::TYPE = NULL;

    jclass Short::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Short");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_1f2fb13869b39632] = env->getMethodID(cls, "<init>", "(S)V");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_b70105f2c94539a1] = env->getStaticMethodID(cls, "compare", "(SS)I");
        mids$[mid_compareTo_c290c647d2b7f67e] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Short;)I");
        mids$[mid_compareUnsigned_b70105f2c94539a1] = env->getStaticMethodID(cls, "compareUnsigned", "(SS)I");
        mids$[mid_decode_c4883dc068af78f6] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_20322215fe0b254c] = env->getStaticMethodID(cls, "hashCode", "(S)I");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseShort_662d597587dd2bfd] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;)S");
        mids$[mid_parseShort_61bb7f94c0b93bfa] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;I)S");
        mids$[mid_reverseBytes_70757292b3240457] = env->getStaticMethodID(cls, "reverseBytes", "(S)S");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_2546eaf08a2ca212] = env->getStaticMethodID(cls, "toString", "(S)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_20322215fe0b254c] = env->getStaticMethodID(cls, "toUnsignedInt", "(S)I");
        mids$[mid_toUnsignedLong_9512ba5b5eee0f3e] = env->getStaticMethodID(cls, "toUnsignedLong", "(S)J");
        mids$[mid_valueOf_c4883dc068af78f6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_valueOf_e9455399385dc0e4] = env->getStaticMethodID(cls, "valueOf", "(S)Ljava/lang/Short;");
        mids$[mid_valueOf_8931312a75a8c211] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticShortField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticShortField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Short::Short(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Short::Short(jshort a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1f2fb13869b39632, a0)) {}

    jbyte Short::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Short::compare(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b70105f2c94539a1], a0, a1);
    }

    jint Short::compareTo(const Short & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_c290c647d2b7f67e], a0.this$);
    }

    jint Short::compareUnsigned(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_b70105f2c94539a1], a0, a1);
    }

    Short Short::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_decode_c4883dc068af78f6], a0.this$));
    }

    jdouble Short::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Short::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jfloat Short::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    jint Short::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Short::hashCode(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_20322215fe0b254c], a0);
    }

    jint Short::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jlong Short::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jshort Short::parseShort(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_662d597587dd2bfd], a0.this$);
    }

    jshort Short::parseShort(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_61bb7f94c0b93bfa], a0.this$, a1);
    }

    jshort Short::reverseBytes(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_reverseBytes_70757292b3240457], a0);
    }

    jshort Short::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    ::java::lang::String Short::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Short::toString(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2546eaf08a2ca212], a0));
    }

    jint Short::toUnsignedInt(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_20322215fe0b254c], a0);
    }

    jlong Short::toUnsignedLong(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_9512ba5b5eee0f3e], a0);
    }

    Short Short::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c4883dc068af78f6], a0.this$));
    }

    Short Short::valueOf(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e9455399385dc0e4], a0));
    }

    Short Short::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8931312a75a8c211], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg);
    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_equals(t_Short *self, PyObject *args);
    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_intValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_longValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Short__methods_[] = {
      DECLARE_METHOD(t_Short, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, compareTo, METH_O),
      DECLARE_METHOD(t_Short, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, equals, METH_VARARGS),
      DECLARE_METHOD(t_Short, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, parseShort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Short)[] = {
      { Py_tp_methods, t_Short__methods_ },
      { Py_tp_init, (void *) t_Short_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Short)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Short, t_Short, Short);

    void t_Short::install(PyObject *module)
    {
      installType(&PY_TYPE(Short), &PY_TYPE_DEF(Short), module, "Short", 0);
    }

    void t_Short::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "class_", make_descriptor(Short::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "wrapfn_", make_descriptor(unboxShort));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "boxfn_", make_descriptor(boxShort));
      env->getClass(Short::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "BYTES", make_descriptor(Short::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MAX_VALUE", make_descriptor(Short::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MIN_VALUE", make_descriptor(Short::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "SIZE", make_descriptor(Short::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Short::TYPE)));
    }

    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Short::initializeClass, 1)))
        return NULL;
      return t_Short::wrap_Object(Short(((t_Short *) arg)->object.this$));
    }
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Short::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Short(a0));
            self->object = object;
            break;
          }
        }
        {
          jshort a0;
          Short object((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            INT_CALL(object = Short(a0));
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

    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg)
    {
      Short a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Short), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Short result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::decode(a0));
        return t_Short::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Short_equals(t_Short *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jint result;

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Short_intValue(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Short_longValue(t_Short *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jshort result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jshort result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseShort", args);
      return NULL;
    }

    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jshort result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Short_toString(t_Short *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jint result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jlong result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        {
          jshort a0;
          Short result((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Short result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0, a1));
            return t_Short::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer::class$ = NULL;
        jmethodID *DumpReplayer::mids$ = NULL;
        bool DumpReplayer::live$ = false;

        jclass DumpReplayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createRugged_a3579a23a3f3f05f] = env->getMethodID(cls, "createRugged", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_execute_4764216aaf810de5] = env->getMethodID(cls, "execute", "(Lorg/orekit/rugged/api/Rugged;)[Lorg/orekit/rugged/errors/DumpReplayer$Result;");
            mids$[mid_parse_0613af62f2ba5dba] = env->getMethodID(cls, "parse", "(Ljava/io/File;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DumpReplayer::DumpReplayer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::rugged::api::Rugged DumpReplayer::createRugged() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_createRugged_a3579a23a3f3f05f]));
        }

        JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > DumpReplayer::execute(const ::org::orekit::rugged::api::Rugged & a0) const
        {
          return JArray< ::org::orekit::rugged::errors::DumpReplayer$Result >(env->callObjectMethod(this$, mids$[mid_execute_4764216aaf810de5], a0.this$));
        }

        void DumpReplayer::parse(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_parse_0613af62f2ba5dba], a0.this$);
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
    namespace rugged {
      namespace errors {
        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self);
        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg);
        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg);

        static PyMethodDef t_DumpReplayer__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, createRugged, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer, execute, METH_O),
          DECLARE_METHOD(t_DumpReplayer, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer)[] = {
          { Py_tp_methods, t_DumpReplayer__methods_ },
          { Py_tp_init, (void *) t_DumpReplayer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer, t_DumpReplayer, DumpReplayer);

        void t_DumpReplayer::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer), &PY_TYPE_DEF(DumpReplayer), module, "DumpReplayer", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "Result", make_descriptor(&PY_TYPE_DEF(DumpReplayer$Result)));
        }

        void t_DumpReplayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "class_", make_descriptor(DumpReplayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "wrapfn_", make_descriptor(t_DumpReplayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer::wrap_Object(DumpReplayer(((t_DumpReplayer *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds)
        {
          DumpReplayer object((jobject) NULL);

          INT_CALL(object = DumpReplayer());
          self->object = object;

          return 0;
        }

        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.createRugged());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::Rugged a0((jobject) NULL);
          JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::api::Rugged::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.execute(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::rugged::errors::t_DumpReplayer$Result::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "execute", arg);
          return NULL;
        }

        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(self->object.parse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2::class$ = NULL;
        jmethodID *UnivariateDerivative2::mids$ = NULL;
        bool UnivariateDerivative2::live$ = false;
        UnivariateDerivative2 *UnivariateDerivative2::PI = NULL;

        jclass UnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff2e40d13a189b48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_abs_43633a9b98e8a859] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acos_43633a9b98e8a859] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acosh_43633a9b98e8a859] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_b1c1a939ab76cf1a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_c4fc76a1f90f6642] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asin_43633a9b98e8a859] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asinh_43633a9b98e8a859] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan_43633a9b98e8a859] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan2_b1c1a939ab76cf1a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atanh_43633a9b98e8a859] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cbrt_43633a9b98e8a859] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ceil_43633a9b98e8a859] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_compareTo_b59bad3ad46ede9c] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)I");
            mids$[mid_compose_9d708eccb0f03fe9] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_b1c1a939ab76cf1a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_c4fc76a1f90f6642] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cos_43633a9b98e8a859] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cosh_43633a9b98e8a859] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_b1c1a939ab76cf1a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_c4fc76a1f90f6642] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_43633a9b98e8a859] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_expm1_43633a9b98e8a859] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_floor_43633a9b98e8a859] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getDerivative_46f85b53d9aedd96] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_1c87ae1002e9b199] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_dff5885c2c873297] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_43633a9b98e8a859] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_dff5885c2c873297] = env->getMethodID(cls, "getSecondDerivative", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_b1c1a939ab76cf1a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_b613845af661a5bb] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_3cf5c18109f98a94] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_66bf047fb4795709] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_8c5299885c06bf9d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_126d02c475e81755] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_c5aa5ffb02d2aead] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_c613fb6d1418e11a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_238258cd02862cc0] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log_43633a9b98e8a859] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log10_43633a9b98e8a859] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log1p_43633a9b98e8a859] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_b1c1a939ab76cf1a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_c4fc76a1f90f6642] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_57f0f682f9d96e0b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_negate_43633a9b98e8a859] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_newInstance_c4fc76a1f90f6642] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_b1c1a939ab76cf1a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_c4fc76a1f90f6642] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_57f0f682f9d96e0b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_f154c64d05752581] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_reciprocal_43633a9b98e8a859] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_b1c1a939ab76cf1a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_c4fc76a1f90f6642] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rint_43633a9b98e8a859] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rootN_57f0f682f9d96e0b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_scalb_57f0f682f9d96e0b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sign_43633a9b98e8a859] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sin_43633a9b98e8a859] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_43633a9b98e8a859] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_43633a9b98e8a859] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_b1c1a939ab76cf1a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_c4fc76a1f90f6642] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tan_43633a9b98e8a859] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tanh_43633a9b98e8a859] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_taylor_dcbc7ce2902fa136] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_43633a9b98e8a859] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_73e277cbd957031a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_43633a9b98e8a859] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ulp_43633a9b98e8a859] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative2(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative2::UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_ff2e40d13a189b48, a0.this$)) {}

        UnivariateDerivative2::UnivariateDerivative2(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        UnivariateDerivative2 UnivariateDerivative2::abs() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::asin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::asinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan2(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::atanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cbrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ceil() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_43633a9b98e8a859]));
        }

        jint UnivariateDerivative2::compareTo(const UnivariateDerivative2 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_b59bad3ad46ede9c], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_9d708eccb0f03fe9], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::cos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_c4fc76a1f90f6642], a0));
        }

        jboolean UnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::exp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::expm1() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::floor() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_43633a9b98e8a859]));
        }

        jdouble UnivariateDerivative2::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_46f85b53d9aedd96], a0);
        }

        jint UnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field UnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_1c87ae1002e9b199]));
        }

        jdouble UnivariateDerivative2::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_dff5885c2c873297]);
        }

        jint UnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        UnivariateDerivative2 UnivariateDerivative2::getPi() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_43633a9b98e8a859]));
        }

        jdouble UnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        jdouble UnivariateDerivative2::getSecondDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondDerivative_dff5885c2c873297]);
        }

        jdouble UnivariateDerivative2::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint UnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        UnivariateDerivative2 UnivariateDerivative2::hypot(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_b613845af661a5bb], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< UnivariateDerivative2 > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_3cf5c18109f98a94], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_66bf047fb4795709], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_8c5299885c06bf9d], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_126d02c475e81755], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c5aa5ffb02d2aead], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5, const UnivariateDerivative2 & a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c613fb6d1418e11a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5, jdouble a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_238258cd02862cc0], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::log() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log10() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log1p() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_57f0f682f9d96e0b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::negate() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::newInstance(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_57f0f682f9d96e0b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0, const UnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_f154c64d05752581], a0, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::reciprocal() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::rint() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::rootN(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_57f0f682f9d96e0b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::scalb(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_57f0f682f9d96e0b], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::sign() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_43633a9b98e8a859]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_43633a9b98e8a859]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sqrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_b1c1a939ab76cf1a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_c4fc76a1f90f6642], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::tan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::tanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_43633a9b98e8a859]));
        }

        jdouble UnivariateDerivative2::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_dcbc7ce2902fa136], a0);
        }

        UnivariateDerivative2 UnivariateDerivative2::toDegrees() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_43633a9b98e8a859]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_73e277cbd957031a]));
        }

        UnivariateDerivative2 UnivariateDerivative2::toRadians() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_43633a9b98e8a859]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ulp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_43633a9b98e8a859]));
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
        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args);
        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self);
        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data);
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2)[] = {
          { Py_tp_methods, t_UnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative2_init_ },
          { Py_tp_getset, t_UnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2, t_UnivariateDerivative2, UnivariateDerivative2);
        PyObject *t_UnivariateDerivative2::wrap_Object(const UnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative2 *self = (t_UnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2), &PY_TYPE_DEF(UnivariateDerivative2), module, "UnivariateDerivative2", 0);
        }

        void t_UnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "class_", make_descriptor(UnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "wrapfn_", make_descriptor(t_UnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2), "PI", make_descriptor(t_UnivariateDerivative2::wrap_Object(*UnivariateDerivative2::PI)));
        }

        static PyObject *t_UnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2::wrap_Object(UnivariateDerivative2(((t_UnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2_of_(t_UnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative2_init_(t_UnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative2(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              UnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariateDerivative2(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2);
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

        static PyObject *t_UnivariateDerivative2_abs(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_acosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_add(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_asinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atan2(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_atanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cbrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ceil(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compareTo(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_compose(t_UnivariateDerivative2 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_copySign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_cosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_divide(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_equals(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_exp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_expm1(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_floor(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getDerivative(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getExponent(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getField(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getFirstDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getOrder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getPi(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getReal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_getSecondDerivative(t_UnivariateDerivative2 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative2_getValue(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hashCode(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_hypot(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_linearCombination(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &p2, t_UnivariateDerivative2::parameters_, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &p4, t_UnivariateDerivative2::parameters_, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &p6, t_UnivariateDerivative2::parameters_, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_, &a2, &a3, &p3, t_UnivariateDerivative2::parameters_, &a4, &a5, &p5, t_UnivariateDerivative2::parameters_, &a6, &a7, &p7, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log10(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_log1p(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_multiply(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_negate(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_newInstance(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2::pow(a0, a1));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_reciprocal(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_remainder(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rint(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_rootN(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_scalb(t_UnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sign(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sin(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinCos(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sinhCosh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_sqrt(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_subtract(t_UnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative2::initializeClass, &a0, &p0, t_UnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative2::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tan(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_tanh(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_taylor(t_UnivariateDerivative2 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative2_toDegrees(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toDerivativeStructure(t_UnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_toRadians(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative2_ulp(t_UnivariateDerivative2 *self, PyObject *args)
        {
          UnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative2::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative2_get__parameters_(t_UnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative2_get__exponent(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__field(t_UnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__firstDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__order(t_UnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative2_get__pi(t_UnivariateDerivative2 *self, void *data)
        {
          UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2_get__real(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__secondDerivative(t_UnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative2_get__value(t_UnivariateDerivative2 *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing::mids$ = NULL;
        bool SensorMeanPlaneCrossing::live$ = false;

        jclass SensorMeanPlaneCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb6f66bbc3000890] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZID)V");
            mids$[mid_init$_fabf2921b74e43d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZIDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/util/stream/Stream;)V");
            mids$[mid_find_68394db1cdfcbe46] = env->getMethodID(cls, "find", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult;");
            mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");
            mids$[mid_getCachedResults_20f6d2b462aaef4b] = env->getMethodID(cls, "getCachedResults", "()Ljava/util/stream/Stream;");
            mids$[mid_getMaxEval_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEval", "()I");
            mids$[mid_getMaxLine_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxLine", "()I");
            mids$[mid_getMeanPlaneNormal_d52645e0d4c07563] = env->getMethodID(cls, "getMeanPlaneNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getMinLine_570ce0828f81a2c1] = env->getMethodID(cls, "getMinLine", "()I");
            mids$[mid_getScToBody_688fb4be4b33225a] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getSensor_0dd977498c42255e] = env->getMethodID(cls, "getSensor", "()Lorg/orekit/rugged/linesensor/LineSensor;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb6f66bbc3000890, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::java::util::stream::Stream & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fabf2921b74e43d4, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult SensorMeanPlaneCrossing::find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult(env->callObjectMethod(this$, mids$[mid_find_68394db1cdfcbe46], a0.this$));
        }

        jdouble SensorMeanPlaneCrossing::getAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_dff5885c2c873297]);
        }

        ::java::util::stream::Stream SensorMeanPlaneCrossing::getCachedResults() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getCachedResults_20f6d2b462aaef4b]));
        }

        jint SensorMeanPlaneCrossing::getMaxEval() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEval_570ce0828f81a2c1]);
        }

        jint SensorMeanPlaneCrossing::getMaxLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxLine_570ce0828f81a2c1]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing::getMeanPlaneNormal() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMeanPlaneNormal_d52645e0d4c07563]));
        }

        jint SensorMeanPlaneCrossing::getMinLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinLine_570ce0828f81a2c1]);
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody SensorMeanPlaneCrossing::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_688fb4be4b33225a]));
        }

        ::org::orekit::rugged::linesensor::LineSensor SensorMeanPlaneCrossing::getSensor() const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getSensor_0dd977498c42255e]));
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
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, accuracy),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, cachedResults),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxEval),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, meanPlaneNormal),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, minLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, scToBody),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, sensor),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, find, METH_O),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getCachedResults, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxEval, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMeanPlaneNormal, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMinLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getSensor, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing, t_SensorMeanPlaneCrossing, SensorMeanPlaneCrossing);

        void t_SensorMeanPlaneCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing), &PY_TYPE_DEF(SensorMeanPlaneCrossing), module, "SensorMeanPlaneCrossing", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "CrossingResult", make_descriptor(&PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult)));
        }

        void t_SensorMeanPlaneCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "class_", make_descriptor(SensorMeanPlaneCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing::wrap_Object(SensorMeanPlaneCrossing(((t_SensorMeanPlaneCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::java::util::stream::Stream a9((jobject) NULL);
              PyTypeObject **p9;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZIDkK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::java::util::stream::t_Stream::parameters_))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.find(a0));
            return ::org::orekit::rugged::linesensor::t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "find", arg);
          return NULL;
        }

        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(SensorMeanPlaneCrossing$CrossingResult));
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEval());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEval());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::linesensor::LineSensor value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *BodiesElements::class$ = NULL;
      jmethodID *BodiesElements::mids$ = NULL;
      bool BodiesElements::live$ = false;

      jclass BodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/BodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ad6d4c995a81d9e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD)V");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLJu_dff5885c2c873297] = env->getMethodID(cls, "getLJu", "()D");
          mids$[mid_getLJuDot_dff5885c2c873297] = env->getMethodID(cls, "getLJuDot", "()D");
          mids$[mid_getLMa_dff5885c2c873297] = env->getMethodID(cls, "getLMa", "()D");
          mids$[mid_getLMaDot_dff5885c2c873297] = env->getMethodID(cls, "getLMaDot", "()D");
          mids$[mid_getLMe_dff5885c2c873297] = env->getMethodID(cls, "getLMe", "()D");
          mids$[mid_getLMeDot_dff5885c2c873297] = env->getMethodID(cls, "getLMeDot", "()D");
          mids$[mid_getLNe_dff5885c2c873297] = env->getMethodID(cls, "getLNe", "()D");
          mids$[mid_getLNeDot_dff5885c2c873297] = env->getMethodID(cls, "getLNeDot", "()D");
          mids$[mid_getLSa_dff5885c2c873297] = env->getMethodID(cls, "getLSa", "()D");
          mids$[mid_getLSaDot_dff5885c2c873297] = env->getMethodID(cls, "getLSaDot", "()D");
          mids$[mid_getLUr_dff5885c2c873297] = env->getMethodID(cls, "getLUr", "()D");
          mids$[mid_getLUrDot_dff5885c2c873297] = env->getMethodID(cls, "getLUrDot", "()D");
          mids$[mid_getLVe_dff5885c2c873297] = env->getMethodID(cls, "getLVe", "()D");
          mids$[mid_getLVeDot_dff5885c2c873297] = env->getMethodID(cls, "getLVeDot", "()D");
          mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
          mids$[mid_getPaDot_dff5885c2c873297] = env->getMethodID(cls, "getPaDot", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodiesElements::BodiesElements(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jdouble a16, jdouble a17, jdouble a18, jdouble a19, jdouble a20, jdouble a21, jdouble a22, jdouble a23, jdouble a24, jdouble a25, jdouble a26, jdouble a27, jdouble a28, jdouble a29, jdouble a30, jdouble a31) : ::org::orekit::data::DelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_ad6d4c995a81d9e4, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31)) {}

      jdouble BodiesElements::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLJu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJu_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLJuDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJuDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLMa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMa_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLMaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMaDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLMe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMe_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLMeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMeDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLNe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNe_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLNeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNeDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLSa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSa_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLSaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSaDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLUr() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUr_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLUrDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUrDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLVe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVe_dff5885c2c873297]);
      }

      jdouble BodiesElements::getLVeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVeDot_dff5885c2c873297]);
      }

      jdouble BodiesElements::getPa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
      }

      jdouble BodiesElements::getPaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPaDot_dff5885c2c873297]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data);
      static PyGetSetDef t_BodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_BodiesElements, lE),
        DECLARE_GET_FIELD(t_BodiesElements, lEDot),
        DECLARE_GET_FIELD(t_BodiesElements, lJu),
        DECLARE_GET_FIELD(t_BodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMa),
        DECLARE_GET_FIELD(t_BodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMe),
        DECLARE_GET_FIELD(t_BodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lNe),
        DECLARE_GET_FIELD(t_BodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lSa),
        DECLARE_GET_FIELD(t_BodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lUr),
        DECLARE_GET_FIELD(t_BodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_BodiesElements, lVe),
        DECLARE_GET_FIELD(t_BodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_BodiesElements, pa),
        DECLARE_GET_FIELD(t_BodiesElements, paDot),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodiesElements__methods_[] = {
        DECLARE_METHOD(t_BodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodiesElements)[] = {
        { Py_tp_methods, t_BodiesElements__methods_ },
        { Py_tp_init, (void *) t_BodiesElements_init_ },
        { Py_tp_getset, t_BodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::DelaunayArguments),
        NULL
      };

      DEFINE_TYPE(BodiesElements, t_BodiesElements, BodiesElements);

      void t_BodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(BodiesElements), &PY_TYPE_DEF(BodiesElements), module, "BodiesElements", 0);
      }

      void t_BodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "class_", make_descriptor(BodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "wrapfn_", make_descriptor(t_BodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodiesElements::initializeClass, 1)))
          return NULL;
        return t_BodiesElements::wrap_Object(BodiesElements(((t_BodiesElements *) arg)->object.this$));
      }
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        jdouble a13;
        jdouble a14;
        jdouble a15;
        jdouble a16;
        jdouble a17;
        jdouble a18;
        jdouble a19;
        jdouble a20;
        jdouble a21;
        jdouble a22;
        jdouble a23;
        jdouble a24;
        jdouble a25;
        jdouble a26;
        jdouble a27;
        jdouble a28;
        jdouble a29;
        jdouble a30;
        jdouble a31;
        BodiesElements object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19, &a20, &a21, &a22, &a23, &a24, &a25, &a26, &a27, &a28, &a29, &a30, &a31))
        {
          INT_CALL(object = BodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJuDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUr());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUrDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJuDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUr());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUrDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPaDot());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmWriter::class$ = NULL;
            jmethodID *TdmWriter::mids$ = NULL;
            bool TdmWriter::live$ = false;
            jdouble TdmWriter::CCSDS_TDM_VERS = (jdouble) 0;
            jint TdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass TdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_328e2518395eef7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
                mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_TDM_VERS = env->getStaticDoubleField(cls, "CCSDS_TDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmWriter::TdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_328e2518395eef7f, a0.this$, a1.this$, a2.this$)) {}
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
          namespace tdm {
            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args);
            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data);
            static PyGetSetDef t_TdmWriter__fields_[] = {
              DECLARE_GET_FIELD(t_TdmWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmWriter__methods_[] = {
              DECLARE_METHOD(t_TdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmWriter)[] = {
              { Py_tp_methods, t_TdmWriter__methods_ },
              { Py_tp_init, (void *) t_TdmWriter_init_ },
              { Py_tp_getset, t_TdmWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(TdmWriter, t_TdmWriter, TdmWriter);
            PyObject *t_TdmWriter::wrap_Object(const TdmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmWriter), &PY_TYPE_DEF(TdmWriter), module, "TdmWriter", 0);
            }

            void t_TdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "class_", make_descriptor(TdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "wrapfn_", make_descriptor(t_TdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "CCSDS_TDM_VERS", make_descriptor(TdmWriter::CCSDS_TDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "KVN_PADDING_WIDTH", make_descriptor(TdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmWriter::initializeClass, 1)))
                return NULL;
              return t_TdmWriter::wrap_Object(TdmWriter(((t_TdmWriter *) arg)->object.this$));
            }
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              TdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
              {
                INT_CALL(object = TdmWriter(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
                self->parameters[2] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Tdm);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data)
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
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tanh::class$ = NULL;
        jmethodID *Tanh::mids$ = NULL;
        bool Tanh::live$ = false;

        jclass Tanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tanh::Tanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Tanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args);

        static PyMethodDef t_Tanh__methods_[] = {
          DECLARE_METHOD(t_Tanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tanh)[] = {
          { Py_tp_methods, t_Tanh__methods_ },
          { Py_tp_init, (void *) t_Tanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tanh, t_Tanh, Tanh);

        void t_Tanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Tanh), &PY_TYPE_DEF(Tanh), module, "Tanh", 0);
        }

        void t_Tanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "class_", make_descriptor(Tanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "wrapfn_", make_descriptor(t_Tanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tanh::initializeClass, 1)))
            return NULL;
          return t_Tanh::wrap_Object(Tanh(((t_Tanh *) arg)->object.this$));
        }
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds)
        {
          Tanh object((jobject) NULL);

          INT_CALL(object = Tanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractMessageWriter::class$ = NULL;
            jmethodID *AbstractMessageWriter::mids$ = NULL;
            bool AbstractMessageWriter::live$ = false;
            ::java::lang::String *AbstractMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass AbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2a0a7c2e7c34a644] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_c779ff7fea6f1993] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_dff5885c2c873297] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_11b109bd155ca898] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_1a568e4d577ff0e8] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_dff5885c2c873297] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_279465702b09ae7f] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_48090222d5fb583c] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_6a1f0a7164a88e0a] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");
                mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractMessageWriter::AbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a0a7c2e7c34a644, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding AbstractMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_c779ff7fea6f1993]));
            }

            jdouble AbstractMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_dff5885c2c873297]);
            }

            ::java::lang::String AbstractMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_11b109bd155ca898]));
            }

            ::java::lang::String AbstractMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter AbstractMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_1a568e4d577ff0e8]));
            }

            jdouble AbstractMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_dff5885c2c873297]);
            }

            void AbstractMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_279465702b09ae7f], a0.this$);
            }

            void AbstractMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_6d745cf7b26e9f5d], a0.this$);
            }

            void AbstractMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_48090222d5fb583c], a0.this$, a1.this$);
            }

            void AbstractMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_6a1f0a7164a88e0a], a0.this$, a1.this$);
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
          namespace generation {
            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args);
            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data);
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data);
            static PyGetSetDef t_AbstractMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractMessageWriter, context),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, root),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, version),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageWriter)[] = {
              { Py_tp_methods, t_AbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_AbstractMessageWriter_init_ },
              { Py_tp_getset, t_AbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageWriter, t_AbstractMessageWriter, AbstractMessageWriter);
            PyObject *t_AbstractMessageWriter::wrap_Object(const AbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageWriter), &PY_TYPE_DEF(AbstractMessageWriter), module, "AbstractMessageWriter", 0);
            }

            void t_AbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "class_", make_descriptor(AbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "wrapfn_", make_descriptor(t_AbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(AbstractMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*AbstractMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageWriter::wrap_Object(AbstractMessageWriter(((t_AbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              AbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *UnscentedTransformProvider::class$ = NULL;
      jmethodID *UnscentedTransformProvider::mids$ = NULL;
      bool UnscentedTransformProvider::live$ = false;

      jclass UnscentedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/UnscentedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getWc_aab4fbf77867daa8] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_aab4fbf77867daa8] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unscentedTransform_596ac2a258d0a23b] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_aab4fbf77867daa8]));
      }

      JArray< ::org::hipparchus::linear::RealVector > UnscentedTransformProvider::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_596ac2a258d0a23b], a0.this$, a1.this$));
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
      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args);
      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data);
      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data);
      static PyGetSetDef t_UnscentedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wc),
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UnscentedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_UnscentedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWc, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWm, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnscentedTransformProvider)[] = {
        { Py_tp_methods, t_UnscentedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UnscentedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnscentedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnscentedTransformProvider, t_UnscentedTransformProvider, UnscentedTransformProvider);

      void t_UnscentedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(UnscentedTransformProvider), &PY_TYPE_DEF(UnscentedTransformProvider), module, "UnscentedTransformProvider", 0);
      }

      void t_UnscentedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "class_", make_descriptor(UnscentedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "wrapfn_", make_descriptor(t_UnscentedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnscentedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_UnscentedTransformProvider::wrap_Object(UnscentedTransformProvider(((t_UnscentedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnscentedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }

      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *AbstractEncounterLOF::class$ = NULL;
        jmethodID *AbstractEncounterLOF::mids$ = NULL;
        bool AbstractEncounterLOF::live$ = false;

        jclass AbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/AbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldOther_90f77345373c3eb7] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_9b7c658c14883c84] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_rotationFromInertial_48dfcf66fb3ed19c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_00be22c00009a46d] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::FieldPVCoordinates AbstractEncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_90f77345373c3eb7], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates AbstractEncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_9b7c658c14883c84]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation AbstractEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_48dfcf66fb3ed19c], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation AbstractEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_00be22c00009a46d], a0.this$, a1.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self);
        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args);
        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_AbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractEncounterLOF, other),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_AbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_AbstractEncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_AbstractEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractEncounterLOF)[] = {
          { Py_tp_methods, t_AbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractEncounterLOF, t_AbstractEncounterLOF, AbstractEncounterLOF);

        void t_AbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractEncounterLOF), &PY_TYPE_DEF(AbstractEncounterLOF), module, "AbstractEncounterLOF", 0);
        }

        void t_AbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "class_", make_descriptor(AbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "wrapfn_", make_descriptor(t_AbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_AbstractEncounterLOF::wrap_Object(AbstractEncounterLOF(((t_AbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/util/Optional.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftStateInterpolator::class$ = NULL;
      jmethodID *FieldSpacecraftStateInterpolator::mids$ = NULL;
      bool FieldSpacecraftStateInterpolator::live$ = false;

      jclass FieldSpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_1be06daec585e1cc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_6039fdd299a8bef6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_47d46a6c49da3b1b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_a37d544e446cc50c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAbsPVAInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_bede014d8db77b67] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_interpolate_1fc44234b9e2bf71] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1be06daec585e1cc, a0, a1.this$, a2.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6039fdd299a8bef6, a0, a1, a2.this$, a3.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_47d46a6c49da3b1b, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1, const ::org::orekit::time::FieldTimeInterpolator & a2, const ::org::orekit::time::FieldTimeInterpolator & a3, const ::org::orekit::time::FieldTimeInterpolator & a4, const ::org::orekit::time::FieldTimeInterpolator & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a37d544e446cc50c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_c5e311a9e5531e7d]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_c5e311a9e5531e7d]));
      }

      jint FieldSpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_c5e311a9e5531e7d]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_b86f9f61d97a7244]));
      }

      ::java::util::List FieldSpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldSpacecraftStateInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_bede014d8db77b67], a0.this$, a1.this$));
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
      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_FieldSpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_FieldSpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_FieldSpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftStateInterpolator, t_FieldSpacecraftStateInterpolator, FieldSpacecraftStateInterpolator);
      PyObject *t_FieldSpacecraftStateInterpolator::wrap_Object(const FieldSpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftStateInterpolator), &PY_TYPE_DEF(FieldSpacecraftStateInterpolator), module, "FieldSpacecraftStateInterpolator", 0);
      }

      void t_FieldSpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "class_", make_descriptor(FieldSpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_FieldSpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftStateInterpolator::wrap_Object(FieldSpacecraftStateInterpolator(((t_FieldSpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldTimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::FieldTimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::FieldTimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getNbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__nbInterpolationPoints(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SecondMoment::class$ = NULL;
          jmethodID *SecondMoment::mids$ = NULL;
          bool SecondMoment::live$ = false;

          jclass SecondMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SecondMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_7d2491dc61f6c936] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_f10a88f3e717b4d8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SecondMoment;");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SecondMoment::SecondMoment() : ::org::hipparchus::stat::descriptive::moment::FirstMoment(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void SecondMoment::aggregate(const SecondMoment & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_7d2491dc61f6c936], a0.this$);
          }

          void SecondMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          SecondMoment SecondMoment::copy() const
          {
            return SecondMoment(env->callObjectMethod(this$, mids$[mid_copy_f10a88f3e717b4d8]));
          }

          jdouble SecondMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void SecondMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg);
          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args);
          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data);
          static PyGetSetDef t_SecondMoment__fields_[] = {
            DECLARE_GET_FIELD(t_SecondMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SecondMoment__methods_[] = {
            DECLARE_METHOD(t_SecondMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SecondMoment, aggregate, METH_O),
            DECLARE_METHOD(t_SecondMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SecondMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SecondMoment)[] = {
            { Py_tp_methods, t_SecondMoment__methods_ },
            { Py_tp_init, (void *) t_SecondMoment_init_ },
            { Py_tp_getset, t_SecondMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SecondMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::moment::FirstMoment),
            NULL
          };

          DEFINE_TYPE(SecondMoment, t_SecondMoment, SecondMoment);

          void t_SecondMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(SecondMoment), &PY_TYPE_DEF(SecondMoment), module, "SecondMoment", 0);
          }

          void t_SecondMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "class_", make_descriptor(SecondMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "wrapfn_", make_descriptor(t_SecondMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SecondMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SecondMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SecondMoment::initializeClass, 1)))
              return NULL;
            return t_SecondMoment::wrap_Object(SecondMoment(((t_SecondMoment *) arg)->object.this$));
          }
          static PyObject *t_SecondMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SecondMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SecondMoment_init_(t_SecondMoment *self, PyObject *args, PyObject *kwds)
          {
            SecondMoment object((jobject) NULL);

            INT_CALL(object = SecondMoment());
            self->object = object;

            return 0;
          }

          static PyObject *t_SecondMoment_aggregate(t_SecondMoment *self, PyObject *arg)
          {
            SecondMoment a0((jobject) NULL);

            if (!parseArg(arg, "k", SecondMoment::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SecondMoment_clear(t_SecondMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SecondMoment_copy(t_SecondMoment *self, PyObject *args)
          {
            SecondMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SecondMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SecondMoment_getResult(t_SecondMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SecondMoment_increment(t_SecondMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SecondMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SecondMoment_get__result(t_SecondMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Parser::class$ = NULL;
        jmethodID *Parser::mids$ = NULL;
        bool Parser::live$ = false;

        jclass Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildTermsList_aade4ea8882e7a2c] = env->getStaticMethodID(cls, "buildTermsList", "(Ljava/lang/String;)Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List Parser::buildTermsList(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildTermsList_aade4ea8882e7a2c], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_Parser__methods_[] = {
          DECLARE_METHOD(t_Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, buildTermsList, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Parser)[] = {
          { Py_tp_methods, t_Parser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Parser, t_Parser, Parser);

        void t_Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(Parser), &PY_TYPE_DEF(Parser), module, "Parser", 0);
        }

        void t_Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "class_", make_descriptor(Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "wrapfn_", make_descriptor(t_Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Parser::initializeClass, 1)))
            return NULL;
          return t_Parser::wrap_Object(Parser(((t_Parser *) arg)->object.this$));
        }
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Parser::buildTermsList(a0));
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(PowerTerm));
          }

          PyErr_SetArgsError(type, "buildTermsList", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *NormalizedRandomGenerator::class$ = NULL;
      jmethodID *NormalizedRandomGenerator::mids$ = NULL;
      bool NormalizedRandomGenerator::live$ = false;

      jclass NormalizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/NormalizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextNormalizedDouble_dff5885c2c873297] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble NormalizedRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_dff5885c2c873297]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self);

      static PyMethodDef t_NormalizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_NormalizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NormalizedRandomGenerator)[] = {
        { Py_tp_methods, t_NormalizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NormalizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(NormalizedRandomGenerator, t_NormalizedRandomGenerator, NormalizedRandomGenerator);

      void t_NormalizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(NormalizedRandomGenerator), &PY_TYPE_DEF(NormalizedRandomGenerator), module, "NormalizedRandomGenerator", 0);
      }

      void t_NormalizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "class_", make_descriptor(NormalizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "wrapfn_", make_descriptor(t_NormalizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NormalizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_NormalizedRandomGenerator::wrap_Object(NormalizedRandomGenerator(((t_NormalizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NormalizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonPropulsionModel::class$ = NULL;
          jmethodID *PythonPropulsionModel::mids$ = NULL;
          bool PythonPropulsionModel::live$ = false;

          jclass PythonPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAcceleration_a6c71e83efaf48d0] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_19f36cd1a0a8b9bf] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getMassDerivatives_0b7191d207b9680f] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_8bdf60d5551eceaf] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPropulsionModel::PythonPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self);
          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPropulsionModel)[] = {
            { Py_tp_methods, t_PythonPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonPropulsionModel_init_ },
            { Py_tp_getset, t_PythonPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonPropulsionModel, t_PythonPropulsionModel, PythonPropulsionModel);

          void t_PythonPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPropulsionModel), &PY_TYPE_DEF(PythonPropulsionModel), module, "PythonPropulsionModel", 1);
          }

          void t_PythonPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "class_", make_descriptor(PythonPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "wrapfn_", make_descriptor(t_PythonPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonPropulsionModel_getAcceleration0 },
              { "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonPropulsionModel_getAcceleration1 },
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonPropulsionModel_getControl3DVectorCostType2 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonPropulsionModel_getMassDerivatives3 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonPropulsionModel_getMassDerivatives4 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonPropulsionModel_getName5 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonPropulsionModel_getParametersDrivers6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonPropulsionModel::wrap_Object(PythonPropulsionModel(((t_PythonPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(::org::orekit::attitudes::FieldAttitude(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_Attitude::wrap_Object(::org::orekit::attitudes::Attitude(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getMassDerivatives", result);
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

          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMassDerivatives", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
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

          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonEarthShape::class$ = NULL;
        jmethodID *PythonEarthShape::mids$ = NULL;
        bool PythonEarthShape::live$ = false;

        jclass PythonEarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonEarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_eead5b864957d48b] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_ec4b828b0bd3964b] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getIntersectionPoint_e81d59d1bc381e5e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_projectToGround_7ddc39790e3dd04b] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_73ba258c5f91e9db] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transform_5f1451dffd8cde56] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_e019f2426bfb11d5] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEarthShape::PythonEarthShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEarthShape::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEarthShape::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEarthShape::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace models {
      namespace earth {
        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self);
        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args);
        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data);
        static PyGetSetDef t_PythonEarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEarthShape, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEarthShape__methods_[] = {
          DECLARE_METHOD(t_PythonEarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEarthShape, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEarthShape)[] = {
          { Py_tp_methods, t_PythonEarthShape__methods_ },
          { Py_tp_init, (void *) t_PythonEarthShape_init_ },
          { Py_tp_getset, t_PythonEarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEarthShape)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEarthShape, t_PythonEarthShape, PythonEarthShape);

        void t_PythonEarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEarthShape), &PY_TYPE_DEF(PythonEarthShape), module, "PythonEarthShape", 1);
        }

        void t_PythonEarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "class_", make_descriptor(PythonEarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "wrapfn_", make_descriptor(t_PythonEarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEarthShape::initializeClass);
          JNINativeMethod methods[] = {
            { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonEarthShape_getBodyFrame0 },
            { "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;", (void *) t_PythonEarthShape_getEllipsoid1 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint2 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint3 },
            { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonEarthShape_projectToGround4 },
            { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_projectToGround5 },
            { "pythonDecRef", "()V", (void *) t_PythonEarthShape_pythonDecRef6 },
            { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEarthShape_transform7 },
            { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_transform8 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_transform9 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_transform10 },
          };
          env->registerNatives(cls, methods, 11);
        }

        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEarthShape::initializeClass, 1)))
            return NULL;
          return t_PythonEarthShape::wrap_Object(PythonEarthShape(((t_PythonEarthShape *) arg)->object.this$));
        }
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds)
        {
          PythonEarthShape object((jobject) NULL);

          INT_CALL(object = PythonEarthShape());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args)
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

        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getBodyFrame", result);
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

        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEllipsoid", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &value))
          {
            throwTypeError("getEllipsoid", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data)
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
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ShiftingTransformProvider::class$ = NULL;
      jmethodID *ShiftingTransformProvider::mids$ = NULL;
      bool ShiftingTransformProvider::live$ = false;

      jclass ShiftingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ShiftingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_720281015ac47b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_b22bdbe9f9cd12d5] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getStep_dff5885c2c873297] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ShiftingTransformProvider::ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_720281015ac47b21, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint ShiftingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_570ce0828f81a2c1]);
      }

      ::org::orekit::frames::TransformProvider ShiftingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_b22bdbe9f9cd12d5]));
      }

      ::org::orekit::frames::StaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      jdouble ShiftingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_dff5885c2c873297]);
      }

      ::org::orekit::frames::Transform ShiftingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ShiftingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data);
      static PyGetSetDef t_ShiftingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ShiftingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_ShiftingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ShiftingTransformProvider)[] = {
        { Py_tp_methods, t_ShiftingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_ShiftingTransformProvider_init_ },
        { Py_tp_getset, t_ShiftingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ShiftingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ShiftingTransformProvider, t_ShiftingTransformProvider, ShiftingTransformProvider);

      void t_ShiftingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ShiftingTransformProvider), &PY_TYPE_DEF(ShiftingTransformProvider), module, "ShiftingTransformProvider", 0);
      }

      void t_ShiftingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "class_", make_descriptor(ShiftingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "wrapfn_", make_descriptor(t_ShiftingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ShiftingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_ShiftingTransformProvider::wrap_Object(ShiftingTransformProvider(((t_ShiftingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ShiftingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        ShiftingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = ShiftingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorChangingVisitor::class$ = NULL;
      jmethodID *FieldVectorChangingVisitor::mids$ = NULL;
      bool FieldVectorChangingVisitor::live$ = false;

      jclass FieldVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_8336200ef3dde36b] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_00153cfbaed9aaab] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void FieldVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_8336200ef3dde36b], a0, a1, a2);
      }

      ::org::hipparchus::FieldElement FieldVectorChangingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_00153cfbaed9aaab], a0, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self);
      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorChangingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorChangingVisitor, t_FieldVectorChangingVisitor, FieldVectorChangingVisitor);
      PyObject *t_FieldVectorChangingVisitor::wrap_Object(const FieldVectorChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorChangingVisitor *self = (t_FieldVectorChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorChangingVisitor), &PY_TYPE_DEF(FieldVectorChangingVisitor), module, "FieldVectorChangingVisitor", 0);
      }

      void t_FieldVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "class_", make_descriptor(FieldVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "wrapfn_", make_descriptor(t_FieldVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorChangingVisitor::wrap_Object(FieldVectorChangingVisitor(((t_FieldVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorChangingVisitor_of_(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorChangingVisitor_end(t_FieldVectorChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorChangingVisitor_start(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorChangingVisitor_visit(t_FieldVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorChangingVisitor_get__parameters_(t_FieldVectorChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
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
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Section::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$LabeledDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$LabeledDoubleConsumer::mids$ = NULL;
            bool ParseToken$LabeledDoubleConsumer::live$ = false;

            jclass ParseToken$LabeledDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_9d67fa439cabbd44] = env->getMethodID(cls, "accept", "(CD)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$LabeledDoubleConsumer::accept(jchar a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_9d67fa439cabbd44], a0, a1);
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
            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$LabeledDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$LabeledDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$LabeledDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$LabeledDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$LabeledDoubleConsumer, t_ParseToken$LabeledDoubleConsumer, ParseToken$LabeledDoubleConsumer);

            void t_ParseToken$LabeledDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$LabeledDoubleConsumer), &PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer), module, "ParseToken$LabeledDoubleConsumer", 0);
            }

            void t_ParseToken$LabeledDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "class_", make_descriptor(ParseToken$LabeledDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$LabeledDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$LabeledDoubleConsumer::wrap_Object(ParseToken$LabeledDoubleConsumer(((t_ParseToken$LabeledDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args)
            {
              jchar a0;
              jdouble a1;

              if (!parseArgs(args, "CD", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *ConstantRefractionLayer::class$ = NULL;
        jmethodID *ConstantRefractionLayer::mids$ = NULL;
        bool ConstantRefractionLayer::live$ = false;

        jclass ConstantRefractionLayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/ConstantRefractionLayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLowestAltitude_dff5885c2c873297] = env->getMethodID(cls, "getLowestAltitude", "()D");
            mids$[mid_getRefractiveIndex_dff5885c2c873297] = env->getMethodID(cls, "getRefractiveIndex", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRefractionLayer::ConstantRefractionLayer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble ConstantRefractionLayer::getLowestAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowestAltitude_dff5885c2c873297]);
        }

        jdouble ConstantRefractionLayer::getRefractiveIndex() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefractiveIndex_dff5885c2c873297]);
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
    namespace rugged {
      namespace refraction {
        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data);
        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data);
        static PyGetSetDef t_ConstantRefractionLayer__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, lowestAltitude),
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, refractiveIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRefractionLayer__methods_[] = {
          DECLARE_METHOD(t_ConstantRefractionLayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getLowestAltitude, METH_NOARGS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getRefractiveIndex, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRefractionLayer)[] = {
          { Py_tp_methods, t_ConstantRefractionLayer__methods_ },
          { Py_tp_init, (void *) t_ConstantRefractionLayer_init_ },
          { Py_tp_getset, t_ConstantRefractionLayer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRefractionLayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantRefractionLayer, t_ConstantRefractionLayer, ConstantRefractionLayer);

        void t_ConstantRefractionLayer::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRefractionLayer), &PY_TYPE_DEF(ConstantRefractionLayer), module, "ConstantRefractionLayer", 0);
        }

        void t_ConstantRefractionLayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "class_", make_descriptor(ConstantRefractionLayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "wrapfn_", make_descriptor(t_ConstantRefractionLayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRefractionLayer::initializeClass, 1)))
            return NULL;
          return t_ConstantRefractionLayer::wrap_Object(ConstantRefractionLayer(((t_ConstantRefractionLayer *) arg)->object.this$));
        }
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRefractionLayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ConstantRefractionLayer object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = ConstantRefractionLayer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *InterSatellitesRange::class$ = NULL;
        jmethodID *InterSatellitesRange::mids$ = NULL;
        bool InterSatellitesRange::live$ = false;
        ::java::lang::String *InterSatellitesRange::MEASUREMENT_TYPE = NULL;

        jclass InterSatellitesRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/InterSatellitesRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_22abf2f8074d5895] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZLorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_isTwoWay_b108b35ef48e27bd] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatellitesRange::InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, jboolean a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_22abf2f8074d5895, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6)) {}

        jboolean InterSatellitesRange::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_b108b35ef48e27bd]);
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args);
        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self);
        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data);
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data);
        static PyGetSetDef t_InterSatellitesRange__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatellitesRange, twoWay),
          DECLARE_GET_FIELD(t_InterSatellitesRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatellitesRange__methods_[] = {
          DECLARE_METHOD(t_InterSatellitesRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatellitesRange, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRange)[] = {
          { Py_tp_methods, t_InterSatellitesRange__methods_ },
          { Py_tp_init, (void *) t_InterSatellitesRange_init_ },
          { Py_tp_getset, t_InterSatellitesRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatellitesRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(InterSatellitesRange, t_InterSatellitesRange, InterSatellitesRange);
        PyObject *t_InterSatellitesRange::wrap_Object(const InterSatellitesRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatellitesRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatellitesRange::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatellitesRange), &PY_TYPE_DEF(InterSatellitesRange), module, "InterSatellitesRange", 0);
        }

        void t_InterSatellitesRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "class_", make_descriptor(InterSatellitesRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "wrapfn_", make_descriptor(t_InterSatellitesRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(InterSatellitesRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatellitesRange::initializeClass, 1)))
            return NULL;
          return t_InterSatellitesRange::wrap_Object(InterSatellitesRange(((t_InterSatellitesRange *) arg)->object.this$));
        }
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatellitesRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
          jboolean a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          InterSatellitesRange object((jobject) NULL);

          if (!parseArgs(args, "kkZkDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = InterSatellitesRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction$ConvergenceTest::class$ = NULL;
      jmethodID *BigFraction$ConvergenceTest::mids$ = NULL;
      bool BigFraction$ConvergenceTest::live$ = false;

      jclass BigFraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_d943e189ce8312a2] = env->getMethodID(cls, "test", "(JJ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFraction$ConvergenceTest::test(jlong a0, jlong a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_d943e189ce8312a2], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_BigFraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_BigFraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFraction$ConvergenceTest, t_BigFraction$ConvergenceTest, BigFraction$ConvergenceTest);

      void t_BigFraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction$ConvergenceTest), &PY_TYPE_DEF(BigFraction$ConvergenceTest), module, "BigFraction$ConvergenceTest", 0);
      }

      void t_BigFraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "class_", make_descriptor(BigFraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "wrapfn_", make_descriptor(t_BigFraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_BigFraction$ConvergenceTest::wrap_Object(BigFraction$ConvergenceTest(((t_BigFraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jboolean result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/Collection.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *Rugged::class$ = NULL;
        jmethodID *Rugged::mids$ = NULL;
        bool Rugged::live$ = false;

        jclass Rugged::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/Rugged");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dateLocation_4b5bd8dfc4d95546] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_dateLocation_0a9c33ee5240487c] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;DDII)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_directLocation_0f95dc097405fc15] = env->getMethodID(cls, "directLocation", "(Ljava/lang/String;D)[Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_directLocation_8bbd71e6fb48822c] = env->getMethodID(cls, "directLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_distanceBetweenLOS_e3b68595272c4802] = env->getMethodID(cls, "distanceBetweenLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;D)[D");
            mids$[mid_distanceBetweenLOSderivatives_0566b28b56fff79b] = env->getMethodID(cls, "distanceBetweenLOSderivatives", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getAlgorithm_ba405a20d038fdfa] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/intersection/IntersectionAlgorithm;");
            mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getBodyToInertial_687985c59478d29c] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getEllipsoid_0cd7cb35607f9c90] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialToBody_687985c59478d29c] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getLineSensor_c2bbc89b7ea3d3c3] = env->getMethodID(cls, "getLineSensor", "(Ljava/lang/String;)Lorg/orekit/rugged/linesensor/LineSensor;");
            mids$[mid_getLineSensors_37528d110cff6b74] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/Collection;");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getRefractionCorrection_8a9b3bb0455f2a2d] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getScToBody_688fb4be4b33225a] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getScToInertial_687985c59478d29c] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_inverseLocation_9cfd359020f7e00c] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocation_a03b661721787aa2] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;DDII)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocationDerivatives_f6f19c5a49ccc008] = env->getMethodID(cls, "inverseLocationDerivatives", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;IILorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_isAberrationOfLightCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isAberrationOfLightCorrected", "()Z");
            mids$[mid_isInRange_db6d81809797ddaa] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");
            mids$[mid_isLightTimeCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isLightTimeCorrected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_4b5bd8dfc4d95546], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_0a9c33ee5240487c], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::orekit::bodies::GeodeticPoint > Rugged::directLocation(const ::java::lang::String & a0, jdouble a1) const
        {
          return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_directLocation_0f95dc097405fc15], a0.this$, a1));
        }

        ::org::orekit::bodies::GeodeticPoint Rugged::directLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_directLocation_8bbd71e6fb48822c], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > Rugged::distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOS_e3b68595272c4802], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6, const ::org::orekit::rugged::utils::DerivativeGenerator & a7) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOSderivatives_0566b28b56fff79b], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6, a7.this$));
        }

        ::org::orekit::rugged::intersection::IntersectionAlgorithm Rugged::getAlgorithm() const
        {
          return ::org::orekit::rugged::intersection::IntersectionAlgorithm(env->callObjectMethod(this$, mids$[mid_getAlgorithm_ba405a20d038fdfa]));
        }

        ::org::orekit::rugged::api::AlgorithmId Rugged::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
        }

        ::org::orekit::frames::Transform Rugged::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_687985c59478d29c], a0.this$));
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid Rugged::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_0cd7cb35607f9c90]));
        }

        ::org::orekit::frames::Transform Rugged::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_687985c59478d29c], a0.this$));
        }

        ::org::orekit::rugged::linesensor::LineSensor Rugged::getLineSensor(const ::java::lang::String & a0) const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getLineSensor_c2bbc89b7ea3d3c3], a0.this$));
        }

        ::java::util::Collection Rugged::getLineSensors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getLineSensors_37528d110cff6b74]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        ::java::lang::String Rugged::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction Rugged::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8a9b3bb0455f2a2d]));
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody Rugged::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_688fb4be4b33225a]));
        }

        ::org::orekit::frames::Transform Rugged::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_687985c59478d29c], a0.this$));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_9cfd359020f7e00c], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_a03b661721787aa2], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::inverseLocationDerivatives(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3, const ::org::orekit::rugged::utils::DerivativeGenerator & a4) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_inverseLocationDerivatives_f6f19c5a49ccc008], a0.this$, a1.this$, a2, a3, a4.this$));
        }

        jboolean Rugged::isAberrationOfLightCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAberrationOfLightCorrected_b108b35ef48e27bd]);
        }

        jboolean Rugged::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_db6d81809797ddaa], a0.this$);
        }

        jboolean Rugged::isLightTimeCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLightTimeCorrected_b108b35ef48e27bd]);
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
    namespace rugged {
      namespace api {
        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self);
        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self);
        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self);
        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensors(t_Rugged *self);
        static PyObject *t_Rugged_getMaxDate(t_Rugged *self);
        static PyObject *t_Rugged_getMinDate(t_Rugged *self);
        static PyObject *t_Rugged_getName(t_Rugged *self);
        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self);
        static PyObject *t_Rugged_getScToBody(t_Rugged *self);
        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self);
        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self);
        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data);
        static PyGetSetDef t_Rugged__fields_[] = {
          DECLARE_GET_FIELD(t_Rugged, aberrationOfLightCorrected),
          DECLARE_GET_FIELD(t_Rugged, algorithm),
          DECLARE_GET_FIELD(t_Rugged, algorithmId),
          DECLARE_GET_FIELD(t_Rugged, ellipsoid),
          DECLARE_GET_FIELD(t_Rugged, lightTimeCorrected),
          DECLARE_GET_FIELD(t_Rugged, lineSensors),
          DECLARE_GET_FIELD(t_Rugged, maxDate),
          DECLARE_GET_FIELD(t_Rugged, minDate),
          DECLARE_GET_FIELD(t_Rugged, name),
          DECLARE_GET_FIELD(t_Rugged, refractionCorrection),
          DECLARE_GET_FIELD(t_Rugged, scToBody),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Rugged__methods_[] = {
          DECLARE_METHOD(t_Rugged, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, dateLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, directLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOS, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOSderivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getInertialToBody, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensor, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getName, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, inverseLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, inverseLocationDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, isAberrationOfLightCorrected, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, isInRange, METH_O),
          DECLARE_METHOD(t_Rugged, isLightTimeCorrected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rugged)[] = {
          { Py_tp_methods, t_Rugged__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Rugged__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rugged)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rugged, t_Rugged, Rugged);

        void t_Rugged::install(PyObject *module)
        {
          installType(&PY_TYPE(Rugged), &PY_TYPE_DEF(Rugged), module, "Rugged", 0);
        }

        void t_Rugged::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "class_", make_descriptor(Rugged::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "wrapfn_", make_descriptor(t_Rugged::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rugged::initializeClass, 1)))
            return NULL;
          return t_Rugged::wrap_Object(Rugged(((t_Rugged *) arg)->object.this$));
        }
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rugged::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dateLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);

              if (!parseArgs(args, "sD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "directLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOS(a0, a1, a2, a3, a4, a5, a6));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOS", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          ::org::orekit::rugged::utils::DerivativeGenerator a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkDK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOSderivatives(a0, a1, a2, a3, a4, a5, a6, a7));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOSderivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(result);
        }

        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getLineSensor(a0));
            return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLineSensor", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensors(t_Rugged *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_Rugged_getMaxDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getMinDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getName(t_Rugged *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToBody(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::DerivativeGenerator a4((jobject) NULL);
          PyTypeObject **p4;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "skIIK", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.inverseLocationDerivatives(a0, a1, a2, a3, a4));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocationDerivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedPCVS::class$ = NULL;
        jmethodID *AppliedPCVS::mids$ = NULL;
        bool AppliedPCVS::live$ = false;

        jclass AppliedPCVS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedPCVS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dcd2b12d07487aeb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgPCVS_11b109bd155ca898] = env->getMethodID(cls, "getProgPCVS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourcePCVS_11b109bd155ca898] = env->getMethodID(cls, "getSourcePCVS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedPCVS::AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcd2b12d07487aeb, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedPCVS::getProgPCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgPCVS_11b109bd155ca898]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedPCVS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
        }

        ::java::lang::String AppliedPCVS::getSourcePCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourcePCVS_11b109bd155ca898]));
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
      namespace rinex {
        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data);
        static PyGetSetDef t_AppliedPCVS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedPCVS, progPCVS),
          DECLARE_GET_FIELD(t_AppliedPCVS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedPCVS, sourcePCVS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedPCVS__methods_[] = {
          DECLARE_METHOD(t_AppliedPCVS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, getProgPCVS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSourcePCVS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedPCVS)[] = {
          { Py_tp_methods, t_AppliedPCVS__methods_ },
          { Py_tp_init, (void *) t_AppliedPCVS_init_ },
          { Py_tp_getset, t_AppliedPCVS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedPCVS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedPCVS, t_AppliedPCVS, AppliedPCVS);

        void t_AppliedPCVS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedPCVS), &PY_TYPE_DEF(AppliedPCVS), module, "AppliedPCVS", 0);
        }

        void t_AppliedPCVS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "class_", make_descriptor(AppliedPCVS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "wrapfn_", make_descriptor(t_AppliedPCVS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedPCVS::initializeClass, 1)))
            return NULL;
          return t_AppliedPCVS::wrap_Object(AppliedPCVS(((t_AppliedPCVS *) arg)->object.this$));
        }
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedPCVS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedPCVS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedPCVS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgPCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourcePCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgPCVS());
          return j2p(value);
        }

        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourcePCVS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Set.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Set::class$ = NULL;
    jmethodID *Set::mids$ = NULL;
    bool Set::live$ = false;

    jclass Set::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Set");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_17e918edc999b3c7] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_5c4ad34ca62a4473] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/Set;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_of_015730311a5bacdc] = env->getStaticMethodID(cls, "of", "()Ljava/util/Set;");
        mids$[mid_of_ef1acae2e135f3ac] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_9fef958b6aa7109a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_cc78ac2bf2fba2d5] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_43edc07cc8814e40] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_9f4ba345a8b168dd] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_599e2df70038f6b9] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_42ae1bc4873ed18b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_8dce9684123af9c9] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_f875e11a49a99a44] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_a641377206d05700] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_2b1fd661d980d771] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Set::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean Set::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    void Set::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean Set::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean Set::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_17e918edc999b3c7], a0.this$);
    }

    Set Set::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_copyOf_5c4ad34ca62a4473], a0.this$));
    }

    jboolean Set::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint Set::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Set::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator Set::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    Set Set::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_015730311a5bacdc]));
    }

    Set Set::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_ef1acae2e135f3ac], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_9fef958b6aa7109a], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_cc78ac2bf2fba2d5], a0.this$, a1.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_43edc07cc8814e40], a0.this$, a1.this$, a2.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_9f4ba345a8b168dd], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_599e2df70038f6b9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_42ae1bc4873ed18b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_8dce9684123af9c9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_f875e11a49a99a44], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_a641377206d05700], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_2b1fd661d980d771], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    jboolean Set::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean Set::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    jboolean Set::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    jint Set::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Spliterator Set::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    JArray< ::java::lang::Object > Set::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > Set::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_72bb572e6638b43f], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_of_(t_Set *self, PyObject *args);
    static PyObject *t_Set_add(t_Set *self, PyObject *args);
    static PyObject *t_Set_addAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_clear(t_Set *self, PyObject *args);
    static PyObject *t_Set_contains(t_Set *self, PyObject *args);
    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_equals(t_Set *self, PyObject *args);
    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args);
    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args);
    static PyObject *t_Set_iterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Set_remove(t_Set *self, PyObject *args);
    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_size(t_Set *self, PyObject *args);
    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_toArray(t_Set *self, PyObject *args);
    static PyObject *t_Set_get__empty(t_Set *self, void *data);
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data);
    static PyGetSetDef t_Set__fields_[] = {
      DECLARE_GET_FIELD(t_Set, empty),
      DECLARE_GET_FIELD(t_Set, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Set__methods_[] = {
      DECLARE_METHOD(t_Set, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, of_, METH_VARARGS),
      DECLARE_METHOD(t_Set, add, METH_VARARGS),
      DECLARE_METHOD(t_Set, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, clear, METH_VARARGS),
      DECLARE_METHOD(t_Set, contains, METH_VARARGS),
      DECLARE_METHOD(t_Set, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, equals, METH_VARARGS),
      DECLARE_METHOD(t_Set, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Set, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Set, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Set, remove, METH_VARARGS),
      DECLARE_METHOD(t_Set, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, size, METH_VARARGS),
      DECLARE_METHOD(t_Set, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Set)[] = {
      { Py_tp_methods, t_Set__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Set__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Set *)) get_generic_iterator< t_Set >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Set)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Set, t_Set, Set);
    PyObject *t_Set::wrap_Object(const Set& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Set::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Set::install(PyObject *module)
    {
      installType(&PY_TYPE(Set), &PY_TYPE_DEF(Set), module, "Set", 0);
    }

    void t_Set::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "class_", make_descriptor(Set::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "wrapfn_", make_descriptor(t_Set::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Set::initializeClass, 1)))
        return NULL;
      return t_Set::wrap_Object(Set(((t_Set *) arg)->object.this$));
    }
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Set::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Set_of_(t_Set *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Set_add(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Set_addAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Set_clear(t_Set *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Set_contains(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Set::copyOf(a0));
        return t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Set_equals(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Set_iterator(t_Set *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Set result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Set::of());
          return t_Set::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4));
            return t_Set::wrap_Object(result);
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
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6));
            return t_Set::wrap_Object(result);
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
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 9:
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
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_Set::wrap_Object(result);
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
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Set::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Set_remove(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_Set_size(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Set_toArray(t_Set *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Set_get__empty(t_Set *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader$Parser::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader$Parser::live$ = false;

      jclass UTCTAIHistoryFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader$Parser::UTCTAIHistoryFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::java::util::List UTCTAIHistoryFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_19eef1cf230063a6], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIHistoryFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader$Parser, t_UTCTAIHistoryFilesLoader$Parser, UTCTAIHistoryFilesLoader$Parser);

      void t_UTCTAIHistoryFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader$Parser), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser), module, "UTCTAIHistoryFilesLoader$Parser", 0);
      }

      void t_UTCTAIHistoryFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "class_", make_descriptor(UTCTAIHistoryFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader$Parser::wrap_Object(UTCTAIHistoryFilesLoader$Parser(((t_UTCTAIHistoryFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader$Parser_init_(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        UTCTAIHistoryFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = UTCTAIHistoryFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTCTAIHistoryFilesLoader$Parser_parse(t_UTCTAIHistoryFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *Month::class$ = NULL;
      jmethodID *Month::mids$ = NULL;
      bool Month::live$ = false;
      Month *Month::APRIL = NULL;
      Month *Month::AUGUST = NULL;
      Month *Month::DECEMBER = NULL;
      Month *Month::FEBRUARY = NULL;
      Month *Month::JANUARY = NULL;
      Month *Month::JULY = NULL;
      Month *Month::JUNE = NULL;
      Month *Month::MARCH = NULL;
      Month *Month::MAY = NULL;
      Month *Month::NOVEMBER = NULL;
      Month *Month::OCTOBER = NULL;
      Month *Month::SEPTEMBER = NULL;

      jclass Month::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/Month");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCapitalizedAbbreviation_11b109bd155ca898] = env->getMethodID(cls, "getCapitalizedAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getCapitalizedName_11b109bd155ca898] = env->getMethodID(cls, "getCapitalizedName", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseAbbreviation_11b109bd155ca898] = env->getMethodID(cls, "getLowerCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseName_11b109bd155ca898] = env->getMethodID(cls, "getLowerCaseName", "()Ljava/lang/String;");
          mids$[mid_getMonth_6576f8a178787324] = env->getStaticMethodID(cls, "getMonth", "(I)Lorg/orekit/time/Month;");
          mids$[mid_getNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getNumber", "()I");
          mids$[mid_getUpperCaseAbbreviation_11b109bd155ca898] = env->getMethodID(cls, "getUpperCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getUpperCaseName_11b109bd155ca898] = env->getMethodID(cls, "getUpperCaseName", "()Ljava/lang/String;");
          mids$[mid_parseMonth_e574350ed59f5049] = env->getStaticMethodID(cls, "parseMonth", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_valueOf_e574350ed59f5049] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_values_1ab325d1ede6c154] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/time/Month;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          APRIL = new Month(env->getStaticObjectField(cls, "APRIL", "Lorg/orekit/time/Month;"));
          AUGUST = new Month(env->getStaticObjectField(cls, "AUGUST", "Lorg/orekit/time/Month;"));
          DECEMBER = new Month(env->getStaticObjectField(cls, "DECEMBER", "Lorg/orekit/time/Month;"));
          FEBRUARY = new Month(env->getStaticObjectField(cls, "FEBRUARY", "Lorg/orekit/time/Month;"));
          JANUARY = new Month(env->getStaticObjectField(cls, "JANUARY", "Lorg/orekit/time/Month;"));
          JULY = new Month(env->getStaticObjectField(cls, "JULY", "Lorg/orekit/time/Month;"));
          JUNE = new Month(env->getStaticObjectField(cls, "JUNE", "Lorg/orekit/time/Month;"));
          MARCH = new Month(env->getStaticObjectField(cls, "MARCH", "Lorg/orekit/time/Month;"));
          MAY = new Month(env->getStaticObjectField(cls, "MAY", "Lorg/orekit/time/Month;"));
          NOVEMBER = new Month(env->getStaticObjectField(cls, "NOVEMBER", "Lorg/orekit/time/Month;"));
          OCTOBER = new Month(env->getStaticObjectField(cls, "OCTOBER", "Lorg/orekit/time/Month;"));
          SEPTEMBER = new Month(env->getStaticObjectField(cls, "SEPTEMBER", "Lorg/orekit/time/Month;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Month::getCapitalizedAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedAbbreviation_11b109bd155ca898]));
      }

      ::java::lang::String Month::getCapitalizedName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedName_11b109bd155ca898]));
      }

      ::java::lang::String Month::getLowerCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseAbbreviation_11b109bd155ca898]));
      }

      ::java::lang::String Month::getLowerCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseName_11b109bd155ca898]));
      }

      Month Month::getMonth(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_getMonth_6576f8a178787324], a0));
      }

      jint Month::getNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumber_570ce0828f81a2c1]);
      }

      ::java::lang::String Month::getUpperCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseAbbreviation_11b109bd155ca898]));
      }

      ::java::lang::String Month::getUpperCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseName_11b109bd155ca898]));
      }

      Month Month::parseMonth(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_parseMonth_e574350ed59f5049], a0.this$));
      }

      Month Month::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e574350ed59f5049], a0.this$));
      }

      JArray< Month > Month::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Month >(env->callStaticObjectMethod(cls, mids$[mid_values_1ab325d1ede6c154]));
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
      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_of_(t_Month *self, PyObject *args);
      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self);
      static PyObject *t_Month_getCapitalizedName(t_Month *self);
      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getLowerCaseName(t_Month *self);
      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_getNumber(t_Month *self);
      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getUpperCaseName(t_Month *self);
      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Month_values(PyTypeObject *type);
      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__number(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data);
      static PyGetSetDef t_Month__fields_[] = {
        DECLARE_GET_FIELD(t_Month, capitalizedAbbreviation),
        DECLARE_GET_FIELD(t_Month, capitalizedName),
        DECLARE_GET_FIELD(t_Month, lowerCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, lowerCaseName),
        DECLARE_GET_FIELD(t_Month, number),
        DECLARE_GET_FIELD(t_Month, upperCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, upperCaseName),
        DECLARE_GET_FIELD(t_Month, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Month__methods_[] = {
        DECLARE_METHOD(t_Month, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, of_, METH_VARARGS),
        DECLARE_METHOD(t_Month, getCapitalizedAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getCapitalizedName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, getNumber, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, parseMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Month, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Month)[] = {
        { Py_tp_methods, t_Month__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Month__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Month)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Month, t_Month, Month);
      PyObject *t_Month::wrap_Object(const Month& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Month::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Month::install(PyObject *module)
      {
        installType(&PY_TYPE(Month), &PY_TYPE_DEF(Month), module, "Month", 0);
      }

      void t_Month::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "class_", make_descriptor(Month::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "wrapfn_", make_descriptor(t_Month::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "boxfn_", make_descriptor(boxObject));
        env->getClass(Month::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "APRIL", make_descriptor(t_Month::wrap_Object(*Month::APRIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "AUGUST", make_descriptor(t_Month::wrap_Object(*Month::AUGUST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "DECEMBER", make_descriptor(t_Month::wrap_Object(*Month::DECEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "FEBRUARY", make_descriptor(t_Month::wrap_Object(*Month::FEBRUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JANUARY", make_descriptor(t_Month::wrap_Object(*Month::JANUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JULY", make_descriptor(t_Month::wrap_Object(*Month::JULY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JUNE", make_descriptor(t_Month::wrap_Object(*Month::JUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MARCH", make_descriptor(t_Month::wrap_Object(*Month::MARCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MAY", make_descriptor(t_Month::wrap_Object(*Month::MAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "NOVEMBER", make_descriptor(t_Month::wrap_Object(*Month::NOVEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "OCTOBER", make_descriptor(t_Month::wrap_Object(*Month::OCTOBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "SEPTEMBER", make_descriptor(t_Month::wrap_Object(*Month::SEPTEMBER)));
      }

      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Month::initializeClass, 1)))
          return NULL;
        return t_Month::wrap_Object(Month(((t_Month *) arg)->object.this$));
      }
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Month::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Month_of_(t_Month *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getCapitalizedName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedName());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        Month result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::getMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_getNumber(t_Month *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getUpperCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::parseMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::valueOf(a0));
          return t_Month::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Month_values(PyTypeObject *type)
      {
        JArray< Month > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::Month::values());
        return JArray<jobject>(result.this$).wrap(t_Month::wrap_jobject);
      }
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedName());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseName());
        return j2p(value);
      }

      static PyObject *t_Month_get__number(t_Month *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonGroundPointing::class$ = NULL;
      jmethodID *PythonGroundPointing::mids$ = NULL;
      bool PythonGroundPointing::live$ = false;

      jclass PythonGroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonGroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_48e1525249177158] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonGroundPointing::PythonGroundPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_48e1525249177158, a0.this$, a1.this$)) {}

      void PythonGroundPointing::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonGroundPointing::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonGroundPointing::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self);
      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data);
      static PyGetSetDef t_PythonGroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_PythonGroundPointing, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonGroundPointing__methods_[] = {
        DECLARE_METHOD(t_PythonGroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonGroundPointing, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonGroundPointing, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonGroundPointing)[] = {
        { Py_tp_methods, t_PythonGroundPointing__methods_ },
        { Py_tp_init, (void *) t_PythonGroundPointing_init_ },
        { Py_tp_getset, t_PythonGroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonGroundPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(PythonGroundPointing, t_PythonGroundPointing, PythonGroundPointing);

      void t_PythonGroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonGroundPointing), &PY_TYPE_DEF(PythonGroundPointing), module, "PythonGroundPointing", 1);
      }

      void t_PythonGroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "class_", make_descriptor(PythonGroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "wrapfn_", make_descriptor(t_PythonGroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundPointing), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonGroundPointing::initializeClass);
        JNINativeMethod methods[] = {
          { "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV0 },
          { "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonGroundPointing_getTargetPV1 },
          { "pythonDecRef", "()V", (void *) t_PythonGroundPointing_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonGroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonGroundPointing::initializeClass, 1)))
          return NULL;
        return t_PythonGroundPointing::wrap_Object(PythonGroundPointing(((t_PythonGroundPointing *) arg)->object.this$));
      }
      static PyObject *t_PythonGroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonGroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonGroundPointing_init_(t_PythonGroundPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        PythonGroundPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonGroundPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonGroundPointing_finalize(t_PythonGroundPointing *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonGroundPointing_pythonExtension(t_PythonGroundPointing *self, PyObject *args)
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static jobject JNICALL t_PythonGroundPointing_getTargetPV1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getTargetPV", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getTargetPV", result);
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

      static void JNICALL t_PythonGroundPointing_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonGroundPointing::mids$[PythonGroundPointing::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonGroundPointing_get__self(t_PythonGroundPointing *self, void *data)
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
