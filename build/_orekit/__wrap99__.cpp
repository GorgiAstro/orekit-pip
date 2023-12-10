#include <jni.h>
#include "JCCEnv.h"
#include "java/util/SortedSet.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *SortedSet::class$ = NULL;
    jmethodID *SortedSet::mids$ = NULL;
    bool SortedSet::live$ = false;

    jclass SortedSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/SortedSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparator_96e45e3694fbbb22] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_first_4d26fd885228c716] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_headSet_c07cc04010820225] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_last_4d26fd885228c716] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_91c93627253b416a] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_c07cc04010820225] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_96e45e3694fbbb22]));
    }

    ::java::lang::Object SortedSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_4d26fd885228c716]));
    }

    SortedSet SortedSet::headSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_c07cc04010820225], a0.this$));
    }

    ::java::lang::Object SortedSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_4d26fd885228c716]));
    }

    ::java::util::Spliterator SortedSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    SortedSet SortedSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_91c93627253b416a], a0.this$, a1.this$));
    }

    SortedSet SortedSet::tailSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_c07cc04010820225], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_comparator(t_SortedSet *self);
    static PyObject *t_SortedSet_first(t_SortedSet *self);
    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_last(t_SortedSet *self);
    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data);
    static PyGetSetDef t_SortedSet__fields_[] = {
      DECLARE_GET_FIELD(t_SortedSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SortedSet__methods_[] = {
      DECLARE_METHOD(t_SortedSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, first, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, headSet, METH_O),
      DECLARE_METHOD(t_SortedSet, last, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, tailSet, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SortedSet)[] = {
      { Py_tp_methods, t_SortedSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_SortedSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SortedSet)[] = {
      &PY_TYPE_DEF(::java::util::Set),
      NULL
    };

    DEFINE_TYPE(SortedSet, t_SortedSet, SortedSet);
    PyObject *t_SortedSet::wrap_Object(const SortedSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_SortedSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_SortedSet::install(PyObject *module)
    {
      installType(&PY_TYPE(SortedSet), &PY_TYPE_DEF(SortedSet), module, "SortedSet", 0);
    }

    void t_SortedSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "class_", make_descriptor(SortedSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "wrapfn_", make_descriptor(t_SortedSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SortedSet::initializeClass, 1)))
        return NULL;
      return t_SortedSet::wrap_Object(SortedSet(((t_SortedSet *) arg)->object.this$));
    }
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SortedSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_SortedSet_comparator(t_SortedSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_SortedSet_first(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.headSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", arg);
      return NULL;
    }

    static PyObject *t_SortedSet_last(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(SortedSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSet(a0, a1));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.tailSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", arg);
      return NULL;
    }
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data)
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_5e688138ffe60231] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_9a9fc1d2cacd1642] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
        mids$[mid_append_e12dcf6200c02bd1] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
        mids$[mid_append_b522ded3bced2266] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_append_72008f50aac6d333] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
        mids$[mid_append_e2a1a728a151ea6a] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
        mids$[mid_append_efb77b1debb6dec0] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
        mids$[mid_append_2810637a96e2ae4c] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
        mids$[mid_append_71ddcaede8baf208] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_append_012c4ea332e1d6a4] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_append_aa8fb57032cd1438] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_append_67e569b57185f328] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
        mids$[mid_append_dd3884ec73b6afb5] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
        mids$[mid_append_b2e3c866f26fc95a] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_appendCodePoint_71ddcaede8baf208] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_compareTo_ee737e20be30dc5d] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuilder;)I");
        mids$[mid_delete_75228ce3be4f9cb1] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_deleteCharAt_71ddcaede8baf208] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_indexOf_02f02486e9727d8f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_01c41545a950bc7c] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_511e5a671a76e38c] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
        mids$[mid_insert_fa1705ddf339ac90] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_8eee6ed1e1eee660] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_47443ceab765fd37] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
        mids$[mid_insert_7c7e0a4fe85b0b44] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
        mids$[mid_insert_6f51f8df789463b7] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
        mids$[mid_insert_75228ce3be4f9cb1] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_insert_2e2aad39af136c0e] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_35b96895dd2fe144] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_569431f514deddd9] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_c5b18066db7da846] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
        mids$[mid_insert_dd1b63c6ae54e393] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_lastIndexOf_02f02486e9727d8f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_01c41545a950bc7c] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_replace_0989af9060b298e8] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_reverse_0bf1b6be8e0d7c9e] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuilder::StringBuilder() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    StringBuilder::StringBuilder(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    StringBuilder::StringBuilder(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    StringBuilder::StringBuilder(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_5e688138ffe60231, a0.this$)) {}

    StringBuilder StringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_9a9fc1d2cacd1642], a0.this$));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_e12dcf6200c02bd1], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::String & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_b522ded3bced2266], a0.this$));
    }

    StringBuilder StringBuilder::append(jboolean a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_72008f50aac6d333], a0));
    }

    StringBuilder StringBuilder::append(jchar a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_e2a1a728a151ea6a], a0));
    }

    StringBuilder StringBuilder::append(jdouble a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_efb77b1debb6dec0], a0));
    }

    StringBuilder StringBuilder::append(jfloat a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_2810637a96e2ae4c], a0));
    }

    StringBuilder StringBuilder::append(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_71ddcaede8baf208], a0));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_012c4ea332e1d6a4], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::Object & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_aa8fb57032cd1438], a0.this$));
    }

    StringBuilder StringBuilder::append(jlong a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_67e569b57185f328], a0));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_dd3884ec73b6afb5], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_b2e3c866f26fc95a], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::appendCodePoint(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_71ddcaede8baf208], a0));
    }

    jint StringBuilder::compareTo(const StringBuilder & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_ee737e20be30dc5d], a0.this$);
    }

    StringBuilder StringBuilder::delete$(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_delete_75228ce3be4f9cb1], a0, a1));
    }

    StringBuilder StringBuilder::deleteCharAt(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_71ddcaede8baf208], a0));
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_02f02486e9727d8f], a0.this$);
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_01c41545a950bc7c], a0.this$, a1);
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_511e5a671a76e38c], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_fa1705ddf339ac90], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jboolean a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_8eee6ed1e1eee660], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jchar a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_47443ceab765fd37], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jdouble a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_7c7e0a4fe85b0b44], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jfloat a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6f51f8df789463b7], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_75228ce3be4f9cb1], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_2e2aad39af136c0e], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_35b96895dd2fe144], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jlong a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_569431f514deddd9], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_c5b18066db7da846], a0, a1.this$, a2, a3));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_dd1b63c6ae54e393], a0, a1.this$, a2, a3));
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_02f02486e9727d8f], a0.this$);
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_01c41545a950bc7c], a0.this$, a1);
    }

    StringBuilder StringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_replace_0989af9060b298e8], a0, a1, a2.this$));
    }

    StringBuilder StringBuilder::reverse() const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_0bf1b6be8e0d7c9e]));
    }

    ::java::lang::String StringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_run_0fa09c18fee449d5] = env->getMethodID(cls, "run", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Runnable::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_0fa09c18fee449d5]);
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
        mids$[mid_validateObject_0fa09c18fee449d5] = env->getMethodID(cls, "validateObject", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectInputValidation::validateObject() const
    {
      env->callVoidMethod(this$, mids$[mid_validateObject_0fa09c18fee449d5]);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_db8de8bc54857165] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_76637231e1f360e3] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_65c7d273e80d497a] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_65c7d273e80d497a] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_0dc02dfa0be4cd25] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_015730311a5bacdc] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_9facd1449e0950d3] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_af8aa32ee9c1f184] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_0dc02dfa0be4cd25] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_af8aa32ee9c1f184] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_83750138b7b51bf4] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_af8aa32ee9c1f184] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_25e3a1e437d39751] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_0fa09c18fee449d5] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Hashtable::Hashtable() : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Hashtable::Hashtable(jint a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    Hashtable::Hashtable(const ::java::util::Map & a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_db8de8bc54857165, a0.this$)) {}

    Hashtable::Hashtable(jint a0, jfloat a1) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_76637231e1f360e3, a0, a1)) {}

    void Hashtable::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object Hashtable::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean Hashtable::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean Hashtable::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_65c7d273e80d497a], a0.this$);
    }

    jboolean Hashtable::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Enumeration Hashtable::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_0dc02dfa0be4cd25]));
    }

    ::java::util::Set Hashtable::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    jboolean Hashtable::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Hashtable::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object Hashtable::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jint Hashtable::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Hashtable::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Set Hashtable::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    ::java::util::Enumeration Hashtable::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_0dc02dfa0be4cd25]));
    }

    ::java::lang::Object Hashtable::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    void Hashtable::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
    }

    ::java::lang::Object Hashtable::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::Object Hashtable::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jboolean Hashtable::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_83750138b7b51bf4], a0.this$, a1.this$);
    }

    ::java::lang::Object Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jboolean Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_25e3a1e437d39751], a0.this$, a1.this$, a2.this$);
    }

    jint Hashtable::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::lang::String Hashtable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::util::Collection Hashtable::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_37528d110cff6b74]));
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
        mids$[mid_init$_c08592dec40051d4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_init$_5684073b2ab70eb7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClassLoaderName_11b109bd155ca898] = env->getMethodID(cls, "getClassLoaderName", "()Ljava/lang/String;");
        mids$[mid_getClassName_11b109bd155ca898] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getFileName_11b109bd155ca898] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
        mids$[mid_getLineNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLineNumber", "()I");
        mids$[mid_getMethodName_11b109bd155ca898] = env->getMethodID(cls, "getMethodName", "()Ljava/lang/String;");
        mids$[mid_getModuleName_11b109bd155ca898] = env->getMethodID(cls, "getModuleName", "()Ljava/lang/String;");
        mids$[mid_getModuleVersion_11b109bd155ca898] = env->getMethodID(cls, "getModuleVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isNativeMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isNativeMethod", "()Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c08592dec40051d4, a0.this$, a1.this$, a2.this$, a3)) {}

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5684073b2ab70eb7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

    jboolean StackTraceElement::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String StackTraceElement::getClassLoaderName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassLoaderName_11b109bd155ca898]));
    }

    ::java::lang::String StackTraceElement::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_11b109bd155ca898]));
    }

    ::java::lang::String StackTraceElement::getFileName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_11b109bd155ca898]));
    }

    jint StackTraceElement::getLineNumber() const
    {
      return env->callIntMethod(this$, mids$[mid_getLineNumber_570ce0828f81a2c1]);
    }

    ::java::lang::String StackTraceElement::getMethodName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMethodName_11b109bd155ca898]));
    }

    ::java::lang::String StackTraceElement::getModuleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleName_11b109bd155ca898]));
    }

    ::java::lang::String StackTraceElement::getModuleVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleVersion_11b109bd155ca898]));
    }

    jint StackTraceElement::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean StackTraceElement::isNativeMethod() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNativeMethod_b108b35ef48e27bd]);
    }

    ::java::lang::String StackTraceElement::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Optional.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/Stream.h"
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
        mids$[mid_empty_c5e311a9e5531e7d] = env->getStaticMethodID(cls, "empty", "()Ljava/util/Optional;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_4d26fd885228c716] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_b108b35ef48e27bd] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_ca633efe068089a6] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_ofNullable_ca633efe068089a6] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_or_65024172fd6c4767] = env->getMethodID(cls, "or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;");
        mids$[mid_orElse_9facd1449e0950d3] = env->getMethodID(cls, "orElse", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_orElseGet_88359068aed48a59] = env->getMethodID(cls, "orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_orElseThrow_4d26fd885228c716] = env->getMethodID(cls, "orElseThrow", "()Ljava/lang/Object;");
        mids$[mid_orElseThrow_88359068aed48a59] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_stream_20f6d2b462aaef4b] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Optional Optional::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_empty_c5e311a9e5531e7d]));
    }

    jboolean Optional::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Optional::get$() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_4d26fd885228c716]));
    }

    jint Optional::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Optional::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    jboolean Optional::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_b108b35ef48e27bd]);
    }

    Optional Optional::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_of_ca633efe068089a6], a0.this$));
    }

    Optional Optional::ofNullable(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_ca633efe068089a6], a0.this$));
    }

    Optional Optional::or$(const ::java::util::function::Supplier & a0) const
    {
      return Optional(env->callObjectMethod(this$, mids$[mid_or_65024172fd6c4767], a0.this$));
    }

    ::java::lang::Object Optional::orElse(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElse_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object Optional::orElseGet(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseGet_88359068aed48a59], a0.this$));
    }

    ::java::lang::Object Optional::orElseThrow() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_4d26fd885228c716]));
    }

    ::java::lang::Object Optional::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_88359068aed48a59], a0.this$));
    }

    ::java::util::stream::Stream Optional::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_20f6d2b462aaef4b]));
    }

    ::java::lang::String Optional::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_append_a2f2e916ce1d7f9b] = env->getMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
        mids$[mid_append_c76ba1b7146e9ce3] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
        mids$[mid_append_becdfeab9d438f52] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Appendable Appendable::append(jchar a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_a2f2e916ce1d7f9b], a0));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_c76ba1b7146e9ce3], a0.this$));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_becdfeab9d438f52], a0.this$, a1, a2));
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
        mids$[mid_valueOf_e78670ebdf0db16b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;");
        mids$[mid_values_1fd1490cf0f020a8] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$FilteringMode;");

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
      return Locale$FilteringMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e78670ebdf0db16b], a0.this$));
    }

    JArray< Locale$FilteringMode > Locale$FilteringMode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$FilteringMode >(env->callStaticObjectMethod(cls, mids$[mid_values_1fd1490cf0f020a8]));
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
        mids$[mid_append_789199c921fb81ae] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_023c4ab037999251] = env->getMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_50d484150b26fc68] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_cda713969d64138b] = env->getMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_c646c13db396d9d9] = env->getMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_211393865aff5fc1] = env->getMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_c010ce00dea1d397] = env->getMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_935ed557695c97f3] = env->getMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_4e65da57e456c46a] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_ba6e275d17c81b83] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_00b916e4abf025fc] = env->getMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_c8d567c9c7a32c85] = env->getMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_b80e8c96e830f1cd] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_appendCodePoint_935ed557695c97f3] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_capacity_570ce0828f81a2c1] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_9d4c2604195fbadb] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_2235cd056f5a882b] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_2235cd056f5a882b] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_819f91eddf220c5b] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_delete_889a471a4c4e2398] = env->getMethodID(cls, "delete", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_deleteCharAt_935ed557695c97f3] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_ensureCapacity_99803b0791f320ff] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_805ac8fcb83c07e9] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_02f02486e9727d8f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_01c41545a950bc7c] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_c04bc992b8fcc397] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_6c2b2d17dd92942a] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_65dcea3ce7c3bfa9] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_214fb2d3b0740a38] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_dd88a29e78a19bb1] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_59ebd321938b9bb5] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_889a471a4c4e2398] = env->getMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_b4a7eb16fc72d9aa] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_9003b6ba4b9ae110] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_e0e36a95c33d83df] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_edc96446c10df860] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_1e6f94b6d66a7421] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_lastIndexOf_02f02486e9727d8f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_01c41545a950bc7c] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_570ce0828f81a2c1] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_819f91eddf220c5b] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_ff93337fa985cbda] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_reverse_af06493e34075193] = env->getMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
        mids$[mid_setCharAt_8c560582d522cb03] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_99803b0791f320ff] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_be25fa7011a1ec8f] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_8cc8a10236476f23] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_5d51f1f447446760] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_0fa09c18fee449d5] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_789199c921fb81ae], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_023c4ab037999251], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::String & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_50d484150b26fc68], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jboolean a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_cda713969d64138b], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jchar a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_c646c13db396d9d9], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jdouble a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_211393865aff5fc1], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jfloat a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_c010ce00dea1d397], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_935ed557695c97f3], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_4e65da57e456c46a], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::Object & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_ba6e275d17c81b83], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jlong a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_00b916e4abf025fc], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_c8d567c9c7a32c85], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_b80e8c96e830f1cd], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::appendCodePoint(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_935ed557695c97f3], a0));
    }

    jint AbstractStringBuilder::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_570ce0828f81a2c1]);
    }

    jchar AbstractStringBuilder::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_9d4c2604195fbadb], a0);
    }

    jint AbstractStringBuilder::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_2235cd056f5a882b], a0);
    }

    jint AbstractStringBuilder::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_2235cd056f5a882b], a0);
    }

    jint AbstractStringBuilder::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_819f91eddf220c5b], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::delete$(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_delete_889a471a4c4e2398], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::deleteCharAt(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_935ed557695c97f3], a0));
    }

    void AbstractStringBuilder::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_99803b0791f320ff], a0);
    }

    void AbstractStringBuilder::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_805ac8fcb83c07e9], a0, a1, a2.this$, a3);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_02f02486e9727d8f], a0.this$);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_01c41545a950bc7c], a0.this$, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_c04bc992b8fcc397], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6c2b2d17dd92942a], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jboolean a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_65dcea3ce7c3bfa9], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jchar a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_214fb2d3b0740a38], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jdouble a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_dd88a29e78a19bb1], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jfloat a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_59ebd321938b9bb5], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_889a471a4c4e2398], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b4a7eb16fc72d9aa], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9003b6ba4b9ae110], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jlong a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e0e36a95c33d83df], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_edc96446c10df860], a0, a1.this$, a2, a3));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_1e6f94b6d66a7421], a0, a1.this$, a2, a3));
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_02f02486e9727d8f], a0.this$);
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_01c41545a950bc7c], a0.this$, a1);
    }

    jint AbstractStringBuilder::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_570ce0828f81a2c1]);
    }

    jint AbstractStringBuilder::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_819f91eddf220c5b], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_replace_ff93337fa985cbda], a0, a1, a2.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::reverse() const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_af06493e34075193]));
    }

    void AbstractStringBuilder::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_8c560582d522cb03], a0, a1);
    }

    void AbstractStringBuilder::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_99803b0791f320ff], a0);
    }

    ::java::lang::CharSequence AbstractStringBuilder::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_be25fa7011a1ec8f], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_8cc8a10236476f23], a0));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_5d51f1f447446760], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void AbstractStringBuilder::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_0fa09c18fee449d5]);
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
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/function/LongConsumer.h"
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
        mids$[mid_forEachRemaining_145025f427e4a5ad] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/LongConsumer;)V");
        mids$[mid_tryAdvance_8234c4c99f7d5a49] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/LongConsumer;)Z");
        mids$[mid_trySplit_a31a73b6551c6620] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfLong;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfLong::forEachRemaining(const ::java::util::function::LongConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_145025f427e4a5ad], a0.this$);
    }

    jboolean Spliterator$OfLong::tryAdvance(const ::java::util::function::LongConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_8234c4c99f7d5a49], a0.this$);
    }

    Spliterator$OfLong Spliterator$OfLong::trySplit() const
    {
      return Spliterator$OfLong(env->callObjectMethod(this$, mids$[mid_trySplit_a31a73b6551c6620]));
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
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *PrimitiveIterator$OfDouble::class$ = NULL;
    jmethodID *PrimitiveIterator$OfDouble::mids$ = NULL;
    bool PrimitiveIterator$OfDouble::live$ = false;

    jclass PrimitiveIterator$OfDouble::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/PrimitiveIterator$OfDouble");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_6444b3e27af46e9d] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_next_38ee5459c38ef725] = env->getMethodID(cls, "next", "()Ljava/lang/Double;");
        mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_6444b3e27af46e9d], a0.this$);
    }

    ::java::lang::Double PrimitiveIterator$OfDouble::next() const
    {
      return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_next_38ee5459c38ef725]));
    }

    jdouble PrimitiveIterator$OfDouble::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_PrimitiveIterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator$OfDouble_of_(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_forEachRemaining(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_next(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_nextDouble(t_PrimitiveIterator$OfDouble *self);
    static PyObject *t_PrimitiveIterator$OfDouble_get__parameters_(t_PrimitiveIterator$OfDouble *self, void *data);
    static PyGetSetDef t_PrimitiveIterator$OfDouble__fields_[] = {
      DECLARE_GET_FIELD(t_PrimitiveIterator$OfDouble, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_PrimitiveIterator$OfDouble__methods_[] = {
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, of_, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, next, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, nextDouble, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrimitiveIterator$OfDouble)[] = {
      { Py_tp_methods, t_PrimitiveIterator$OfDouble__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_PrimitiveIterator$OfDouble__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Double >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrimitiveIterator$OfDouble)[] = {
      &PY_TYPE_DEF(::java::util::PrimitiveIterator),
      NULL
    };

    DEFINE_TYPE(PrimitiveIterator$OfDouble, t_PrimitiveIterator$OfDouble, PrimitiveIterator$OfDouble);
    PyObject *t_PrimitiveIterator$OfDouble::wrap_Object(const PrimitiveIterator$OfDouble& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator$OfDouble::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator$OfDouble *self = (t_PrimitiveIterator$OfDouble *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_PrimitiveIterator$OfDouble::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator$OfDouble::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator$OfDouble *self = (t_PrimitiveIterator$OfDouble *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_PrimitiveIterator$OfDouble::install(PyObject *module)
    {
      installType(&PY_TYPE(PrimitiveIterator$OfDouble), &PY_TYPE_DEF(PrimitiveIterator$OfDouble), module, "PrimitiveIterator$OfDouble", 0);
    }

    void t_PrimitiveIterator$OfDouble::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "class_", make_descriptor(PrimitiveIterator$OfDouble::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "wrapfn_", make_descriptor(t_PrimitiveIterator$OfDouble::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrimitiveIterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrimitiveIterator$OfDouble::initializeClass, 1)))
        return NULL;
      return t_PrimitiveIterator$OfDouble::wrap_Object(PrimitiveIterator$OfDouble(((t_PrimitiveIterator$OfDouble *) arg)->object.this$));
    }
    static PyObject *t_PrimitiveIterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrimitiveIterator$OfDouble::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_PrimitiveIterator$OfDouble_of_(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_forEachRemaining(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrimitiveIterator$OfDouble), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_next(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      ::java::lang::Double result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Double::wrap_Object(result);
      }

      return callSuper(PY_TYPE(PrimitiveIterator$OfDouble), (PyObject *) self, "next", args, 2);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_nextDouble(t_PrimitiveIterator$OfDouble *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }
    static PyObject *t_PrimitiveIterator$OfDouble_get__parameters_(t_PrimitiveIterator$OfDouble *self, void *data)
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
        mids$[mid_charAt_9d4c2604195fbadb] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_compare_510522d819b7a295] = env->getStaticMethodID(cls, "compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
        mids$[mid_length_570ce0828f81a2c1] = env->getMethodID(cls, "length", "()I");
        mids$[mid_subSequence_be25fa7011a1ec8f] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jchar CharSequence::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_9d4c2604195fbadb], a0);
    }

    jint CharSequence::compare(const CharSequence & a0, const CharSequence & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_510522d819b7a295], a0.this$, a1.this$);
    }

    jint CharSequence::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_570ce0828f81a2c1]);
    }

    CharSequence CharSequence::subSequence(jint a0, jint a1) const
    {
      return CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_be25fa7011a1ec8f], a0, a1));
    }

    ::java::lang::String CharSequence::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "java/util/SortedMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/SortedMap.h"
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
        mids$[mid_comparator_96e45e3694fbbb22] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_entrySet_015730311a5bacdc] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_firstKey_4d26fd885228c716] = env->getMethodID(cls, "firstKey", "()Ljava/lang/Object;");
        mids$[mid_headMap_ee1ff50116f0ffac] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_lastKey_4d26fd885228c716] = env->getMethodID(cls, "lastKey", "()Ljava/lang/Object;");
        mids$[mid_subMap_3d23d8a4bccdf58a] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_ee1ff50116f0ffac] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedMap::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_96e45e3694fbbb22]));
    }

    ::java::util::Set SortedMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    ::java::lang::Object SortedMap::firstKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_firstKey_4d26fd885228c716]));
    }

    SortedMap SortedMap::headMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_ee1ff50116f0ffac], a0.this$));
    }

    ::java::util::Set SortedMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    ::java::lang::Object SortedMap::lastKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lastKey_4d26fd885228c716]));
    }

    SortedMap SortedMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_3d23d8a4bccdf58a], a0.this$, a1.this$));
    }

    SortedMap SortedMap::tailMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_ee1ff50116f0ffac], a0.this$));
    }

    ::java::util::Collection SortedMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_37528d110cff6b74]));
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
        mids$[mid_addExports_d00bb28b6bf61004] = env->getMethodID(cls, "addExports", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addOpens_d00bb28b6bf61004] = env->getMethodID(cls, "addOpens", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addReads_5beabc3bba841aba] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addUses_769e242b0b3d2e5a] = env->getMethodID(cls, "addUses", "(Ljava/lang/Class;)Ljava/lang/Module;");
        mids$[mid_canRead_f13ca49a12f5310f] = env->getMethodID(cls, "canRead", "(Ljava/lang/Module;)Z");
        mids$[mid_canUse_839caca7c078da68] = env->getMethodID(cls, "canUse", "(Ljava/lang/Class;)Z");
        mids$[mid_getClassLoader_da1c487fbe6ab900] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getLayer_1488df134b0cb760] = env->getMethodID(cls, "getLayer", "()Ljava/lang/ModuleLayer;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackages_015730311a5bacdc] = env->getMethodID(cls, "getPackages", "()Ljava/util/Set;");
        mids$[mid_getResourceAsStream_d8c3e08e3826298a] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_isExported_7edad2c2f64f4d68] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;)Z");
        mids$[mid_isExported_124835c369cc280b] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_isNamed_b108b35ef48e27bd] = env->getMethodID(cls, "isNamed", "()Z");
        mids$[mid_isOpen_7edad2c2f64f4d68] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;)Z");
        mids$[mid_isOpen_124835c369cc280b] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Module Module::addExports(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addExports_d00bb28b6bf61004], a0.this$, a1.this$));
    }

    Module Module::addOpens(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addOpens_d00bb28b6bf61004], a0.this$, a1.this$));
    }

    Module Module::addReads(const Module & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addReads_5beabc3bba841aba], a0.this$));
    }

    Module Module::addUses(const ::java::lang::Class & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addUses_769e242b0b3d2e5a], a0.this$));
    }

    jboolean Module::canRead(const Module & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_f13ca49a12f5310f], a0.this$);
    }

    jboolean Module::canUse(const ::java::lang::Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canUse_839caca7c078da68], a0.this$);
    }

    ::java::lang::ClassLoader Module::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_da1c487fbe6ab900]));
    }

    ::java::lang::ModuleLayer Module::getLayer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_getLayer_1488df134b0cb760]));
    }

    ::java::lang::String Module::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    ::java::util::Set Module::getPackages() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getPackages_015730311a5bacdc]));
    }

    ::java::io::InputStream Module::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_d8c3e08e3826298a], a0.this$));
    }

    jboolean Module::isExported(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_7edad2c2f64f4d68], a0.this$);
    }

    jboolean Module::isExported(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_124835c369cc280b], a0.this$, a1.this$);
    }

    jboolean Module::isNamed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNamed_b108b35ef48e27bd]);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_7edad2c2f64f4d68], a0.this$);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_124835c369cc280b], a0.this$, a1.this$);
    }

    ::java::lang::String Module::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeObject_2990946c992aafed] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectOutput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void ObjectOutput::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void ObjectOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    void ObjectOutput::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_2990946c992aafed], a0.this$);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
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
        mids$[mid_compareTo_90eb61a0d5cc5e34] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparable::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_90eb61a0d5cc5e34], a0.this$);
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
        mids$[mid_comparingByKey_96e45e3694fbbb22] = env->getStaticMethodID(cls, "comparingByKey", "()Ljava/util/Comparator;");
        mids$[mid_comparingByKey_7a4cd21393022d6a] = env->getStaticMethodID(cls, "comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_comparingByValue_96e45e3694fbbb22] = env->getStaticMethodID(cls, "comparingByValue", "()Ljava/util/Comparator;");
        mids$[mid_comparingByValue_7a4cd21393022d6a] = env->getStaticMethodID(cls, "comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getKey_4d26fd885228c716] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
        mids$[mid_getValue_4d26fd885228c716] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setValue_9facd1449e0950d3] = env->getMethodID(cls, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator Map$Entry::comparingByKey()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_96e45e3694fbbb22]));
    }

    ::java::util::Comparator Map$Entry::comparingByKey(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_7a4cd21393022d6a], a0.this$));
    }

    ::java::util::Comparator Map$Entry::comparingByValue()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_96e45e3694fbbb22]));
    }

    ::java::util::Comparator Map$Entry::comparingByValue(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_7a4cd21393022d6a], a0.this$));
    }

    jboolean Map$Entry::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Map$Entry::getKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_4d26fd885228c716]));
    }

    ::java::lang::Object Map$Entry::getValue() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_4d26fd885228c716]));
    }

    jint Map$Entry::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    ::java::lang::Object Map$Entry::setValue(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setValue_9facd1449e0950d3], a0.this$));
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
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamClass.h"
#include "java/lang/Class.h"
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_defaulted_7edad2c2f64f4d68] = env->getMethodID(cls, "defaulted", "(Ljava/lang/String;)Z");
        mids$[mid_get_03329b950ddb6eb1] = env->getMethodID(cls, "get", "(Ljava/lang/String;Z)Z");
        mids$[mid_get_902d3a6b3b1673ff] = env->getMethodID(cls, "get", "(Ljava/lang/String;B)B");
        mids$[mid_get_2abf1d77cbb89cbd] = env->getMethodID(cls, "get", "(Ljava/lang/String;C)C");
        mids$[mid_get_10f32224710e3e43] = env->getMethodID(cls, "get", "(Ljava/lang/String;D)D");
        mids$[mid_get_f11315685ee96a4b] = env->getMethodID(cls, "get", "(Ljava/lang/String;F)F");
        mids$[mid_get_01c41545a950bc7c] = env->getMethodID(cls, "get", "(Ljava/lang/String;I)I");
        mids$[mid_get_9c669b2d7606b99e] = env->getMethodID(cls, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_get_94c4f2fbc7d60923] = env->getMethodID(cls, "get", "(Ljava/lang/String;J)J");
        mids$[mid_get_2386283b95853ae7] = env->getMethodID(cls, "get", "(Ljava/lang/String;S)S");
        mids$[mid_getObjectStreamClass_62a98f7a7fe67a84] = env->getMethodID(cls, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream$GetField::ObjectInputStream$GetField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    jboolean ObjectInputStream$GetField::defaulted(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_defaulted_7edad2c2f64f4d68], a0.this$);
    }

    jboolean ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_get_03329b950ddb6eb1], a0.this$, a1);
    }

    jbyte ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jbyte a1) const
    {
      return env->callByteMethod(this$, mids$[mid_get_902d3a6b3b1673ff], a0.this$, a1);
    }

    jchar ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jchar a1) const
    {
      return env->callCharMethod(this$, mids$[mid_get_2abf1d77cbb89cbd], a0.this$, a1);
    }

    jdouble ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jdouble a1) const
    {
      return env->callDoubleMethod(this$, mids$[mid_get_10f32224710e3e43], a0.this$, a1);
    }

    jfloat ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jfloat a1) const
    {
      return env->callFloatMethod(this$, mids$[mid_get_f11315685ee96a4b], a0.this$, a1);
    }

    jint ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_get_01c41545a950bc7c], a0.this$, a1);
    }

    ::java::lang::Object ObjectInputStream$GetField::get$(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9c669b2d7606b99e], a0.this$, a1.this$));
    }

    jlong ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jlong a1) const
    {
      return env->callLongMethod(this$, mids$[mid_get_94c4f2fbc7d60923], a0.this$, a1);
    }

    jshort ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jshort a1) const
    {
      return env->callShortMethod(this$, mids$[mid_get_2386283b95853ae7], a0.this$, a1);
    }

    ::java::io::ObjectStreamClass ObjectInputStream$GetField::getObjectStreamClass() const
    {
      return ::java::io::ObjectStreamClass(env->callObjectMethod(this$, mids$[mid_getObjectStreamClass_62a98f7a7fe67a84]));
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
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Closeable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
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
#include "java/util/Currency.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
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
        mids$[mid_getAvailableCurrencies_015730311a5bacdc] = env->getStaticMethodID(cls, "getAvailableCurrencies", "()Ljava/util/Set;");
        mids$[mid_getCurrencyCode_11b109bd155ca898] = env->getMethodID(cls, "getCurrencyCode", "()Ljava/lang/String;");
        mids$[mid_getDefaultFractionDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getDefaultFractionDigits", "()I");
        mids$[mid_getDisplayName_11b109bd155ca898] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getInstance_6324b501742ce15e] = env->getStaticMethodID(cls, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
        mids$[mid_getInstance_255c2ca41d8843c3] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
        mids$[mid_getNumericCode_570ce0828f81a2c1] = env->getMethodID(cls, "getNumericCode", "()I");
        mids$[mid_getNumericCodeAsString_11b109bd155ca898] = env->getMethodID(cls, "getNumericCodeAsString", "()Ljava/lang/String;");
        mids$[mid_getSymbol_11b109bd155ca898] = env->getMethodID(cls, "getSymbol", "()Ljava/lang/String;");
        mids$[mid_getSymbol_3cd873bfb132c4fd] = env->getMethodID(cls, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set Currency::getAvailableCurrencies()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getAvailableCurrencies_015730311a5bacdc]));
    }

    ::java::lang::String Currency::getCurrencyCode() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencyCode_11b109bd155ca898]));
    }

    jint Currency::getDefaultFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultFractionDigits_570ce0828f81a2c1]);
    }

    ::java::lang::String Currency::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_11b109bd155ca898]));
    }

    ::java::lang::String Currency::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cd873bfb132c4fd], a0.this$));
    }

    Currency Currency::getInstance(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_6324b501742ce15e], a0.this$));
    }

    Currency Currency::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_255c2ca41d8843c3], a0.this$));
    }

    jint Currency::getNumericCode() const
    {
      return env->callIntMethod(this$, mids$[mid_getNumericCode_570ce0828f81a2c1]);
    }

    ::java::lang::String Currency::getNumericCodeAsString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNumericCodeAsString_11b109bd155ca898]));
    }

    ::java::lang::String Currency::getSymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_11b109bd155ca898]));
    }

    ::java::lang::String Currency::getSymbol(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String Currency::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_accept_473023b97fc9984d] = env->getMethodID(cls, "accept", "(Ljava/io/File;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FileFilter::accept(const ::java::io::File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_473023b97fc9984d], a0.this$);
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
#include "java/util/MissingResourceException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *MissingResourceException::class$ = NULL;
    jmethodID *MissingResourceException::mids$ = NULL;
    bool MissingResourceException::live$ = false;

    jclass MissingResourceException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/MissingResourceException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_getClassName_11b109bd155ca898] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    MissingResourceException::MissingResourceException(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::String MissingResourceException::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_11b109bd155ca898]));
    }

    ::java::lang::String MissingResourceException::getKey() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_MissingResourceException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_MissingResourceException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_MissingResourceException_init_(t_MissingResourceException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_MissingResourceException_getClassName(t_MissingResourceException *self);
    static PyObject *t_MissingResourceException_getKey(t_MissingResourceException *self);
    static PyObject *t_MissingResourceException_get__className(t_MissingResourceException *self, void *data);
    static PyObject *t_MissingResourceException_get__key(t_MissingResourceException *self, void *data);
    static PyGetSetDef t_MissingResourceException__fields_[] = {
      DECLARE_GET_FIELD(t_MissingResourceException, className),
      DECLARE_GET_FIELD(t_MissingResourceException, key),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_MissingResourceException__methods_[] = {
      DECLARE_METHOD(t_MissingResourceException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_MissingResourceException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_MissingResourceException, getClassName, METH_NOARGS),
      DECLARE_METHOD(t_MissingResourceException, getKey, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(MissingResourceException)[] = {
      { Py_tp_methods, t_MissingResourceException__methods_ },
      { Py_tp_init, (void *) t_MissingResourceException_init_ },
      { Py_tp_getset, t_MissingResourceException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(MissingResourceException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(MissingResourceException, t_MissingResourceException, MissingResourceException);

    void t_MissingResourceException::install(PyObject *module)
    {
      installType(&PY_TYPE(MissingResourceException), &PY_TYPE_DEF(MissingResourceException), module, "MissingResourceException", 0);
    }

    void t_MissingResourceException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "class_", make_descriptor(MissingResourceException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "wrapfn_", make_descriptor(t_MissingResourceException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_MissingResourceException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, MissingResourceException::initializeClass, 1)))
        return NULL;
      return t_MissingResourceException::wrap_Object(MissingResourceException(((t_MissingResourceException *) arg)->object.this$));
    }
    static PyObject *t_MissingResourceException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, MissingResourceException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_MissingResourceException_init_(t_MissingResourceException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      MissingResourceException object((jobject) NULL);

      if (!parseArgs(args, "sss", &a0, &a1, &a2))
      {
        INT_CALL(object = MissingResourceException(a0, a1, a2));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_MissingResourceException_getClassName(t_MissingResourceException *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassName());
      return j2p(result);
    }

    static PyObject *t_MissingResourceException_getKey(t_MissingResourceException *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getKey());
      return j2p(result);
    }

    static PyObject *t_MissingResourceException_get__className(t_MissingResourceException *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassName());
      return j2p(value);
    }

    static PyObject *t_MissingResourceException_get__key(t_MissingResourceException *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getKey());
      return j2p(value);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
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
        mids$[mid_add_2990946c992aafed] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)V");
        mids$[mid_hasNext_b108b35ef48e27bd] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_hasPrevious_b108b35ef48e27bd] = env->getMethodID(cls, "hasPrevious", "()Z");
        mids$[mid_next_4d26fd885228c716] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_nextIndex_570ce0828f81a2c1] = env->getMethodID(cls, "nextIndex", "()I");
        mids$[mid_previous_4d26fd885228c716] = env->getMethodID(cls, "previous", "()Ljava/lang/Object;");
        mids$[mid_previousIndex_570ce0828f81a2c1] = env->getMethodID(cls, "previousIndex", "()I");
        mids$[mid_remove_0fa09c18fee449d5] = env->getMethodID(cls, "remove", "()V");
        mids$[mid_set_2990946c992aafed] = env->getMethodID(cls, "set", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ListIterator::add(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_add_2990946c992aafed], a0.this$);
    }

    jboolean ListIterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_b108b35ef48e27bd]);
    }

    jboolean ListIterator::hasPrevious() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasPrevious_b108b35ef48e27bd]);
    }

    ::java::lang::Object ListIterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_4d26fd885228c716]));
    }

    jint ListIterator::nextIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_nextIndex_570ce0828f81a2c1]);
    }

    ::java::lang::Object ListIterator::previous() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_previous_4d26fd885228c716]));
    }

    jint ListIterator::previousIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_previousIndex_570ce0828f81a2c1]);
    }

    void ListIterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_0fa09c18fee449d5]);
    }

    void ListIterator::set(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_set_2990946c992aafed], a0.this$);
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ClassLoader.h"
#include "java/util/stream/Stream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/lang/ClassNotFoundException.h"
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
        mids$[mid_clearAssertionStatus_0fa09c18fee449d5] = env->getMethodID(cls, "clearAssertionStatus", "()V");
        mids$[mid_getDefinedPackage_2ebccdeed255784a] = env->getMethodID(cls, "getDefinedPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getDefinedPackages_23df86f75843b87b] = env->getMethodID(cls, "getDefinedPackages", "()[Ljava/lang/Package;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_da1c487fbe6ab900] = env->getMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
        mids$[mid_getPlatformClassLoader_da1c487fbe6ab900] = env->getStaticMethodID(cls, "getPlatformClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getResource_92a0f99f4944a8b1] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_d8c3e08e3826298a] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getResources_51addc91753b4c4d] = env->getMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getSystemClassLoader_da1c487fbe6ab900] = env->getStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getSystemResource_92a0f99f4944a8b1] = env->getStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getSystemResourceAsStream_d8c3e08e3826298a] = env->getStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSystemResources_51addc91753b4c4d] = env->getStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getUnnamedModule_191607d6c6e74ab2] = env->getMethodID(cls, "getUnnamedModule", "()Ljava/lang/Module;");
        mids$[mid_isRegisteredAsParallelCapable_b108b35ef48e27bd] = env->getMethodID(cls, "isRegisteredAsParallelCapable", "()Z");
        mids$[mid_loadClass_e88d065cb04fcbf6] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resources_5a688b58704bda7e] = env->getMethodID(cls, "resources", "(Ljava/lang/String;)Ljava/util/stream/Stream;");
        mids$[mid_setClassAssertionStatus_d6df10f4e35ef1e8] = env->getMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_setDefaultAssertionStatus_bd04c9335fb9e4cf] = env->getMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
        mids$[mid_setPackageAssertionStatus_d6df10f4e35ef1e8] = env->getMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_loadClass_e38edfaa0baa77a8] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;");
        mids$[mid_definePackage_ff1175edc40e0bc8] = env->getMethodID(cls, "definePackage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;");
        mids$[mid_getPackage_2ebccdeed255784a] = env->getMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_setSigners_ff6317628e6e047e] = env->getMethodID(cls, "setSigners", "(Ljava/lang/Class;[Ljava/lang/Object;)V");
        mids$[mid_findResource_92a0f99f4944a8b1] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_findResource_9f0cb071ff0043a3] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getClassLoadingLock_f639320a33718c6c] = env->getMethodID(cls, "getClassLoadingLock", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_findLoadedClass_e88d065cb04fcbf6] = env->getMethodID(cls, "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_e88d065cb04fcbf6] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_9ea674c8b961918c] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveClass_834972a40792b06e] = env->getMethodID(cls, "resolveClass", "(Ljava/lang/Class;)V");
        mids$[mid_defineClass_2173fb0f275a5e7d] = env->getMethodID(cls, "defineClass", "([BII)Ljava/lang/Class;");
        mids$[mid_defineClass_35421cfae2a8d0a6] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;");
        mids$[mid_defineClass_4eab932f0aaf96b9] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_defineClass_ac5afae98d4e3b56] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_findSystemClass_e88d065cb04fcbf6] = env->getMethodID(cls, "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findResources_51addc91753b4c4d] = env->getMethodID(cls, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_registerAsParallelCapable_b108b35ef48e27bd] = env->getStaticMethodID(cls, "registerAsParallelCapable", "()Z");
        mids$[mid_getPackages_23df86f75843b87b] = env->getMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_findLibrary_92807efd57acb082] = env->getMethodID(cls, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ClassLoader::clearAssertionStatus() const
    {
      env->callVoidMethod(this$, mids$[mid_clearAssertionStatus_0fa09c18fee449d5]);
    }

    ::java::lang::Package ClassLoader::getDefinedPackage(const ::java::lang::String & a0) const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getDefinedPackage_2ebccdeed255784a], a0.this$));
    }

    JArray< ::java::lang::Package > ClassLoader::getDefinedPackages() const
    {
      return JArray< ::java::lang::Package >(env->callObjectMethod(this$, mids$[mid_getDefinedPackages_23df86f75843b87b]));
    }

    ::java::lang::String ClassLoader::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    ClassLoader ClassLoader::getParent() const
    {
      return ClassLoader(env->callObjectMethod(this$, mids$[mid_getParent_da1c487fbe6ab900]));
    }

    ClassLoader ClassLoader::getPlatformClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getPlatformClassLoader_da1c487fbe6ab900]));
    }

    ::java::net::URL ClassLoader::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_92a0f99f4944a8b1], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_d8c3e08e3826298a], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getResources(const ::java::lang::String & a0) const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getResources_51addc91753b4c4d], a0.this$));
    }

    ClassLoader ClassLoader::getSystemClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getSystemClassLoader_da1c487fbe6ab900]));
    }

    ::java::net::URL ClassLoader::getSystemResource(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::net::URL(env->callStaticObjectMethod(cls, mids$[mid_getSystemResource_92a0f99f4944a8b1], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getSystemResourceAsStream(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::InputStream(env->callStaticObjectMethod(cls, mids$[mid_getSystemResourceAsStream_d8c3e08e3826298a], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getSystemResources(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_getSystemResources_51addc91753b4c4d], a0.this$));
    }

    ::java::lang::Module ClassLoader::getUnnamedModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getUnnamedModule_191607d6c6e74ab2]));
    }

    jboolean ClassLoader::isRegisteredAsParallelCapable() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isRegisteredAsParallelCapable_b108b35ef48e27bd]);
    }

    ::java::lang::Class ClassLoader::loadClass(const ::java::lang::String & a0) const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_loadClass_e88d065cb04fcbf6], a0.this$));
    }

    ::java::util::stream::Stream ClassLoader::resources(const ::java::lang::String & a0) const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_resources_5a688b58704bda7e], a0.this$));
    }

    void ClassLoader::setClassAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setClassAssertionStatus_d6df10f4e35ef1e8], a0.this$, a1);
    }

    void ClassLoader::setDefaultAssertionStatus(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDefaultAssertionStatus_bd04c9335fb9e4cf], a0);
    }

    void ClassLoader::setPackageAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setPackageAssertionStatus_d6df10f4e35ef1e8], a0.this$, a1);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_checkAccept_e227023543046618] = env->getMethodID(cls, "checkAccept", "(Ljava/lang/String;I)V");
        mids$[mid_checkAccess_6fe64205f671d335] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/Thread;)V");
        mids$[mid_checkAccess_cc95f01a6d9b6abb] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
        mids$[mid_checkConnect_e227023543046618] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;I)V");
        mids$[mid_checkConnect_97d3bf06faca5afa] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
        mids$[mid_checkCreateClassLoader_0fa09c18fee449d5] = env->getMethodID(cls, "checkCreateClassLoader", "()V");
        mids$[mid_checkDelete_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkDelete", "(Ljava/lang/String;)V");
        mids$[mid_checkExec_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkExec", "(Ljava/lang/String;)V");
        mids$[mid_checkExit_99803b0791f320ff] = env->getMethodID(cls, "checkExit", "(I)V");
        mids$[mid_checkLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkLink", "(Ljava/lang/String;)V");
        mids$[mid_checkListen_99803b0791f320ff] = env->getMethodID(cls, "checkListen", "(I)V");
        mids$[mid_checkPackageAccess_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkPackageAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkPackageDefinition_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkPackageDefinition", "(Ljava/lang/String;)V");
        mids$[mid_checkPermission_7dbb217d272a752a] = env->getMethodID(cls, "checkPermission", "(Ljava/security/Permission;)V");
        mids$[mid_checkPermission_ba67496e93cdae21] = env->getMethodID(cls, "checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V");
        mids$[mid_checkPrintJobAccess_0fa09c18fee449d5] = env->getMethodID(cls, "checkPrintJobAccess", "()V");
        mids$[mid_checkPropertiesAccess_0fa09c18fee449d5] = env->getMethodID(cls, "checkPropertiesAccess", "()V");
        mids$[mid_checkPropertyAccess_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkPropertyAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_9d90d2b41ddf88a5] = env->getMethodID(cls, "checkRead", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkRead_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_562cf77ba0f3b1a4] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_checkSecurityAccess_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkSecurityAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkSetFactory_0fa09c18fee449d5] = env->getMethodID(cls, "checkSetFactory", "()V");
        mids$[mid_checkWrite_9d90d2b41ddf88a5] = env->getMethodID(cls, "checkWrite", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkWrite_d0bc48d5b00dc40c] = env->getMethodID(cls, "checkWrite", "(Ljava/lang/String;)V");
        mids$[mid_getSecurityContext_4d26fd885228c716] = env->getMethodID(cls, "getSecurityContext", "()Ljava/lang/Object;");
        mids$[mid_getThreadGroup_b3b4aaae6d375f3d] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getClassContext_c7d92886d19dfecc] = env->getMethodID(cls, "getClassContext", "()[Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityManager::SecurityManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    void SecurityManager::checkAccept(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccept_e227023543046618], a0.this$, a1);
    }

    void SecurityManager::checkAccess(const ::java::lang::Thread & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_6fe64205f671d335], a0.this$);
    }

    void SecurityManager::checkAccess(const ::java::lang::ThreadGroup & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_cc95f01a6d9b6abb], a0.this$);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_e227023543046618], a0.this$, a1);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1, const ::java::lang::Object & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_97d3bf06faca5afa], a0.this$, a1, a2.this$);
    }

    void SecurityManager::checkCreateClassLoader() const
    {
      env->callVoidMethod(this$, mids$[mid_checkCreateClassLoader_0fa09c18fee449d5]);
    }

    void SecurityManager::checkDelete(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkDelete_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkExec(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExec_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkExit(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExit_99803b0791f320ff], a0);
    }

    void SecurityManager::checkLink(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkLink_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkListen(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkListen_99803b0791f320ff], a0);
    }

    void SecurityManager::checkPackageAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageAccess_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkPackageDefinition(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageDefinition_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkPermission(const ::java::security::Permission & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPermission_7dbb217d272a752a], a0.this$);
    }

    void SecurityManager::checkPermission(const ::java::security::Permission & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPermission_ba67496e93cdae21], a0.this$, a1.this$);
    }

    void SecurityManager::checkPrintJobAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPrintJobAccess_0fa09c18fee449d5]);
    }

    void SecurityManager::checkPropertiesAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertiesAccess_0fa09c18fee449d5]);
    }

    void SecurityManager::checkPropertyAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertyAccess_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_9d90d2b41ddf88a5], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_562cf77ba0f3b1a4], a0.this$, a1.this$);
    }

    void SecurityManager::checkSecurityAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkSecurityAccess_d0bc48d5b00dc40c], a0.this$);
    }

    void SecurityManager::checkSetFactory() const
    {
      env->callVoidMethod(this$, mids$[mid_checkSetFactory_0fa09c18fee449d5]);
    }

    void SecurityManager::checkWrite(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_9d90d2b41ddf88a5], a0.this$);
    }

    void SecurityManager::checkWrite(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_d0bc48d5b00dc40c], a0.this$);
    }

    ::java::lang::Object SecurityManager::getSecurityContext() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecurityContext_4d26fd885228c716]));
    }

    ::java::lang::ThreadGroup SecurityManager::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_b3b4aaae6d375f3d]));
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedEncodingException::UnsupportedEncodingException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
