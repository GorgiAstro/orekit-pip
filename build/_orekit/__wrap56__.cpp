#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Byte.h"
#include "java/lang/Byte.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Byte::class$ = NULL;
    jmethodID *Byte::mids$ = NULL;
    bool Byte::live$ = false;
    jint Byte::BYTES = (jint) 0;
    jbyte Byte::MAX_VALUE = (jbyte) 0;
    jbyte Byte::MIN_VALUE = (jbyte) 0;
    jint Byte::SIZE = (jint) 0;
    ::java::lang::Class *Byte::TYPE = NULL;

    jclass Byte::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Byte");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_20e45467bc7240af] = env->getMethodID(cls, "<init>", "(B)V");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_a877194c66e28f45] = env->getStaticMethodID(cls, "compare", "(BB)I");
        mids$[mid_compareTo_565207278f6cfebe] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Byte;)I");
        mids$[mid_compareUnsigned_a877194c66e28f45] = env->getStaticMethodID(cls, "compareUnsigned", "(BB)I");
        mids$[mid_decode_cf2403264d12dd97] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_0fd9b448afbf487f] = env->getStaticMethodID(cls, "hashCode", "(B)I");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseByte_b7a19d29302a4a6a] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;)B");
        mids$[mid_parseByte_ef194043c96d5d38] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;I)B");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_5e355ffc397c40f5] = env->getStaticMethodID(cls, "toString", "(B)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_0fd9b448afbf487f] = env->getStaticMethodID(cls, "toUnsignedInt", "(B)I");
        mids$[mid_toUnsignedLong_ed0d0d0b1b809f96] = env->getStaticMethodID(cls, "toUnsignedLong", "(B)J");
        mids$[mid_valueOf_cf2403264d12dd97] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_valueOf_0497382e2bbd9a33] = env->getStaticMethodID(cls, "valueOf", "(B)Ljava/lang/Byte;");
        mids$[mid_valueOf_c28f886a2b8922d4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticByteField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticByteField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Byte::Byte(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Byte::Byte(jbyte a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_20e45467bc7240af, a0)) {}

    jbyte Byte::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Byte::compare(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a877194c66e28f45], a0, a1);
    }

    jint Byte::compareTo(const Byte & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_565207278f6cfebe], a0.this$);
    }

    jint Byte::compareUnsigned(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_a877194c66e28f45], a0, a1);
    }

    Byte Byte::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_decode_cf2403264d12dd97], a0.this$));
    }

    jdouble Byte::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Byte::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jfloat Byte::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    jint Byte::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Byte::hashCode(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0fd9b448afbf487f], a0);
    }

    jint Byte::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jlong Byte::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_b7a19d29302a4a6a], a0.this$);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_ef194043c96d5d38], a0.this$, a1);
    }

    jshort Byte::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    ::java::lang::String Byte::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Byte::toString(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_5e355ffc397c40f5], a0));
    }

    jint Byte::toUnsignedInt(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_0fd9b448afbf487f], a0);
    }

    jlong Byte::toUnsignedLong(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_ed0d0d0b1b809f96], a0);
    }

    Byte Byte::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cf2403264d12dd97], a0.this$));
    }

    Byte Byte::valueOf(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0497382e2bbd9a33], a0));
    }

    Byte Byte::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c28f886a2b8922d4], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg);
    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Byte__methods_[] = {
      DECLARE_METHOD(t_Byte, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, compareTo, METH_O),
      DECLARE_METHOD(t_Byte, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, equals, METH_VARARGS),
      DECLARE_METHOD(t_Byte, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, parseByte, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Byte)[] = {
      { Py_tp_methods, t_Byte__methods_ },
      { Py_tp_init, (void *) t_Byte_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Byte)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Byte, t_Byte, Byte);

    void t_Byte::install(PyObject *module)
    {
      installType(&PY_TYPE(Byte), &PY_TYPE_DEF(Byte), module, "Byte", 0);
    }

    void t_Byte::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "class_", make_descriptor(Byte::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "wrapfn_", make_descriptor(unboxByte));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "boxfn_", make_descriptor(boxByte));
      env->getClass(Byte::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "BYTES", make_descriptor(Byte::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MAX_VALUE", make_descriptor(Byte::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MIN_VALUE", make_descriptor(Byte::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "SIZE", make_descriptor(Byte::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Byte::TYPE)));
    }

    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Byte::initializeClass, 1)))
        return NULL;
      return t_Byte::wrap_Object(Byte(((t_Byte *) arg)->object.this$));
    }
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Byte::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Byte(a0));
            self->object = object;
            break;
          }
        }
        {
          jbyte a0;
          Byte object((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            INT_CALL(object = Byte(a0));
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

    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg)
    {
      Byte a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Byte), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Byte result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::decode(a0));
        return t_Byte::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jint result;

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jbyte result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseByte", args);
      return NULL;
    }

    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jint result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jlong result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        {
          jbyte a0;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0, a1));
            return t_Byte::wrap_Object(result);
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
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldPropagator::class$ = NULL;
      jmethodID *FieldPropagator::mids$ = NULL;
      bool FieldPropagator::live$ = false;
      jdouble FieldPropagator::DEFAULT_MASS = (jdouble) 0;

      jclass FieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_381b3e011cde018d] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_da8c64c8d63a3f9a] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_69a7e501f9a938a3] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
          mids$[mid_setStepHandler_c9f4018f814d2514] = env->getMethodID(cls, "setStepHandler", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454], a0.this$);
      }

      void FieldPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_2ffeff0ffaf1deef], a0.this$);
      }

      void FieldPropagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
      }

      void FieldPropagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      ::java::util::List FieldPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
      }

      ::org::orekit::propagation::FieldEphemerisGenerator FieldPropagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_07866493eb3b3f17]));
      }

      ::java::util::Collection FieldPropagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
      }

      ::org::orekit::frames::Frame FieldPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_381b3e011cde018d]));
      }

      JArray< ::java::lang::String > FieldPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_da8c64c8d63a3f9a]));
      }

      jboolean FieldPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_5324cbf9e5ce58fe], a0.this$));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_78f4b3ee8066e6b6], a0.this$, a1.this$));
      }

      void FieldPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
      }

      void FieldPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_69a7e501f9a938a3], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_c9f4018f814d2514], a0.this$, a1.this$);
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
      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data);
      static PyGetSetDef t_FieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldPropagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_FieldPropagator, eventsDetectors),
        DECLARE_GET_FIELD(t_FieldPropagator, frame),
        DECLARE_GET_FIELD(t_FieldPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldPropagator, multiplexer),
        DECLARE_SET_FIELD(t_FieldPropagator, stepHandler),
        DECLARE_GET_FIELD(t_FieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldPropagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldPropagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setStepHandler, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPropagator)[] = {
        { Py_tp_methods, t_FieldPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(FieldPropagator, t_FieldPropagator, FieldPropagator);
      PyObject *t_FieldPropagator::wrap_Object(const FieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPropagator), &PY_TYPE_DEF(FieldPropagator), module, "FieldPropagator", 0);
      }

      void t_FieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "class_", make_descriptor(FieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "wrapfn_", make_descriptor(t_FieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldPropagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "DEFAULT_MASS", make_descriptor(FieldPropagator::DEFAULT_MASS));
      }

      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldPropagator::wrap_Object(FieldPropagator(((t_FieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *ConstantElevationAlgorithm::class$ = NULL;
        jmethodID *ConstantElevationAlgorithm::mids$ = NULL;
        bool ConstantElevationAlgorithm::live$ = false;

        jclass ConstantElevationAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/ConstantElevationAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_2268d18be49a6087] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_bffffb02b1b74895] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_5fc8cb427a1ada2e] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantElevationAlgorithm::ConstantElevationAlgorithm(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::rugged::api::AlgorithmId ConstantElevationAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
        }

        jdouble ConstantElevationAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_2268d18be49a6087], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_bffffb02b1b74895], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_5fc8cb427a1ada2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self);
        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data);
        static PyGetSetDef t_ConstantElevationAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantElevationAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantElevationAlgorithm__methods_[] = {
          DECLARE_METHOD(t_ConstantElevationAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantElevationAlgorithm)[] = {
          { Py_tp_methods, t_ConstantElevationAlgorithm__methods_ },
          { Py_tp_init, (void *) t_ConstantElevationAlgorithm_init_ },
          { Py_tp_getset, t_ConstantElevationAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantElevationAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantElevationAlgorithm, t_ConstantElevationAlgorithm, ConstantElevationAlgorithm);

        void t_ConstantElevationAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantElevationAlgorithm), &PY_TYPE_DEF(ConstantElevationAlgorithm), module, "ConstantElevationAlgorithm", 0);
        }

        void t_ConstantElevationAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "class_", make_descriptor(ConstantElevationAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "wrapfn_", make_descriptor(t_ConstantElevationAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantElevationAlgorithm::initializeClass, 1)))
            return NULL;
          return t_ConstantElevationAlgorithm::wrap_Object(ConstantElevationAlgorithm(((t_ConstantElevationAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantElevationAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantElevationAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantElevationAlgorithm(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log1p::class$ = NULL;
        jmethodID *Log1p::mids$ = NULL;
        bool Log1p::live$ = false;

        jclass Log1p::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log1p");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log1p::Log1p() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Log1p::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log1p::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args);

        static PyMethodDef t_Log1p__methods_[] = {
          DECLARE_METHOD(t_Log1p, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log1p)[] = {
          { Py_tp_methods, t_Log1p__methods_ },
          { Py_tp_init, (void *) t_Log1p_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log1p)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log1p, t_Log1p, Log1p);

        void t_Log1p::install(PyObject *module)
        {
          installType(&PY_TYPE(Log1p), &PY_TYPE_DEF(Log1p), module, "Log1p", 0);
        }

        void t_Log1p::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "class_", make_descriptor(Log1p::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "wrapfn_", make_descriptor(t_Log1p::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log1p::initializeClass, 1)))
            return NULL;
          return t_Log1p::wrap_Object(Log1p(((t_Log1p *) arg)->object.this$));
        }
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log1p::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds)
        {
          Log1p object((jobject) NULL);

          INT_CALL(object = Log1p());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSPhaseModifier::RelativisticClockOneWayGNSSPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSPhaseModifier, t_RelativisticClockOneWayGNSSPhaseModifier, RelativisticClockOneWayGNSSPhaseModifier);

          void t_RelativisticClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSPhaseModifier), module, "RelativisticClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticClockOneWayGNSSPhaseModifier(((t_RelativisticClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *SatelliteClockScale::class$ = NULL;
      jmethodID *SatelliteClockScale::mids$ = NULL;
      bool SatelliteClockScale::live$ = false;

      jclass SatelliteClockScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/SatelliteClockScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44bd2f874dc9b6c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;DD)V");
          mids$[mid_countAtDate_b0b988f941da47d8] = env->getMethodID(cls, "countAtDate", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_dateAtCount_8ef471ef852a9678] = env->getMethodID(cls, "dateAtCount", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatelliteClockScale::SatelliteClockScale(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::TimeScale & a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44bd2f874dc9b6c, a0.this$, a1.this$, a2.this$, a3, a4)) {}

      jdouble SatelliteClockScale::countAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_countAtDate_b0b988f941da47d8], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate SatelliteClockScale::dateAtCount(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateAtCount_8ef471ef852a9678], a0));
      }

      ::java::lang::String SatelliteClockScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble SatelliteClockScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String SatelliteClockScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self);
      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data);
      static PyGetSetDef t_SatelliteClockScale__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteClockScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteClockScale__methods_[] = {
        DECLARE_METHOD(t_SatelliteClockScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, countAtDate, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, dateAtCount, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteClockScale)[] = {
        { Py_tp_methods, t_SatelliteClockScale__methods_ },
        { Py_tp_init, (void *) t_SatelliteClockScale_init_ },
        { Py_tp_getset, t_SatelliteClockScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteClockScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatelliteClockScale, t_SatelliteClockScale, SatelliteClockScale);

      void t_SatelliteClockScale::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteClockScale), &PY_TYPE_DEF(SatelliteClockScale), module, "SatelliteClockScale", 0);
      }

      void t_SatelliteClockScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "class_", make_descriptor(SatelliteClockScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "wrapfn_", make_descriptor(t_SatelliteClockScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteClockScale::initializeClass, 1)))
          return NULL;
        return t_SatelliteClockScale::wrap_Object(SatelliteClockScale(((t_SatelliteClockScale *) arg)->object.this$));
      }
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteClockScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        SatelliteClockScale object((jobject) NULL);

        if (!parseArgs(args, "skkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SatelliteClockScale(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.countAtDate(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "countAtDate", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.dateAtCount(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dateAtCount", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SatelliteClockScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *BesselJ::class$ = NULL;
      jmethodID *BesselJ::mids$ = NULL;
      bool BesselJ::live$ = false;

      jclass BesselJ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/BesselJ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_rjBesl_c8525773bc1b9170] = env->getStaticMethodID(cls, "rjBesl", "(DDI)Lorg/hipparchus/special/BesselJ$BesselJResult;");
          mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_2268d18be49a6087] = env->getStaticMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BesselJ::BesselJ(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

      ::org::hipparchus::special::BesselJ$BesselJResult BesselJ::rjBesl(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::special::BesselJ$BesselJResult(env->callStaticObjectMethod(cls, mids$[mid_rjBesl_c8525773bc1b9170], a0, a1, a2));
      }

      jdouble BesselJ::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
      }

      jdouble BesselJ::value(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_value_2268d18be49a6087], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args);
      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg);
      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_BesselJ__methods_[] = {
        DECLARE_METHOD(t_BesselJ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, rjBesl, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BesselJ, value, METH_O),
        DECLARE_METHOD(t_BesselJ, value_, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BesselJ)[] = {
        { Py_tp_methods, t_BesselJ__methods_ },
        { Py_tp_init, (void *) t_BesselJ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BesselJ)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BesselJ, t_BesselJ, BesselJ);

      void t_BesselJ::install(PyObject *module)
      {
        installType(&PY_TYPE(BesselJ), &PY_TYPE_DEF(BesselJ), module, "BesselJ", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "BesselJResult", make_descriptor(&PY_TYPE_DEF(BesselJ$BesselJResult)));
      }

      void t_BesselJ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "class_", make_descriptor(BesselJ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "wrapfn_", make_descriptor(t_BesselJ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BesselJ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BesselJ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BesselJ::initializeClass, 1)))
          return NULL;
        return t_BesselJ::wrap_Object(BesselJ(((t_BesselJ *) arg)->object.this$));
      }
      static PyObject *t_BesselJ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BesselJ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BesselJ_init_(t_BesselJ *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        BesselJ object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = BesselJ(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BesselJ_rjBesl(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jint a2;
        ::org::hipparchus::special::BesselJ$BesselJResult result((jobject) NULL);

        if (!parseArgs(args, "DDI", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::rjBesl(a0, a1, a2));
          return ::org::hipparchus::special::t_BesselJ$BesselJResult::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "rjBesl", args);
        return NULL;
      }

      static PyObject *t_BesselJ_value(t_BesselJ *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_BesselJ_value_(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::BesselJ::value(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "value_", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointValuePair::class$ = NULL;
      jmethodID *PointValuePair::mids$ = NULL;
      bool PointValuePair::live$ = false;

      jclass PointValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3682f2e0c8382fe5] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_0ddfe3e16a6b3c6a] = env->getMethodID(cls, "<init>", "([DDZ)V");
          mids$[mid_getPoint_a53a7513ecedada2] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_a53a7513ecedada2] = env->getMethodID(cls, "getPointRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_3682f2e0c8382fe5, a0.this$, a1)) {}

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_0ddfe3e16a6b3c6a, a0.this$, a1, a2)) {}

      JArray< jdouble > PointValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_a53a7513ecedada2]));
      }

      JArray< jdouble > PointValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_a53a7513ecedada2]));
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
      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args);
      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self);
      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self);
      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data);
      static PyGetSetDef t_PointValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointValuePair, point),
        DECLARE_GET_FIELD(t_PointValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointValuePair__methods_[] = {
        DECLARE_METHOD(t_PointValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointValuePair, getPointRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointValuePair)[] = {
        { Py_tp_methods, t_PointValuePair__methods_ },
        { Py_tp_init, (void *) t_PointValuePair_init_ },
        { Py_tp_getset, t_PointValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointValuePair, t_PointValuePair, PointValuePair);
      PyObject *t_PointValuePair::wrap_Object(const PointValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointValuePair), &PY_TYPE_DEF(PointValuePair), module, "PointValuePair", 0);
      }

      void t_PointValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "class_", make_descriptor(PointValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "wrapfn_", make_descriptor(t_PointValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointValuePair::initializeClass, 1)))
          return NULL;
        return t_PointValuePair::wrap_Object(PointValuePair(((t_PointValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = PointValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
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

      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
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
            mids$[mid_init$_db212c86bccc027a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_abs_7cbeead5edd31cdd] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acos_7cbeead5edd31cdd] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_acosh_7cbeead5edd31cdd] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_ad3422e9f9087e74] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_add_6a23345f32b0596c] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asin_7cbeead5edd31cdd] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_asinh_7cbeead5edd31cdd] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan_7cbeead5edd31cdd] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atan2_ad3422e9f9087e74] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_atanh_7cbeead5edd31cdd] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cbrt_7cbeead5edd31cdd] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ceil_7cbeead5edd31cdd] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_compareTo_80cb4624ccc10756] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)I");
            mids$[mid_compose_b4fabb26f6e1ea0a] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_ad3422e9f9087e74] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_copySign_6a23345f32b0596c] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cos_7cbeead5edd31cdd] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_cosh_7cbeead5edd31cdd] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_ad3422e9f9087e74] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_divide_6a23345f32b0596c] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_7cbeead5edd31cdd] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_expm1_7cbeead5edd31cdd] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_floor_7cbeead5edd31cdd] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getDerivative_69cfb132c661aca4] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_6b368213087be900] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_557b8123390d8d0c] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_7cbeead5edd31cdd] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_557b8123390d8d0c] = env->getMethodID(cls, "getSecondDerivative", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_ad3422e9f9087e74] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_90687942c4162c23] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_2d21119e506b9638] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_aa0f4c6f10725c36] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_411aaa21bbf16ecb] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_daffa22255703b7c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_57396198ea21871e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_2ebd544a86b8c288] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_linearCombination_d8b5c311034a3e6f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log_7cbeead5edd31cdd] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log10_7cbeead5edd31cdd] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_log1p_7cbeead5edd31cdd] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_ad3422e9f9087e74] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_6a23345f32b0596c] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_multiply_aaf20910de5ca2a0] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_negate_7cbeead5edd31cdd] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_newInstance_6a23345f32b0596c] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_ad3422e9f9087e74] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_6a23345f32b0596c] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_aaf20910de5ca2a0] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_pow_c4ceba6831c05feb] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_reciprocal_7cbeead5edd31cdd] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_ad3422e9f9087e74] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_remainder_6a23345f32b0596c] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rint_7cbeead5edd31cdd] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_rootN_aaf20910de5ca2a0] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_scalb_aaf20910de5ca2a0] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sign_7cbeead5edd31cdd] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sin_7cbeead5edd31cdd] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_7cbeead5edd31cdd] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_7cbeead5edd31cdd] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_ad3422e9f9087e74] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_subtract_6a23345f32b0596c] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tan_7cbeead5edd31cdd] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_tanh_7cbeead5edd31cdd] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_taylor_7e960cd6eee376d8] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_7cbeead5edd31cdd] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_9f40c2a430225d38] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_7cbeead5edd31cdd] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_ulp_7cbeead5edd31cdd] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative2(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative2::UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_db212c86bccc027a, a0.this$)) {}

        UnivariateDerivative2::UnivariateDerivative2(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        UnivariateDerivative2 UnivariateDerivative2::abs() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::acosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::add(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::asin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::asinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::atan2(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::atanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cbrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ceil() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_7cbeead5edd31cdd]));
        }

        jint UnivariateDerivative2::compareTo(const UnivariateDerivative2 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_80cb4624ccc10756], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_b4fabb26f6e1ea0a], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::copySign(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::cos() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::cosh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::divide(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_6a23345f32b0596c], a0));
        }

        jboolean UnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        UnivariateDerivative2 UnivariateDerivative2::exp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::expm1() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::floor() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_7cbeead5edd31cdd]));
        }

        jdouble UnivariateDerivative2::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_69cfb132c661aca4], a0);
        }

        jint UnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field UnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_6b368213087be900]));
        }

        jdouble UnivariateDerivative2::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_557b8123390d8d0c]);
        }

        jint UnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        UnivariateDerivative2 UnivariateDerivative2::getPi() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_7cbeead5edd31cdd]));
        }

        jdouble UnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        jdouble UnivariateDerivative2::getSecondDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondDerivative_557b8123390d8d0c]);
        }

        jdouble UnivariateDerivative2::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint UnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        UnivariateDerivative2 UnivariateDerivative2::hypot(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_90687942c4162c23], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const JArray< UnivariateDerivative2 > & a0, const JArray< UnivariateDerivative2 > & a1) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_2d21119e506b9638], a0.this$, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_aa0f4c6f10725c36], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_411aaa21bbf16ecb], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_daffa22255703b7c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_57396198ea21871e], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(const UnivariateDerivative2 & a0, const UnivariateDerivative2 & a1, const UnivariateDerivative2 & a2, const UnivariateDerivative2 & a3, const UnivariateDerivative2 & a4, const UnivariateDerivative2 & a5, const UnivariateDerivative2 & a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_2ebd544a86b8c288], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::linearCombination(jdouble a0, const UnivariateDerivative2 & a1, jdouble a2, const UnivariateDerivative2 & a3, jdouble a4, const UnivariateDerivative2 & a5, jdouble a6, const UnivariateDerivative2 & a7) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_d8b5c311034a3e6f], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::log() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log10() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::log1p() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::multiply(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_aaf20910de5ca2a0], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::negate() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::newInstance(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_aaf20910de5ca2a0], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::pow(jdouble a0, const UnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_c4ceba6831c05feb], a0, a1.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::reciprocal() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::remainder(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::rint() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::rootN(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_aaf20910de5ca2a0], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::scalb(jint a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_aaf20910de5ca2a0], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::sign() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sin() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_7cbeead5edd31cdd]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sinh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_7cbeead5edd31cdd]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        UnivariateDerivative2 UnivariateDerivative2::sqrt() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(const UnivariateDerivative2 & a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_ad3422e9f9087e74], a0.this$));
        }

        UnivariateDerivative2 UnivariateDerivative2::subtract(jdouble a0) const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_6a23345f32b0596c], a0));
        }

        UnivariateDerivative2 UnivariateDerivative2::tan() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::tanh() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_7cbeead5edd31cdd]));
        }

        jdouble UnivariateDerivative2::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_7e960cd6eee376d8], a0);
        }

        UnivariateDerivative2 UnivariateDerivative2::toDegrees() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_7cbeead5edd31cdd]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_9f40c2a430225d38]));
        }

        UnivariateDerivative2 UnivariateDerivative2::toRadians() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_7cbeead5edd31cdd]));
        }

        UnivariateDerivative2 UnivariateDerivative2::ulp() const
        {
          return UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_7cbeead5edd31cdd]));
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
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Space::class$ = NULL;
      jmethodID *Space::mids$ = NULL;
      bool Space::live$ = false;

      jclass Space::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Space");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSubSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Space::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      Space Space::getSubSpace() const
      {
        return Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_cf9410d213a7cbb9]));
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
      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_getDimension(t_Space *self);
      static PyObject *t_Space_getSubSpace(t_Space *self);
      static PyObject *t_Space_get__dimension(t_Space *self, void *data);
      static PyObject *t_Space_get__subSpace(t_Space *self, void *data);
      static PyGetSetDef t_Space__fields_[] = {
        DECLARE_GET_FIELD(t_Space, dimension),
        DECLARE_GET_FIELD(t_Space, subSpace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Space__methods_[] = {
        DECLARE_METHOD(t_Space, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Space, getSubSpace, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Space)[] = {
        { Py_tp_methods, t_Space__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Space__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Space)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Space, t_Space, Space);

      void t_Space::install(PyObject *module)
      {
        installType(&PY_TYPE(Space), &PY_TYPE_DEF(Space), module, "Space", 0);
      }

      void t_Space::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "class_", make_descriptor(Space::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "wrapfn_", make_descriptor(t_Space::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Space::initializeClass, 1)))
          return NULL;
        return t_Space::wrap_Object(Space(((t_Space *) arg)->object.this$));
      }
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Space::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Space_getDimension(t_Space *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Space_getSubSpace(t_Space *self)
      {
        Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubSpace());
        return t_Space::wrap_Object(result);
      }

      static PyObject *t_Space_get__dimension(t_Space *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Space_get__subSpace(t_Space *self, void *data)
      {
        Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubSpace());
        return t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersWriter::class$ = NULL;
            jmethodID *AdditionalParametersWriter::mids$ = NULL;
            bool AdditionalParametersWriter::live$ = false;

            jclass AdditionalParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
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
            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AdditionalParametersWriter__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersWriter)[] = {
              { Py_tp_methods, t_AdditionalParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersWriter, t_AdditionalParametersWriter, AdditionalParametersWriter);

            void t_AdditionalParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersWriter), &PY_TYPE_DEF(AdditionalParametersWriter), module, "AdditionalParametersWriter", 0);
            }

            void t_AdditionalParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "class_", make_descriptor(AdditionalParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "wrapfn_", make_descriptor(t_AdditionalParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersWriter::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersWriter::wrap_Object(AdditionalParametersWriter(((t_AdditionalParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelCoefficientsLoader::class$ = NULL;
          jmethodID *ViennaModelCoefficientsLoader::mids$ = NULL;
          bool ViennaModelCoefficientsLoader::live$ = false;
          ::java::lang::String *ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass ViennaModelCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7c93207b27c1d5d1] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_7decaa8221e502f9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_e8b83fa5b312fd3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getA_a53a7513ecedada2] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getZenithDelay_a53a7513ecedada2] = env->getMethodID(cls, "getZenithDelay", "()[D");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadViennaCoefficients_0640e6acf969ed28] = env->getMethodID(cls, "loadViennaCoefficients", "()V");
              mids$[mid_loadViennaCoefficients_f86c144703aac3d6] = env->getMethodID(cls, "loadViennaCoefficients", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::ViennaModelType & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7c93207b27c1d5d1, a0, a1, a2.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7decaa8221e502f9, a0.this$, a1, a2, a3.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e8b83fa5b312fd3e, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          JArray< jdouble > ViennaModelCoefficientsLoader::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_a53a7513ecedada2]));
          }

          ::java::lang::String ViennaModelCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
          }

          JArray< jdouble > ViennaModelCoefficientsLoader::getZenithDelay() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getZenithDelay_a53a7513ecedada2]));
          }

          void ViennaModelCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_0640e6acf969ed28]);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_f86c144703aac3d6], a0.this$);
          }

          jboolean ViennaModelCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyGetSetDef t_ViennaModelCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, a),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, supportedNames),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, zenithDelay),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getA, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getZenithDelay, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadViennaCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelCoefficientsLoader)[] = {
            { Py_tp_methods, t_ViennaModelCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_ViennaModelCoefficientsLoader_init_ },
            { Py_tp_getset, t_ViennaModelCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(ViennaModelCoefficientsLoader, t_ViennaModelCoefficientsLoader, ViennaModelCoefficientsLoader);

          void t_ViennaModelCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelCoefficientsLoader), &PY_TYPE_DEF(ViennaModelCoefficientsLoader), module, "ViennaModelCoefficientsLoader", 0);
          }

          void t_ViennaModelCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "class_", make_descriptor(ViennaModelCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "wrapfn_", make_descriptor(t_ViennaModelCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_ViennaModelCoefficientsLoader::wrap_Object(ViennaModelCoefficientsLoader(((t_ViennaModelCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::ViennaModelType a2((jobject) NULL);
                PyTypeObject **p2;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "DDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDKk", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_, &a4))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3, a4));
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

          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getZenithDelay());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadViennaCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadViennaCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadViennaCoefficients", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getZenithDelay());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *BOBYQAOptimizer::class$ = NULL;
            jmethodID *BOBYQAOptimizer::mids$ = NULL;
            bool BOBYQAOptimizer::live$ = false;
            jdouble BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS = (jdouble) 0;
            jdouble BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS = (jdouble) 0;
            jint BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION = (jint) 0;

            jclass BOBYQAOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_79cfe3f564275380] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INITIAL_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_INITIAL_RADIUS");
                DEFAULT_STOPPING_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_STOPPING_RADIUS");
                MINIMUM_PROBLEM_DIMENSION = env->getStaticIntField(cls, "MINIMUM_PROBLEM_DIMENSION");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_79cfe3f564275380, a0, a1, a2)) {}
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
            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args);
            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data);
            static PyGetSetDef t_BOBYQAOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_BOBYQAOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BOBYQAOptimizer__methods_[] = {
              DECLARE_METHOD(t_BOBYQAOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BOBYQAOptimizer)[] = {
              { Py_tp_methods, t_BOBYQAOptimizer__methods_ },
              { Py_tp_init, (void *) t_BOBYQAOptimizer_init_ },
              { Py_tp_getset, t_BOBYQAOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BOBYQAOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(BOBYQAOptimizer, t_BOBYQAOptimizer, BOBYQAOptimizer);
            PyObject *t_BOBYQAOptimizer::wrap_Object(const BOBYQAOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BOBYQAOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BOBYQAOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(BOBYQAOptimizer), &PY_TYPE_DEF(BOBYQAOptimizer), module, "BOBYQAOptimizer", 0);
            }

            void t_BOBYQAOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "class_", make_descriptor(BOBYQAOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "wrapfn_", make_descriptor(t_BOBYQAOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "boxfn_", make_descriptor(boxObject));
              env->getClass(BOBYQAOptimizer::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_INITIAL_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_STOPPING_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "MINIMUM_PROBLEM_DIMENSION", make_descriptor(BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION));
            }

            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BOBYQAOptimizer::initializeClass, 1)))
                return NULL;
              return t_BOBYQAOptimizer::wrap_Object(BOBYQAOptimizer(((t_BOBYQAOptimizer *) arg)->object.this$));
            }
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BOBYQAOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jint a0;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0, a1, a2));
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
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesWave::class$ = NULL;
          jmethodID *OceanTidesWave::mids$ = NULL;
          bool OceanTidesWave::live$ = false;

          jclass OceanTidesWave::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesWave");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0a95f96684be7b4c] = env->getMethodID(cls, "<init>", "(III[[[D)V");
              mids$[mid_addContribution_803c0bbd0f32fed0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/data/BodiesElements;[[D[[D)V");
              mids$[mid_getDoodson_412668abc8d889e9] = env->getMethodID(cls, "getDoodson", "()I");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesWave::OceanTidesWave(jint a0, jint a1, jint a2, const JArray< JArray< JArray< jdouble > > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a95f96684be7b4c, a0, a1, a2, a3.this$)) {}

          void OceanTidesWave::addContribution(const ::org::orekit::data::BodiesElements & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addContribution_803c0bbd0f32fed0], a0.this$, a1.this$, a2.this$);
          }

          jint OceanTidesWave::getDoodson() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodson_412668abc8d889e9]);
          }

          jint OceanTidesWave::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_412668abc8d889e9]);
          }

          jint OceanTidesWave::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_412668abc8d889e9]);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args);
          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self);
          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data);
          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data);
          static PyGetSetDef t_OceanTidesWave__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesWave, doodson),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxDegree),
            DECLARE_GET_FIELD(t_OceanTidesWave, maxOrder),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesWave__methods_[] = {
            DECLARE_METHOD(t_OceanTidesWave, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesWave, addContribution, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesWave, getDoodson, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesWave, getMaxOrder, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesWave)[] = {
            { Py_tp_methods, t_OceanTidesWave__methods_ },
            { Py_tp_init, (void *) t_OceanTidesWave_init_ },
            { Py_tp_getset, t_OceanTidesWave__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesWave)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesWave, t_OceanTidesWave, OceanTidesWave);

          void t_OceanTidesWave::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesWave), &PY_TYPE_DEF(OceanTidesWave), module, "OceanTidesWave", 0);
          }

          void t_OceanTidesWave::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "class_", make_descriptor(OceanTidesWave::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "wrapfn_", make_descriptor(t_OceanTidesWave::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesWave), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesWave_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesWave::initializeClass, 1)))
              return NULL;
            return t_OceanTidesWave::wrap_Object(OceanTidesWave(((t_OceanTidesWave *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesWave_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesWave::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesWave_init_(t_OceanTidesWave *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
            OceanTidesWave object((jobject) NULL);

            if (!parseArgs(args, "III[[[D", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OceanTidesWave(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesWave_addContribution(t_OceanTidesWave *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "k[[D[[D", ::org::orekit::data::BodiesElements::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addContribution(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addContribution", args);
            return NULL;
          }

          static PyObject *t_OceanTidesWave_getDoodson(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodson());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxDegree(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_getMaxOrder(t_OceanTidesWave *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesWave_get__doodson(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodson());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxDegree(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesWave_get__maxOrder(t_OceanTidesWave *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorBuilder::class$ = NULL;
        jmethodID *KalmanEstimatorBuilder::mids$ = NULL;
        bool KalmanEstimatorBuilder::live$ = false;

        jclass KalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_f540e5f291410015] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_build_a42b7cd58644ce4d] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/KalmanEstimator;");
            mids$[mid_decomposer_db62971c2f8c9e8a] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_a8b9641e50f1ffff] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/KalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanEstimatorBuilder::KalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        KalmanEstimatorBuilder KalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_f540e5f291410015], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::KalmanEstimator KalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::KalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_a42b7cd58644ce4d]));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_db62971c2f8c9e8a], a0.this$));
        }

        KalmanEstimatorBuilder KalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return KalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_a8b9641e50f1ffff], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self);
        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_KalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_KalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_KalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorBuilder, t_KalmanEstimatorBuilder, KalmanEstimatorBuilder);

        void t_KalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorBuilder), &PY_TYPE_DEF(KalmanEstimatorBuilder), module, "KalmanEstimatorBuilder", 0);
        }

        void t_KalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "class_", make_descriptor(KalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_KalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorBuilder::wrap_Object(KalmanEstimatorBuilder(((t_KalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanEstimatorBuilder_init_(t_KalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          KalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = KalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_KalmanEstimatorBuilder_addPropagationConfiguration(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_build(t_KalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::KalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_KalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimatorBuilder_decomposer(t_KalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorBuilder_estimatedMeasurementsParameters(t_KalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          KalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_KalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadata::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadata::live$ = false;

              jclass AttitudeCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCovBasis_3cffd47377eca18a] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_3cffd47377eca18a] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovID_3cffd47377eca18a] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovType_270107b6f5cd254c] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_setCovBasis_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovType_424aa6ac7cc5c170] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistoryMetadata::AttitudeCovarianceHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_3cffd47377eca18a]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_3cffd47377eca18a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_98f5fcaff3e3f9d2]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovType_270107b6f5cd254c]));
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_424aa6ac7cc5c170], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::validate(jdouble a0) const
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
              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadata, t_AttitudeCovarianceHistoryMetadata, AttitudeCovarianceHistoryMetadata);

              void t_AttitudeCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadata), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata), module, "AttitudeCovarianceHistoryMetadata", 0);
              }

              void t_AttitudeCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "class_", make_descriptor(AttitudeCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadata::wrap_Object(AttitudeCovarianceHistoryMetadata(((t_AttitudeCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeCovarianceHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeCovarianceHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
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
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateSolver::class$ = NULL;
        jmethodID *AbstractUnivariateSolver::mids$ = NULL;
        bool AbstractUnivariateSolver::live$ = false;

        jclass AbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace solvers {
        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateSolver, t_AbstractUnivariateSolver, AbstractUnivariateSolver);
        PyObject *t_AbstractUnivariateSolver::wrap_Object(const AbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateSolver), &PY_TYPE_DEF(AbstractUnivariateSolver), module, "AbstractUnivariateSolver", 0);
        }

        void t_AbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "class_", make_descriptor(AbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateSolver::wrap_Object(AbstractUnivariateSolver(((t_AbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
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
                mids$[mid_init$_17d2c89957221da8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_cfb32720392d108f] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_557b8123390d8d0c] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_3cffd47377eca18a] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_98138020b4258bf0] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_557b8123390d8d0c] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_f673e6e131e83586] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_0503da09b1f1eb3c] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_9c5c2ece653aa3f3] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_c15b5f80625a03e0] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");
                mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractMessageWriter::AbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17d2c89957221da8, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding AbstractMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_cfb32720392d108f]));
            }

            jdouble AbstractMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_557b8123390d8d0c]);
            }

            ::java::lang::String AbstractMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_3cffd47377eca18a]));
            }

            ::java::lang::String AbstractMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter AbstractMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_98138020b4258bf0]));
            }

            jdouble AbstractMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_557b8123390d8d0c]);
            }

            void AbstractMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_f673e6e131e83586], a0.this$);
            }

            void AbstractMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_0503da09b1f1eb3c], a0.this$);
            }

            void AbstractMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_9c5c2ece653aa3f3], a0.this$, a1.this$);
            }

            void AbstractMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_c15b5f80625a03e0], a0.this$, a1.this$);
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
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Max::class$ = NULL;
          jmethodID *Max::mids$ = NULL;
          bool Max::live$ = false;

          jclass Max::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Max");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_1f02a0aeaa94b22d] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Max;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2755e5ad258aab4f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Max;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Max::Max() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Max::aggregate(const Max & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_1f02a0aeaa94b22d], a0.this$);
          }

          void Max::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Max Max::copy() const
          {
            return Max(env->callObjectMethod(this$, mids$[mid_copy_2755e5ad258aab4f]));
          }

          jdouble Max::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong Max::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Max::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Max::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
        namespace rank {
          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg);
          static PyObject *t_Max_clear(t_Max *self, PyObject *args);
          static PyObject *t_Max_copy(t_Max *self, PyObject *args);
          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args);
          static PyObject *t_Max_getN(t_Max *self, PyObject *args);
          static PyObject *t_Max_getResult(t_Max *self, PyObject *args);
          static PyObject *t_Max_increment(t_Max *self, PyObject *args);
          static PyObject *t_Max_get__n(t_Max *self, void *data);
          static PyObject *t_Max_get__result(t_Max *self, void *data);
          static PyGetSetDef t_Max__fields_[] = {
            DECLARE_GET_FIELD(t_Max, n),
            DECLARE_GET_FIELD(t_Max, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Max__methods_[] = {
            DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, aggregate, METH_O),
            DECLARE_METHOD(t_Max, clear, METH_VARARGS),
            DECLARE_METHOD(t_Max, copy, METH_VARARGS),
            DECLARE_METHOD(t_Max, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Max, getN, METH_VARARGS),
            DECLARE_METHOD(t_Max, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Max, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
            { Py_tp_methods, t_Max__methods_ },
            { Py_tp_init, (void *) t_Max_init_ },
            { Py_tp_getset, t_Max__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Max)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Max, t_Max, Max);

          void t_Max::install(PyObject *module)
          {
            installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
          }

          void t_Max::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Max::initializeClass, 1)))
              return NULL;
            return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
          }
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Max::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
          {
            Max object((jobject) NULL);

            INT_CALL(object = Max());
            self->object = object;

            return 0;
          }

          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg)
          {
            Max a0((jobject) NULL);

            if (!parseArg(arg, "k", Max::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Max_clear(t_Max *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Max_copy(t_Max *self, PyObject *args)
          {
            Max result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Max::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Max_getN(t_Max *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Max_getResult(t_Max *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Max_increment(t_Max *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Max_get__n(t_Max *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Max_get__result(t_Max *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarS::class$ = NULL;
          jmethodID *CopolarS::mids$ = NULL;
          bool CopolarS::live$ = false;

          jclass CopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_557b8123390d8d0c] = env->getMethodID(cls, "cs", "()D");
              mids$[mid_ds_557b8123390d8d0c] = env->getMethodID(cls, "ds", "()D");
              mids$[mid_ns_557b8123390d8d0c] = env->getMethodID(cls, "ns", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarS::cs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cs_557b8123390d8d0c]);
          }

          jdouble CopolarS::ds() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ds_557b8123390d8d0c]);
          }

          jdouble CopolarS::ns() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ns_557b8123390d8d0c]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_cs(t_CopolarS *self);
          static PyObject *t_CopolarS_ds(t_CopolarS *self);
          static PyObject *t_CopolarS_ns(t_CopolarS *self);

          static PyMethodDef t_CopolarS__methods_[] = {
            DECLARE_METHOD(t_CopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarS)[] = {
            { Py_tp_methods, t_CopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarS, t_CopolarS, CopolarS);

          void t_CopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarS), &PY_TYPE_DEF(CopolarS), module, "CopolarS", 0);
          }

          void t_CopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "class_", make_descriptor(CopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "wrapfn_", make_descriptor(t_CopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarS::initializeClass, 1)))
              return NULL;
            return t_CopolarS::wrap_Object(CopolarS(((t_CopolarS *) arg)->object.this$));
          }
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarS_cs(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ds(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ds());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ns(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ns());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizationProblemBuilder::class$ = NULL;
        jmethodID *OptimizationProblemBuilder::mids$ = NULL;
        bool OptimizationProblemBuilder::live$ = false;

        jclass OptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_build_d4732481b9968791] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_getDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
            mids$[mid_getNbParams_412668abc8d889e9] = env->getMethodID(cls, "getNbParams", "()I");
            mids$[mid_getSensors_0d9551367f7ecdef] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
            mids$[mid_getMeasurements_e8a9e616d9a15f91] = env->getMethodID(cls, "getMeasurements", "()Lorg/orekit/rugged/adjustment/measurements/Observables;");
            mids$[mid_getGenerator_288f48cc056758ad] = env->getMethodID(cls, "getGenerator", "()Lorg/orekit/rugged/utils/DerivativeGenerator;");
            mids$[mid_initMapping_0640e6acf969ed28] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_0640e6acf969ed28] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_createFunction_e31bcbfb9203b3a6] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem OptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_d4732481b9968791], a0, a1));
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
      namespace adjustment {
        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_OptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_OptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_OptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OptimizationProblemBuilder, t_OptimizationProblemBuilder, OptimizationProblemBuilder);

        void t_OptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizationProblemBuilder), &PY_TYPE_DEF(OptimizationProblemBuilder), module, "OptimizationProblemBuilder", 0);
        }

        void t_OptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "class_", make_descriptor(OptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "wrapfn_", make_descriptor(t_OptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_OptimizationProblemBuilder::wrap_Object(OptimizationProblemBuilder(((t_OptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_OptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizationProblemBuilder_build(t_OptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Tdm::class$ = NULL;
            jmethodID *Tdm::mids$ = NULL;
            bool Tdm::live$ = false;
            ::java::lang::String *Tdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Tdm::ROOT = NULL;

            jclass Tdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Tdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_435bebe2723e4064] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Tdm::Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_435bebe2723e4064, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args);
            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data);
            static PyGetSetDef t_Tdm__fields_[] = {
              DECLARE_GET_FIELD(t_Tdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Tdm__methods_[] = {
              DECLARE_METHOD(t_Tdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Tdm)[] = {
              { Py_tp_methods, t_Tdm__methods_ },
              { Py_tp_init, (void *) t_Tdm_init_ },
              { Py_tp_getset, t_Tdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Tdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Tdm, t_Tdm, Tdm);
            PyObject *t_Tdm::wrap_Object(const Tdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Tdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Tdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Tdm), &PY_TYPE_DEF(Tdm), module, "Tdm", 0);
            }

            void t_Tdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "class_", make_descriptor(Tdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "wrapfn_", make_descriptor(t_Tdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Tdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Tdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "ROOT", make_descriptor(j2p(*Tdm::ROOT)));
            }

            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Tdm::initializeClass, 1)))
                return NULL;
              return t_Tdm::wrap_Object(Tdm(((t_Tdm *) arg)->object.this$));
            }
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Tdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Tdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::tdm::TdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Tdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data)
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
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *DetectorBasedEventState::class$ = NULL;
        jmethodID *DetectorBasedEventState::mids$ = NULL;
        bool DetectorBasedEventState::live$ = false;

        jclass DetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/DetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a2423f3286456e55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_doEvent_6006b945607419cb] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_8380759ad65b5b06] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_4e8fbf7207a2f82a] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_getEventTime_557b8123390d8d0c] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_reinitializeBegin_b272ebb5ead79c81] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_tryAdvance_0c59e8c3e20edac8] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DetectorBasedEventState::DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2423f3286456e55, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence DetectorBasedEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_6006b945607419cb], a0.this$));
        }

        jboolean DetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_8380759ad65b5b06], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector DetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_4e8fbf7207a2f82a]));
        }

        jdouble DetectorBasedEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_557b8123390d8d0c]);
        }

        void DetectorBasedEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }

        void DetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_b272ebb5ead79c81], a0.this$);
        }

        jboolean DetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_0c59e8c3e20edac8], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data);
        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data);
        static PyGetSetDef t_DetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_DetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DetectorBasedEventState)[] = {
          { Py_tp_methods, t_DetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_DetectorBasedEventState_init_ },
          { Py_tp_getset, t_DetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DetectorBasedEventState, t_DetectorBasedEventState, DetectorBasedEventState);

        void t_DetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(DetectorBasedEventState), &PY_TYPE_DEF(DetectorBasedEventState), module, "DetectorBasedEventState", 0);
        }

        void t_DetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "class_", make_descriptor(DetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "wrapfn_", make_descriptor(t_DetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_DetectorBasedEventState::wrap_Object(DetectorBasedEventState(((t_DetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          DetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
          {
            INT_CALL(object = DetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "java/io/Serializable.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics::class$ = NULL;
        jmethodID *StreamingStatistics::mids$ = NULL;
        bool StreamingStatistics::live$ = false;

        jclass StreamingStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fb29db45daae1732] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_10f281d777284cea] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_aggregate_dabde7a6d9f154ab] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)V");
            mids$[mid_builder_575058d69559c78a] = env->getStaticMethodID(cls, "builder", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_adcadc851bf4f5fa] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getGeometricMean_557b8123390d8d0c] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMedian_557b8123390d8d0c] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_7e960cd6eee376d8] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_557b8123390d8d0c] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_557b8123390d8d0c] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSecondMoment_557b8123390d8d0c] = env->getMethodID(cls, "getSecondMoment", "()D");
            mids$[mid_getStandardDeviation_557b8123390d8d0c] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfLogs_557b8123390d8d0c] = env->getMethodID(cls, "getSumOfLogs", "()D");
            mids$[mid_getSumOfSquares_557b8123390d8d0c] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getSummary_8f883f2497314ce2] = env->getMethodID(cls, "getSummary", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getVariance_557b8123390d8d0c] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics::StreamingStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        StreamingStatistics::StreamingStatistics(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb29db45daae1732, a0, a1.this$)) {}

        void StreamingStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
        }

        void StreamingStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_10f281d777284cea], a0);
        }

        void StreamingStatistics::aggregate(const StreamingStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_dabde7a6d9f154ab], a0.this$);
        }

        ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics::builder()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder(env->callStaticObjectMethod(cls, mids$[mid_builder_575058d69559c78a]));
        }

        void StreamingStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        StreamingStatistics StreamingStatistics::copy() const
        {
          return StreamingStatistics(env->callObjectMethod(this$, mids$[mid_copy_adcadc851bf4f5fa]));
        }

        jboolean StreamingStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        jdouble StreamingStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jlong StreamingStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble StreamingStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_7e960cd6eee376d8], a0);
        }

        jdouble StreamingStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getSecondMoment() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondMoment_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getSumOfLogs() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfLogs_557b8123390d8d0c]);
        }

        jdouble StreamingStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_557b8123390d8d0c]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary StreamingStatistics::getSummary() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSummary_8f883f2497314ce2]));
        }

        jdouble StreamingStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_557b8123390d8d0c]);
        }

        jint StreamingStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        ::java::lang::String StreamingStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type);
        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data);
        static PyGetSetDef t_StreamingStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingStatistics, geometricMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, max),
          DECLARE_GET_FIELD(t_StreamingStatistics, mean),
          DECLARE_GET_FIELD(t_StreamingStatistics, median),
          DECLARE_GET_FIELD(t_StreamingStatistics, min),
          DECLARE_GET_FIELD(t_StreamingStatistics, n),
          DECLARE_GET_FIELD(t_StreamingStatistics, populationVariance),
          DECLARE_GET_FIELD(t_StreamingStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, secondMoment),
          DECLARE_GET_FIELD(t_StreamingStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_StreamingStatistics, sum),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfLogs),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_StreamingStatistics, summary),
          DECLARE_GET_FIELD(t_StreamingStatistics, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingStatistics__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, accept, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, addValue, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, aggregate, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, builder, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSecondMoment, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfLogs, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSummary, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics)[] = {
          { Py_tp_methods, t_StreamingStatistics__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics_init_ },
          { Py_tp_getset, t_StreamingStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics, t_StreamingStatistics, StreamingStatistics);

        void t_StreamingStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics), &PY_TYPE_DEF(StreamingStatistics), module, "StreamingStatistics", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "StreamingStatisticsBuilder", make_descriptor(&PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder)));
        }

        void t_StreamingStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "class_", make_descriptor(StreamingStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "wrapfn_", make_descriptor(t_StreamingStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics::wrap_Object(StreamingStatistics(((t_StreamingStatistics *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              StreamingStatistics object((jobject) NULL);

              INT_CALL(object = StreamingStatistics());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              StreamingStatistics object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StreamingStatistics(a0, a1));
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

        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg)
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

        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg)
        {
          StreamingStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", StreamingStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.aggregate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StreamingStatistics::builder());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self)
        {
          StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DSGenerator::class$ = NULL;
        jmethodID *DSGenerator::mids$ = NULL;
        bool DSGenerator::live$ = false;

        jclass DSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DSGenerator");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace utils {
        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_DSGenerator__methods_[] = {
          DECLARE_METHOD(t_DSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSGenerator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSGenerator)[] = {
          { Py_tp_methods, t_DSGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSGenerator)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::DerivativeGenerator),
          NULL
        };

        DEFINE_TYPE(DSGenerator, t_DSGenerator, DSGenerator);

        void t_DSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DSGenerator), &PY_TYPE_DEF(DSGenerator), module, "DSGenerator", 0);
        }

        void t_DSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "class_", make_descriptor(DSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "wrapfn_", make_descriptor(t_DSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSGenerator::initializeClass, 1)))
            return NULL;
          return t_DSGenerator::wrap_Object(DSGenerator(((t_DSGenerator *) arg)->object.this$));
        }
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TidalDisplacement::class$ = NULL;
          jmethodID *TidalDisplacement::mids$ = NULL;
          bool TidalDisplacement::live$ = false;

          jclass TidalDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TidalDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8975a7ccf324a90] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/IERSConventions;Z)V");
              mids$[mid_displacement_2092c3958d15642d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TidalDisplacement::TidalDisplacement(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::PVCoordinatesProvider & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4, const ::org::orekit::utils::IERSConventions & a5, jboolean a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8975a7ccf324a90, a0, a1, a2, a3.this$, a4.this$, a5.this$, a6)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TidalDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_2092c3958d15642d], a0.this$, a1.this$, a2.this$));
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args);

          static PyMethodDef t_TidalDisplacement__methods_[] = {
            DECLARE_METHOD(t_TidalDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TidalDisplacement)[] = {
            { Py_tp_methods, t_TidalDisplacement__methods_ },
            { Py_tp_init, (void *) t_TidalDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TidalDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TidalDisplacement, t_TidalDisplacement, TidalDisplacement);

          void t_TidalDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TidalDisplacement), &PY_TYPE_DEF(TidalDisplacement), module, "TidalDisplacement", 0);
          }

          void t_TidalDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "class_", make_descriptor(TidalDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "wrapfn_", make_descriptor(t_TidalDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TidalDisplacement::initializeClass, 1)))
              return NULL;
            return t_TidalDisplacement::wrap_Object(TidalDisplacement(((t_TidalDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TidalDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::PVCoordinatesProvider a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::utils::IERSConventions a5((jobject) NULL);
            PyTypeObject **p5;
            jboolean a6;
            TidalDisplacement object((jobject) NULL);

            if (!parseArgs(args, "DDDkkKZ", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
            {
              INT_CALL(object = TidalDisplacement(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractLambdaMethod::class$ = NULL;
          jmethodID *PythonAbstractLambdaMethod::mids$ = NULL;
          bool PythonAbstractLambdaMethod::live$ = false;

          jclass PythonAbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_0640e6acf969ed28] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_inverseDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_reduction_0640e6acf969ed28] = env->getMethodID(cls, "reduction", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractLambdaMethod::PythonAbstractLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonAbstractLambdaMethod::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractLambdaMethod::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractLambdaMethod::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self);
          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args);
          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data);
          static PyGetSetDef t_PythonAbstractLambdaMethod__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractLambdaMethod, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractLambdaMethod)[] = {
            { Py_tp_methods, t_PythonAbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractLambdaMethod_init_ },
            { Py_tp_getset, t_PythonAbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(PythonAbstractLambdaMethod, t_PythonAbstractLambdaMethod, PythonAbstractLambdaMethod);

          void t_PythonAbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractLambdaMethod), &PY_TYPE_DEF(PythonAbstractLambdaMethod), module, "PythonAbstractLambdaMethod", 1);
          }

          void t_PythonAbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "class_", make_descriptor(PythonAbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "wrapfn_", make_descriptor(t_PythonAbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractLambdaMethod::initializeClass);
            JNINativeMethod methods[] = {
              { "discreteSearch", "()V", (void *) t_PythonAbstractLambdaMethod_discreteSearch0 },
              { "inverseDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_inverseDecomposition1 },
              { "ltdlDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_ltdlDecomposition2 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractLambdaMethod_pythonDecRef3 },
              { "reduction", "()V", (void *) t_PythonAbstractLambdaMethod_reduction4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractLambdaMethod::wrap_Object(PythonAbstractLambdaMethod(((t_PythonAbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractLambdaMethod object((jobject) NULL);

            INT_CALL(object = PythonAbstractLambdaMethod());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "discreteSearch", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "inverseDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "ltdlDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "reduction", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data)
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
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffsetsLoader$Parser::class$ = NULL;
      jmethodID *UTCTAIOffsetsLoader$Parser::mids$ = NULL;
      bool UTCTAIOffsetsLoader$Parser::live$ = false;

      jclass UTCTAIOffsetsLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffsetsLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_parse_e3101d06c7a1bcab] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List UTCTAIOffsetsLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_e3101d06c7a1bcab], a0.this$, a1.this$));
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
      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args);

      static PyMethodDef t_UTCTAIOffsetsLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffsetsLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffsetsLoader$Parser)[] = {
        { Py_tp_methods, t_UTCTAIOffsetsLoader$Parser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffsetsLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffsetsLoader$Parser, t_UTCTAIOffsetsLoader$Parser, UTCTAIOffsetsLoader$Parser);

      void t_UTCTAIOffsetsLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffsetsLoader$Parser), &PY_TYPE_DEF(UTCTAIOffsetsLoader$Parser), module, "UTCTAIOffsetsLoader$Parser", 0);
      }

      void t_UTCTAIOffsetsLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "class_", make_descriptor(UTCTAIOffsetsLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "wrapfn_", make_descriptor(t_UTCTAIOffsetsLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffsetsLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffsetsLoader$Parser::wrap_Object(UTCTAIOffsetsLoader$Parser(((t_UTCTAIOffsetsLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffsetsLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffsetsLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffsetsLoader$Parser_parse(t_UTCTAIOffsetsLoader$Parser *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *InterpolationGrid::class$ = NULL;
            jmethodID *InterpolationGrid::mids$ = NULL;
            bool InterpolationGrid::live$ = false;

            jclass InterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_0699cadabd57760f] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > InterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0699cadabd57760f], a0, a1));
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
            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args);

            static PyMethodDef t_InterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_InterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(InterpolationGrid)[] = {
              { Py_tp_methods, t_InterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(InterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(InterpolationGrid, t_InterpolationGrid, InterpolationGrid);

            void t_InterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(InterpolationGrid), &PY_TYPE_DEF(InterpolationGrid), module, "InterpolationGrid", 0);
            }

            void t_InterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "class_", make_descriptor(InterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "wrapfn_", make_descriptor(t_InterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, InterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_InterpolationGrid::wrap_Object(InterpolationGrid(((t_InterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, InterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AggregateBoundedPropagator::class$ = NULL;
        jmethodID *AggregateBoundedPropagator::mids$ = NULL;
        bool AggregateBoundedPropagator::live$ = false;

        jclass AggregateBoundedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AggregateBoundedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_init$_e923c5ed0622afbe] = env->getMethodID(cls, "<init>", "(Ljava/util/NavigableMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPropagators_60eb75cca6401fd1] = env->getMethodID(cls, "getPropagators", "()Ljava/util/NavigableMap;");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_15e0d02372b1347b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::Collection & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::NavigableMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e923c5ed0622afbe, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::propagation::SpacecraftState AggregateBoundedPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates AggregateBoundedPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
        }

        ::java::util::NavigableMap AggregateBoundedPropagator::getPropagators() const
        {
          return ::java::util::NavigableMap(env->callObjectMethod(this$, mids$[mid_getPropagators_60eb75cca6401fd1]));
        }

        void AggregateBoundedPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
      namespace analytical {
        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data);
        static PyGetSetDef t_AggregateBoundedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, initialState),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, maxDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, minDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, propagators),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregateBoundedPropagator__methods_[] = {
          DECLARE_METHOD(t_AggregateBoundedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPropagators, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedPropagator)[] = {
          { Py_tp_methods, t_AggregateBoundedPropagator__methods_ },
          { Py_tp_init, (void *) t_AggregateBoundedPropagator_init_ },
          { Py_tp_getset, t_AggregateBoundedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregateBoundedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AggregateBoundedPropagator, t_AggregateBoundedPropagator, AggregateBoundedPropagator);

        void t_AggregateBoundedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregateBoundedPropagator), &PY_TYPE_DEF(AggregateBoundedPropagator), module, "AggregateBoundedPropagator", 0);
        }

        void t_AggregateBoundedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "class_", make_descriptor(AggregateBoundedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "wrapfn_", make_descriptor(t_AggregateBoundedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregateBoundedPropagator::initializeClass, 1)))
            return NULL;
          return t_AggregateBoundedPropagator::wrap_Object(AggregateBoundedPropagator(((t_AggregateBoundedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregateBoundedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::NavigableMap a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::java::util::NavigableMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &a2))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0, a1, a2));
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

        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self)
        {
          ::java::util::NavigableMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data)
        {
          ::java::util::NavigableMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Double.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldLnsCoefficients::class$ = NULL;
            jmethodID *FieldLnsCoefficients::mids$ = NULL;
            bool FieldLnsCoefficients::live$ = false;

            jclass FieldLnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4c0834ee3b889e07] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/CalculusFieldElement;Ljava/util/SortedMap;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getLns_f548ed78c2486137] = env->getMethodID(cls, "getLns", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdLnsdGamma_f548ed78c2486137] = env->getMethodID(cls, "getdLnsdGamma", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldLnsCoefficients::FieldLnsCoefficients(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const ::java::util::SortedMap & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c0834ee3b889e07, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getLns(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLns_f548ed78c2486137], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdLnsdGamma_f548ed78c2486137], a0, a1));
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
            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args);
            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data);
            static PyGetSetDef t_FieldLnsCoefficients__fields_[] = {
              DECLARE_GET_FIELD(t_FieldLnsCoefficients, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldLnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_FieldLnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldLnsCoefficients)[] = {
              { Py_tp_methods, t_FieldLnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_FieldLnsCoefficients_init_ },
              { Py_tp_getset, t_FieldLnsCoefficients__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldLnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldLnsCoefficients, t_FieldLnsCoefficients, FieldLnsCoefficients);
            PyObject *t_FieldLnsCoefficients::wrap_Object(const FieldLnsCoefficients& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldLnsCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldLnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldLnsCoefficients), &PY_TYPE_DEF(FieldLnsCoefficients), module, "FieldLnsCoefficients", 0);
            }

            void t_FieldLnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "class_", make_descriptor(FieldLnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "wrapfn_", make_descriptor(t_FieldLnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldLnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_FieldLnsCoefficients::wrap_Object(FieldLnsCoefficients(((t_FieldLnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldLnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldLnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::java::util::SortedMap::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldLnsCoefficients(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
              return NULL;
            }
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationOrder::class$ = NULL;
          jmethodID *RotationOrder::mids$ = NULL;
          bool RotationOrder::live$ = false;
          RotationOrder *RotationOrder::XYX = NULL;
          RotationOrder *RotationOrder::XYZ = NULL;
          RotationOrder *RotationOrder::XZX = NULL;
          RotationOrder *RotationOrder::XZY = NULL;
          RotationOrder *RotationOrder::YXY = NULL;
          RotationOrder *RotationOrder::YXZ = NULL;
          RotationOrder *RotationOrder::YZX = NULL;
          RotationOrder *RotationOrder::YZY = NULL;
          RotationOrder *RotationOrder::ZXY = NULL;
          RotationOrder *RotationOrder::ZXZ = NULL;
          RotationOrder *RotationOrder::ZYX = NULL;
          RotationOrder *RotationOrder::ZYZ = NULL;

          jclass RotationOrder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationOrder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA1_f88961cca75a2c0a] = env->getMethodID(cls, "getA1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA2_f88961cca75a2c0a] = env->getMethodID(cls, "getA2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA3_f88961cca75a2c0a] = env->getMethodID(cls, "getA3", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getRotationOrder_0adbda9cfecaf135] = env->getStaticMethodID(cls, "getRotationOrder", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_0adbda9cfecaf135] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_values_cb69e5301b76856d] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              XYX = new RotationOrder(env->getStaticObjectField(cls, "XYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XYZ = new RotationOrder(env->getStaticObjectField(cls, "XYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZX = new RotationOrder(env->getStaticObjectField(cls, "XZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZY = new RotationOrder(env->getStaticObjectField(cls, "XZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXY = new RotationOrder(env->getStaticObjectField(cls, "YXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXZ = new RotationOrder(env->getStaticObjectField(cls, "YXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZX = new RotationOrder(env->getStaticObjectField(cls, "YZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZY = new RotationOrder(env->getStaticObjectField(cls, "YZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXY = new RotationOrder(env->getStaticObjectField(cls, "ZXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXZ = new RotationOrder(env->getStaticObjectField(cls, "ZXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYX = new RotationOrder(env->getStaticObjectField(cls, "ZYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYZ = new RotationOrder(env->getStaticObjectField(cls, "ZYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA1() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA1_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA2() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA2_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA3() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA3_f88961cca75a2c0a]));
          }

          RotationOrder RotationOrder::getRotationOrder(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_getRotationOrder_0adbda9cfecaf135], a0.this$));
          }

          ::java::lang::String RotationOrder::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          RotationOrder RotationOrder::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0adbda9cfecaf135], a0.this$));
          }

          JArray< RotationOrder > RotationOrder::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationOrder >(env->callStaticObjectMethod(cls, mids$[mid_values_cb69e5301b76856d]));
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
      namespace euclidean {
        namespace threed {
          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationOrder_values(PyTypeObject *type);
          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data);
          static PyGetSetDef t_RotationOrder__fields_[] = {
            DECLARE_GET_FIELD(t_RotationOrder, a1),
            DECLARE_GET_FIELD(t_RotationOrder, a2),
            DECLARE_GET_FIELD(t_RotationOrder, a3),
            DECLARE_GET_FIELD(t_RotationOrder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationOrder__methods_[] = {
            DECLARE_METHOD(t_RotationOrder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, getA1, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA2, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA3, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getRotationOrder, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, toString, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationOrder)[] = {
            { Py_tp_methods, t_RotationOrder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationOrder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationOrder)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationOrder, t_RotationOrder, RotationOrder);
          PyObject *t_RotationOrder::wrap_Object(const RotationOrder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationOrder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationOrder::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationOrder), &PY_TYPE_DEF(RotationOrder), module, "RotationOrder", 0);
          }

          void t_RotationOrder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "class_", make_descriptor(RotationOrder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "wrapfn_", make_descriptor(t_RotationOrder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationOrder::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYZ)));
          }

          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationOrder::initializeClass, 1)))
              return NULL;
            return t_RotationOrder::wrap_Object(RotationOrder(((t_RotationOrder *) arg)->object.this$));
          }
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationOrder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::getRotationOrder(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getRotationOrder", arg);
            return NULL;
          }

          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RotationOrder), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::valueOf(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationOrder_values(PyTypeObject *type)
          {
            JArray< RotationOrder > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::values());
            return JArray<jobject>(result.this$).wrap(t_RotationOrder::wrap_jobject);
          }
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
