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
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getErrorIndex_d6ab429752e7c267] = env->getMethodID(cls, "getErrorIndex", "()I");
        mids$[mid_getIndex_d6ab429752e7c267] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setErrorIndex_8fd427ab23829bf5] = env->getMethodID(cls, "setErrorIndex", "(I)V");
        mids$[mid_setIndex_8fd427ab23829bf5] = env->getMethodID(cls, "setIndex", "(I)V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParsePosition::ParsePosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    jboolean ParsePosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint ParsePosition::getErrorIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorIndex_d6ab429752e7c267]);
    }

    jint ParsePosition::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_d6ab429752e7c267]);
    }

    jint ParsePosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    void ParsePosition::setErrorIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setErrorIndex_8fd427ab23829bf5], a0);
    }

    void ParsePosition::setIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setIndex_8fd427ab23829bf5], a0);
    }

    ::java::lang::String ParsePosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        mids$[mid_compare_efe12868eed29d7b] = env->getMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_naturalOrder_44d5f0105a5559b7] = env->getStaticMethodID(cls, "naturalOrder", "()Ljava/util/Comparator;");
        mids$[mid_nullsFirst_855f0cb3fda1e69f] = env->getStaticMethodID(cls, "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_nullsLast_855f0cb3fda1e69f] = env->getStaticMethodID(cls, "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_reverseOrder_44d5f0105a5559b7] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reversed_44d5f0105a5559b7] = env->getMethodID(cls, "reversed", "()Ljava/util/Comparator;");
        mids$[mid_thenComparing_855f0cb3fda1e69f] = env->getMethodID(cls, "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparator::compare(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callIntMethod(this$, mids$[mid_compare_efe12868eed29d7b], a0.this$, a1.this$);
    }

    jboolean Comparator::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    Comparator Comparator::naturalOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_naturalOrder_44d5f0105a5559b7]));
    }

    Comparator Comparator::nullsFirst(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsFirst_855f0cb3fda1e69f], a0.this$));
    }

    Comparator Comparator::nullsLast(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsLast_855f0cb3fda1e69f], a0.this$));
    }

    Comparator Comparator::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_44d5f0105a5559b7]));
    }

    Comparator Comparator::reversed() const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_reversed_44d5f0105a5559b7]));
    }

    Comparator Comparator::thenComparing(const Comparator & a0) const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_thenComparing_855f0cb3fda1e69f], a0.this$));
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
        mids$[mid_characteristics_d6ab429752e7c267] = env->getMethodID(cls, "characteristics", "()I");
        mids$[mid_estimateSize_42c72b98e3c2e08a] = env->getMethodID(cls, "estimateSize", "()J");
        mids$[mid_getComparator_44d5f0105a5559b7] = env->getMethodID(cls, "getComparator", "()Ljava/util/Comparator;");
        mids$[mid_getExactSizeIfKnown_42c72b98e3c2e08a] = env->getMethodID(cls, "getExactSizeIfKnown", "()J");
        mids$[mid_hasCharacteristics_e24caac814db1df5] = env->getMethodID(cls, "hasCharacteristics", "(I)Z");
        mids$[mid_trySplit_74c84c40cacaa7be] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator;");

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
      return env->callIntMethod(this$, mids$[mid_characteristics_d6ab429752e7c267]);
    }

    jlong Spliterator::estimateSize() const
    {
      return env->callLongMethod(this$, mids$[mid_estimateSize_42c72b98e3c2e08a]);
    }

    ::java::util::Comparator Spliterator::getComparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_getComparator_44d5f0105a5559b7]));
    }

    jlong Spliterator::getExactSizeIfKnown() const
    {
      return env->callLongMethod(this$, mids$[mid_getExactSizeIfKnown_42c72b98e3c2e08a]);
    }

    jboolean Spliterator::hasCharacteristics(jint a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasCharacteristics_e24caac814db1df5], a0);
    }

    Spliterator Spliterator::trySplit() const
    {
      return Spliterator(env->callObjectMethod(this$, mids$[mid_trySplit_74c84c40cacaa7be]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfInt.h"

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
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "java/text/Format$Field.h"
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
        mids$[mid_init$_5d68158e8e002563] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;)V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_6a3fe29d3103856c] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;I)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBeginIndex_d6ab429752e7c267] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_d6ab429752e7c267] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getField_d6ab429752e7c267] = env->getMethodID(cls, "getField", "()I");
        mids$[mid_getFieldAttribute_c105e9fa7ecd5265] = env->getMethodID(cls, "getFieldAttribute", "()Ljava/text/Format$Field;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setBeginIndex_8fd427ab23829bf5] = env->getMethodID(cls, "setBeginIndex", "(I)V");
        mids$[mid_setEndIndex_8fd427ab23829bf5] = env->getMethodID(cls, "setEndIndex", "(I)V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d68158e8e002563, a0.this$)) {}

    FieldPosition::FieldPosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a3fe29d3103856c, a0.this$, a1)) {}

    jboolean FieldPosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint FieldPosition::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_d6ab429752e7c267]);
    }

    jint FieldPosition::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_d6ab429752e7c267]);
    }

    jint FieldPosition::getField() const
    {
      return env->callIntMethod(this$, mids$[mid_getField_d6ab429752e7c267]);
    }

    ::java::text::Format$Field FieldPosition::getFieldAttribute() const
    {
      return ::java::text::Format$Field(env->callObjectMethod(this$, mids$[mid_getFieldAttribute_c105e9fa7ecd5265]));
    }

    jint FieldPosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    void FieldPosition::setBeginIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setBeginIndex_8fd427ab23829bf5], a0);
    }

    void FieldPosition::setEndIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setEndIndex_8fd427ab23829bf5], a0);
    }

    ::java::lang::String FieldPosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$IsoCountryCode::class$ = NULL;
    jmethodID *Locale$IsoCountryCode::mids$ = NULL;
    bool Locale$IsoCountryCode::live$ = false;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA2 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA3 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART3 = NULL;

    jclass Locale$IsoCountryCode::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$IsoCountryCode");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_0d1846a8387d8494] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;");
        mids$[mid_values_dc6e672986bd3e8d] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$IsoCountryCode;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        PART1_ALPHA2 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA2", "Ljava/util/Locale$IsoCountryCode;"));
        PART1_ALPHA3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA3", "Ljava/util/Locale$IsoCountryCode;"));
        PART3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART3", "Ljava/util/Locale$IsoCountryCode;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$IsoCountryCode Locale$IsoCountryCode::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$IsoCountryCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0d1846a8387d8494], a0.this$));
    }

    JArray< Locale$IsoCountryCode > Locale$IsoCountryCode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$IsoCountryCode >(env->callStaticObjectMethod(cls, mids$[mid_values_dc6e672986bd3e8d]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type);
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data);
    static PyGetSetDef t_Locale$IsoCountryCode__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$IsoCountryCode, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$IsoCountryCode__methods_[] = {
      DECLARE_METHOD(t_Locale$IsoCountryCode, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$IsoCountryCode)[] = {
      { Py_tp_methods, t_Locale$IsoCountryCode__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$IsoCountryCode__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$IsoCountryCode)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$IsoCountryCode, t_Locale$IsoCountryCode, Locale$IsoCountryCode);
    PyObject *t_Locale$IsoCountryCode::wrap_Object(const Locale$IsoCountryCode& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$IsoCountryCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$IsoCountryCode::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$IsoCountryCode), &PY_TYPE_DEF(Locale$IsoCountryCode), module, "Locale$IsoCountryCode", 0);
    }

    void t_Locale$IsoCountryCode::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "class_", make_descriptor(Locale$IsoCountryCode::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "wrapfn_", make_descriptor(t_Locale$IsoCountryCode::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$IsoCountryCode::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA2", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA2)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA3)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART3)));
    }

    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$IsoCountryCode::initializeClass, 1)))
        return NULL;
      return t_Locale$IsoCountryCode::wrap_Object(Locale$IsoCountryCode(((t_Locale$IsoCountryCode *) arg)->object.this$));
    }
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$IsoCountryCode::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$IsoCountryCode result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::valueOf(a0));
        return t_Locale$IsoCountryCode::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type)
    {
      JArray< Locale$IsoCountryCode > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$IsoCountryCode::wrap_jobject);
    }
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/SerializablePermission.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamConstants::class$ = NULL;
    jmethodID *ObjectStreamConstants::mids$ = NULL;
    bool ObjectStreamConstants::live$ = false;
    jint ObjectStreamConstants::PROTOCOL_VERSION_1 = (jint) 0;
    jint ObjectStreamConstants::PROTOCOL_VERSION_2 = (jint) 0;
    jbyte ObjectStreamConstants::SC_BLOCK_DATA = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_ENUM = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_EXTERNALIZABLE = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_SERIALIZABLE = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_WRITE_METHOD = (jbyte) 0;
    ::java::io::SerializablePermission *ObjectStreamConstants::SERIAL_FILTER_PERMISSION = NULL;
    jshort ObjectStreamConstants::STREAM_MAGIC = (jshort) 0;
    jshort ObjectStreamConstants::STREAM_VERSION = (jshort) 0;
    ::java::io::SerializablePermission *ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION = NULL;
    ::java::io::SerializablePermission *ObjectStreamConstants::SUBSTITUTION_PERMISSION = NULL;
    jbyte ObjectStreamConstants::TC_ARRAY = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BASE = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BLOCKDATA = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BLOCKDATALONG = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_CLASS = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_CLASSDESC = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_ENDBLOCKDATA = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_ENUM = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_EXCEPTION = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_LONGSTRING = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_MAX = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_NULL = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_OBJECT = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_PROXYCLASSDESC = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_REFERENCE = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_RESET = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_STRING = (jbyte) 0;
    jint ObjectStreamConstants::baseWireHandle = (jint) 0;

    jclass ObjectStreamConstants::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamConstants");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        PROTOCOL_VERSION_1 = env->getStaticIntField(cls, "PROTOCOL_VERSION_1");
        PROTOCOL_VERSION_2 = env->getStaticIntField(cls, "PROTOCOL_VERSION_2");
        SC_BLOCK_DATA = env->getStaticByteField(cls, "SC_BLOCK_DATA");
        SC_ENUM = env->getStaticByteField(cls, "SC_ENUM");
        SC_EXTERNALIZABLE = env->getStaticByteField(cls, "SC_EXTERNALIZABLE");
        SC_SERIALIZABLE = env->getStaticByteField(cls, "SC_SERIALIZABLE");
        SC_WRITE_METHOD = env->getStaticByteField(cls, "SC_WRITE_METHOD");
        SERIAL_FILTER_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SERIAL_FILTER_PERMISSION", "Ljava/io/SerializablePermission;"));
        STREAM_MAGIC = env->getStaticShortField(cls, "STREAM_MAGIC");
        STREAM_VERSION = env->getStaticShortField(cls, "STREAM_VERSION");
        SUBCLASS_IMPLEMENTATION_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SUBCLASS_IMPLEMENTATION_PERMISSION", "Ljava/io/SerializablePermission;"));
        SUBSTITUTION_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SUBSTITUTION_PERMISSION", "Ljava/io/SerializablePermission;"));
        TC_ARRAY = env->getStaticByteField(cls, "TC_ARRAY");
        TC_BASE = env->getStaticByteField(cls, "TC_BASE");
        TC_BLOCKDATA = env->getStaticByteField(cls, "TC_BLOCKDATA");
        TC_BLOCKDATALONG = env->getStaticByteField(cls, "TC_BLOCKDATALONG");
        TC_CLASS = env->getStaticByteField(cls, "TC_CLASS");
        TC_CLASSDESC = env->getStaticByteField(cls, "TC_CLASSDESC");
        TC_ENDBLOCKDATA = env->getStaticByteField(cls, "TC_ENDBLOCKDATA");
        TC_ENUM = env->getStaticByteField(cls, "TC_ENUM");
        TC_EXCEPTION = env->getStaticByteField(cls, "TC_EXCEPTION");
        TC_LONGSTRING = env->getStaticByteField(cls, "TC_LONGSTRING");
        TC_MAX = env->getStaticByteField(cls, "TC_MAX");
        TC_NULL = env->getStaticByteField(cls, "TC_NULL");
        TC_OBJECT = env->getStaticByteField(cls, "TC_OBJECT");
        TC_PROXYCLASSDESC = env->getStaticByteField(cls, "TC_PROXYCLASSDESC");
        TC_REFERENCE = env->getStaticByteField(cls, "TC_REFERENCE");
        TC_RESET = env->getStaticByteField(cls, "TC_RESET");
        TC_STRING = env->getStaticByteField(cls, "TC_STRING");
        baseWireHandle = env->getStaticIntField(cls, "baseWireHandle");
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
    static PyObject *t_ObjectStreamConstants_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamConstants_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_ObjectStreamConstants__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamConstants, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamConstants, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamConstants)[] = {
      { Py_tp_methods, t_ObjectStreamConstants__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamConstants)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamConstants, t_ObjectStreamConstants, ObjectStreamConstants);

    void t_ObjectStreamConstants::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamConstants), &PY_TYPE_DEF(ObjectStreamConstants), module, "ObjectStreamConstants", 0);
    }

    void t_ObjectStreamConstants::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "class_", make_descriptor(ObjectStreamConstants::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "wrapfn_", make_descriptor(t_ObjectStreamConstants::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectStreamConstants::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "PROTOCOL_VERSION_1", make_descriptor(ObjectStreamConstants::PROTOCOL_VERSION_1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "PROTOCOL_VERSION_2", make_descriptor(ObjectStreamConstants::PROTOCOL_VERSION_2));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_BLOCK_DATA", make_descriptor(ObjectStreamConstants::SC_BLOCK_DATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_ENUM", make_descriptor(ObjectStreamConstants::SC_ENUM));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_EXTERNALIZABLE", make_descriptor(ObjectStreamConstants::SC_EXTERNALIZABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_SERIALIZABLE", make_descriptor(ObjectStreamConstants::SC_SERIALIZABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_WRITE_METHOD", make_descriptor(ObjectStreamConstants::SC_WRITE_METHOD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SERIAL_FILTER_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SERIAL_FILTER_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "STREAM_MAGIC", make_descriptor(ObjectStreamConstants::STREAM_MAGIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "STREAM_VERSION", make_descriptor(ObjectStreamConstants::STREAM_VERSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SUBCLASS_IMPLEMENTATION_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SUBSTITUTION_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SUBSTITUTION_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ARRAY", make_descriptor(ObjectStreamConstants::TC_ARRAY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BASE", make_descriptor(ObjectStreamConstants::TC_BASE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BLOCKDATA", make_descriptor(ObjectStreamConstants::TC_BLOCKDATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BLOCKDATALONG", make_descriptor(ObjectStreamConstants::TC_BLOCKDATALONG));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_CLASS", make_descriptor(ObjectStreamConstants::TC_CLASS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_CLASSDESC", make_descriptor(ObjectStreamConstants::TC_CLASSDESC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ENDBLOCKDATA", make_descriptor(ObjectStreamConstants::TC_ENDBLOCKDATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ENUM", make_descriptor(ObjectStreamConstants::TC_ENUM));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_EXCEPTION", make_descriptor(ObjectStreamConstants::TC_EXCEPTION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_LONGSTRING", make_descriptor(ObjectStreamConstants::TC_LONGSTRING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_MAX", make_descriptor(ObjectStreamConstants::TC_MAX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_NULL", make_descriptor(ObjectStreamConstants::TC_NULL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_OBJECT", make_descriptor(ObjectStreamConstants::TC_OBJECT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_PROXYCLASSDESC", make_descriptor(ObjectStreamConstants::TC_PROXYCLASSDESC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_REFERENCE", make_descriptor(ObjectStreamConstants::TC_REFERENCE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_RESET", make_descriptor(ObjectStreamConstants::TC_RESET));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_STRING", make_descriptor(ObjectStreamConstants::TC_STRING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "baseWireHandle", make_descriptor(ObjectStreamConstants::baseWireHandle));
    }

    static PyObject *t_ObjectStreamConstants_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamConstants::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamConstants::wrap_Object(ObjectStreamConstants(((t_ObjectStreamConstants *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamConstants_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamConstants::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/lang/Class.h"
#include "java/io/ObjectInputFilter$Status.h"
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
        mids$[mid_checkInput_a9ed483445078249] = env->getMethodID(cls, "checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::io::ObjectInputFilter$Status ObjectInputFilter::checkInput(const ::java::io::ObjectInputFilter$FilterInfo & a0) const
    {
      return ::java::io::ObjectInputFilter$Status(env->callObjectMethod(this$, mids$[mid_checkInput_a9ed483445078249], a0.this$));
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
#include "java/io/FileDescriptor.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/io/SyncFailedException.h"
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_sync_ff7cb6c242604316] = env->getMethodID(cls, "sync", "()V");
        mids$[mid_valid_eee3de00fe971136] = env->getMethodID(cls, "valid", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new FileDescriptor(env->getStaticObjectField(cls, "err", "Ljava/io/FileDescriptor;"));
        in = new FileDescriptor(env->getStaticObjectField(cls, "in", "Ljava/io/FileDescriptor;"));
        out = new FileDescriptor(env->getStaticObjectField(cls, "out", "Ljava/io/FileDescriptor;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileDescriptor::FileDescriptor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    void FileDescriptor::sync() const
    {
      env->callVoidMethod(this$, mids$[mid_sync_ff7cb6c242604316]);
    }

    jboolean FileDescriptor::valid() const
    {
      return env->callBooleanMethod(this$, mids$[mid_valid_eee3de00fe971136]);
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
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Iterable::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    ::java::util::Spliterator Iterable::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
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
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ReflectiveOperationException::class$ = NULL;
    jmethodID *ReflectiveOperationException::mids$ = NULL;
    bool ReflectiveOperationException::live$ = false;

    jclass ReflectiveOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ReflectiveOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ReflectiveOperationException::ReflectiveOperationException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ReflectiveOperationException__methods_[] = {
      DECLARE_METHOD(t_ReflectiveOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ReflectiveOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ReflectiveOperationException)[] = {
      { Py_tp_methods, t_ReflectiveOperationException__methods_ },
      { Py_tp_init, (void *) t_ReflectiveOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ReflectiveOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ReflectiveOperationException, t_ReflectiveOperationException, ReflectiveOperationException);

    void t_ReflectiveOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ReflectiveOperationException), &PY_TYPE_DEF(ReflectiveOperationException), module, "ReflectiveOperationException", 0);
    }

    void t_ReflectiveOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "class_", make_descriptor(ReflectiveOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "wrapfn_", make_descriptor(t_ReflectiveOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ReflectiveOperationException::initializeClass, 1)))
        return NULL;
      return t_ReflectiveOperationException::wrap_Object(ReflectiveOperationException(((t_ReflectiveOperationException *) arg)->object.this$));
    }
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ReflectiveOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ReflectiveOperationException object((jobject) NULL);

          INT_CALL(object = ReflectiveOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ReflectiveOperationException(a0, a1));
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
#include "java/io/ObjectInput.h"
#include "java/io/IOException.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/AutoCloseable.h"
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
        mids$[mid_available_d6ab429752e7c267] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_89e14f411787412a] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_1351cbafe5a435a7] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readObject_704a5bee58538972] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint ObjectInput::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_d6ab429752e7c267]);
    }

    void ObjectInput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    jint ObjectInput::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_89e14f411787412a], a0.this$);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1351cbafe5a435a7], a0.this$, a1, a2);
    }

    ::java::lang::Object ObjectInput::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_704a5bee58538972]));
    }

    jlong ObjectInput::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_b81bfb528ebad57a] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_0c761b3f007c21e7] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
        mids$[mid_append_eb791e28837cce88] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
        mids$[mid_append_b75430db76a3dad4] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_append_27b7815b260a153f] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
        mids$[mid_append_270b1e5eb06c89f0] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
        mids$[mid_append_3889f5ea35d142da] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
        mids$[mid_append_ac8f6d43231c5228] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
        mids$[mid_append_206e407e207f1721] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_append_89bb5dfe1e995ae3] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_append_deb522cddb0e3b43] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_append_9cb76ec21cbb0222] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
        mids$[mid_append_e71f87a0e9add56f] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
        mids$[mid_append_ebe3468e985a743d] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_appendCodePoint_206e407e207f1721] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_compareTo_e2b23be63ff75330] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuilder;)I");
        mids$[mid_delete_0dd106bd695d21d7] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_deleteCharAt_206e407e207f1721] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_indexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_e4c7ac385522d820] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
        mids$[mid_insert_f6489dada9aa9cf8] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_9e9dfceaf7d53d56] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_f9e5df203a2f9328] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
        mids$[mid_insert_3cded527d96361c1] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
        mids$[mid_insert_8436321bc7143b59] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
        mids$[mid_insert_0dd106bd695d21d7] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_insert_eb8e797de1d8fab0] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_6d8b2982d8c58cd2] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_26bee8309f52e8a2] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_b2ac9a95c2df40d7] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
        mids$[mid_insert_3770e95f04a64467] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_lastIndexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_replace_18966afd4f6f73da] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_reverse_edef93a791ce9c05] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuilder::StringBuilder() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    StringBuilder::StringBuilder(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    StringBuilder::StringBuilder(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    StringBuilder::StringBuilder(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_b81bfb528ebad57a, a0.this$)) {}

    StringBuilder StringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_0c761b3f007c21e7], a0.this$));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_eb791e28837cce88], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::String & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_b75430db76a3dad4], a0.this$));
    }

    StringBuilder StringBuilder::append(jboolean a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_27b7815b260a153f], a0));
    }

    StringBuilder StringBuilder::append(jchar a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_270b1e5eb06c89f0], a0));
    }

    StringBuilder StringBuilder::append(jdouble a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_3889f5ea35d142da], a0));
    }

    StringBuilder StringBuilder::append(jfloat a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_ac8f6d43231c5228], a0));
    }

    StringBuilder StringBuilder::append(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_206e407e207f1721], a0));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_89bb5dfe1e995ae3], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::Object & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_deb522cddb0e3b43], a0.this$));
    }

    StringBuilder StringBuilder::append(jlong a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_9cb76ec21cbb0222], a0));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_e71f87a0e9add56f], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_ebe3468e985a743d], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::appendCodePoint(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_206e407e207f1721], a0));
    }

    jint StringBuilder::compareTo(const StringBuilder & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_e2b23be63ff75330], a0.this$);
    }

    StringBuilder StringBuilder::delete$(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_delete_0dd106bd695d21d7], a0, a1));
    }

    StringBuilder StringBuilder::deleteCharAt(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_206e407e207f1721], a0));
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e4c7ac385522d820], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_f6489dada9aa9cf8], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jboolean a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9e9dfceaf7d53d56], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jchar a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_f9e5df203a2f9328], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jdouble a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3cded527d96361c1], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jfloat a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_8436321bc7143b59], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_0dd106bd695d21d7], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_eb8e797de1d8fab0], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6d8b2982d8c58cd2], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jlong a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_26bee8309f52e8a2], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b2ac9a95c2df40d7], a0, a1.this$, a2, a3));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3770e95f04a64467], a0, a1.this$, a2, a3));
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    StringBuilder StringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_replace_18966afd4f6f73da], a0, a1, a2.this$));
    }

    StringBuilder StringBuilder::reverse() const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_edef93a791ce9c05]));
    }

    ::java::lang::String StringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        mids$[mid_run_ff7cb6c242604316] = env->getMethodID(cls, "run", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Runnable::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_ff7cb6c242604316]);
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_df2bb61624910c2a] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_3c81d70650b38107] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_72faff9b05f5ed5e] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_72faff9b05f5ed5e] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_21566f230cac5c4a] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_ca14a13ec9c67cd5] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_21566f230cac5c4a] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_ca14a13ec9c67cd5] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_3bf9f05b3327e056] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_ca14a13ec9c67cd5] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9bb49a94d944b361] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_ff7cb6c242604316] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Hashtable::Hashtable() : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Hashtable::Hashtable(jint a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    Hashtable::Hashtable(const ::java::util::Map & a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_df2bb61624910c2a, a0.this$)) {}

    Hashtable::Hashtable(jint a0, jfloat a1) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_3c81d70650b38107, a0, a1)) {}

    void Hashtable::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object Hashtable::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean Hashtable::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Hashtable::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Hashtable::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Enumeration Hashtable::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_21566f230cac5c4a]));
    }

    ::java::util::Set Hashtable::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    jboolean Hashtable::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Hashtable::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object Hashtable::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jint Hashtable::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Hashtable::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Set Hashtable::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    ::java::util::Enumeration Hashtable::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_21566f230cac5c4a]));
    }

    ::java::lang::Object Hashtable::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    void Hashtable::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
    }

    ::java::lang::Object Hashtable::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::Object Hashtable::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jboolean Hashtable::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_3bf9f05b3327e056], a0.this$, a1.this$);
    }

    ::java::lang::Object Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jboolean Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9bb49a94d944b361], a0.this$, a1.this$, a2.this$);
    }

    jint Hashtable::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::lang::String Hashtable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::util::Collection Hashtable::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_3bfef5c77ceb081a]));
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
#include "java/util/stream/Stream.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
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
        mids$[mid_empty_aa56605e3771f379] = env->getStaticMethodID(cls, "empty", "()Ljava/util/Optional;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_704a5bee58538972] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_eee3de00fe971136] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_f84efd32524f5b2c] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_ofNullable_f84efd32524f5b2c] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_or_ea72a799f32cba1b] = env->getMethodID(cls, "or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;");
        mids$[mid_orElse_05290476c26136d7] = env->getMethodID(cls, "orElse", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_orElseGet_6bfcbd8b6ed48f86] = env->getMethodID(cls, "orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_orElseThrow_704a5bee58538972] = env->getMethodID(cls, "orElseThrow", "()Ljava/lang/Object;");
        mids$[mid_orElseThrow_6bfcbd8b6ed48f86] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_stream_11e4ca8182c1933d] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Optional Optional::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_empty_aa56605e3771f379]));
    }

    jboolean Optional::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Optional::get$() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_704a5bee58538972]));
    }

    jint Optional::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Optional::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    jboolean Optional::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_eee3de00fe971136]);
    }

    Optional Optional::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_of_f84efd32524f5b2c], a0.this$));
    }

    Optional Optional::ofNullable(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_f84efd32524f5b2c], a0.this$));
    }

    Optional Optional::or$(const ::java::util::function::Supplier & a0) const
    {
      return Optional(env->callObjectMethod(this$, mids$[mid_or_ea72a799f32cba1b], a0.this$));
    }

    ::java::lang::Object Optional::orElse(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElse_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object Optional::orElseGet(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseGet_6bfcbd8b6ed48f86], a0.this$));
    }

    ::java::lang::Object Optional::orElseThrow() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_704a5bee58538972]));
    }

    ::java::lang::Object Optional::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_6bfcbd8b6ed48f86], a0.this$));
    }

    ::java::util::stream::Stream Optional::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_11e4ca8182c1933d]));
    }

    ::java::lang::String Optional::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
