#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Float.h"
#include "java/lang/Float.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Float::class$ = NULL;
    jmethodID *Float::mids$ = NULL;
    bool Float::live$ = false;
    jint Float::BYTES = (jint) 0;
    jint Float::MAX_EXPONENT = (jint) 0;
    jfloat Float::MAX_VALUE = (jfloat) 0;
    jint Float::MIN_EXPONENT = (jint) 0;
    jfloat Float::MIN_NORMAL = (jfloat) 0;
    jfloat Float::MIN_VALUE = (jfloat) 0;
    jfloat Float::NEGATIVE_INFINITY = (jfloat) 0;
    jfloat Float::NaN = (jfloat) 0;
    jfloat Float::POSITIVE_INFINITY = (jfloat) 0;
    jint Float::SIZE = (jint) 0;
    ::java::lang::Class *Float::TYPE = NULL;

    jclass Float::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Float");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_init$_f63147a1690942cc] = env->getMethodID(cls, "<init>", "(F)V");
        mids$[mid_byteValue_42a1555092006f7f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_f0f18d086c6c6bea] = env->getStaticMethodID(cls, "compare", "(FF)I");
        mids$[mid_compareTo_d9424729eac19935] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Float;)I");
        mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatToIntBits_a420854bf0746aa6] = env->getStaticMethodID(cls, "floatToIntBits", "(F)I");
        mids$[mid_floatToRawIntBits_a420854bf0746aa6] = env->getStaticMethodID(cls, "floatToRawIntBits", "(F)I");
        mids$[mid_floatValue_5adccb493ada08e8] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_a420854bf0746aa6] = env->getStaticMethodID(cls, "hashCode", "(F)I");
        mids$[mid_intBitsToFloat_82a32f686d72165a] = env->getStaticMethodID(cls, "intBitsToFloat", "(I)F");
        mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_fe32376435eb98dd] = env->getStaticMethodID(cls, "isFinite", "(F)Z");
        mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_fe32376435eb98dd] = env->getStaticMethodID(cls, "isInfinite", "(F)Z");
        mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_fe32376435eb98dd] = env->getStaticMethodID(cls, "isNaN", "(F)Z");
        mids$[mid_longValue_492808a339bfa35f] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_b2255e57f862a26c] = env->getStaticMethodID(cls, "max", "(FF)F");
        mids$[mid_min_b2255e57f862a26c] = env->getStaticMethodID(cls, "min", "(FF)F");
        mids$[mid_parseFloat_976b0c497f7e39a4] = env->getStaticMethodID(cls, "parseFloat", "(Ljava/lang/String;)F");
        mids$[mid_shortValue_b5dd6688e7dce57d] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_b2255e57f862a26c] = env->getStaticMethodID(cls, "sum", "(FF)F");
        mids$[mid_toHexString_fd11166b57af1364] = env->getStaticMethodID(cls, "toHexString", "(F)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_fd11166b57af1364] = env->getStaticMethodID(cls, "toString", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_ba1e27d0ad98876c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
        mids$[mid_valueOf_c84b57cda5bfcd7a] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/Float;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticFloatField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticFloatField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticFloatField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticFloatField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticFloatField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticFloatField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Float::Float(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Float::Float(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

    Float::Float(jfloat a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f63147a1690942cc, a0)) {}

    jbyte Float::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_42a1555092006f7f]);
    }

    jint Float::compare(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f0f18d086c6c6bea], a0, a1);
    }

    jint Float::compareTo(const Float & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_d9424729eac19935], a0.this$);
    }

    jdouble Float::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
    }

    jboolean Float::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint Float::floatToIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToIntBits_a420854bf0746aa6], a0);
    }

    jint Float::floatToRawIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToRawIntBits_a420854bf0746aa6], a0);
    }

    jfloat Float::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_5adccb493ada08e8]);
    }

    jint Float::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Float::hashCode(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a420854bf0746aa6], a0);
    }

    jfloat Float::intBitsToFloat(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_intBitsToFloat_82a32f686d72165a], a0);
    }

    jint Float::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
    }

    jboolean Float::isFinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_fe32376435eb98dd], a0);
    }

    jboolean Float::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
    }

    jboolean Float::isInfinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_fe32376435eb98dd], a0);
    }

    jboolean Float::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
    }

    jboolean Float::isNaN(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_fe32376435eb98dd], a0);
    }

    jlong Float::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_492808a339bfa35f]);
    }

    jfloat Float::max$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_max_b2255e57f862a26c], a0, a1);
    }

    jfloat Float::min$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_min_b2255e57f862a26c], a0, a1);
    }

    jfloat Float::parseFloat(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_parseFloat_976b0c497f7e39a4], a0.this$);
    }

    jshort Float::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_b5dd6688e7dce57d]);
    }

    jfloat Float::sum(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_sum_b2255e57f862a26c], a0, a1);
    }

    ::java::lang::String Float::toHexString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_fd11166b57af1364], a0));
    }

    ::java::lang::String Float::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Float::toString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_fd11166b57af1364], a0));
    }

    Float Float::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ba1e27d0ad98876c], a0.this$));
    }

    Float Float::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c84b57cda5bfcd7a], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg);
    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_equals(t_Float *self, PyObject *args);
    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_intValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isInfinite(t_Float *self);
    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isNaN(t_Float *self);
    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_longValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_toString(t_Float *self, PyObject *args);
    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_get__infinite(t_Float *self, void *data);
    static PyObject *t_Float_get__naN(t_Float *self, void *data);
    static PyGetSetDef t_Float__fields_[] = {
      DECLARE_GET_FIELD(t_Float, infinite),
      DECLARE_GET_FIELD(t_Float, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Float__methods_[] = {
      DECLARE_METHOD(t_Float, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, compareTo, METH_O),
      DECLARE_METHOD(t_Float, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, equals, METH_VARARGS),
      DECLARE_METHOD(t_Float, floatToIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatToRawIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intBitsToFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Float, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Float, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, parseFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, toString, METH_VARARGS),
      DECLARE_METHOD(t_Float, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Float)[] = {
      { Py_tp_methods, t_Float__methods_ },
      { Py_tp_init, (void *) t_Float_init_ },
      { Py_tp_getset, t_Float__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Float)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Float, t_Float, Float);

    void t_Float::install(PyObject *module)
    {
      installType(&PY_TYPE(Float), &PY_TYPE_DEF(Float), module, "Float", 0);
    }

    void t_Float::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "class_", make_descriptor(Float::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "wrapfn_", make_descriptor(unboxFloat));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "boxfn_", make_descriptor(boxFloat));
      env->getClass(Float::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "BYTES", make_descriptor(Float::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_EXPONENT", make_descriptor(Float::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_VALUE", make_descriptor(Float::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_EXPONENT", make_descriptor(Float::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_NORMAL", make_descriptor(Float::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_VALUE", make_descriptor(Float::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NEGATIVE_INFINITY", make_descriptor(Float::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NaN", make_descriptor(Float::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "POSITIVE_INFINITY", make_descriptor(Float::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "SIZE", make_descriptor(Float::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Float::TYPE)));
    }

    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Float::initializeClass, 1)))
        return NULL;
      return t_Float::wrap_Object(Float(((t_Float *) arg)->object.this$));
    }
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Float::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jfloat a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            INT_CALL(object = Float(a0));
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

    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jint result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg)
    {
      Float a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Float), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Float_equals(t_Float *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToRawIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToRawIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jint result;

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jfloat result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::intBitsToFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "intBitsToFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_intValue(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Float_isInfinite(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Float_isNaN(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Float_longValue(t_Float *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jfloat result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::parseFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Float_toString(t_Float *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          Float result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Float_get__infinite(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Float_get__naN(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *DeSitterRelativity::class$ = NULL;
        jmethodID *DeSitterRelativity::mids$ = NULL;
        bool DeSitterRelativity::live$ = false;
        ::java::lang::String *DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass DeSitterRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/DeSitterRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_628ee7a3e714b75c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEarth_624686a38a6b107c] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSun_624686a38a6b107c] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DeSitterRelativity::DeSitterRelativity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        DeSitterRelativity::DeSitterRelativity(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_628ee7a3e714b75c, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DeSitterRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean DeSitterRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getEarth() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_624686a38a6b107c]));
        }

        ::java::util::List DeSitterRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::bodies::CelestialBody DeSitterRelativity::getSun() const
        {
          return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_624686a38a6b107c]));
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
        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args);
        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self);
        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data);
        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data);
        static PyGetSetDef t_DeSitterRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_DeSitterRelativity, earth),
          DECLARE_GET_FIELD(t_DeSitterRelativity, parametersDrivers),
          DECLARE_GET_FIELD(t_DeSitterRelativity, sun),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DeSitterRelativity__methods_[] = {
          DECLARE_METHOD(t_DeSitterRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DeSitterRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DeSitterRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getEarth, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_DeSitterRelativity, getSun, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DeSitterRelativity)[] = {
          { Py_tp_methods, t_DeSitterRelativity__methods_ },
          { Py_tp_init, (void *) t_DeSitterRelativity_init_ },
          { Py_tp_getset, t_DeSitterRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DeSitterRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DeSitterRelativity, t_DeSitterRelativity, DeSitterRelativity);

        void t_DeSitterRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(DeSitterRelativity), &PY_TYPE_DEF(DeSitterRelativity), module, "DeSitterRelativity", 0);
        }

        void t_DeSitterRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "class_", make_descriptor(DeSitterRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "wrapfn_", make_descriptor(t_DeSitterRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "boxfn_", make_descriptor(boxObject));
          env->getClass(DeSitterRelativity::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DeSitterRelativity), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*DeSitterRelativity::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_DeSitterRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DeSitterRelativity::initializeClass, 1)))
            return NULL;
          return t_DeSitterRelativity::wrap_Object(DeSitterRelativity(((t_DeSitterRelativity *) arg)->object.this$));
        }
        static PyObject *t_DeSitterRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DeSitterRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DeSitterRelativity_init_(t_DeSitterRelativity *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DeSitterRelativity object((jobject) NULL);

              INT_CALL(object = DeSitterRelativity());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              DeSitterRelativity object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DeSitterRelativity(a0, a1));
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

        static PyObject *t_DeSitterRelativity_acceleration(t_DeSitterRelativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_DeSitterRelativity_dependsOnPositionOnly(t_DeSitterRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DeSitterRelativity_getEarth(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_getParametersDrivers(t_DeSitterRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DeSitterRelativity_getSun(t_DeSitterRelativity *self)
        {
          ::org::orekit::bodies::CelestialBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        static PyObject *t_DeSitterRelativity_get__earth(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getEarth());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__parametersDrivers(t_DeSitterRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DeSitterRelativity_get__sun(t_DeSitterRelativity *self, void *data)
        {
          ::org::orekit::bodies::CelestialBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getSun());
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$FrRangeMeasurement::class$ = NULL;
        jmethodID *CRD$FrRangeMeasurement::mids$ = NULL;
        bool CRD$FrRangeMeasurement::live$ = false;

        jclass CRD$FrRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$FrRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f40c5eb9988d498] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DILjava/lang/String;IIIII)V");
            mids$[mid_getDetectorChannel_570ce0828f81a2c1] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getFilterFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getFilterFlag", "()I");
            mids$[mid_getReceiveAmplitude_570ce0828f81a2c1] = env->getMethodID(cls, "getReceiveAmplitude", "()I");
            mids$[mid_getStopNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getStopNumber", "()I");
            mids$[mid_getTransmitAmplitude_570ce0828f81a2c1] = env->getMethodID(cls, "getTransmitAmplitude", "()I");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$FrRangeMeasurement::CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, const ::java::lang::String & a3, jint a4, jint a5, jint a6, jint a7, jint a8) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0f40c5eb9988d498, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        jint CRD$FrRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_570ce0828f81a2c1]);
        }

        jint CRD$FrRangeMeasurement::getFilterFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getFilterFlag_570ce0828f81a2c1]);
        }

        jint CRD$FrRangeMeasurement::getReceiveAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getReceiveAmplitude_570ce0828f81a2c1]);
        }

        jint CRD$FrRangeMeasurement::getStopNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getStopNumber_570ce0828f81a2c1]);
        }

        jint CRD$FrRangeMeasurement::getTransmitAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getTransmitAmplitude_570ce0828f81a2c1]);
        }

        ::java::lang::String CRD$FrRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$FrRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$FrRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, filterFlag),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, receiveAmplitude),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, stopNumber),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, transmitAmplitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$FrRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getFilterFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getReceiveAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getStopNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getTransmitAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$FrRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$FrRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$FrRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$FrRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$FrRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$FrRangeMeasurement, t_CRD$FrRangeMeasurement, CRD$FrRangeMeasurement);

        void t_CRD$FrRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$FrRangeMeasurement), &PY_TYPE_DEF(CRD$FrRangeMeasurement), module, "CRD$FrRangeMeasurement", 0);
        }

        void t_CRD$FrRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "class_", make_descriptor(CRD$FrRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$FrRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$FrRangeMeasurement::wrap_Object(CRD$FrRangeMeasurement(((t_CRD$FrRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          jint a4;
          jint a5;
          jint a6;
          jint a7;
          jint a8;
          CRD$FrRangeMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDIsIIIII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            INT_CALL(object = CRD$FrRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFilterFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStopNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFilterFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStopNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateTimeComponents::class$ = NULL;
      jmethodID *DateTimeComponents::mids$ = NULL;
      bool DateTimeComponents::live$ = false;
      DateTimeComponents *DateTimeComponents::JULIAN_EPOCH = NULL;

      jclass DateTimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateTimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c14c403a5c352d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)V");
          mids$[mid_init$_68cb5421234eef18] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;D)V");
          mids$[mid_init$_2981819d13ae2f57] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_init$_e057cf067cded0b1] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIID)V");
          mids$[mid_init$_ed1b0bf4ea7912b1] = env->getMethodID(cls, "<init>", "(IIIIID)V");
          mids$[mid_compareTo_580f9f152eeb57a7] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateTimeComponents;)I");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDate_06e6477664d37caa] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getTime_844c883de8de25a4] = env->getMethodID(cls, "getTime", "()Lorg/orekit/time/TimeComponents;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_offsetFrom_d9ea92929f2fc1c4] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/DateTimeComponents;)D");
          mids$[mid_parseDateTime_a1ae90bb1e45c6d8] = env->getStaticMethodID(cls, "parseDateTime", "(Ljava/lang/String;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_roundIfNeeded_63daf82408c2d953] = env->getMethodID(cls, "roundIfNeeded", "(II)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_8cc8a10236476f23] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_5d51f1f447446760] = env->getMethodID(cls, "toString", "(II)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_11b109bd155ca898] = env->getMethodID(cls, "toStringRfc3339", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_11b109bd155ca898] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_5d51f1f447446760] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(II)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          JULIAN_EPOCH = new DateTimeComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateTimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateTimeComponents::DateTimeComponents(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c14c403a5c352d6, a0.this$, a1.this$)) {}

      DateTimeComponents::DateTimeComponents(const DateTimeComponents & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68cb5421234eef18, a0.this$, a1)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2981819d13ae2f57, a0, a1.this$, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e057cf067cded0b1, a0, a1.this$, a2, a3, a4, a5)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed1b0bf4ea7912b1, a0, a1, a2, a3, a4, a5)) {}

      jint DateTimeComponents::compareTo(const DateTimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_580f9f152eeb57a7], a0.this$);
      }

      jboolean DateTimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::org::orekit::time::DateComponents DateTimeComponents::getDate() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getDate_06e6477664d37caa]));
      }

      ::org::orekit::time::TimeComponents DateTimeComponents::getTime() const
      {
        return ::org::orekit::time::TimeComponents(env->callObjectMethod(this$, mids$[mid_getTime_844c883de8de25a4]));
      }

      jint DateTimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jdouble DateTimeComponents::offsetFrom(const DateTimeComponents & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_d9ea92929f2fc1c4], a0.this$);
      }

      DateTimeComponents DateTimeComponents::parseDateTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateTimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDateTime_a1ae90bb1e45c6d8], a0.this$));
      }

      DateTimeComponents DateTimeComponents::roundIfNeeded(jint a0, jint a1) const
      {
        return DateTimeComponents(env->callObjectMethod(this$, mids$[mid_roundIfNeeded_63daf82408c2d953], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8cc8a10236476f23], a0));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_5d51f1f447446760], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toStringRfc3339() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_11b109bd155ca898]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_11b109bd155ca898]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_5d51f1f447446760], a0, a1));
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
      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data);
      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data);
      static PyGetSetDef t_DateTimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateTimeComponents, date),
        DECLARE_GET_FIELD(t_DateTimeComponents, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateTimeComponents__methods_[] = {
        DECLARE_METHOD(t_DateTimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, getTime, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, offsetFrom, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, parseDateTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, roundIfNeeded, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringRfc3339, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateTimeComponents)[] = {
        { Py_tp_methods, t_DateTimeComponents__methods_ },
        { Py_tp_init, (void *) t_DateTimeComponents_init_ },
        { Py_tp_getset, t_DateTimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateTimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateTimeComponents, t_DateTimeComponents, DateTimeComponents);

      void t_DateTimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateTimeComponents), &PY_TYPE_DEF(DateTimeComponents), module, "DateTimeComponents", 0);
      }

      void t_DateTimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "class_", make_descriptor(DateTimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "wrapfn_", make_descriptor(t_DateTimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateTimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "JULIAN_EPOCH", make_descriptor(t_DateTimeComponents::wrap_Object(*DateTimeComponents::JULIAN_EPOCH)));
      }

      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateTimeComponents::initializeClass, 1)))
          return NULL;
        return t_DateTimeComponents::wrap_Object(DateTimeComponents(((t_DateTimeComponents *) arg)->object.this$));
      }
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateTimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            DateTimeComponents a0((jobject) NULL);
            jdouble a1;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kD", DateTimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKIIID", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self)
      {
        ::org::orekit::time::TimeComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateTimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateTimeComponents::parseDateTime(a0));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDateTime", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args)
      {
        jint a0;
        jint a1;
        DateTimeComponents result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.roundIfNeeded(a0, a1));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "roundIfNeeded", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
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
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringRfc3339());
        return j2p(result);
      }

      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
            return j2p(result);
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }

      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::TimeComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticModelLoader::class$ = NULL;
        jmethodID *GeoMagneticModelLoader::mids$ = NULL;
        bool GeoMagneticModelLoader::live$ = false;

        jclass GeoMagneticModelLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticModelLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getModels_37528d110cff6b74] = env->getMethodID(cls, "getModels", "()Ljava/util/Collection;");
            mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
            mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticModelLoader::GeoMagneticModelLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::util::Collection GeoMagneticModelLoader::getModels() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getModels_37528d110cff6b74]));
        }

        void GeoMagneticModelLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
        }

        jboolean GeoMagneticModelLoader::stillAcceptsData() const
        {
          return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args);
        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data);
        static PyGetSetDef t_GeoMagneticModelLoader__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticModelLoader, models),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticModelLoader__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticModelLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, getModels, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, loadData, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, stillAcceptsData, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticModelLoader)[] = {
          { Py_tp_methods, t_GeoMagneticModelLoader__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticModelLoader_init_ },
          { Py_tp_getset, t_GeoMagneticModelLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticModelLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticModelLoader, t_GeoMagneticModelLoader, GeoMagneticModelLoader);

        void t_GeoMagneticModelLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticModelLoader), &PY_TYPE_DEF(GeoMagneticModelLoader), module, "GeoMagneticModelLoader", 0);
        }

        void t_GeoMagneticModelLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "class_", make_descriptor(GeoMagneticModelLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "wrapfn_", make_descriptor(t_GeoMagneticModelLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticModelLoader::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticModelLoader::wrap_Object(GeoMagneticModelLoader(((t_GeoMagneticModelLoader *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticModelLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds)
        {
          GeoMagneticModelLoader object((jobject) NULL);

          INT_CALL(object = GeoMagneticModelLoader());
          self->object = object;

          return 0;
        }

        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::models::earth::PY_TYPE(GeoMagneticField));
        }

        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args)
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

        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.stillAcceptsData());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonCycleSlipDetectors::class$ = NULL;
          jmethodID *PythonCycleSlipDetectors::mids$ = NULL;
          bool PythonCycleSlipDetectors::live$ = false;

          jclass PythonCycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_detect_667c8a8776700e01] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonCycleSlipDetectors::PythonCycleSlipDetectors() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonCycleSlipDetectors::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonCycleSlipDetectors::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonCycleSlipDetectors::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self);
          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args);
          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data);
          static PyGetSetDef t_PythonCycleSlipDetectors__fields_[] = {
            DECLARE_GET_FIELD(t_PythonCycleSlipDetectors, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonCycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_PythonCycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonCycleSlipDetectors)[] = {
            { Py_tp_methods, t_PythonCycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) t_PythonCycleSlipDetectors_init_ },
            { Py_tp_getset, t_PythonCycleSlipDetectors__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonCycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonCycleSlipDetectors, t_PythonCycleSlipDetectors, PythonCycleSlipDetectors);

          void t_PythonCycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonCycleSlipDetectors), &PY_TYPE_DEF(PythonCycleSlipDetectors), module, "PythonCycleSlipDetectors", 1);
          }

          void t_PythonCycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "class_", make_descriptor(PythonCycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "wrapfn_", make_descriptor(t_PythonCycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonCycleSlipDetectors::initializeClass);
            JNINativeMethod methods[] = {
              { "detect", "(Ljava/util/List;)Ljava/util/List;", (void *) t_PythonCycleSlipDetectors_detect0 },
              { "pythonDecRef", "()V", (void *) t_PythonCycleSlipDetectors_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonCycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_PythonCycleSlipDetectors::wrap_Object(PythonCycleSlipDetectors(((t_PythonCycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonCycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds)
          {
            PythonCycleSlipDetectors object((jobject) NULL);

            INT_CALL(object = PythonCycleSlipDetectors());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args)
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

          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
            PyObject *result = PyObject_CallMethod(obj, "detect", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("detect", result);
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

          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data)
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
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$SumAndResidual::class$ = NULL;
      jmethodID *MathUtils$SumAndResidual::mids$ = NULL;
      bool MathUtils$SumAndResidual::live$ = false;

      jclass MathUtils$SumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$SumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_dff5885c2c873297] = env->getMethodID(cls, "getResidual", "()D");
          mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathUtils$SumAndResidual::getResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getResidual_dff5885c2c873297]);
      }

      jdouble MathUtils$SumAndResidual::getSum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
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
      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self);
      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data);
      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$SumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$SumAndResidual, sum),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$SumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$SumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$SumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$SumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$SumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$SumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$SumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$SumAndResidual, t_MathUtils$SumAndResidual, MathUtils$SumAndResidual);

      void t_MathUtils$SumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$SumAndResidual), &PY_TYPE_DEF(MathUtils$SumAndResidual), module, "MathUtils$SumAndResidual", 0);
      }

      void t_MathUtils$SumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "class_", make_descriptor(MathUtils$SumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$SumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$SumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$SumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$SumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$SumAndResidual::wrap_Object(MathUtils$SumAndResidual(((t_MathUtils$SumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$SumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$SumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$SumAndResidual_getResidual(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_getSum(t_MathUtils$SumAndResidual *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__residual(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_MathUtils$SumAndResidual_get__sum(t_MathUtils$SumAndResidual *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSum());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteAntenna::class$ = NULL;
        jmethodID *SatelliteAntenna::mids$ = NULL;
        bool SatelliteAntenna::live$ = false;

        jclass SatelliteAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_618045259a34ec5e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/antenna/SatelliteType;ILjava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCosparID_11b109bd155ca898] = env->getMethodID(cls, "getCosparID", "()Ljava/lang/String;");
            mids$[mid_getPrnNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getPrnNumber", "()I");
            mids$[mid_getSatelliteCode_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteCode", "()I");
            mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSatelliteType_c76d7b1c92427c06] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_getValidFrom_85703d13e302437e] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_85703d13e302437e] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SatelliteAntenna::SatelliteAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::gnss::antenna::SatelliteType & a5, jint a6, const ::java::lang::String & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::orekit::time::AbsoluteDate & a9) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_618045259a34ec5e, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6, a7.this$, a8.this$, a9.this$)) {}

        ::java::lang::String SatelliteAntenna::getCosparID() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCosparID_11b109bd155ca898]));
        }

        jint SatelliteAntenna::getPrnNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPrnNumber_570ce0828f81a2c1]);
        }

        jint SatelliteAntenna::getSatelliteCode() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCode_570ce0828f81a2c1]);
        }

        ::org::orekit::gnss::SatelliteSystem SatelliteAntenna::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
        }

        ::org::orekit::gnss::antenna::SatelliteType SatelliteAntenna::getSatelliteType() const
        {
          return ::org::orekit::gnss::antenna::SatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_c76d7b1c92427c06]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_85703d13e302437e]));
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
      namespace antenna {
        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data);
        static PyGetSetDef t_SatelliteAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteAntenna, cosparID),
          DECLARE_GET_FIELD(t_SatelliteAntenna, prnNumber),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteCode),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteSystem),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteType),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validFrom),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validUntil),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteAntenna__methods_[] = {
          DECLARE_METHOD(t_SatelliteAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, getCosparID, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getPrnNumber, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteCode, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteType, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidUntil, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteAntenna)[] = {
          { Py_tp_methods, t_SatelliteAntenna__methods_ },
          { Py_tp_init, (void *) t_SatelliteAntenna_init_ },
          { Py_tp_getset, t_SatelliteAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(SatelliteAntenna, t_SatelliteAntenna, SatelliteAntenna);

        void t_SatelliteAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteAntenna), &PY_TYPE_DEF(SatelliteAntenna), module, "SatelliteAntenna", 0);
        }

        void t_SatelliteAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "class_", make_descriptor(SatelliteAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "wrapfn_", make_descriptor(t_SatelliteAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteAntenna::initializeClass, 1)))
            return NULL;
          return t_SatelliteAntenna::wrap_Object(SatelliteAntenna(((t_SatelliteAntenna *) arg)->object.this$));
        }
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          ::org::orekit::gnss::antenna::SatelliteType a5((jobject) NULL);
          PyTypeObject **p5;
          jint a6;
          ::java::lang::String a7((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
          SatelliteAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKKIKIskk", ::java::util::Map::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::antenna::SatelliteType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5, &p5, ::org::orekit::gnss::antenna::t_SatelliteType::parameters_, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = SatelliteAntenna(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCosparID());
          return j2p(result);
        }

        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPrnNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::antenna::SatelliteType result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCosparID());
          return j2p(value);
        }

        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPrnNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCode());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::antenna::SatelliteType value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$NptRangeMeasurement::class$ = NULL;
        jmethodID *CRD$NptRangeMeasurement::mids$ = NULL;
        bool CRD$NptRangeMeasurement::live$ = false;

        jclass CRD$NptRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$NptRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_94189024dc8d45f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_init$_a4c52483ea5ba4c7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;DIDDDDDI)V");
            mids$[mid_getBinKurtosis_dff5885c2c873297] = env->getMethodID(cls, "getBinKurtosis", "()D");
            mids$[mid_getBinPeakMinusMean_dff5885c2c873297] = env->getMethodID(cls, "getBinPeakMinusMean", "()D");
            mids$[mid_getBinRms_dff5885c2c873297] = env->getMethodID(cls, "getBinRms", "()D");
            mids$[mid_getBinSkew_dff5885c2c873297] = env->getMethodID(cls, "getBinSkew", "()D");
            mids$[mid_getDetectorChannel_570ce0828f81a2c1] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getNumberOfRawRanges_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfRawRanges", "()I");
            mids$[mid_getReturnRate_dff5885c2c873297] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getWindowLength_dff5885c2c873297] = env->getMethodID(cls, "getWindowLength", "()D");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_94189024dc8d45f2, a0.this$, a1, a2, a3, a4.this$)) {}

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a4c52483ea5ba4c7, a0.this$, a1, a2, a3, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble CRD$NptRangeMeasurement::getBinKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinKurtosis_dff5885c2c873297]);
        }

        jdouble CRD$NptRangeMeasurement::getBinPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinPeakMinusMean_dff5885c2c873297]);
        }

        jdouble CRD$NptRangeMeasurement::getBinRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinRms_dff5885c2c873297]);
        }

        jdouble CRD$NptRangeMeasurement::getBinSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinSkew_dff5885c2c873297]);
        }

        jint CRD$NptRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_570ce0828f81a2c1]);
        }

        jint CRD$NptRangeMeasurement::getNumberOfRawRanges() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfRawRanges_570ce0828f81a2c1]);
        }

        jdouble CRD$NptRangeMeasurement::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_dff5885c2c873297]);
        }

        jdouble CRD$NptRangeMeasurement::getWindowLength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWindowLength_dff5885c2c873297]);
        }

        ::java::lang::String CRD$NptRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$NptRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$NptRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binKurtosis),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binPeakMinusMean),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binRms),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binSkew),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, numberOfRawRanges),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, returnRate),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, windowLength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$NptRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getNumberOfRawRanges, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getWindowLength, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$NptRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$NptRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$NptRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$NptRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$NptRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$NptRangeMeasurement, t_CRD$NptRangeMeasurement, CRD$NptRangeMeasurement);

        void t_CRD$NptRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$NptRangeMeasurement), &PY_TYPE_DEF(CRD$NptRangeMeasurement), module, "CRD$NptRangeMeasurement", 0);
        }

        void t_CRD$NptRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "class_", make_descriptor(CRD$NptRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$NptRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$NptRangeMeasurement::wrap_Object(CRD$NptRangeMeasurement(((t_CRD$NptRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              jint a12;
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDsDIDDDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWindowLength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWindowLength());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *HarmonicAccelerationModel::class$ = NULL;
        jmethodID *HarmonicAccelerationModel::mids$ = NULL;
        bool HarmonicAccelerationModel::live$ = false;

        jclass HarmonicAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/HarmonicAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_caed33cd3e9e45eb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_8bdf60d5551eceaf] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_0b7191d207b9680f] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicAccelerationModel::HarmonicAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_caed33cd3e9e45eb, a0.this$, a1.this$, a2, a3)) {}

        ::java::util::List HarmonicAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void HarmonicAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_8bdf60d5551eceaf], a0.this$, a1.this$));
        }

        jdouble HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_0b7191d207b9680f], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self);
        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data);
        static PyGetSetDef t_HarmonicAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_HarmonicAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HarmonicAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_HarmonicAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicAccelerationModel)[] = {
          { Py_tp_methods, t_HarmonicAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_HarmonicAccelerationModel_init_ },
          { Py_tp_getset, t_HarmonicAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicAccelerationModel, t_HarmonicAccelerationModel, HarmonicAccelerationModel);

        void t_HarmonicAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicAccelerationModel), &PY_TYPE_DEF(HarmonicAccelerationModel), module, "HarmonicAccelerationModel", 0);
        }

        void t_HarmonicAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "class_", make_descriptor(HarmonicAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "wrapfn_", make_descriptor(t_HarmonicAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_HarmonicAccelerationModel::wrap_Object(HarmonicAccelerationModel(((t_HarmonicAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jint a3;
          HarmonicAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = HarmonicAccelerationModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data)
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
#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *AbstractEncodedMessage::class$ = NULL;
          jmethodID *AbstractEncodedMessage::mids$ = NULL;
          bool AbstractEncodedMessage::live$ = false;

          jclass AbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/AbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_a1cf8c47dc9c5883] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_0fa09c18fee449d5] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractEncodedMessage::AbstractEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          jlong AbstractEncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_a1cf8c47dc9c5883], a0);
          }

          void AbstractEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0fa09c18fee449d5]);
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
        namespace parser {
          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg);
          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self);

          static PyMethodDef t_AbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_AbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractEncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_AbstractEncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractEncodedMessage)[] = {
            { Py_tp_methods, t_AbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_AbstractEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractEncodedMessage, t_AbstractEncodedMessage, AbstractEncodedMessage);

          void t_AbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractEncodedMessage), &PY_TYPE_DEF(AbstractEncodedMessage), module, "AbstractEncodedMessage", 0);
          }

          void t_AbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "class_", make_descriptor(AbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "wrapfn_", make_descriptor(t_AbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_AbstractEncodedMessage::wrap_Object(AbstractEncodedMessage(((t_AbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_AbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractEncodedMessage_init_(t_AbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            AbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = AbstractEncodedMessage());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractEncodedMessage_extractBits(t_AbstractEncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_AbstractEncodedMessage_start(t_AbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldContinuedFraction::class$ = NULL;
      jmethodID *FieldContinuedFraction::mids$ = NULL;
      bool FieldContinuedFraction::live$ = false;

      jclass FieldContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_a4b1871f4d29e58b] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_40cfe74535da4622] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_7fc015d41da5fb84] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_76ee700af6f4010d] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_e2b464e41c9ba627] = env->getMethodID(cls, "getA", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_e2b464e41c9ba627] = env->getMethodID(cls, "getB", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_a4b1871f4d29e58b], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_40cfe74535da4622], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_7fc015d41da5fb84], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, jint a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_76ee700af6f4010d], a0.this$, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getA(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e2b464e41c9ba627], a0, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getB(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_e2b464e41c9ba627], a0, a1.this$));
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
      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args);

      static PyMethodDef t_FieldContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_FieldContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, evaluate, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getB, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldContinuedFraction)[] = {
        { Py_tp_methods, t_FieldContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldContinuedFraction, t_FieldContinuedFraction, FieldContinuedFraction);

      void t_FieldContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldContinuedFraction), &PY_TYPE_DEF(FieldContinuedFraction), module, "FieldContinuedFraction", 0);
      }

      void t_FieldContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "class_", make_descriptor(FieldContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "wrapfn_", make_descriptor(t_FieldContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_FieldContinuedFraction::wrap_Object(FieldContinuedFraction(((t_FieldContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KDI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getA(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getA", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getB(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getB", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver::live$ = false;

        jclass BracketedRealFieldUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getRelativeAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_6172cc3975e8c981] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_2641ca05b8af2367] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_22f2fd692c77ef20] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");
            mids$[mid_solveInterval_6c3f0bd7fafc24ed] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_eba8e72a22c984ac]));
        }

        jint BracketedRealFieldUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_eba8e72a22c984ac]));
        }

        jint BracketedRealFieldUnivariateSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_6172cc3975e8c981], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_2641ca05b8af2367], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_22f2fd692c77ef20], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval BracketedRealFieldUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_6c3f0bd7fafc24ed], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver, t_BracketedRealFieldUnivariateSolver, BracketedRealFieldUnivariateSolver);
        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_Object(const BracketedRealFieldUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver *self = (t_BracketedRealFieldUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver), module, "BracketedRealFieldUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval)));
        }

        void t_BracketedRealFieldUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "class_", make_descriptor(BracketedRealFieldUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver::wrap_Object(BracketedRealFieldUnivariateSolver(((t_BracketedRealFieldUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_of_(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getAbsoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getFunctionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getMaxEvaluations(t_BracketedRealFieldUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_getRelativeAccuracy(t_BracketedRealFieldUnivariateSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solve(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_solveInterval(t_BracketedRealFieldUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver_get__parameters_(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__absoluteAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__evaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__functionValueAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__maxEvaluations(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver_get__relativeAccuracy(t_BracketedRealFieldUnivariateSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/StatUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *StatUtils::class$ = NULL;
      jmethodID *StatUtils::mids$ = NULL;
      bool StatUtils::live$ = false;

      jclass StatUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/StatUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_geometricMean_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "geometricMean", "([D)D");
          mids$[mid_geometricMean_556bede10daac330] = env->getStaticMethodID(cls, "geometricMean", "([DII)D");
          mids$[mid_max_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "max", "([D)D");
          mids$[mid_max_556bede10daac330] = env->getStaticMethodID(cls, "max", "([DII)D");
          mids$[mid_mean_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "mean", "([D)D");
          mids$[mid_mean_556bede10daac330] = env->getStaticMethodID(cls, "mean", "([DII)D");
          mids$[mid_meanDifference_b561c6892e9976f8] = env->getStaticMethodID(cls, "meanDifference", "([D[D)D");
          mids$[mid_min_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "min", "([D)D");
          mids$[mid_min_556bede10daac330] = env->getStaticMethodID(cls, "min", "([DII)D");
          mids$[mid_mode_ac3d742ccc742f22] = env->getStaticMethodID(cls, "mode", "([D)[D");
          mids$[mid_mode_41a59b6c86e2e047] = env->getStaticMethodID(cls, "mode", "([DII)[D");
          mids$[mid_normalize_ac3d742ccc742f22] = env->getStaticMethodID(cls, "normalize", "([D)[D");
          mids$[mid_percentile_1c41301ff6e224e7] = env->getStaticMethodID(cls, "percentile", "([DD)D");
          mids$[mid_percentile_9b4f2bb29c648b6e] = env->getStaticMethodID(cls, "percentile", "([DIID)D");
          mids$[mid_populationVariance_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "populationVariance", "([D)D");
          mids$[mid_populationVariance_1c41301ff6e224e7] = env->getStaticMethodID(cls, "populationVariance", "([DD)D");
          mids$[mid_populationVariance_556bede10daac330] = env->getStaticMethodID(cls, "populationVariance", "([DII)D");
          mids$[mid_populationVariance_82195b7753559055] = env->getStaticMethodID(cls, "populationVariance", "([DDII)D");
          mids$[mid_product_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "product", "([D)D");
          mids$[mid_product_556bede10daac330] = env->getStaticMethodID(cls, "product", "([DII)D");
          mids$[mid_sum_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "sum", "([D)D");
          mids$[mid_sum_556bede10daac330] = env->getStaticMethodID(cls, "sum", "([DII)D");
          mids$[mid_sumDifference_b561c6892e9976f8] = env->getStaticMethodID(cls, "sumDifference", "([D[D)D");
          mids$[mid_sumLog_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "sumLog", "([D)D");
          mids$[mid_sumLog_556bede10daac330] = env->getStaticMethodID(cls, "sumLog", "([DII)D");
          mids$[mid_sumSq_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "sumSq", "([D)D");
          mids$[mid_sumSq_556bede10daac330] = env->getStaticMethodID(cls, "sumSq", "([DII)D");
          mids$[mid_variance_9dc1ec0bcc0a9a29] = env->getStaticMethodID(cls, "variance", "([D)D");
          mids$[mid_variance_1c41301ff6e224e7] = env->getStaticMethodID(cls, "variance", "([DD)D");
          mids$[mid_variance_556bede10daac330] = env->getStaticMethodID(cls, "variance", "([DII)D");
          mids$[mid_variance_82195b7753559055] = env->getStaticMethodID(cls, "variance", "([DDII)D");
          mids$[mid_varianceDifference_81770d1e77838f28] = env->getStaticMethodID(cls, "varianceDifference", "([D[DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::meanDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanDifference_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_556bede10daac330], a0.this$, a1, a2);
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_ac3d742ccc742f22], a0.this$));
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_41a59b6c86e2e047], a0.this$, a1, a2));
      }

      JArray< jdouble > StatUtils::normalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalize_ac3d742ccc742f22], a0.this$));
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_1c41301ff6e224e7], a0.this$, a1);
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_9b4f2bb29c648b6e], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_1c41301ff6e224e7], a0.this$, a1);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_82195b7753559055], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumDifference_b561c6892e9976f8], a0.this$, a1.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_9dc1ec0bcc0a9a29], a0.this$);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_1c41301ff6e224e7], a0.this$, a1);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_556bede10daac330], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_82195b7753559055], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::varianceDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_varianceDifference_81770d1e77838f28], a0.this$, a1.this$, a2);
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
      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_StatUtils__methods_[] = {
        DECLARE_METHOD(t_StatUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, geometricMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, meanDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, normalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, percentile, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, populationVariance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, product, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumSq, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, variance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, varianceDifference, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StatUtils)[] = {
        { Py_tp_methods, t_StatUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StatUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StatUtils, t_StatUtils, StatUtils);

      void t_StatUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(StatUtils), &PY_TYPE_DEF(StatUtils), module, "StatUtils", 0);
      }

      void t_StatUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "class_", make_descriptor(StatUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "wrapfn_", make_descriptor(t_StatUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StatUtils::initializeClass, 1)))
          return NULL;
        return t_StatUtils::wrap_Object(StatUtils(((t_StatUtils *) arg)->object.this$));
      }
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StatUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "geometricMean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::meanDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0));
              return result.wrap();
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0, a1, a2));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError(type, "mode", args);
        return NULL;
      }

      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::normalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalize", arg);
        return NULL;
      }

      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "percentile", args);
        return NULL;
      }

      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "populationVariance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "product", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "sumDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumLog", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumSq", args);
        return NULL;
      }

      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "variance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::varianceDifference(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "varianceDifference", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSDP4::class$ = NULL;
          jmethodID *FieldSDP4::mids$ = NULL;
          bool FieldSDP4::live$ = false;

          jclass FieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_72479ee08453ef97] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_bee5c8ff86f4e777] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_thetaG_468ffc42a7c92dee] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/FieldAbsoluteDate;)D");
              mids$[mid_luniSolarTermsComputation_0fa09c18fee449d5] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_072c8635f2164db9] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_072c8635f2164db9] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args);
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data);
          static PyGetSetDef t_FieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSDP4)[] = {
            { Py_tp_methods, t_FieldSDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSDP4, t_FieldSDP4, FieldSDP4);
          PyObject *t_FieldSDP4::wrap_Object(const FieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSDP4), &PY_TYPE_DEF(FieldSDP4), module, "FieldSDP4", 0);
          }

          void t_FieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "class_", make_descriptor(FieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "wrapfn_", make_descriptor(t_FieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldSDP4::wrap_Object(FieldSDP4(((t_FieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaTurnAroundRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaTurnAroundRangeModifier::mids$ = NULL;
          bool OnBoardAntennaTurnAroundRangeModifier::live$ = false;

          jclass OnBoardAntennaTurnAroundRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaTurnAroundRangeModifier::OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

          ::java::util::List OnBoardAntennaTurnAroundRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OnBoardAntennaTurnAroundRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaTurnAroundRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaTurnAroundRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaTurnAroundRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaTurnAroundRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaTurnAroundRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaTurnAroundRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaTurnAroundRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaTurnAroundRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaTurnAroundRangeModifier, t_OnBoardAntennaTurnAroundRangeModifier, OnBoardAntennaTurnAroundRangeModifier);

          void t_OnBoardAntennaTurnAroundRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), &PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier), module, "OnBoardAntennaTurnAroundRangeModifier", 0);
          }

          void t_OnBoardAntennaTurnAroundRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "class_", make_descriptor(OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaTurnAroundRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaTurnAroundRangeModifier::wrap_Object(OnBoardAntennaTurnAroundRangeModifier(((t_OnBoardAntennaTurnAroundRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            OnBoardAntennaTurnAroundRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = OnBoardAntennaTurnAroundRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data)
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
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AbstractDetector::class$ = NULL;
        jmethodID *AbstractDetector::mids$ = NULL;
        bool AbstractDetector::live$ = false;
        jdouble AbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_551c102e543538fd] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_35e5947e4e8f061c] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_dff5885c2c873297] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_60bfd53e9474bbd1] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_7597e629f58eff02] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_694003c4eb6fbaa9] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/AdaptableInterval;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxIter_54534a9090a8f086] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withThreshold_7597e629f58eff02] = env->getMethodID(cls, "withThreshold", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_create_913a6d04c3b6bf64] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler AbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_551c102e543538fd]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_35e5947e4e8f061c]));
        }

        jint AbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        jdouble AbstractDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_dff5885c2c873297]);
        }

        void AbstractDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        jboolean AbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        AbstractDetector AbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_60bfd53e9474bbd1], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_7597e629f58eff02], a0));
        }

        AbstractDetector AbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_694003c4eb6fbaa9], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxIter(jint a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_54534a9090a8f086], a0));
        }

        AbstractDetector AbstractDetector::withThreshold(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_7597e629f58eff02], a0));
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
      namespace events {
        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data);
        static PyGetSetDef t_AbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractDetector, forward),
          DECLARE_GET_FIELD(t_AbstractDetector, handler),
          DECLARE_GET_FIELD(t_AbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractDetector, threshold),
          DECLARE_GET_FIELD(t_AbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDetector)[] = {
          { Py_tp_methods, t_AbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDetector, t_AbstractDetector, AbstractDetector);
        PyObject *t_AbstractDetector::wrap_Object(const AbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDetector), &PY_TYPE_DEF(AbstractDetector), module, "AbstractDetector", 0);
        }

        void t_AbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "class_", make_descriptor(AbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "wrapfn_", make_descriptor(t_AbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractDetector::wrap_Object(AbstractDetector(((t_AbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::AdaptableInterval a0((jobject) NULL);
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray$ExpansionMode::class$ = NULL;
      jmethodID *ResizableDoubleArray$ExpansionMode::mids$ = NULL;
      bool ResizableDoubleArray$ExpansionMode::live$ = false;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::ADDITIVE = NULL;
      ResizableDoubleArray$ExpansionMode *ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE = NULL;

      jclass ResizableDoubleArray$ExpansionMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray$ExpansionMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_5effd68285be8adc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_values_5446b6f9ce2b341a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "ADDITIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          MULTIPLICATIVE = new ResizableDoubleArray$ExpansionMode(env->getStaticObjectField(cls, "MULTIPLICATIVE", "Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray$ExpansionMode ResizableDoubleArray$ExpansionMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ResizableDoubleArray$ExpansionMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5effd68285be8adc], a0.this$));
      }

      JArray< ResizableDoubleArray$ExpansionMode > ResizableDoubleArray$ExpansionMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ResizableDoubleArray$ExpansionMode >(env->callStaticObjectMethod(cls, mids$[mid_values_5446b6f9ce2b341a]));
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
      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type);
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data);
      static PyGetSetDef t_ResizableDoubleArray$ExpansionMode__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray$ExpansionMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray$ExpansionMode__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray$ExpansionMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray$ExpansionMode)[] = {
        { Py_tp_methods, t_ResizableDoubleArray$ExpansionMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ResizableDoubleArray$ExpansionMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray$ExpansionMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray$ExpansionMode, t_ResizableDoubleArray$ExpansionMode, ResizableDoubleArray$ExpansionMode);
      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_Object(const ResizableDoubleArray$ExpansionMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ResizableDoubleArray$ExpansionMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ResizableDoubleArray$ExpansionMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ResizableDoubleArray$ExpansionMode *self = (t_ResizableDoubleArray$ExpansionMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ResizableDoubleArray$ExpansionMode::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray$ExpansionMode), &PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode), module, "ResizableDoubleArray$ExpansionMode", 0);
      }

      void t_ResizableDoubleArray$ExpansionMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "class_", make_descriptor(ResizableDoubleArray$ExpansionMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "wrapfn_", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(ResizableDoubleArray$ExpansionMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "ADDITIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::ADDITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray$ExpansionMode), "MULTIPLICATIVE", make_descriptor(t_ResizableDoubleArray$ExpansionMode::wrap_Object(*ResizableDoubleArray$ExpansionMode::MULTIPLICATIVE)));
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray$ExpansionMode::wrap_Object(ResizableDoubleArray$ExpansionMode(((t_ResizableDoubleArray$ExpansionMode *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray$ExpansionMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_of_(t_ResizableDoubleArray$ExpansionMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ResizableDoubleArray$ExpansionMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::valueOf(a0));
          return t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ResizableDoubleArray$ExpansionMode_values(PyTypeObject *type)
      {
        JArray< ResizableDoubleArray$ExpansionMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::values());
        return JArray<jobject>(result.this$).wrap(t_ResizableDoubleArray$ExpansionMode::wrap_jobject);
      }
      static PyObject *t_ResizableDoubleArray$ExpansionMode_get__parameters_(t_ResizableDoubleArray$ExpansionMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NavigationSystem::class$ = NULL;
          jmethodID *NavigationSystem::mids$ = NULL;
          bool NavigationSystem::live$ = false;
          NavigationSystem *NavigationSystem::BDS = NULL;
          NavigationSystem *NavigationSystem::EMPTY = NULL;
          NavigationSystem *NavigationSystem::GAL = NULL;
          NavigationSystem *NavigationSystem::GLO = NULL;
          NavigationSystem *NavigationSystem::GPS = NULL;
          NavigationSystem *NavigationSystem::QZS = NULL;
          NavigationSystem *NavigationSystem::SBAS = NULL;

          jclass NavigationSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NavigationSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationSystem_3146cb04e114db92] = env->getStaticMethodID(cls, "getNavigationSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_3146cb04e114db92] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_values_8a00c70ad784c536] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new NavigationSystem(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              EMPTY = new NavigationSystem(env->getStaticObjectField(cls, "EMPTY", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GAL = new NavigationSystem(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GLO = new NavigationSystem(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GPS = new NavigationSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              QZS = new NavigationSystem(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              SBAS = new NavigationSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NavigationSystem NavigationSystem::getNavigationSystem(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_getNavigationSystem_3146cb04e114db92], a0.this$));
          }

          ::java::lang::String NavigationSystem::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          NavigationSystem NavigationSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3146cb04e114db92], a0.this$));
          }

          JArray< NavigationSystem > NavigationSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< NavigationSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_8a00c70ad784c536]));
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
        namespace ntrip {
          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_NavigationSystem_values(PyTypeObject *type);
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data);
          static PyGetSetDef t_NavigationSystem__fields_[] = {
            DECLARE_GET_FIELD(t_NavigationSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NavigationSystem__methods_[] = {
            DECLARE_METHOD(t_NavigationSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, getNavigationSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, toString, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NavigationSystem)[] = {
            { Py_tp_methods, t_NavigationSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NavigationSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NavigationSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(NavigationSystem, t_NavigationSystem, NavigationSystem);
          PyObject *t_NavigationSystem::wrap_Object(const NavigationSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NavigationSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NavigationSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(NavigationSystem), &PY_TYPE_DEF(NavigationSystem), module, "NavigationSystem", 0);
          }

          void t_NavigationSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "class_", make_descriptor(NavigationSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "wrapfn_", make_descriptor(t_NavigationSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(NavigationSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "BDS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "EMPTY", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::EMPTY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GAL", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GLO", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GLO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GPS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "QZS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::QZS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "SBAS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::SBAS)));
          }

          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NavigationSystem::initializeClass, 1)))
              return NULL;
            return t_NavigationSystem::wrap_Object(NavigationSystem(((t_NavigationSystem *) arg)->object.this$));
          }
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NavigationSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::getNavigationSystem(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNavigationSystem", arg);
            return NULL;
          }

          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(NavigationSystem), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::valueOf(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_NavigationSystem_values(PyTypeObject *type)
          {
            JArray< NavigationSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::values());
            return JArray<jobject>(result.this$).wrap(t_NavigationSystem::wrap_jobject);
          }
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldStateMapper::class$ = NULL;
        jmethodID *FieldStateMapper::mids$ = NULL;
        bool FieldStateMapper::live$ = false;

        jclass FieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_eba8e72a22c984ac] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapArrayToState_2bc4466f5de6b26b] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapArrayToState_4538da74350c9224] = env->getMethodID(cls, "mapArrayToState", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapDateToDouble_2a5f05be83ff251d] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_mapDoubleToDate_1975a0ad09e731d5] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapDoubleToDate_dc6ab73d9602ecfc] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapStateToArray_e85151cf356bb2fe] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setPositionAngleType_0fa09c18fee449d5] = env->getMethodID(cls, "setPositionAngleType", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider FieldStateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
        }

        ::org::orekit::frames::Frame FieldStateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_eba8e72a22c984ac]));
        }

        ::org::orekit::orbits::OrbitType FieldStateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::orbits::PositionAngleType FieldStateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_51da00d5b8a3b5df]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_2bc4466f5de6b26b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_4538da74350c9224], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mapDateToDouble_2a5f05be83ff251d], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_1975a0ad09e731d5], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_dc6ab73d9602ecfc], a0.this$, a1.this$));
        }

        void FieldStateMapper::mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_e85151cf356bb2fe], a0.this$, a1.this$, a2.this$);
        }

        void FieldStateMapper::setPositionAngleType() const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_0fa09c18fee449d5]);
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
      namespace integration {
        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg);
        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data);
        static PyGetSetDef t_FieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldStateMapper, frame),
          DECLARE_GET_FIELD(t_FieldStateMapper, mu),
          DECLARE_GET_FIELD(t_FieldStateMapper, orbitType),
          DECLARE_GET_FIELD(t_FieldStateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_FieldStateMapper, referenceDate),
          DECLARE_GET_FIELD(t_FieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_FieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_FieldStateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, setPositionAngleType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStateMapper)[] = {
          { Py_tp_methods, t_FieldStateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStateMapper, t_FieldStateMapper, FieldStateMapper);
        PyObject *t_FieldStateMapper::wrap_Object(const FieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStateMapper), &PY_TYPE_DEF(FieldStateMapper), module, "FieldStateMapper", 0);
        }

        void t_FieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "class_", make_descriptor(FieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "wrapfn_", make_descriptor(t_FieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_FieldStateMapper::wrap_Object(FieldStateMapper(((t_FieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "K[K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self)
        {
          OBJ_CALL(self->object.setPositionAngleType());
          Py_RETURN_NONE;
        }
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformGenerator::class$ = NULL;
      jmethodID *TransformGenerator::mids$ = NULL;
      bool TransformGenerator::live$ = false;

      jclass TransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_db9023fa4795e93d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_8060cef9318d72e3] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TransformGenerator::TransformGenerator(jint a0, const ::org::orekit::frames::TransformProvider & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db9023fa4795e93d, a0, a1.this$, a2)) {}

      ::java::util::List TransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args);

      static PyMethodDef t_TransformGenerator__methods_[] = {
        DECLARE_METHOD(t_TransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformGenerator)[] = {
        { Py_tp_methods, t_TransformGenerator__methods_ },
        { Py_tp_init, (void *) t_TransformGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformGenerator, t_TransformGenerator, TransformGenerator);

      void t_TransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformGenerator), &PY_TYPE_DEF(TransformGenerator), module, "TransformGenerator", 0);
      }

      void t_TransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "class_", make_descriptor(TransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "wrapfn_", make_descriptor(t_TransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformGenerator::initializeClass, 1)))
          return NULL;
        return t_TransformGenerator::wrap_Object(TransformGenerator(((t_TransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jdouble a2;
        TransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "IkD", ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TransformGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(Transform));
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04::class$ = NULL;
              jmethodID *SsrIgm04::mids$ = NULL;
              bool SsrIgm04::live$ = false;

              jclass SsrIgm04::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_29af0ca298a45f10] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm04Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm04Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04::SsrIgm04(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_29af0ca298a45f10, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm04::getSsrIgm04Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm04Data_6f5a75ccd8c04465]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args);
              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self);
              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data);
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data);
              static PyGetSetDef t_SsrIgm04__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm04, ssrIgm04Data),
                DECLARE_GET_FIELD(t_SsrIgm04, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm04, getSsrIgm04Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04)[] = {
                { Py_tp_methods, t_SsrIgm04__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04_init_ },
                { Py_tp_getset, t_SsrIgm04__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm04, t_SsrIgm04, SsrIgm04);
              PyObject *t_SsrIgm04::wrap_Object(const SsrIgm04& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm04::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm04::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04), &PY_TYPE_DEF(SsrIgm04), module, "SsrIgm04", 0);
              }

              void t_SsrIgm04::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "class_", make_descriptor(SsrIgm04::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "wrapfn_", make_descriptor(t_SsrIgm04::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04::wrap_Object(SsrIgm04(((t_SsrIgm04 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm04 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm04(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap$Transition::class$ = NULL;
      jmethodID *FieldTimeSpanMap$Transition::mids$ = NULL;
      bool FieldTimeSpanMap$Transition::live$ = false;

      jclass FieldTimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsoluteDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getAbsoluteDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getAfter_4d26fd885228c716] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_4d26fd885228c716] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeSpanMap$Transition::getAbsoluteDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getAbsoluteDate_51da00d5b8a3b5df]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_4d26fd885228c716]));
      }

      ::java::lang::Object FieldTimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_4d26fd885228c716]));
      }

      ::org::orekit::time::AbsoluteDate FieldTimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
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
      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self);
      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, absoluteDate),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap$Transition, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeSpanMap$Transition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap$Transition, t_FieldTimeSpanMap$Transition, FieldTimeSpanMap$Transition);
      PyObject *t_FieldTimeSpanMap$Transition::wrap_Object(const FieldTimeSpanMap$Transition& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap$Transition *self = (t_FieldTimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap$Transition), &PY_TYPE_DEF(FieldTimeSpanMap$Transition), module, "FieldTimeSpanMap$Transition", 0);
      }

      void t_FieldTimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "class_", make_descriptor(FieldTimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "wrapfn_", make_descriptor(t_FieldTimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap$Transition::wrap_Object(FieldTimeSpanMap$Transition(((t_FieldTimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap$Transition_of_(t_FieldTimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAbsoluteDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getAfter(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getBefore(t_FieldTimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_getDate(t_FieldTimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap$Transition_get__parameters_(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__absoluteDate(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsoluteDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__after(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__before(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_FieldTimeSpanMap$Transition_get__date(t_FieldTimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$Segment::class$ = NULL;
        jmethodID *StreamingCpfWriter$Segment::mids$ = NULL;
        bool StreamingCpfWriter$Segment::live$ = false;

        jclass StreamingCpfWriter$Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_writeEphemerisLine_48579a0bdefdceaf] = env->getMethodID(cls, "writeEphemerisLine", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StreamingCpfWriter$Segment::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
        }

        void StreamingCpfWriter$Segment::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_0ee5c56004643a2e], a0.this$);
        }

        void StreamingCpfWriter$Segment::writeEphemerisLine(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_writeEphemerisLine_48579a0bdefdceaf], a0.this$);
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
        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg);

        static PyMethodDef t_StreamingCpfWriter$Segment__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, finish, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, handleStep, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter$Segment, writeEphemerisLine, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$Segment)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$Segment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$Segment, t_StreamingCpfWriter$Segment, StreamingCpfWriter$Segment);

        void t_StreamingCpfWriter$Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$Segment), &PY_TYPE_DEF(StreamingCpfWriter$Segment), module, "StreamingCpfWriter$Segment", 0);
        }

        void t_StreamingCpfWriter$Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "class_", make_descriptor(StreamingCpfWriter$Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "wrapfn_", make_descriptor(t_StreamingCpfWriter$Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter$Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$Segment::wrap_Object(StreamingCpfWriter$Segment(((t_StreamingCpfWriter$Segment *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$Segment_finish(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_handleStep(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter$Segment_writeEphemerisLine(t_StreamingCpfWriter$Segment *self, PyObject *arg)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
          {
            OBJ_CALL(self->object.writeEphemerisLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "writeEphemerisLine", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *ParametricUnivariateFunction::class$ = NULL;
      jmethodID *ParametricUnivariateFunction::mids$ = NULL;
      bool ParametricUnivariateFunction::live$ = false;

      jclass ParametricUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/ParametricUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
          mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > ParametricUnivariateFunction::gradient(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
      }

      jdouble ParametricUnivariateFunction::value(jdouble a0, const JArray< jdouble > & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args);
      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args);

      static PyMethodDef t_ParametricUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_ParametricUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, gradient, METH_VARARGS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametricUnivariateFunction)[] = {
        { Py_tp_methods, t_ParametricUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametricUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParametricUnivariateFunction, t_ParametricUnivariateFunction, ParametricUnivariateFunction);

      void t_ParametricUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametricUnivariateFunction), &PY_TYPE_DEF(ParametricUnivariateFunction), module, "ParametricUnivariateFunction", 0);
      }

      void t_ParametricUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "class_", make_descriptor(ParametricUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "wrapfn_", make_descriptor(t_ParametricUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametricUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_ParametricUnivariateFunction::wrap_Object(ParametricUnivariateFunction(((t_ParametricUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametricUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.gradient(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "gradient", args);
        return NULL;
      }

      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "D[D", &a0, &a1))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Type::class$ = NULL;
          jmethodID *Type::mids$ = NULL;
          bool Type::live$ = false;
          Type *Type::IGS_SSR = NULL;
          Type *Type::RTCM = NULL;

          jclass Type::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Type");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParser_09a99897ac758d1a] = env->getMethodID(cls, "getParser", "(Ljava/util/List;)Lorg/orekit/gnss/metric/parser/MessagesParser;");
              mids$[mid_valueOf_5f7adf9f2fff01b3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Type;");
              mids$[mid_values_3893020d89c71aeb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Type;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGS_SSR = new Type(env->getStaticObjectField(cls, "IGS_SSR", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              RTCM = new Type(env->getStaticObjectField(cls, "RTCM", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::parser::MessagesParser Type::getParser(const ::java::util::List & a0) const
          {
            return ::org::orekit::gnss::metric::parser::MessagesParser(env->callObjectMethod(this$, mids$[mid_getParser_09a99897ac758d1a], a0.this$));
          }

          Type Type::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Type(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f7adf9f2fff01b3], a0.this$));
          }

          JArray< Type > Type::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Type >(env->callStaticObjectMethod(cls, mids$[mid_values_3893020d89c71aeb]));
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
        namespace ntrip {
          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_of_(t_Type *self, PyObject *args);
          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg);
          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Type_values(PyTypeObject *type);
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data);
          static PyGetSetDef t_Type__fields_[] = {
            DECLARE_GET_FIELD(t_Type, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Type__methods_[] = {
            DECLARE_METHOD(t_Type, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, of_, METH_VARARGS),
            DECLARE_METHOD(t_Type, getParser, METH_O),
            DECLARE_METHOD(t_Type, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Type, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Type)[] = {
            { Py_tp_methods, t_Type__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Type__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Type)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Type, t_Type, Type);
          PyObject *t_Type::wrap_Object(const Type& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Type::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Type::install(PyObject *module)
          {
            installType(&PY_TYPE(Type), &PY_TYPE_DEF(Type), module, "Type", 0);
          }

          void t_Type::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "class_", make_descriptor(Type::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "wrapfn_", make_descriptor(t_Type::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "boxfn_", make_descriptor(boxObject));
            env->getClass(Type::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "IGS_SSR", make_descriptor(t_Type::wrap_Object(*Type::IGS_SSR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "RTCM", make_descriptor(t_Type::wrap_Object(*Type::RTCM)));
          }

          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Type::initializeClass, 1)))
              return NULL;
            return t_Type::wrap_Object(Type(((t_Type *) arg)->object.this$));
          }
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Type::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Type_of_(t_Type *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::metric::parser::MessagesParser result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.getParser(a0));
              return ::org::orekit::gnss::metric::parser::t_MessagesParser::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getParser", arg);
            return NULL;
          }

          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Type result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::valueOf(a0));
              return t_Type::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Type_values(PyTypeObject *type)
          {
            JArray< Type > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::values());
            return JArray<jobject>(result.this$).wrap(t_Type::wrap_jobject);
          }
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldRombergIntegrator::class$ = NULL;
        jmethodID *FieldRombergIntegrator::mids$ = NULL;
        bool FieldRombergIntegrator::live$ = false;
        jint FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldRombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldRombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_b63dedd7ffb51c0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b63dedd7ffb51c0c, a0.this$, a1, a2, a3, a4)) {}
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
      namespace integration {
        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args);
        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data);
        static PyGetSetDef t_FieldRombergIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldRombergIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldRombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldRombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldRombergIntegrator)[] = {
          { Py_tp_methods, t_FieldRombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldRombergIntegrator_init_ },
          { Py_tp_getset, t_FieldRombergIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldRombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldRombergIntegrator, t_FieldRombergIntegrator, FieldRombergIntegrator);
        PyObject *t_FieldRombergIntegrator::wrap_Object(const FieldRombergIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldRombergIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldRombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldRombergIntegrator), &PY_TYPE_DEF(FieldRombergIntegrator), module, "FieldRombergIntegrator", 0);
        }

        void t_FieldRombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "class_", make_descriptor(FieldRombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "wrapfn_", make_descriptor(t_FieldRombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldRombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldRombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldRombergIntegrator::wrap_Object(FieldRombergIntegrator(((t_FieldRombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldRombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldRombergIntegrator(a0));
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
              jint a2;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearObjectiveFunction::class$ = NULL;
        jmethodID *LinearObjectiveFunction::mids$ = NULL;
        bool LinearObjectiveFunction::live$ = false;

        jclass LinearObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc1ff02eb3693128] = env->getMethodID(cls, "<init>", "([DD)V");
            mids$[mid_init$_bec6f1a06b57756a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_aab4fbf77867daa8] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getConstantTerm_dff5885c2c873297] = env->getMethodID(cls, "getConstantTerm", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_value_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "value", "([D)D");
            mids$[mid_value_c579a73494d20c67] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearObjectiveFunction::LinearObjectiveFunction(const JArray< jdouble > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc1ff02eb3693128, a0.this$, a1)) {}

        LinearObjectiveFunction::LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bec6f1a06b57756a, a0.this$, a1)) {}

        jboolean LinearObjectiveFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearObjectiveFunction::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_aab4fbf77867daa8]));
        }

        jdouble LinearObjectiveFunction::getConstantTerm() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantTerm_dff5885c2c873297]);
        }

        jint LinearObjectiveFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        jdouble LinearObjectiveFunction::value(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_9dc1ec0bcc0a9a29], a0.this$);
        }

        jdouble LinearObjectiveFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_c579a73494d20c67], a0.this$);
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
      namespace linear {
        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data);
        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data);
        static PyGetSetDef t_LinearObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, coefficients),
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, constantTerm),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_LinearObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getConstantTerm, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearObjectiveFunction)[] = {
          { Py_tp_methods, t_LinearObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_LinearObjectiveFunction_init_ },
          { Py_tp_getset, t_LinearObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearObjectiveFunction, t_LinearObjectiveFunction, LinearObjectiveFunction);

        void t_LinearObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearObjectiveFunction), &PY_TYPE_DEF(LinearObjectiveFunction), module, "LinearObjectiveFunction", 0);
        }

        void t_LinearObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "class_", make_descriptor(LinearObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "wrapfn_", make_descriptor(t_LinearObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_LinearObjectiveFunction::wrap_Object(LinearObjectiveFunction(((t_LinearObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "[DD", &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
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

        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame$BaseEquipment::class$ = NULL;
          jmethodID *SpacecraftBodyFrame$BaseEquipment::mids$ = NULL;
          bool SpacecraftBodyFrame$BaseEquipment::live$ = false;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACC = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACTUATOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::AST = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::CSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::DSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ESA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::IMU_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::INSTRUMENT = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::MTA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::RW = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SC_BODY = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SENSOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::STARTRACKER = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::TAM = NULL;

          jclass SpacecraftBodyFrame$BaseEquipment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_591984f0fab2717d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_values_9d18e2738341cd0b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ACC = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACC", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ACTUATOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACTUATOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              AST = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "AST", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              CSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "CSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              DSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "DSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ESA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ESA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              IMU_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "IMU_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              INSTRUMENT = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "INSTRUMENT", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              MTA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "MTA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              RW = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "RW", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SC_BODY = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SC_BODY", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SENSOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              STARTRACKER = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "STARTRACKER", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              TAM = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "TAM", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame$BaseEquipment::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame$BaseEquipment(env->callStaticObjectMethod(cls, mids$[mid_valueOf_591984f0fab2717d], a0.this$));
          }

          JArray< SpacecraftBodyFrame$BaseEquipment > SpacecraftBodyFrame$BaseEquipment::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SpacecraftBodyFrame$BaseEquipment >(env->callStaticObjectMethod(cls, mids$[mid_values_9d18e2738341cd0b]));
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
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame$BaseEquipment__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame$BaseEquipment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame$BaseEquipment__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, of_, METH_VARARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame$BaseEquipment)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame$BaseEquipment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SpacecraftBodyFrame$BaseEquipment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame$BaseEquipment)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame$BaseEquipment, t_SpacecraftBodyFrame$BaseEquipment, SpacecraftBodyFrame$BaseEquipment);
          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(const SpacecraftBodyFrame$BaseEquipment& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SpacecraftBodyFrame$BaseEquipment::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame$BaseEquipment), &PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment), module, "SpacecraftBodyFrame$BaseEquipment", 0);
          }

          void t_SpacecraftBodyFrame$BaseEquipment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "class_", make_descriptor(SpacecraftBodyFrame$BaseEquipment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "boxfn_", make_descriptor(boxObject));
            env->getClass(SpacecraftBodyFrame$BaseEquipment::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACC", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACTUATOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACTUATOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "AST", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::AST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "CSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::CSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "DSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::DSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ESA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ESA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "IMU_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::IMU_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "INSTRUMENT", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::INSTRUMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "MTA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::MTA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "RW", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::RW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SC_BODY", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SC_BODY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SENSOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SENSOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "STARTRACKER", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::STARTRACKER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "TAM", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::TAM)));
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(SpacecraftBodyFrame$BaseEquipment(((t_SpacecraftBodyFrame$BaseEquipment *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::valueOf(a0));
              return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type)
          {
            JArray< SpacecraftBodyFrame$BaseEquipment > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::values());
            return JArray<jobject>(result.this$).wrap(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject);
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
