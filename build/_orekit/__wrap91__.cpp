#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StringBuffer.h"
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_b81bfb528ebad57a] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_60c78eaed7f43823] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
        mids$[mid_append_31c41d09a7ea99fa] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuffer;");
        mids$[mid_append_ed1730020567e64b] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_append_3c12cc20a7e0c9ea] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuffer;");
        mids$[mid_append_876a6f9f943e9a14] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuffer;");
        mids$[mid_append_e140ccb2146a2c77] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuffer;");
        mids$[mid_append_ed0b3f8d6c31c024] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuffer;");
        mids$[mid_append_10ef5de1d62708bc] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_append_cbc3364f099331a3] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_append_8970d593c3656003] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_append_25dd54b120065f77] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuffer;");
        mids$[mid_append_590a93b593f1f442] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuffer;");
        mids$[mid_append_8ceea8bfcde8c18d] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_appendCodePoint_10ef5de1d62708bc] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_capacity_d6ab429752e7c267] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_80723b5d4f0fdfa2] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_d938fc64e8c6df2d] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_91b9e1e34b2235d5] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_784eae7abd0959fa] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuffer;)I");
        mids$[mid_delete_0c570a0b511c51e8] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_deleteCharAt_10ef5de1d62708bc] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_ensureCapacity_8fd427ab23829bf5] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_58054e664fd79305] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_d4ec284f93191e28] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuffer;");
        mids$[mid_insert_33fd3fbd551e1b26] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_a3e3eb30c2154b50] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_33bf2983adaf1dc2] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuffer;");
        mids$[mid_insert_977c128c195ab5fa] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuffer;");
        mids$[mid_insert_1c0ff125d719562c] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuffer;");
        mids$[mid_insert_0c570a0b511c51e8] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_insert_bafd4d793786699f] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_6011c2f77755ce72] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_2e4552e0a1b72aba] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_41a884c10db78a4d] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuffer;");
        mids$[mid_insert_750c8059b29e93ff] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_lastIndexOf_84fe1f8fbbcb0268] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_36da4b2d3bc5085f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_d6ab429752e7c267] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_91b9e1e34b2235d5] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_0817eecda047e3ef] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_reverse_eb1ec7cf84c46af7] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuffer;");
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

    StringBuffer::StringBuffer() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    StringBuffer::StringBuffer(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    StringBuffer::StringBuffer(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    StringBuffer::StringBuffer(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_b81bfb528ebad57a, a0.this$)) {}

    StringBuffer StringBuffer::append(const StringBuffer & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_60c78eaed7f43823], a0.this$));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_31c41d09a7ea99fa], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::String & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_ed1730020567e64b], a0.this$));
    }

    StringBuffer StringBuffer::append(jboolean a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_3c12cc20a7e0c9ea], a0));
    }

    StringBuffer StringBuffer::append(jchar a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_876a6f9f943e9a14], a0));
    }

    StringBuffer StringBuffer::append(jdouble a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_e140ccb2146a2c77], a0));
    }

    StringBuffer StringBuffer::append(jfloat a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_ed0b3f8d6c31c024], a0));
    }

    StringBuffer StringBuffer::append(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_10ef5de1d62708bc], a0));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_cbc3364f099331a3], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::Object & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_8970d593c3656003], a0.this$));
    }

    StringBuffer StringBuffer::append(jlong a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_25dd54b120065f77], a0));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_590a93b593f1f442], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_8ceea8bfcde8c18d], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::appendCodePoint(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_appendCodePoint_10ef5de1d62708bc], a0));
    }

    jint StringBuffer::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_d6ab429752e7c267]);
    }

    jchar StringBuffer::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_80723b5d4f0fdfa2], a0);
    }

    jint StringBuffer::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_d938fc64e8c6df2d], a0);
    }

    jint StringBuffer::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_d938fc64e8c6df2d], a0);
    }

    jint StringBuffer::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_91b9e1e34b2235d5], a0, a1);
    }

    jint StringBuffer::compareTo(const StringBuffer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_784eae7abd0959fa], a0.this$);
    }

    StringBuffer StringBuffer::delete$(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_delete_0c570a0b511c51e8], a0, a1));
    }

    StringBuffer StringBuffer::deleteCharAt(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_deleteCharAt_10ef5de1d62708bc], a0));
    }

    void StringBuffer::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_8fd427ab23829bf5], a0);
    }

    void StringBuffer::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_58054e664fd79305], a0, a1, a2.this$, a3);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_d4ec284f93191e28], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_33fd3fbd551e1b26], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jboolean a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_a3e3eb30c2154b50], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jchar a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_33bf2983adaf1dc2], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jdouble a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_977c128c195ab5fa], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jfloat a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_1c0ff125d719562c], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_0c570a0b511c51e8], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_bafd4d793786699f], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_6011c2f77755ce72], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jlong a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_2e4552e0a1b72aba], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_41a884c10db78a4d], a0, a1.this$, a2, a3));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_750c8059b29e93ff], a0, a1.this$, a2, a3));
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_84fe1f8fbbcb0268], a0.this$);
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_36da4b2d3bc5085f], a0.this$, a1);
    }

    jint StringBuffer::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_d6ab429752e7c267]);
    }

    jint StringBuffer::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_91b9e1e34b2235d5], a0, a1);
    }

    StringBuffer StringBuffer::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_replace_0817eecda047e3ef], a0, a1, a2.this$));
    }

    StringBuffer StringBuffer::reverse() const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_reverse_eb1ec7cf84c46af7]));
    }

    void StringBuffer::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_2768c52161be0306], a0, a1);
    }

    void StringBuffer::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_8fd427ab23829bf5], a0);
    }

    ::java::lang::CharSequence StringBuffer::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_b87db528df453723], a0, a1));
    }

    ::java::lang::String StringBuffer::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_c81987d6b0e2977a], a0));
    }

    ::java::lang::String StringBuffer::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_43e3765e4d074a90], a0, a1));
    }

    ::java::lang::String StringBuffer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void StringBuffer::trimToSize() const
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
#include "java/io/InvalidObjectException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InvalidObjectException::class$ = NULL;
    jmethodID *InvalidObjectException::mids$ = NULL;
    bool InvalidObjectException::live$ = false;

    jclass InvalidObjectException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InvalidObjectException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidObjectException::InvalidObjectException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InvalidObjectException__methods_[] = {
      DECLARE_METHOD(t_InvalidObjectException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InvalidObjectException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InvalidObjectException)[] = {
      { Py_tp_methods, t_InvalidObjectException__methods_ },
      { Py_tp_init, (void *) t_InvalidObjectException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InvalidObjectException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(InvalidObjectException, t_InvalidObjectException, InvalidObjectException);

    void t_InvalidObjectException::install(PyObject *module)
    {
      installType(&PY_TYPE(InvalidObjectException), &PY_TYPE_DEF(InvalidObjectException), module, "InvalidObjectException", 0);
    }

    void t_InvalidObjectException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "class_", make_descriptor(InvalidObjectException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "wrapfn_", make_descriptor(t_InvalidObjectException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InvalidObjectException::initializeClass, 1)))
        return NULL;
      return t_InvalidObjectException::wrap_Object(InvalidObjectException(((t_InvalidObjectException *) arg)->object.this$));
    }
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InvalidObjectException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      InvalidObjectException object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = InvalidObjectException(a0));
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
        mids$[mid_add_83ee235bb1e64e94] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)V");
        mids$[mid_hasNext_eee3de00fe971136] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_hasPrevious_eee3de00fe971136] = env->getMethodID(cls, "hasPrevious", "()Z");
        mids$[mid_next_704a5bee58538972] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_nextIndex_d6ab429752e7c267] = env->getMethodID(cls, "nextIndex", "()I");
        mids$[mid_previous_704a5bee58538972] = env->getMethodID(cls, "previous", "()Ljava/lang/Object;");
        mids$[mid_previousIndex_d6ab429752e7c267] = env->getMethodID(cls, "previousIndex", "()I");
        mids$[mid_remove_ff7cb6c242604316] = env->getMethodID(cls, "remove", "()V");
        mids$[mid_set_83ee235bb1e64e94] = env->getMethodID(cls, "set", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ListIterator::add(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_add_83ee235bb1e64e94], a0.this$);
    }

    jboolean ListIterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_eee3de00fe971136]);
    }

    jboolean ListIterator::hasPrevious() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasPrevious_eee3de00fe971136]);
    }

    ::java::lang::Object ListIterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_704a5bee58538972]));
    }

    jint ListIterator::nextIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_nextIndex_d6ab429752e7c267]);
    }

    ::java::lang::Object ListIterator::previous() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_previous_704a5bee58538972]));
    }

    jint ListIterator::previousIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_previousIndex_d6ab429752e7c267]);
    }

    void ListIterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_ff7cb6c242604316]);
    }

    void ListIterator::set(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_set_83ee235bb1e64e94], a0.this$);
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
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/Integer.h"
#include "java/util/function/IntConsumer.h"
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
        mids$[mid_forEachRemaining_d2613fa543667869] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/IntConsumer;)V");
        mids$[mid_tryAdvance_993a28c2374d5a30] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/IntConsumer;)Z");
        mids$[mid_trySplit_ed7f6570a7c86ac6] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfInt;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfInt::forEachRemaining(const ::java::util::function::IntConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_d2613fa543667869], a0.this$);
    }

    jboolean Spliterator$OfInt::tryAdvance(const ::java::util::function::IntConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_993a28c2374d5a30], a0.this$);
    }

    Spliterator$OfInt Spliterator$OfInt::trySplit() const
    {
      return Spliterator$OfInt(env->callObjectMethod(this$, mids$[mid_trySplit_ed7f6570a7c86ac6]));
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
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Long.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator$OfLong.h"
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
        mids$[mid_forEachRemaining_6eb6c26d2f8e123b] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/LongConsumer;)V");
        mids$[mid_tryAdvance_20c85a04ebc23896] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/LongConsumer;)Z");
        mids$[mid_trySplit_a1ccd7694ec41555] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfLong;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfLong::forEachRemaining(const ::java::util::function::LongConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_6eb6c26d2f8e123b], a0.this$);
    }

    jboolean Spliterator$OfLong::tryAdvance(const ::java::util::function::LongConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_20c85a04ebc23896], a0.this$);
    }

    Spliterator$OfLong Spliterator$OfLong::trySplit() const
    {
      return Spliterator$OfLong(env->callObjectMethod(this$, mids$[mid_trySplit_a1ccd7694ec41555]));
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
#include "java/lang/ClassLoader.h"
#include "java/util/stream/Stream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Package.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
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
        mids$[mid_clearAssertionStatus_ff7cb6c242604316] = env->getMethodID(cls, "clearAssertionStatus", "()V");
        mids$[mid_getDefinedPackage_400c3bbc8924b246] = env->getMethodID(cls, "getDefinedPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getDefinedPackages_37403be403c5ea81] = env->getMethodID(cls, "getDefinedPackages", "()[Ljava/lang/Package;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_7e232a6d8e4f63bc] = env->getMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
        mids$[mid_getPlatformClassLoader_7e232a6d8e4f63bc] = env->getStaticMethodID(cls, "getPlatformClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getResource_549d2318dcb16c72] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_05f5377821499489] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getResources_83c9a88b2512cc85] = env->getMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getSystemClassLoader_7e232a6d8e4f63bc] = env->getStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getSystemResource_549d2318dcb16c72] = env->getStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getSystemResourceAsStream_05f5377821499489] = env->getStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSystemResources_83c9a88b2512cc85] = env->getStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getUnnamedModule_61f66fcaa02aad4a] = env->getMethodID(cls, "getUnnamedModule", "()Ljava/lang/Module;");
        mids$[mid_isRegisteredAsParallelCapable_eee3de00fe971136] = env->getMethodID(cls, "isRegisteredAsParallelCapable", "()Z");
        mids$[mid_loadClass_460cf69d907ca8bf] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resources_37029a1f69d756ec] = env->getMethodID(cls, "resources", "(Ljava/lang/String;)Ljava/util/stream/Stream;");
        mids$[mid_setClassAssertionStatus_c5d48f261709aa3e] = env->getMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_setDefaultAssertionStatus_b35db77cae58639e] = env->getMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
        mids$[mid_setPackageAssertionStatus_c5d48f261709aa3e] = env->getMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_loadClass_8cea458b2b4a9ff2] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;");
        mids$[mid_definePackage_665f8f02953bc652] = env->getMethodID(cls, "definePackage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;");
        mids$[mid_getPackage_400c3bbc8924b246] = env->getMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_setSigners_8f536d136f83ff79] = env->getMethodID(cls, "setSigners", "(Ljava/lang/Class;[Ljava/lang/Object;)V");
        mids$[mid_findResource_2e7511d81e1f9d6e] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_findResource_549d2318dcb16c72] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getClassLoadingLock_bb1ff484ae64c57e] = env->getMethodID(cls, "getClassLoadingLock", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_findClass_8cfd7b4ac04c4786] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_460cf69d907ca8bf] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_defineClass_ce1bd2ffaeb48e03] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_defineClass_76b1b0365f5b9a37] = env->getMethodID(cls, "defineClass", "([BII)Ljava/lang/Class;");
        mids$[mid_defineClass_5faa6bc37a7c1e82] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;");
        mids$[mid_defineClass_36bccabffe702045] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_resolveClass_52aa27780ff57435] = env->getMethodID(cls, "resolveClass", "(Ljava/lang/Class;)V");
        mids$[mid_findSystemClass_460cf69d907ca8bf] = env->getMethodID(cls, "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findLoadedClass_460cf69d907ca8bf] = env->getMethodID(cls, "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findResources_83c9a88b2512cc85] = env->getMethodID(cls, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_registerAsParallelCapable_eee3de00fe971136] = env->getStaticMethodID(cls, "registerAsParallelCapable", "()Z");
        mids$[mid_getPackages_37403be403c5ea81] = env->getMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_findLibrary_95277969d373e11f] = env->getMethodID(cls, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ClassLoader::clearAssertionStatus() const
    {
      env->callVoidMethod(this$, mids$[mid_clearAssertionStatus_ff7cb6c242604316]);
    }

    ::java::lang::Package ClassLoader::getDefinedPackage(const ::java::lang::String & a0) const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getDefinedPackage_400c3bbc8924b246], a0.this$));
    }

    JArray< ::java::lang::Package > ClassLoader::getDefinedPackages() const
    {
      return JArray< ::java::lang::Package >(env->callObjectMethod(this$, mids$[mid_getDefinedPackages_37403be403c5ea81]));
    }

    ::java::lang::String ClassLoader::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    ClassLoader ClassLoader::getParent() const
    {
      return ClassLoader(env->callObjectMethod(this$, mids$[mid_getParent_7e232a6d8e4f63bc]));
    }

    ClassLoader ClassLoader::getPlatformClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getPlatformClassLoader_7e232a6d8e4f63bc]));
    }

    ::java::net::URL ClassLoader::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_549d2318dcb16c72], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_05f5377821499489], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getResources(const ::java::lang::String & a0) const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getResources_83c9a88b2512cc85], a0.this$));
    }

    ClassLoader ClassLoader::getSystemClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getSystemClassLoader_7e232a6d8e4f63bc]));
    }

    ::java::net::URL ClassLoader::getSystemResource(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::net::URL(env->callStaticObjectMethod(cls, mids$[mid_getSystemResource_549d2318dcb16c72], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getSystemResourceAsStream(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::InputStream(env->callStaticObjectMethod(cls, mids$[mid_getSystemResourceAsStream_05f5377821499489], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getSystemResources(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_getSystemResources_83c9a88b2512cc85], a0.this$));
    }

    ::java::lang::Module ClassLoader::getUnnamedModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getUnnamedModule_61f66fcaa02aad4a]));
    }

    jboolean ClassLoader::isRegisteredAsParallelCapable() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isRegisteredAsParallelCapable_eee3de00fe971136]);
    }

    ::java::lang::Class ClassLoader::loadClass(const ::java::lang::String & a0) const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_loadClass_460cf69d907ca8bf], a0.this$));
    }

    ::java::util::stream::Stream ClassLoader::resources(const ::java::lang::String & a0) const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_resources_37029a1f69d756ec], a0.this$));
    }

    void ClassLoader::setClassAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setClassAssertionStatus_c5d48f261709aa3e], a0.this$, a1);
    }

    void ClassLoader::setDefaultAssertionStatus(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDefaultAssertionStatus_b35db77cae58639e], a0);
    }

    void ClassLoader::setPackageAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setPackageAssertionStatus_c5d48f261709aa3e], a0.this$, a1);
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
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfDouble::class$ = NULL;
    jmethodID *Spliterator$OfDouble::mids$ = NULL;
    bool Spliterator$OfDouble::live$ = false;

    jclass Spliterator$OfDouble::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfDouble");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_a4d506ef5f26a2aa] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_tryAdvance_867f85b28b95d478] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z");
        mids$[mid_trySplit_2d06752ec2b10dcc] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfDouble;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_a4d506ef5f26a2aa], a0.this$);
    }

    jboolean Spliterator$OfDouble::tryAdvance(const ::java::util::function::DoubleConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_867f85b28b95d478], a0.this$);
    }

    Spliterator$OfDouble Spliterator$OfDouble::trySplit() const
    {
      return Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_trySplit_2d06752ec2b10dcc]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfDouble_of_(t_Spliterator$OfDouble *self, PyObject *args);
    static PyObject *t_Spliterator$OfDouble_forEachRemaining(t_Spliterator$OfDouble *self, PyObject *args);
    static PyObject *t_Spliterator$OfDouble_tryAdvance(t_Spliterator$OfDouble *self, PyObject *args);
    static PyObject *t_Spliterator$OfDouble_trySplit(t_Spliterator$OfDouble *self, PyObject *args);
    static PyObject *t_Spliterator$OfDouble_get__parameters_(t_Spliterator$OfDouble *self, void *data);
    static PyGetSetDef t_Spliterator$OfDouble__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfDouble, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfDouble__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfDouble, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfDouble, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfDouble, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfDouble, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfDouble, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfDouble, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfDouble)[] = {
      { Py_tp_methods, t_Spliterator$OfDouble__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfDouble__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfDouble)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator$OfPrimitive),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfDouble, t_Spliterator$OfDouble, Spliterator$OfDouble);
    PyObject *t_Spliterator$OfDouble::wrap_Object(const Spliterator$OfDouble& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfDouble::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfDouble *self = (t_Spliterator$OfDouble *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfDouble::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfDouble::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfDouble *self = (t_Spliterator$OfDouble *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator$OfDouble::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfDouble), &PY_TYPE_DEF(Spliterator$OfDouble), module, "Spliterator$OfDouble", 0);
    }

    void t_Spliterator$OfDouble::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfDouble), "class_", make_descriptor(Spliterator$OfDouble::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfDouble), "wrapfn_", make_descriptor(t_Spliterator$OfDouble::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfDouble), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfDouble::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfDouble::wrap_Object(Spliterator$OfDouble(((t_Spliterator$OfDouble *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfDouble::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfDouble_of_(t_Spliterator$OfDouble *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfDouble_forEachRemaining(t_Spliterator$OfDouble *self, PyObject *args)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfDouble), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfDouble_tryAdvance(t_Spliterator$OfDouble *self, PyObject *args)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfDouble), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfDouble_trySplit(t_Spliterator$OfDouble *self, PyObject *args)
    {
      Spliterator$OfDouble result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return t_Spliterator$OfDouble::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfDouble), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfDouble_get__parameters_(t_Spliterator$OfDouble *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "java/util/SortedMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/Collection.h"
#include "java/util/SortedMap.h"
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
        mids$[mid_comparator_44d5f0105a5559b7] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_firstKey_704a5bee58538972] = env->getMethodID(cls, "firstKey", "()Ljava/lang/Object;");
        mids$[mid_headMap_35686318c7d1689b] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_lastKey_704a5bee58538972] = env->getMethodID(cls, "lastKey", "()Ljava/lang/Object;");
        mids$[mid_subMap_ba68c05ed4428e11] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_35686318c7d1689b] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedMap::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_44d5f0105a5559b7]));
    }

    ::java::util::Set SortedMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    ::java::lang::Object SortedMap::firstKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_firstKey_704a5bee58538972]));
    }

    SortedMap SortedMap::headMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_35686318c7d1689b], a0.this$));
    }

    ::java::util::Set SortedMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    ::java::lang::Object SortedMap::lastKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lastKey_704a5bee58538972]));
    }

    SortedMap SortedMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_ba68c05ed4428e11], a0.this$, a1.this$));
    }

    SortedMap SortedMap::tailMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_35686318c7d1689b], a0.this$));
    }

    ::java::util::Collection SortedMap::values() const
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
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_83ee235bb1e64e94] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_83ee235bb1e64e94] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4f613ccd2f803b4b] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_704a5bee58538972] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_704a5bee58538972] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_704a5bee58538972] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_72faff9b05f5ed5e] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_72faff9b05f5ed5e] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_72faff9b05f5ed5e] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_704a5bee58538972] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_704a5bee58538972] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_704a5bee58538972] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_704a5bee58538972] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_704a5bee58538972] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_704a5bee58538972] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_704a5bee58538972] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_83ee235bb1e64e94] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_704a5bee58538972] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeFirst_704a5bee58538972] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_72faff9b05f5ed5e] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_704a5bee58538972] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_72faff9b05f5ed5e] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Deque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Deque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    void Deque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_83ee235bb1e64e94], a0.this$);
    }

    void Deque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_83ee235bb1e64e94], a0.this$);
    }

    jboolean Deque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Iterator Deque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4f613ccd2f803b4b]));
    }

    ::java::lang::Object Deque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_704a5bee58538972]));
    }

    ::java::lang::Object Deque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_704a5bee58538972]));
    }

    ::java::lang::Object Deque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_704a5bee58538972]));
    }

    ::java::util::Iterator Deque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jboolean Deque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Deque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Deque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Deque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_704a5bee58538972]));
    }

    ::java::lang::Object Deque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_704a5bee58538972]));
    }

    ::java::lang::Object Deque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_704a5bee58538972]));
    }

    ::java::lang::Object Deque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_704a5bee58538972]));
    }

    ::java::lang::Object Deque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_704a5bee58538972]));
    }

    ::java::lang::Object Deque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_704a5bee58538972]));
    }

    ::java::lang::Object Deque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_704a5bee58538972]));
    }

    void Deque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_83ee235bb1e64e94], a0.this$);
    }

    ::java::lang::Object Deque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_704a5bee58538972]));
    }

    jboolean Deque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Deque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_704a5bee58538972]));
    }

    jboolean Deque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Deque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_704a5bee58538972]));
    }

    jboolean Deque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_72faff9b05f5ed5e], a0.this$);
    }

    jint Deque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
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
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_element_704a5bee58538972] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_offer_72faff9b05f5ed5e] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_704a5bee58538972] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_poll_704a5bee58538972] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_remove_704a5bee58538972] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Queue::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Queue::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_704a5bee58538972]));
    }

    jboolean Queue::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Queue::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_704a5bee58538972]));
    }

    ::java::lang::Object Queue::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_704a5bee58538972]));
    }

    ::java::lang::Object Queue::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_704a5bee58538972]));
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
#include "java/util/OptionalDouble.h"
#include "java/lang/Runnable.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/OptionalDouble.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
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
        mids$[mid_empty_04dba3560d5bf527] = env->getStaticMethodID(cls, "empty", "()Ljava/util/OptionalDouble;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAsDouble_9981f74b2d109da6] = env->getMethodID(cls, "getAsDouble", "()D");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_ifPresent_a4d506ef5f26a2aa] = env->getMethodID(cls, "ifPresent", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_ifPresentOrElse_07b421c1165cbd20] = env->getMethodID(cls, "ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_eee3de00fe971136] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_dbd051e44b105598] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/OptionalDouble;");
        mids$[mid_orElse_bf28ed64d6e8576b] = env->getMethodID(cls, "orElse", "(D)D");
        mids$[mid_orElseThrow_9981f74b2d109da6] = env->getMethodID(cls, "orElseThrow", "()D");
        mids$[mid_orElseThrow_469eb420b86053e1] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)D");
        mids$[mid_stream_98f7f3ef9d3d1b57] = env->getMethodID(cls, "stream", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OptionalDouble OptionalDouble::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_empty_04dba3560d5bf527]));
    }

    jboolean OptionalDouble::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jdouble OptionalDouble::getAsDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAsDouble_9981f74b2d109da6]);
    }

    jint OptionalDouble::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    void OptionalDouble::ifPresent(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresent_a4d506ef5f26a2aa], a0.this$);
    }

    void OptionalDouble::ifPresentOrElse(const ::java::util::function::DoubleConsumer & a0, const ::java::lang::Runnable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresentOrElse_07b421c1165cbd20], a0.this$, a1.this$);
    }

    jboolean OptionalDouble::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    jboolean OptionalDouble::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_eee3de00fe971136]);
    }

    OptionalDouble OptionalDouble::of(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_of_dbd051e44b105598], a0));
    }

    jdouble OptionalDouble::orElse(jdouble a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElse_bf28ed64d6e8576b], a0);
    }

    jdouble OptionalDouble::orElseThrow() const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_9981f74b2d109da6]);
    }

    jdouble OptionalDouble::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_469eb420b86053e1], a0.this$);
    }

    ::java::util::stream::DoubleStream OptionalDouble::stream() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_stream_98f7f3ef9d3d1b57]));
    }

    ::java::lang::String OptionalDouble::toString() const
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
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
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
        mids$[mid_forEachRemaining_a4d506ef5f26a2aa] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_next_e0ad481f62df706f] = env->getMethodID(cls, "next", "()Ljava/lang/Double;");
        mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_a4d506ef5f26a2aa], a0.this$);
    }

    ::java::lang::Double PrimitiveIterator$OfDouble::next() const
    {
      return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_next_e0ad481f62df706f]));
    }

    jdouble PrimitiveIterator$OfDouble::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
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
        mids$[mid_validateObject_ff7cb6c242604316] = env->getMethodID(cls, "validateObject", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectInputValidation::validateObject() const
    {
      env->callVoidMethod(this$, mids$[mid_validateObject_ff7cb6c242604316]);
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
#include "java/io/ObjectStreamException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamException::class$ = NULL;
    jmethodID *ObjectStreamException::mids$ = NULL;
    bool ObjectStreamException::live$ = false;

    jclass ObjectStreamException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamException");

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
    static PyObject *t_ObjectStreamException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamException_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_ObjectStreamException__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamException)[] = {
      { Py_tp_methods, t_ObjectStreamException__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(ObjectStreamException, t_ObjectStreamException, ObjectStreamException);

    void t_ObjectStreamException::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamException), &PY_TYPE_DEF(ObjectStreamException), module, "ObjectStreamException", 0);
    }

    void t_ObjectStreamException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamException), "class_", make_descriptor(ObjectStreamException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamException), "wrapfn_", make_descriptor(t_ObjectStreamException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectStreamException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamException::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamException::wrap_Object(ObjectStreamException(((t_ObjectStreamException *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Package.h"
#include "java/lang/Package.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Package::class$ = NULL;
    jmethodID *Package::mids$ = NULL;
    bool Package::live$ = false;

    jclass Package::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Package");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getImplementationTitle_d2c8eb4129821f0e] = env->getMethodID(cls, "getImplementationTitle", "()Ljava/lang/String;");
        mids$[mid_getImplementationVendor_d2c8eb4129821f0e] = env->getMethodID(cls, "getImplementationVendor", "()Ljava/lang/String;");
        mids$[mid_getImplementationVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getImplementationVersion", "()Ljava/lang/String;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackage_400c3bbc8924b246] = env->getStaticMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getPackages_37403be403c5ea81] = env->getStaticMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_getSpecificationTitle_d2c8eb4129821f0e] = env->getMethodID(cls, "getSpecificationTitle", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVendor_d2c8eb4129821f0e] = env->getMethodID(cls, "getSpecificationVendor", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getSpecificationVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isCompatibleWith_df4c65b2aede5c41] = env->getMethodID(cls, "isCompatibleWith", "(Ljava/lang/String;)Z");
        mids$[mid_isSealed_eee3de00fe971136] = env->getMethodID(cls, "isSealed", "()Z");
        mids$[mid_isSealed_64047ecd76edcfe8] = env->getMethodID(cls, "isSealed", "(Ljava/net/URL;)Z");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String Package::getImplementationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationTitle_d2c8eb4129821f0e]));
    }

    ::java::lang::String Package::getImplementationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVendor_d2c8eb4129821f0e]));
    }

    ::java::lang::String Package::getImplementationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVersion_d2c8eb4129821f0e]));
    }

    ::java::lang::String Package::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    Package Package::getPackage(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Package(env->callStaticObjectMethod(cls, mids$[mid_getPackage_400c3bbc8924b246], a0.this$));
    }

    JArray< Package > Package::getPackages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Package >(env->callStaticObjectMethod(cls, mids$[mid_getPackages_37403be403c5ea81]));
    }

    ::java::lang::String Package::getSpecificationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationTitle_d2c8eb4129821f0e]));
    }

    ::java::lang::String Package::getSpecificationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVendor_d2c8eb4129821f0e]));
    }

    ::java::lang::String Package::getSpecificationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVersion_d2c8eb4129821f0e]));
    }

    jint Package::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Package::isCompatibleWith(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_df4c65b2aede5c41], a0.this$);
    }

    jboolean Package::isSealed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_eee3de00fe971136]);
    }

    jboolean Package::isSealed(const ::java::net::URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_64047ecd76edcfe8], a0.this$);
    }

    ::java::lang::String Package::toString() const
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
    static PyObject *t_Package_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_getImplementationTitle(t_Package *self);
    static PyObject *t_Package_getImplementationVendor(t_Package *self);
    static PyObject *t_Package_getImplementationVersion(t_Package *self);
    static PyObject *t_Package_getName(t_Package *self);
    static PyObject *t_Package_getPackage(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_getPackages(PyTypeObject *type);
    static PyObject *t_Package_getSpecificationTitle(t_Package *self);
    static PyObject *t_Package_getSpecificationVendor(t_Package *self);
    static PyObject *t_Package_getSpecificationVersion(t_Package *self);
    static PyObject *t_Package_hashCode(t_Package *self, PyObject *args);
    static PyObject *t_Package_isCompatibleWith(t_Package *self, PyObject *arg);
    static PyObject *t_Package_isSealed(t_Package *self, PyObject *args);
    static PyObject *t_Package_toString(t_Package *self, PyObject *args);
    static PyObject *t_Package_get__implementationTitle(t_Package *self, void *data);
    static PyObject *t_Package_get__implementationVendor(t_Package *self, void *data);
    static PyObject *t_Package_get__implementationVersion(t_Package *self, void *data);
    static PyObject *t_Package_get__name(t_Package *self, void *data);
    static PyObject *t_Package_get__packages(t_Package *self, void *data);
    static PyObject *t_Package_get__sealed(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationTitle(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationVendor(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationVersion(t_Package *self, void *data);
    static PyGetSetDef t_Package__fields_[] = {
      DECLARE_GET_FIELD(t_Package, implementationTitle),
      DECLARE_GET_FIELD(t_Package, implementationVendor),
      DECLARE_GET_FIELD(t_Package, implementationVersion),
      DECLARE_GET_FIELD(t_Package, name),
      DECLARE_GET_FIELD(t_Package, packages),
      DECLARE_GET_FIELD(t_Package, sealed),
      DECLARE_GET_FIELD(t_Package, specificationTitle),
      DECLARE_GET_FIELD(t_Package, specificationVendor),
      DECLARE_GET_FIELD(t_Package, specificationVersion),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Package__methods_[] = {
      DECLARE_METHOD(t_Package, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, getImplementationTitle, METH_NOARGS),
      DECLARE_METHOD(t_Package, getImplementationVendor, METH_NOARGS),
      DECLARE_METHOD(t_Package, getImplementationVersion, METH_NOARGS),
      DECLARE_METHOD(t_Package, getName, METH_NOARGS),
      DECLARE_METHOD(t_Package, getPackage, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, getPackages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Package, getSpecificationTitle, METH_NOARGS),
      DECLARE_METHOD(t_Package, getSpecificationVendor, METH_NOARGS),
      DECLARE_METHOD(t_Package, getSpecificationVersion, METH_NOARGS),
      DECLARE_METHOD(t_Package, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Package, isCompatibleWith, METH_O),
      DECLARE_METHOD(t_Package, isSealed, METH_VARARGS),
      DECLARE_METHOD(t_Package, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Package)[] = {
      { Py_tp_methods, t_Package__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Package__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Package)[] = {
      &PY_TYPE_DEF(::java::lang::NamedPackage),
      NULL
    };

    DEFINE_TYPE(Package, t_Package, Package);

    void t_Package::install(PyObject *module)
    {
      installType(&PY_TYPE(Package), &PY_TYPE_DEF(Package), module, "Package", 0);
    }

    void t_Package::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "class_", make_descriptor(Package::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "wrapfn_", make_descriptor(t_Package::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Package_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Package::initializeClass, 1)))
        return NULL;
      return t_Package::wrap_Object(Package(((t_Package *) arg)->object.this$));
    }
    static PyObject *t_Package_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Package::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Package_getImplementationTitle(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationTitle());
      return j2p(result);
    }

    static PyObject *t_Package_getImplementationVendor(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationVendor());
      return j2p(result);
    }

    static PyObject *t_Package_getImplementationVersion(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationVersion());
      return j2p(result);
    }

    static PyObject *t_Package_getName(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Package_getPackage(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Package result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Package::getPackage(a0));
        return t_Package::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getPackage", arg);
      return NULL;
    }

    static PyObject *t_Package_getPackages(PyTypeObject *type)
    {
      JArray< Package > result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Package::getPackages());
      return JArray<jobject>(result.this$).wrap(t_Package::wrap_jobject);
    }

    static PyObject *t_Package_getSpecificationTitle(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationTitle());
      return j2p(result);
    }

    static PyObject *t_Package_getSpecificationVendor(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationVendor());
      return j2p(result);
    }

    static PyObject *t_Package_getSpecificationVersion(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationVersion());
      return j2p(result);
    }

    static PyObject *t_Package_hashCode(t_Package *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Package), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Package_isCompatibleWith(t_Package *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.isCompatibleWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
      return NULL;
    }

    static PyObject *t_Package_isSealed(t_Package *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSealed());
          Py_RETURN_BOOL(result);
        }
        break;
       case 1:
        {
          ::java::net::URL a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isSealed(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isSealed", args);
      return NULL;
    }

    static PyObject *t_Package_toString(t_Package *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Package), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Package_get__implementationTitle(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationTitle());
      return j2p(value);
    }

    static PyObject *t_Package_get__implementationVendor(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationVendor());
      return j2p(value);
    }

    static PyObject *t_Package_get__implementationVersion(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationVersion());
      return j2p(value);
    }

    static PyObject *t_Package_get__name(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Package_get__packages(t_Package *self, void *data)
    {
      JArray< Package > value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackages());
      return JArray<jobject>(value.this$).wrap(t_Package::wrap_jobject);
    }

    static PyObject *t_Package_get__sealed(t_Package *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSealed());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Package_get__specificationTitle(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationTitle());
      return j2p(value);
    }

    static PyObject *t_Package_get__specificationVendor(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationVendor());
      return j2p(value);
    }

    static PyObject *t_Package_get__specificationVersion(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationVersion());
      return j2p(value);
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
        mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_getClassName_d2c8eb4129821f0e] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    MissingResourceException::MissingResourceException(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::String MissingResourceException::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_d2c8eb4129821f0e]));
    }

    ::java::lang::String MissingResourceException::getKey() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InterruptedException::InterruptedException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    InterruptedException::InterruptedException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
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
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter$FilterInfo::class$ = NULL;
    jmethodID *ObjectInputFilter$FilterInfo::mids$ = NULL;
    bool ObjectInputFilter$FilterInfo::live$ = false;

    jclass ObjectInputFilter$FilterInfo::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter$FilterInfo");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arrayLength_42c72b98e3c2e08a] = env->getMethodID(cls, "arrayLength", "()J");
        mids$[mid_depth_42c72b98e3c2e08a] = env->getMethodID(cls, "depth", "()J");
        mids$[mid_references_42c72b98e3c2e08a] = env->getMethodID(cls, "references", "()J");
        mids$[mid_serialClass_d5247e4b166c4ce8] = env->getMethodID(cls, "serialClass", "()Ljava/lang/Class;");
        mids$[mid_streamBytes_42c72b98e3c2e08a] = env->getMethodID(cls, "streamBytes", "()J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jlong ObjectInputFilter$FilterInfo::arrayLength() const
    {
      return env->callLongMethod(this$, mids$[mid_arrayLength_42c72b98e3c2e08a]);
    }

    jlong ObjectInputFilter$FilterInfo::depth() const
    {
      return env->callLongMethod(this$, mids$[mid_depth_42c72b98e3c2e08a]);
    }

    jlong ObjectInputFilter$FilterInfo::references() const
    {
      return env->callLongMethod(this$, mids$[mid_references_42c72b98e3c2e08a]);
    }

    ::java::lang::Class ObjectInputFilter$FilterInfo::serialClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_serialClass_d5247e4b166c4ce8]));
    }

    jlong ObjectInputFilter$FilterInfo::streamBytes() const
    {
      return env->callLongMethod(this$, mids$[mid_streamBytes_42c72b98e3c2e08a]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter$FilterInfo_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$FilterInfo_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$FilterInfo_arrayLength(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_depth(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_references(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_serialClass(t_ObjectInputFilter$FilterInfo *self);
    static PyObject *t_ObjectInputFilter$FilterInfo_streamBytes(t_ObjectInputFilter$FilterInfo *self);

    static PyMethodDef t_ObjectInputFilter$FilterInfo__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, arrayLength, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, depth, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, references, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, serialClass, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputFilter$FilterInfo, streamBytes, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter$FilterInfo)[] = {
      { Py_tp_methods, t_ObjectInputFilter$FilterInfo__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter$FilterInfo)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter$FilterInfo, t_ObjectInputFilter$FilterInfo, ObjectInputFilter$FilterInfo);

    void t_ObjectInputFilter$FilterInfo::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter$FilterInfo), &PY_TYPE_DEF(ObjectInputFilter$FilterInfo), module, "ObjectInputFilter$FilterInfo", 0);
    }

    void t_ObjectInputFilter$FilterInfo::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "class_", make_descriptor(ObjectInputFilter$FilterInfo::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "wrapfn_", make_descriptor(t_ObjectInputFilter$FilterInfo::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$FilterInfo), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter$FilterInfo::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter$FilterInfo::wrap_Object(ObjectInputFilter$FilterInfo(((t_ObjectInputFilter$FilterInfo *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter$FilterInfo_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter$FilterInfo::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_arrayLength(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.arrayLength());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_depth(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.depth());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_references(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.references());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_serialClass(t_ObjectInputFilter$FilterInfo *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.serialClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectInputFilter$FilterInfo_streamBytes(t_ObjectInputFilter$FilterInfo *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.streamBytes());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/String.h"
#include "java/lang/System$Logger$Level.h"
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
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSeverity_d6ab429752e7c267] = env->getMethodID(cls, "getSeverity", "()I");
        mids$[mid_valueOf_23017d20e37f67ca] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/System$Logger$Level;");
        mids$[mid_values_d20c27684a0c8261] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/System$Logger$Level;");

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
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    jint System$Logger$Level::getSeverity() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeverity_d6ab429752e7c267]);
    }

    System$Logger$Level System$Logger$Level::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return System$Logger$Level(env->callStaticObjectMethod(cls, mids$[mid_valueOf_23017d20e37f67ca], a0.this$));
    }

    JArray< System$Logger$Level > System$Logger$Level::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< System$Logger$Level >(env->callStaticObjectMethod(cls, mids$[mid_values_d20c27684a0c8261]));
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
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SyncFailedException::SyncFailedException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
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
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_874e391556ea1b99] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_activeCount_d6ab429752e7c267] = env->getMethodID(cls, "activeCount", "()I");
        mids$[mid_activeGroupCount_d6ab429752e7c267] = env->getMethodID(cls, "activeGroupCount", "()I");
        mids$[mid_allowThreadSuspension_80aaf3d99b4df682] = env->getMethodID(cls, "allowThreadSuspension", "(Z)Z");
        mids$[mid_checkAccess_ff7cb6c242604316] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_destroy_ff7cb6c242604316] = env->getMethodID(cls, "destroy", "()V");
        mids$[mid_enumerate_156c27ca0b550ad2] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_enumerate_cab2a4868bba29f5] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;)I");
        mids$[mid_enumerate_1c4abd89c23f47d0] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;Z)I");
        mids$[mid_enumerate_7d43ae570a3b2c90] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;Z)I");
        mids$[mid_getMaxPriority_d6ab429752e7c267] = env->getMethodID(cls, "getMaxPriority", "()I");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_7b80b98e8a66c9f8] = env->getMethodID(cls, "getParent", "()Ljava/lang/ThreadGroup;");
        mids$[mid_interrupt_ff7cb6c242604316] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_isDaemon_eee3de00fe971136] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isDestroyed_eee3de00fe971136] = env->getMethodID(cls, "isDestroyed", "()Z");
        mids$[mid_list_ff7cb6c242604316] = env->getMethodID(cls, "list", "()V");
        mids$[mid_parentOf_903082b3d46da4fd] = env->getMethodID(cls, "parentOf", "(Ljava/lang/ThreadGroup;)Z");
        mids$[mid_resume_ff7cb6c242604316] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_setDaemon_b35db77cae58639e] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setMaxPriority_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxPriority", "(I)V");
        mids$[mid_stop_ff7cb6c242604316] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_ff7cb6c242604316] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_uncaughtException_c8b54bc346ca390e] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ThreadGroup::ThreadGroup(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    ThreadGroup::ThreadGroup(const ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_874e391556ea1b99, a0.this$, a1.this$)) {}

    jint ThreadGroup::activeCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeCount_d6ab429752e7c267]);
    }

    jint ThreadGroup::activeGroupCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeGroupCount_d6ab429752e7c267]);
    }

    jboolean ThreadGroup::allowThreadSuspension(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_allowThreadSuspension_80aaf3d99b4df682], a0);
    }

    void ThreadGroup::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_ff7cb6c242604316]);
    }

    void ThreadGroup::destroy() const
    {
      env->callVoidMethod(this$, mids$[mid_destroy_ff7cb6c242604316]);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_156c27ca0b550ad2], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_cab2a4868bba29f5], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_1c4abd89c23f47d0], a0.this$, a1);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_7d43ae570a3b2c90], a0.this$, a1);
    }

    jint ThreadGroup::getMaxPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaxPriority_d6ab429752e7c267]);
    }

    ::java::lang::String ThreadGroup::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
    }

    ThreadGroup ThreadGroup::getParent() const
    {
      return ThreadGroup(env->callObjectMethod(this$, mids$[mid_getParent_7b80b98e8a66c9f8]));
    }

    void ThreadGroup::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_ff7cb6c242604316]);
    }

    jboolean ThreadGroup::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_eee3de00fe971136]);
    }

    jboolean ThreadGroup::isDestroyed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDestroyed_eee3de00fe971136]);
    }

    void ThreadGroup::list() const
    {
      env->callVoidMethod(this$, mids$[mid_list_ff7cb6c242604316]);
    }

    jboolean ThreadGroup::parentOf(const ThreadGroup & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_parentOf_903082b3d46da4fd], a0.this$);
    }

    void ThreadGroup::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_ff7cb6c242604316]);
    }

    void ThreadGroup::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_b35db77cae58639e], a0);
    }

    void ThreadGroup::setMaxPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaxPriority_8fd427ab23829bf5], a0);
    }

    void ThreadGroup::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_ff7cb6c242604316]);
    }

    void ThreadGroup::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_ff7cb6c242604316]);
    }

    ::java::lang::String ThreadGroup::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    void ThreadGroup::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_c8b54bc346ca390e], a0.this$, a1.this$);
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
#include "java/text/Format$Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format$Field::class$ = NULL;
    jmethodID *Format$Field::mids$ = NULL;
    bool Format$Field::live$ = false;

    jclass Format$Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format$Field");

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
  namespace text {
    static PyObject *t_Format$Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format$Field_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Format$Field__methods_[] = {
      DECLARE_METHOD(t_Format$Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format$Field, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format$Field)[] = {
      { Py_tp_methods, t_Format$Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format$Field)[] = {
      &PY_TYPE_DEF(::java::text::AttributedCharacterIterator$Attribute),
      NULL
    };

    DEFINE_TYPE(Format$Field, t_Format$Field, Format$Field);

    void t_Format$Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Format$Field), &PY_TYPE_DEF(Format$Field), module, "Format$Field", 0);
    }

    void t_Format$Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "class_", make_descriptor(Format$Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "wrapfn_", make_descriptor(t_Format$Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format$Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format$Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format$Field::initializeClass, 1)))
        return NULL;
      return t_Format$Field::wrap_Object(Format$Field(((t_Format$Field *) arg)->object.this$));
    }
    static PyObject *t_Format$Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format$Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer.h"