#include "java/io/IOException.h"
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
        mids$[mid_append_85176a1aef62cb03] = env->getMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
        mids$[mid_append_9f296d4ea96a6566] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
        mids$[mid_append_f1e99eecaf7506c2] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Appendable Appendable::append(jchar a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_85176a1aef62cb03], a0));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_9f296d4ea96a6566], a0.this$));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_f1e99eecaf7506c2], a0.this$, a1, a2));
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
        mids$[mid_append_8ce5b97b03671e04] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_4f3e4c687632b3b1] = env->getMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_d12ee5a47026a6c0] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_23c6d23458c3e098] = env->getMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_f98a32ff637b4879] = env->getMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_aafd223a2f867236] = env->getMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_9074be2309e33cad] = env->getMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_03874bf5ea9bbbf6] = env->getMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_67bf5ec4fd826cad] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_db5721482488f530] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_e2ca16355ce213f1] = env->getMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_0bff3dc9397af00b] = env->getMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_bd2737514828488f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_appendCodePoint_03874bf5ea9bbbf6] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_capacity_d6ab429752e7c267] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_80723b5d4f0fdfa2] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_91b9e1e34b2235d5] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_delete_b81670d10f98786b] = env->getMethodID(cls, "delete", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_deleteCharAt_03874bf5ea9bbbf6] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_ensureCapacity_8fd427ab23829bf5] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_58054e664fd79305] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_bfec7548c25557fc] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_0c5ff0819faaf979] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_ea8ab3af43bea4d8] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_4d1dbc48a152ac59] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_9955ea9a894d21d4] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_92c5ed6fa9245033] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_b81670d10f98786b] = env->getMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_c1759b722bf488c8] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_ac047cd895cc2283] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_f040af584a9bec42] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_099204001724bc39] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_5bbfca80aed43587] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_lastIndexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_d6ab429752e7c267] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_91b9e1e34b2235d5] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_1cfd722d6a2f4e89] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_reverse_18fd5c3d0d9616dd] = env->getMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
        mids$[mid_setCharAt_2768c52161be0306] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_8fd427ab23829bf5] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_b87db528df453723] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_c81987d6b0e2977a] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_43e3765e4d074a90] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_ff7cb6c242604316] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_8ce5b97b03671e04], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_4f3e4c687632b3b1], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::String & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_d12ee5a47026a6c0], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jboolean a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_23c6d23458c3e098], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jchar a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_f98a32ff637b4879], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jdouble a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_aafd223a2f867236], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jfloat a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_9074be2309e33cad], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_03874bf5ea9bbbf6], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_67bf5ec4fd826cad], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::Object & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_db5721482488f530], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jlong a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_e2ca16355ce213f1], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_0bff3dc9397af00b], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_bd2737514828488f], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::appendCodePoint(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_03874bf5ea9bbbf6], a0));
    }

    jint AbstractStringBuilder::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_d6ab429752e7c267]);
    }

    jchar AbstractStringBuilder::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_80723b5d4f0fdfa2], a0);
    }

    jint AbstractStringBuilder::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_d938fc64e8c6df2d], a0);
    }

    jint AbstractStringBuilder::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_d938fc64e8c6df2d], a0);
    }

    jint AbstractStringBuilder::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_91b9e1e34b2235d5], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::delete$(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_delete_b81670d10f98786b], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::deleteCharAt(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_03874bf5ea9bbbf6], a0));
    }

    void AbstractStringBuilder::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_8fd427ab23829bf5], a0);
    }

    void AbstractStringBuilder::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_58054e664fd79305], a0, a1, a2.this$, a3);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_bfec7548c25557fc], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_0c5ff0819faaf979], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jboolean a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_ea8ab3af43bea4d8], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jchar a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_4d1dbc48a152ac59], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jdouble a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9955ea9a894d21d4], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jfloat a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_92c5ed6fa9245033], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b81670d10f98786b], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_c1759b722bf488c8], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_ac047cd895cc2283], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jlong a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_f040af584a9bec42], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_099204001724bc39], a0, a1.this$, a2, a3));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_5bbfca80aed43587], a0, a1.this$, a2, a3));
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint AbstractStringBuilder::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_d6ab429752e7c267]);
    }

    jint AbstractStringBuilder::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_91b9e1e34b2235d5], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_replace_1cfd722d6a2f4e89], a0, a1, a2.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::reverse() const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_18fd5c3d0d9616dd]));
    }

    void AbstractStringBuilder::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_2768c52161be0306], a0, a1);
    }

    void AbstractStringBuilder::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_8fd427ab23829bf5], a0);
    }

    ::java::lang::CharSequence AbstractStringBuilder::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_b87db528df453723], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_c81987d6b0e2977a], a0));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_43e3765e4d074a90], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void AbstractStringBuilder::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_ff7cb6c242604316]);
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
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/String.h"
#include "java/util/Locale$FilteringMode.h"
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
        mids$[mid_valueOf_bf2c9ff71fbaf386] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;");
        mids$[mid_values_f68d540d6e5314ef] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$FilteringMode;");

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
      return Locale$FilteringMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bf2c9ff71fbaf386], a0.this$));
    }

    JArray< Locale$FilteringMode > Locale$FilteringMode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$FilteringMode >(env->callStaticObjectMethod(cls, mids$[mid_values_f68d540d6e5314ef]));
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
#include "java/util/EventListener.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventListener::class$ = NULL;
    jmethodID *EventListener::mids$ = NULL;
    bool EventListener::live$ = false;

    jclass EventListener::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventListener");

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
    static PyObject *t_EventListener_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventListener_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_EventListener__methods_[] = {
      DECLARE_METHOD(t_EventListener, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventListener, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventListener)[] = {
      { Py_tp_methods, t_EventListener__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventListener)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventListener, t_EventListener, EventListener);

    void t_EventListener::install(PyObject *module)
    {
      installType(&PY_TYPE(EventListener), &PY_TYPE_DEF(EventListener), module, "EventListener", 0);
    }

    void t_EventListener::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "class_", make_descriptor(EventListener::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "wrapfn_", make_descriptor(t_EventListener::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventListener_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventListener::initializeClass, 1)))
        return NULL;
      return t_EventListener::wrap_Object(EventListener(((t_EventListener *) arg)->object.this$));
    }
    static PyObject *t_EventListener_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventListener::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/NavigableSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableMap::class$ = NULL;
    jmethodID *NavigableMap::mids$ = NULL;
    bool NavigableMap::live$ = false;

    jclass NavigableMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceilingEntry_92c28c44129d7b42] = env->getMethodID(cls, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_ceilingKey_05290476c26136d7] = env->getMethodID(cls, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingKeySet_915193d823a938b2] = env->getMethodID(cls, "descendingKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_descendingMap_93ffcad6c2bfa505] = env->getMethodID(cls, "descendingMap", "()Ljava/util/NavigableMap;");
        mids$[mid_firstEntry_eeacaea585946ba0] = env->getMethodID(cls, "firstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_floorEntry_92c28c44129d7b42] = env->getMethodID(cls, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_floorKey_05290476c26136d7] = env->getMethodID(cls, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headMap_35686318c7d1689b] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_headMap_24303075871486e7] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_higherEntry_92c28c44129d7b42] = env->getMethodID(cls, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_higherKey_05290476c26136d7] = env->getMethodID(cls, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_lastEntry_eeacaea585946ba0] = env->getMethodID(cls, "lastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_lowerEntry_92c28c44129d7b42] = env->getMethodID(cls, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_lowerKey_05290476c26136d7] = env->getMethodID(cls, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_navigableKeySet_915193d823a938b2] = env->getMethodID(cls, "navigableKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_pollFirstEntry_eeacaea585946ba0] = env->getMethodID(cls, "pollFirstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_pollLastEntry_eeacaea585946ba0] = env->getMethodID(cls, "pollLastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_subMap_ba68c05ed4428e11] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_subMap_125cc268101c6b3f] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_tailMap_35686318c7d1689b] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_24303075871486e7] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Map$Entry NavigableMap::ceilingEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_ceilingEntry_92c28c44129d7b42], a0.this$));
    }

    ::java::lang::Object NavigableMap::ceilingKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceilingKey_05290476c26136d7], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::descendingKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingKeySet_915193d823a938b2]));
    }

    NavigableMap NavigableMap::descendingMap() const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_descendingMap_93ffcad6c2bfa505]));
    }

    ::java::util::Map$Entry NavigableMap::firstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_firstEntry_eeacaea585946ba0]));
    }

    ::java::util::Map$Entry NavigableMap::floorEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_floorEntry_92c28c44129d7b42], a0.this$));
    }

    ::java::lang::Object NavigableMap::floorKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floorKey_05290476c26136d7], a0.this$));
    }

    ::java::util::SortedMap NavigableMap::headMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_35686318c7d1689b], a0.this$));
    }

    NavigableMap NavigableMap::headMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_headMap_24303075871486e7], a0.this$, a1));
    }

    ::java::util::Map$Entry NavigableMap::higherEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_higherEntry_92c28c44129d7b42], a0.this$));
    }

    ::java::lang::Object NavigableMap::higherKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higherKey_05290476c26136d7], a0.this$));
    }

    ::java::util::Map$Entry NavigableMap::lastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lastEntry_eeacaea585946ba0]));
    }

    ::java::util::Map$Entry NavigableMap::lowerEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lowerEntry_92c28c44129d7b42], a0.this$));
    }

    ::java::lang::Object NavigableMap::lowerKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lowerKey_05290476c26136d7], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::navigableKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_navigableKeySet_915193d823a938b2]));
    }

    ::java::util::Map$Entry NavigableMap::pollFirstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollFirstEntry_eeacaea585946ba0]));
    }

    ::java::util::Map$Entry NavigableMap::pollLastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollLastEntry_eeacaea585946ba0]));
    }

    ::java::util::SortedMap NavigableMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_ba68c05ed4428e11], a0.this$, a1.this$));
    }

    NavigableMap NavigableMap::subMap(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_subMap_125cc268101c6b3f], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedMap NavigableMap::tailMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_35686318c7d1689b], a0.this$));
    }

    NavigableMap NavigableMap::tailMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_tailMap_24303075871486e7], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self);
    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data);
    static PyGetSetDef t_NavigableMap__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableMap__methods_[] = {
      DECLARE_METHOD(t_NavigableMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, ceilingEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, ceilingKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, descendingKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, descendingMap, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, firstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, floorEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, floorKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, headMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, higherEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, higherKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, lastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, lowerEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, lowerKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, navigableKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollFirstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollLastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, subMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, tailMap, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableMap)[] = {
      { Py_tp_methods, t_NavigableMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableMap)[] = {
      &PY_TYPE_DEF(::java::util::SortedMap),
      NULL
    };

    DEFINE_TYPE(NavigableMap, t_NavigableMap, NavigableMap);
    PyObject *t_NavigableMap::wrap_Object(const NavigableMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_NavigableMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_NavigableMap::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableMap), &PY_TYPE_DEF(NavigableMap), module, "NavigableMap", 0);
    }

    void t_NavigableMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "class_", make_descriptor(NavigableMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "wrapfn_", make_descriptor(t_NavigableMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableMap::initializeClass, 1)))
        return NULL;
      return t_NavigableMap::wrap_Object(NavigableMap(((t_NavigableMap *) arg)->object.this$));
    }
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self)
    {
      NavigableMap result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingMap());
      return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.firstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "floorEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floorKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "headMap", args, 2);
    }

    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "higherEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higherKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.lastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.navigableKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1, a2, a3));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "subMap", args, 2);
    }

    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "tailMap", args, 2);
    }
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *InstantiationException::class$ = NULL;
    jmethodID *InstantiationException::mids$ = NULL;
    bool InstantiationException::live$ = false;

    jclass InstantiationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/InstantiationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InstantiationException::InstantiationException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    InstantiationException::InstantiationException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InstantiationException__methods_[] = {
      DECLARE_METHOD(t_InstantiationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InstantiationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InstantiationException)[] = {
      { Py_tp_methods, t_InstantiationException__methods_ },
      { Py_tp_init, (void *) t_InstantiationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InstantiationException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(InstantiationException, t_InstantiationException, InstantiationException);

    void t_InstantiationException::install(PyObject *module)
    {
      installType(&PY_TYPE(InstantiationException), &PY_TYPE_DEF(InstantiationException), module, "InstantiationException", 0);
    }

    void t_InstantiationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "class_", make_descriptor(InstantiationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "wrapfn_", make_descriptor(t_InstantiationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InstantiationException::initializeClass, 1)))
        return NULL;
      return t_InstantiationException::wrap_Object(InstantiationException(((t_InstantiationException *) arg)->object.this$));
    }
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InstantiationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          InstantiationException object((jobject) NULL);

          INT_CALL(object = InstantiationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InstantiationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InstantiationException(a0));
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
        mids$[mid_charAt_80723b5d4f0fdfa2] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_compare_8ea9e8526dd8cb28] = env->getStaticMethodID(cls, "compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
        mids$[mid_length_d6ab429752e7c267] = env->getMethodID(cls, "length", "()I");
        mids$[mid_subSequence_b87db528df453723] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jchar CharSequence::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_80723b5d4f0fdfa2], a0);
    }

    jint CharSequence::compare(const CharSequence & a0, const CharSequence & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_8ea9e8526dd8cb28], a0.this$, a1.this$);
    }

    jint CharSequence::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_d6ab429752e7c267]);
    }

    CharSequence CharSequence::subSequence(jint a0, jint a1) const
    {
      return CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_b87db528df453723], a0, a1));
    }

    ::java::lang::String CharSequence::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