#include "java/util/List.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/util/Optional.h"
#include "java/lang/Module.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
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
        mids$[mid_boot_b270adc69fca1f17] = env->getStaticMethodID(cls, "boot", "()Ljava/lang/ModuleLayer;");
        mids$[mid_empty_b270adc69fca1f17] = env->getStaticMethodID(cls, "empty", "()Ljava/lang/ModuleLayer;");
        mids$[mid_findLoader_5fb21caecfdd4534] = env->getMethodID(cls, "findLoader", "(Ljava/lang/String;)Ljava/lang/ClassLoader;");
        mids$[mid_findModule_5ca5dd5191ec02ac] = env->getMethodID(cls, "findModule", "(Ljava/lang/String;)Ljava/util/Optional;");
        mids$[mid_modules_6b191a9b12c1004b] = env->getMethodID(cls, "modules", "()Ljava/util/Set;");
        mids$[mid_parents_d751c1a57012b438] = env->getMethodID(cls, "parents", "()Ljava/util/List;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer ModuleLayer::boot()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_boot_b270adc69fca1f17]));
    }

    ModuleLayer ModuleLayer::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_empty_b270adc69fca1f17]));
    }

    ::java::lang::ClassLoader ModuleLayer::findLoader(const ::java::lang::String & a0) const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_findLoader_5fb21caecfdd4534], a0.this$));
    }

    ::java::util::Optional ModuleLayer::findModule(const ::java::lang::String & a0) const
    {
      return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findModule_5ca5dd5191ec02ac], a0.this$));
    }

    ::java::util::Set ModuleLayer::modules() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_modules_6b191a9b12c1004b]));
    }

    ::java::util::List ModuleLayer::parents() const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parents_d751c1a57012b438]));
    }

    ::java::lang::String ModuleLayer::toString() const
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
#include "java/security/BasicPermission.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace security {

    ::java::lang::Class *BasicPermission::class$ = NULL;
    jmethodID *BasicPermission::mids$ = NULL;
    bool BasicPermission::live$ = false;

    jclass BasicPermission::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/security/BasicPermission");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_d2c8eb4129821f0e] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_46638c4732e66dfd] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BasicPermission::BasicPermission(const ::java::lang::String & a0) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    BasicPermission::BasicPermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

    jboolean BasicPermission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String BasicPermission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_d2c8eb4129821f0e]));
    }

    jint BasicPermission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean BasicPermission::implies(const ::java::security::Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_46638c4732e66dfd], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace security {
    static PyObject *t_BasicPermission_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_BasicPermission_instance_(PyTypeObject *type, PyObject *arg);
    static int t_BasicPermission_init_(t_BasicPermission *self, PyObject *args, PyObject *kwds);
    static PyObject *t_BasicPermission_equals(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_getActions(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_hashCode(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_implies(t_BasicPermission *self, PyObject *args);
    static PyObject *t_BasicPermission_get__actions(t_BasicPermission *self, void *data);
    static PyGetSetDef t_BasicPermission__fields_[] = {
      DECLARE_GET_FIELD(t_BasicPermission, actions),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_BasicPermission__methods_[] = {
      DECLARE_METHOD(t_BasicPermission, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BasicPermission, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_BasicPermission, equals, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, getActions, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_BasicPermission, implies, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(BasicPermission)[] = {
      { Py_tp_methods, t_BasicPermission__methods_ },
      { Py_tp_init, (void *) t_BasicPermission_init_ },
      { Py_tp_getset, t_BasicPermission__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(BasicPermission)[] = {
      &PY_TYPE_DEF(::java::security::Permission),
      NULL
    };

    DEFINE_TYPE(BasicPermission, t_BasicPermission, BasicPermission);

    void t_BasicPermission::install(PyObject *module)
    {
      installType(&PY_TYPE(BasicPermission), &PY_TYPE_DEF(BasicPermission), module, "BasicPermission", 0);
    }

    void t_BasicPermission::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "class_", make_descriptor(BasicPermission::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "wrapfn_", make_descriptor(t_BasicPermission::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(BasicPermission), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_BasicPermission_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, BasicPermission::initializeClass, 1)))
        return NULL;
      return t_BasicPermission::wrap_Object(BasicPermission(((t_BasicPermission *) arg)->object.this$));
    }
    static PyObject *t_BasicPermission_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, BasicPermission::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_BasicPermission_init_(t_BasicPermission *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          BasicPermission object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = BasicPermission(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          BasicPermission object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = BasicPermission(a0, a1));
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

    static PyObject *t_BasicPermission_equals(t_BasicPermission *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_BasicPermission_getActions(t_BasicPermission *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getActions());
        return j2p(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "getActions", args, 2);
    }

    static PyObject *t_BasicPermission_hashCode(t_BasicPermission *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_BasicPermission_implies(t_BasicPermission *self, PyObject *args)
    {
      ::java::security::Permission a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::security::Permission::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.implies(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(BasicPermission), (PyObject *) self, "implies", args, 2);
    }

    static PyObject *t_BasicPermission_get__actions(t_BasicPermission *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getActions());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/DataInput.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *DataInput::class$ = NULL;
    jmethodID *DataInput::mids$ = NULL;
    bool DataInput::live$ = false;

    jclass DataInput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/DataInput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_readBoolean_eee3de00fe971136] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_153df32fe8b51cb6] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_9981f74b2d109da6] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFloat_0e3b995f823d65ff] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_bba2a19638de22ff] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_e4288ba5fbf20d28] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_d6ab429752e7c267] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_d2c8eb4129821f0e] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_42c72b98e3c2e08a] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readShort_5067fec74ceda473] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_d2c8eb4129821f0e] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnsignedByte_d6ab429752e7c267] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_d6ab429752e7c267] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_skipBytes_d938fc64e8c6df2d] = env->getMethodID(cls, "skipBytes", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean DataInput::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_eee3de00fe971136]);
    }

    jbyte DataInput::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_5bc9c54e4a4e6e3f]);
    }

    jchar DataInput::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_153df32fe8b51cb6]);
    }

    jdouble DataInput::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_9981f74b2d109da6]);
    }

    jfloat DataInput::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_0e3b995f823d65ff]);
    }

    void DataInput::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_bba2a19638de22ff], a0.this$);
    }

    void DataInput::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    jint DataInput::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_d6ab429752e7c267]);
    }

    ::java::lang::String DataInput::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_d2c8eb4129821f0e]));
    }

    jlong DataInput::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_42c72b98e3c2e08a]);
    }

    jshort DataInput::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_5067fec74ceda473]);
    }

    ::java::lang::String DataInput::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_d2c8eb4129821f0e]));
    }

    jint DataInput::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_d6ab429752e7c267]);
    }

    jint DataInput::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_d6ab429752e7c267]);
    }

    jint DataInput::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_d938fc64e8c6df2d], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_DataInput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataInput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DataInput_readBoolean(t_DataInput *self);
    static PyObject *t_DataInput_readByte(t_DataInput *self);
    static PyObject *t_DataInput_readChar(t_DataInput *self);
    static PyObject *t_DataInput_readDouble(t_DataInput *self);
    static PyObject *t_DataInput_readFloat(t_DataInput *self);
    static PyObject *t_DataInput_readFully(t_DataInput *self, PyObject *args);
    static PyObject *t_DataInput_readInt(t_DataInput *self);
    static PyObject *t_DataInput_readLine(t_DataInput *self);
    static PyObject *t_DataInput_readLong(t_DataInput *self);
    static PyObject *t_DataInput_readShort(t_DataInput *self);
    static PyObject *t_DataInput_readUTF(t_DataInput *self);
    static PyObject *t_DataInput_readUnsignedByte(t_DataInput *self);
    static PyObject *t_DataInput_readUnsignedShort(t_DataInput *self);
    static PyObject *t_DataInput_skipBytes(t_DataInput *self, PyObject *arg);

    static PyMethodDef t_DataInput__methods_[] = {
      DECLARE_METHOD(t_DataInput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataInput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DataInput, readBoolean, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readByte, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readChar, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readDouble, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readFloat, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readFully, METH_VARARGS),
      DECLARE_METHOD(t_DataInput, readInt, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readLine, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readLong, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readShort, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUTF, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUnsignedByte, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, readUnsignedShort, METH_NOARGS),
      DECLARE_METHOD(t_DataInput, skipBytes, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DataInput)[] = {
      { Py_tp_methods, t_DataInput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DataInput)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DataInput, t_DataInput, DataInput);

    void t_DataInput::install(PyObject *module)
    {
      installType(&PY_TYPE(DataInput), &PY_TYPE_DEF(DataInput), module, "DataInput", 0);
    }

    void t_DataInput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "class_", make_descriptor(DataInput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "wrapfn_", make_descriptor(t_DataInput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DataInput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DataInput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DataInput::initializeClass, 1)))
        return NULL;
      return t_DataInput::wrap_Object(DataInput(((t_DataInput *) arg)->object.this$));
    }
    static PyObject *t_DataInput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DataInput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_DataInput_readBoolean(t_DataInput *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.readBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DataInput_readByte(t_DataInput *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.readByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readChar(t_DataInput *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.readChar());
      return c2p(result);
    }

    static PyObject *t_DataInput_readDouble(t_DataInput *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.readDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DataInput_readFloat(t_DataInput *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.readFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DataInput_readFully(t_DataInput *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.readFully(a0));
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
            OBJ_CALL(self->object.readFully(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readFully", args);
      return NULL;
    }

    static PyObject *t_DataInput_readInt(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readInt());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readLine(t_DataInput *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_DataInput_readLong(t_DataInput *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.readLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DataInput_readShort(t_DataInput *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.readShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readUTF(t_DataInput *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readUTF());
      return j2p(result);
    }

    static PyObject *t_DataInput_readUnsignedByte(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_readUnsignedShort(t_DataInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DataInput_skipBytes(t_DataInput *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.skipBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skipBytes", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
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
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_readResolve_704a5bee58538972] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

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
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint AttributedCharacterIterator$Attribute::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    ::java::lang::String AttributedCharacterIterator$Attribute::toString() const
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
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_current_153df32fe8b51cb6] = env->getMethodID(cls, "current", "()C");
        mids$[mid_first_153df32fe8b51cb6] = env->getMethodID(cls, "first", "()C");
        mids$[mid_getBeginIndex_d6ab429752e7c267] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_d6ab429752e7c267] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getIndex_d6ab429752e7c267] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_last_153df32fe8b51cb6] = env->getMethodID(cls, "last", "()C");
        mids$[mid_next_153df32fe8b51cb6] = env->getMethodID(cls, "next", "()C");
        mids$[mid_previous_153df32fe8b51cb6] = env->getMethodID(cls, "previous", "()C");
        mids$[mid_setIndex_80723b5d4f0fdfa2] = env->getMethodID(cls, "setIndex", "(I)C");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DONE = env->getStaticCharField(cls, "DONE");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object CharacterIterator::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jchar CharacterIterator::current() const
    {
      return env->callCharMethod(this$, mids$[mid_current_153df32fe8b51cb6]);
    }

    jchar CharacterIterator::first() const
    {
      return env->callCharMethod(this$, mids$[mid_first_153df32fe8b51cb6]);
    }

    jint CharacterIterator::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_d6ab429752e7c267]);
    }

    jint CharacterIterator::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_d6ab429752e7c267]);
    }

    jint CharacterIterator::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_d6ab429752e7c267]);
    }

    jchar CharacterIterator::last() const
    {
      return env->callCharMethod(this$, mids$[mid_last_153df32fe8b51cb6]);
    }

    jchar CharacterIterator::next() const
    {
      return env->callCharMethod(this$, mids$[mid_next_153df32fe8b51cb6]);
    }

    jchar CharacterIterator::previous() const
    {
      return env->callCharMethod(this$, mids$[mid_previous_153df32fe8b51cb6]);
    }

    jchar CharacterIterator::setIndex(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_setIndex_80723b5d4f0fdfa2], a0);
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
#include "java/io/ObjectInputFilter$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputFilter$Status::class$ = NULL;
    jmethodID *ObjectInputFilter$Status::mids$ = NULL;
    bool ObjectInputFilter$Status::live$ = false;
    ObjectInputFilter$Status *ObjectInputFilter$Status::ALLOWED = NULL;
    ObjectInputFilter$Status *ObjectInputFilter$Status::REJECTED = NULL;
    ObjectInputFilter$Status *ObjectInputFilter$Status::UNDECIDED = NULL;

    jclass ObjectInputFilter$Status::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputFilter$Status");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_5116574ce0f70165] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter$Status;");
        mids$[mid_values_53c1db742799eb7c] = env->getStaticMethodID(cls, "values", "()[Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        ALLOWED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "ALLOWED", "Ljava/io/ObjectInputFilter$Status;"));
        REJECTED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "REJECTED", "Ljava/io/ObjectInputFilter$Status;"));
        UNDECIDED = new ObjectInputFilter$Status(env->getStaticObjectField(cls, "UNDECIDED", "Ljava/io/ObjectInputFilter$Status;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputFilter$Status ObjectInputFilter$Status::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectInputFilter$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5116574ce0f70165], a0.this$));
    }

    JArray< ObjectInputFilter$Status > ObjectInputFilter$Status::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ObjectInputFilter$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_53c1db742799eb7c]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputFilter$Status_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$Status_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputFilter$Status_of_(t_ObjectInputFilter$Status *self, PyObject *args);
    static PyObject *t_ObjectInputFilter$Status_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_ObjectInputFilter$Status_values(PyTypeObject *type);
    static PyObject *t_ObjectInputFilter$Status_get__parameters_(t_ObjectInputFilter$Status *self, void *data);
    static PyGetSetDef t_ObjectInputFilter$Status__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectInputFilter$Status, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputFilter$Status__methods_[] = {
      DECLARE_METHOD(t_ObjectInputFilter$Status, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, of_, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputFilter$Status, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputFilter$Status)[] = {
      { Py_tp_methods, t_ObjectInputFilter$Status__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ObjectInputFilter$Status__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputFilter$Status)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(ObjectInputFilter$Status, t_ObjectInputFilter$Status, ObjectInputFilter$Status);
    PyObject *t_ObjectInputFilter$Status::wrap_Object(const ObjectInputFilter$Status& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ObjectInputFilter$Status::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ObjectInputFilter$Status *self = (t_ObjectInputFilter$Status *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ObjectInputFilter$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ObjectInputFilter$Status::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ObjectInputFilter$Status *self = (t_ObjectInputFilter$Status *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ObjectInputFilter$Status::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputFilter$Status), &PY_TYPE_DEF(ObjectInputFilter$Status), module, "ObjectInputFilter$Status", 0);
    }

    void t_ObjectInputFilter$Status::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "class_", make_descriptor(ObjectInputFilter$Status::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "wrapfn_", make_descriptor(t_ObjectInputFilter$Status::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectInputFilter$Status::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "ALLOWED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::ALLOWED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "REJECTED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::REJECTED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputFilter$Status), "UNDECIDED", make_descriptor(t_ObjectInputFilter$Status::wrap_Object(*ObjectInputFilter$Status::UNDECIDED)));
    }

    static PyObject *t_ObjectInputFilter$Status_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputFilter$Status::initializeClass, 1)))
        return NULL;
      return t_ObjectInputFilter$Status::wrap_Object(ObjectInputFilter$Status(((t_ObjectInputFilter$Status *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputFilter$Status_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputFilter$Status::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputFilter$Status_of_(t_ObjectInputFilter$Status *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_ObjectInputFilter$Status_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ObjectInputFilter$Status result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::io::ObjectInputFilter$Status::valueOf(a0));
        return t_ObjectInputFilter$Status::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_ObjectInputFilter$Status_values(PyTypeObject *type)
    {
      JArray< ObjectInputFilter$Status > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::ObjectInputFilter$Status::values());
      return JArray<jobject>(result.this$).wrap(t_ObjectInputFilter$Status::wrap_jobject);
    }
    static PyObject *t_ObjectInputFilter$Status_get__parameters_(t_ObjectInputFilter$Status *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/DataOutput.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
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
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_b35db77cae58639e] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_8fd427ab23829bf5] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_105e1eadb709d9ac] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_8fd427ab23829bf5] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_105e1eadb709d9ac] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_1ad26e8c8c0cd65b] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFloat_11c95dcd1c301708] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_8fd427ab23829bf5] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_f5bbab7e97879358] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeShort_8fd427ab23829bf5] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_105e1eadb709d9ac] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void DataOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void DataOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void DataOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    void DataOutput::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_b35db77cae58639e], a0);
    }

    void DataOutput::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_8fd427ab23829bf5], a0);
    }

    void DataOutput::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_105e1eadb709d9ac], a0.this$);
    }

    void DataOutput::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_8fd427ab23829bf5], a0);
    }

    void DataOutput::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_105e1eadb709d9ac], a0.this$);
    }

    void DataOutput::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_1ad26e8c8c0cd65b], a0);
    }

    void DataOutput::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_11c95dcd1c301708], a0);
    }

    void DataOutput::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_8fd427ab23829bf5], a0);
    }

    void DataOutput::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_f5bbab7e97879358], a0);
    }

    void DataOutput::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_8fd427ab23829bf5], a0);
    }

    void DataOutput::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_105e1eadb709d9ac], a0.this$);
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
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}
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
        mids$[mid_forEachRemaining_83ee235bb1e64e94] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_83ee235bb1e64e94], a0.this$);
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