#include "java/lang/Module.h"
#include "java/lang/ModuleLayer.h"
#include "java/io/IOException.h"
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
        mids$[mid_addExports_fa179762981b12cb] = env->getMethodID(cls, "addExports", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addOpens_fa179762981b12cb] = env->getMethodID(cls, "addOpens", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addReads_02bb0c323bdfc90e] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addUses_b496a94db6cd6bc6] = env->getMethodID(cls, "addUses", "(Ljava/lang/Class;)Ljava/lang/Module;");
        mids$[mid_canRead_1b3f90ed17e1fa61] = env->getMethodID(cls, "canRead", "(Ljava/lang/Module;)Z");
        mids$[mid_canUse_2d405d48789924af] = env->getMethodID(cls, "canUse", "(Ljava/lang/Class;)Z");
        mids$[mid_getClassLoader_7e232a6d8e4f63bc] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getLayer_b270adc69fca1f17] = env->getMethodID(cls, "getLayer", "()Ljava/lang/ModuleLayer;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackages_6b191a9b12c1004b] = env->getMethodID(cls, "getPackages", "()Ljava/util/Set;");
        mids$[mid_getResourceAsStream_05f5377821499489] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_isExported_df4c65b2aede5c41] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;)Z");
        mids$[mid_isExported_b16a7971c55e163f] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_isNamed_eee3de00fe971136] = env->getMethodID(cls, "isNamed", "()Z");
        mids$[mid_isOpen_df4c65b2aede5c41] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;)Z");
        mids$[mid_isOpen_b16a7971c55e163f] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Module Module::addExports(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addExports_fa179762981b12cb], a0.this$, a1.this$));
    }

    Module Module::addOpens(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addOpens_fa179762981b12cb], a0.this$, a1.this$));
    }

    Module Module::addReads(const Module & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addReads_02bb0c323bdfc90e], a0.this$));
    }

    Module Module::addUses(const ::java::lang::Class & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addUses_b496a94db6cd6bc6], a0.this$));
    }

    jboolean Module::canRead(const Module & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_1b3f90ed17e1fa61], a0.this$);
    }

    jboolean Module::canUse(const ::java::lang::Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canUse_2d405d48789924af], a0.this$);
    }

    ::java::lang::ClassLoader Module::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_7e232a6d8e4f63bc]));
    }

    ::java::lang::ModuleLayer Module::getLayer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_getLayer_b270adc69fca1f17]));
    }

    ::java::lang::String Module::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    ::java::util::Set Module::getPackages() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getPackages_6b191a9b12c1004b]));
    }

    ::java::io::InputStream Module::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_05f5377821499489], a0.this$));
    }

    jboolean Module::isExported(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_df4c65b2aede5c41], a0.this$);
    }

    jboolean Module::isExported(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_b16a7971c55e163f], a0.this$, a1.this$);
    }

    jboolean Module::isNamed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNamed_eee3de00fe971136]);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_df4c65b2aede5c41], a0.this$);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_b16a7971c55e163f], a0.this$, a1.this$);
    }

    ::java::lang::String Module::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_defaulted_df4c65b2aede5c41] = env->getMethodID(cls, "defaulted", "(Ljava/lang/String;)Z");
        mids$[mid_get_4eb9aacd05482ae5] = env->getMethodID(cls, "get", "(Ljava/lang/String;Z)Z");
        mids$[mid_get_296f28f48ee46d22] = env->getMethodID(cls, "get", "(Ljava/lang/String;B)B");
        mids$[mid_get_aac5156a81a4da28] = env->getMethodID(cls, "get", "(Ljava/lang/String;C)C");
        mids$[mid_get_6249386b87b57efb] = env->getMethodID(cls, "get", "(Ljava/lang/String;D)D");
        mids$[mid_get_a27a778907596859] = env->getMethodID(cls, "get", "(Ljava/lang/String;F)F");
        mids$[mid_get_36da4b2d3bc5085f] = env->getMethodID(cls, "get", "(Ljava/lang/String;I)I");
        mids$[mid_get_171ef0dce466b6cc] = env->getMethodID(cls, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_get_c0ee6a335f92e4aa] = env->getMethodID(cls, "get", "(Ljava/lang/String;J)J");
        mids$[mid_get_c81bea946077ea6e] = env->getMethodID(cls, "get", "(Ljava/lang/String;S)S");
        mids$[mid_getObjectStreamClass_bd13c6c1b9563bca] = env->getMethodID(cls, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream$GetField::ObjectInputStream$GetField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    jboolean ObjectInputStream$GetField::defaulted(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_defaulted_df4c65b2aede5c41], a0.this$);
    }

    jboolean ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_get_4eb9aacd05482ae5], a0.this$, a1);
    }

    jbyte ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jbyte a1) const
    {
      return env->callByteMethod(this$, mids$[mid_get_296f28f48ee46d22], a0.this$, a1);
    }

    jchar ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jchar a1) const
    {
      return env->callCharMethod(this$, mids$[mid_get_aac5156a81a4da28], a0.this$, a1);
    }

    jdouble ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jdouble a1) const
    {
      return env->callDoubleMethod(this$, mids$[mid_get_6249386b87b57efb], a0.this$, a1);
    }

    jfloat ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jfloat a1) const
    {
      return env->callFloatMethod(this$, mids$[mid_get_a27a778907596859], a0.this$, a1);
    }

    jint ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_get_36da4b2d3bc5085f], a0.this$, a1);
    }

    ::java::lang::Object ObjectInputStream$GetField::get$(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_171ef0dce466b6cc], a0.this$, a1.this$));
    }

    jlong ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jlong a1) const
    {
      return env->callLongMethod(this$, mids$[mid_get_c0ee6a335f92e4aa], a0.this$, a1);
    }

    jshort ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jshort a1) const
    {
      return env->callShortMethod(this$, mids$[mid_get_c81bea946077ea6e], a0.this$, a1);
    }

    ::java::io::ObjectStreamClass ObjectInputStream$GetField::getObjectStreamClass() const
    {
      return ::java::io::ObjectStreamClass(env->callObjectMethod(this$, mids$[mid_getObjectStreamClass_bd13c6c1b9563bca]));
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
        mids$[mid_compareTo_9aa1a0d21cdeb90e] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparable::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_9aa1a0d21cdeb90e], a0.this$);
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
        mids$[mid_comparingByKey_44d5f0105a5559b7] = env->getStaticMethodID(cls, "comparingByKey", "()Ljava/util/Comparator;");
        mids$[mid_comparingByKey_855f0cb3fda1e69f] = env->getStaticMethodID(cls, "comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_comparingByValue_44d5f0105a5559b7] = env->getStaticMethodID(cls, "comparingByValue", "()Ljava/util/Comparator;");
        mids$[mid_comparingByValue_855f0cb3fda1e69f] = env->getStaticMethodID(cls, "comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getKey_704a5bee58538972] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
        mids$[mid_getValue_704a5bee58538972] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setValue_05290476c26136d7] = env->getMethodID(cls, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator Map$Entry::comparingByKey()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_44d5f0105a5559b7]));
    }

    ::java::util::Comparator Map$Entry::comparingByKey(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_855f0cb3fda1e69f], a0.this$));
    }

    ::java::util::Comparator Map$Entry::comparingByValue()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_44d5f0105a5559b7]));
    }

    ::java::util::Comparator Map$Entry::comparingByValue(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_855f0cb3fda1e69f], a0.this$));
    }

    jboolean Map$Entry::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Map$Entry::getKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_704a5bee58538972]));
    }

    ::java::lang::Object Map$Entry::getValue() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_704a5bee58538972]));
    }

    jint Map$Entry::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    ::java::lang::Object Map$Entry::setValue(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setValue_05290476c26136d7], a0.this$));
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
#include "java/util/Currency.h"
#include "java/util/Locale.h"
#include "java/util/Currency.h"
#include "java/io/Serializable.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Currency::class$ = NULL;
    jmethodID *Currency::mids$ = NULL;
    bool Currency::live$ = false;

    jclass Currency::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Currency");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAvailableCurrencies_6b191a9b12c1004b] = env->getStaticMethodID(cls, "getAvailableCurrencies", "()Ljava/util/Set;");
        mids$[mid_getCurrencyCode_d2c8eb4129821f0e] = env->getMethodID(cls, "getCurrencyCode", "()Ljava/lang/String;");
        mids$[mid_getDefaultFractionDigits_d6ab429752e7c267] = env->getMethodID(cls, "getDefaultFractionDigits", "()I");
        mids$[mid_getDisplayName_d2c8eb4129821f0e] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_5969ecf7afac3dba] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getInstance_14444ab181fefaec] = env->getStaticMethodID(cls, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
        mids$[mid_getInstance_3359684fedb7adc8] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
        mids$[mid_getNumericCode_d6ab429752e7c267] = env->getMethodID(cls, "getNumericCode", "()I");
        mids$[mid_getNumericCodeAsString_d2c8eb4129821f0e] = env->getMethodID(cls, "getNumericCodeAsString", "()Ljava/lang/String;");
        mids$[mid_getSymbol_d2c8eb4129821f0e] = env->getMethodID(cls, "getSymbol", "()Ljava/lang/String;");
        mids$[mid_getSymbol_5969ecf7afac3dba] = env->getMethodID(cls, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set Currency::getAvailableCurrencies()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getAvailableCurrencies_6b191a9b12c1004b]));
    }

    ::java::lang::String Currency::getCurrencyCode() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencyCode_d2c8eb4129821f0e]));
    }

    jint Currency::getDefaultFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultFractionDigits_d6ab429752e7c267]);
    }

    ::java::lang::String Currency::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_d2c8eb4129821f0e]));
    }

    ::java::lang::String Currency::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_5969ecf7afac3dba], a0.this$));
    }

    Currency Currency::getInstance(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_14444ab181fefaec], a0.this$));
    }

    Currency Currency::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3359684fedb7adc8], a0.this$));
    }

    jint Currency::getNumericCode() const
    {
      return env->callIntMethod(this$, mids$[mid_getNumericCode_d6ab429752e7c267]);
    }

    ::java::lang::String Currency::getNumericCodeAsString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNumericCodeAsString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Currency::getSymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_d2c8eb4129821f0e]));
    }

    ::java::lang::String Currency::getSymbol(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_5969ecf7afac3dba], a0.this$));
    }

    ::java::lang::String Currency::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type);
    static PyObject *t_Currency_getCurrencyCode(t_Currency *self);
    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self);
    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_Currency_getNumericCode(t_Currency *self);
    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self);
    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data);
    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data);
    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data);
    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data);
    static PyGetSetDef t_Currency__fields_[] = {
      DECLARE_GET_FIELD(t_Currency, availableCurrencies),
      DECLARE_GET_FIELD(t_Currency, currencyCode),
      DECLARE_GET_FIELD(t_Currency, defaultFractionDigits),
      DECLARE_GET_FIELD(t_Currency, displayName),
      DECLARE_GET_FIELD(t_Currency, numericCode),
      DECLARE_GET_FIELD(t_Currency, numericCodeAsString),
      DECLARE_GET_FIELD(t_Currency, symbol),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Currency__methods_[] = {
      DECLARE_METHOD(t_Currency, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, getAvailableCurrencies, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getCurrencyCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDefaultFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Currency, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getNumericCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getNumericCodeAsString, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getSymbol, METH_VARARGS),
      DECLARE_METHOD(t_Currency, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Currency)[] = {
      { Py_tp_methods, t_Currency__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Currency__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Currency)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Currency, t_Currency, Currency);

    void t_Currency::install(PyObject *module)
    {
      installType(&PY_TYPE(Currency), &PY_TYPE_DEF(Currency), module, "Currency", 0);
    }

    void t_Currency::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "class_", make_descriptor(Currency::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "wrapfn_", make_descriptor(t_Currency::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Currency::initializeClass, 1)))
        return NULL;
      return t_Currency::wrap_Object(Currency(((t_Currency *) arg)->object.this$));
    }
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Currency::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Currency::getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(result, ::java::util::PY_TYPE(Currency));
    }

    static PyObject *t_Currency_getCurrencyCode(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencyCode());
      return j2p(result);
    }

    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
        {
          ::java::util::Locale a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_Currency_getNumericCode(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getNumericCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNumericCodeAsString());
      return j2p(result);
    }

    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSymbol());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getSymbol(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getSymbol", args);
      return NULL;
    }

    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Currency), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyCode());
      return j2p(value);
    }

    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getNumericCode());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumericCodeAsString());
      return j2p(value);
    }

    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSymbol());
      return j2p(value);
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
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_4a1c1c41794e71b1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getRange_d2c8eb4129821f0e] = env->getMethodID(cls, "getRange", "()Ljava/lang/String;");
        mids$[mid_getWeight_9981f74b2d109da6] = env->getMethodID(cls, "getWeight", "()D");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_mapEquivalents_5eb575f36d85aaf3] = env->getStaticMethodID(cls, "mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_parse_7a823e7285fdf3d6] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_parse_3cc66afed2b66fb1] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_WEIGHT = env->getStaticDoubleField(cls, "MAX_WEIGHT");
        MIN_WEIGHT = env->getStaticDoubleField(cls, "MIN_WEIGHT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a1c1c41794e71b1, a0.this$, a1)) {}

    jboolean Locale$LanguageRange::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String Locale$LanguageRange::getRange() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRange_d2c8eb4129821f0e]));
    }

    jdouble Locale$LanguageRange::getWeight() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getWeight_9981f74b2d109da6]);
    }

    jint Locale$LanguageRange::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    ::java::util::List Locale$LanguageRange::mapEquivalents(const ::java::util::List & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_mapEquivalents_5eb575f36d85aaf3], a0.this$, a1.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_7a823e7285fdf3d6], a0.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_3cc66afed2b66fb1], a0.this$, a1.this$));
    }

    ::java::lang::String Locale$LanguageRange::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Closeable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
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
#include "java/util/ResourceBundle.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/util/ResourceBundle.h"
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clearCache_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearCache", "()V");
        mids$[mid_clearCache_a61ce527d5e72f5b] = env->getStaticMethodID(cls, "clearCache", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_containsKey_df4c65b2aede5c41] = env->getMethodID(cls, "containsKey", "(Ljava/lang/String;)Z");
        mids$[mid_getBaseBundleName_d2c8eb4129821f0e] = env->getMethodID(cls, "getBaseBundleName", "()Ljava/lang/String;");
        mids$[mid_getBundle_28d801a7a9e4fcc5] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_1a5482ec6ba3acfb] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_1e239705ec6f776d] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_07340b09173eae4b] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_5374368a5a436b81] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_f8dd4077cd9fa3df] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_ddcefc58f8bc9f25] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_4345967f9a576955] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getKeys_21566f230cac5c4a] = env->getMethodID(cls, "getKeys", "()Ljava/util/Enumeration;");
        mids$[mid_getLocale_19f55af8c42f77cb] = env->getMethodID(cls, "getLocale", "()Ljava/util/Locale;");
        mids$[mid_getObject_bb1ff484ae64c57e] = env->getMethodID(cls, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_getString_95277969d373e11f] = env->getMethodID(cls, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getStringArray_8e8aaefa3268abcf] = env->getMethodID(cls, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_handleGetObject_bb1ff484ae64c57e] = env->getMethodID(cls, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_handleKeySet_6b191a9b12c1004b] = env->getMethodID(cls, "handleKeySet", "()Ljava/util/Set;");
        mids$[mid_setParent_d452cc51c7625c54] = env->getMethodID(cls, "setParent", "(Ljava/util/ResourceBundle;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ResourceBundle::ResourceBundle() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    void ResourceBundle::clearCache()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_ff7cb6c242604316]);
    }

    void ResourceBundle::clearCache(const ::java::lang::ClassLoader & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_a61ce527d5e72f5b], a0.this$);
    }

    jboolean ResourceBundle::containsKey(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_df4c65b2aede5c41], a0.this$);
    }

    ::java::lang::String ResourceBundle::getBaseBundleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBaseBundleName_d2c8eb4129821f0e]));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_28d801a7a9e4fcc5], a0.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::lang::Module & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_1a5482ec6ba3acfb], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_1e239705ec6f776d], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::ResourceBundle$Control & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_07340b09173eae4b], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_5374368a5a436b81], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::Module & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_f8dd4077cd9fa3df], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::util::ResourceBundle$Control & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_ddcefc58f8bc9f25], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2, const ::java::util::ResourceBundle$Control & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_4345967f9a576955], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::java::util::Enumeration ResourceBundle::getKeys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getKeys_21566f230cac5c4a]));
    }

    ::java::util::Locale ResourceBundle::getLocale() const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getLocale_19f55af8c42f77cb]));
    }

    ::java::lang::Object ResourceBundle::getObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getObject_bb1ff484ae64c57e], a0.this$));
    }

    ::java::lang::String ResourceBundle::getString(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getString_95277969d373e11f], a0.this$));
    }

    JArray< ::java::lang::String > ResourceBundle::getStringArray(const ::java::lang::String & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getStringArray_8e8aaefa3268abcf], a0.this$));
    }

    ::java::util::Set ResourceBundle::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
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
#include "java/util/Locale$Category.h"
#include "java/lang/String.h"
#include "java/util/Locale$Category.h"
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
        mids$[mid_valueOf_6ea35477c84ea2ba] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;");
        mids$[mid_values_49b0b5bba5ce4f47] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$Category;");

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
      return Locale$Category(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6ea35477c84ea2ba], a0.this$));
    }

    JArray< Locale$Category > Locale$Category::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$Category >(env->callStaticObjectMethod(cls, mids$[mid_values_49b0b5bba5ce4f47]));
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
