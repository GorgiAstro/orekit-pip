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
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Flushable::class$ = NULL;
    jmethodID *Flushable::mids$ = NULL;
    bool Flushable::live$ = false;

    jclass Flushable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Flushable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Flushable::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_flush(t_Flushable *self);

    static PyMethodDef t_Flushable__methods_[] = {
      DECLARE_METHOD(t_Flushable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, flush, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Flushable)[] = {
      { Py_tp_methods, t_Flushable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Flushable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Flushable, t_Flushable, Flushable);

    void t_Flushable::install(PyObject *module)
    {
      installType(&PY_TYPE(Flushable), &PY_TYPE_DEF(Flushable), module, "Flushable", 0);
    }

    void t_Flushable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "class_", make_descriptor(Flushable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "wrapfn_", make_descriptor(t_Flushable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Flushable::initializeClass, 1)))
        return NULL;
      return t_Flushable::wrap_Object(Flushable(((t_Flushable *) arg)->object.this$));
    }
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Flushable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Flushable_flush(t_Flushable *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
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
#include "java/util/Spliterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Comparator.h"
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
        mids$[mid_characteristics_570ce0828f81a2c1] = env->getMethodID(cls, "characteristics", "()I");
        mids$[mid_estimateSize_492808a339bfa35f] = env->getMethodID(cls, "estimateSize", "()J");
        mids$[mid_getComparator_96e45e3694fbbb22] = env->getMethodID(cls, "getComparator", "()Ljava/util/Comparator;");
        mids$[mid_getExactSizeIfKnown_492808a339bfa35f] = env->getMethodID(cls, "getExactSizeIfKnown", "()J");
        mids$[mid_hasCharacteristics_b6e9be1df30aebaf] = env->getMethodID(cls, "hasCharacteristics", "(I)Z");
        mids$[mid_trySplit_ef1070394b413a84] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator;");

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
      return env->callIntMethod(this$, mids$[mid_characteristics_570ce0828f81a2c1]);
    }

    jlong Spliterator::estimateSize() const
    {
      return env->callLongMethod(this$, mids$[mid_estimateSize_492808a339bfa35f]);
    }

    ::java::util::Comparator Spliterator::getComparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_getComparator_96e45e3694fbbb22]));
    }

    jlong Spliterator::getExactSizeIfKnown() const
    {
      return env->callLongMethod(this$, mids$[mid_getExactSizeIfKnown_492808a339bfa35f]);
    }

    jboolean Spliterator::hasCharacteristics(jint a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasCharacteristics_b6e9be1df30aebaf], a0);
    }

    Spliterator Spliterator::trySplit() const
    {
      return Spliterator(env->callObjectMethod(this$, mids$[mid_trySplit_ef1070394b413a84]));
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
#include "java/util/Properties.h"
#include "java/util/Map$Entry.h"
#include "java/io/Reader.h"
#include "java/util/Map.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/util/Collection.h"
#include "java/io/PrintWriter.h"
#include "java/util/Set.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Properties::class$ = NULL;
    jmethodID *Properties::mids$ = NULL;
    bool Properties::live$ = false;

    jclass Properties::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Properties");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
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
        mids$[mid_getProperty_92807efd57acb082] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_d3f6016a3bf93dcd] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_0dc02dfa0be4cd25] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_list_d7059445128d3e18] = env->getMethodID(cls, "list", "(Ljava/io/PrintStream;)V");
        mids$[mid_list_4999b5b1f2d8269b] = env->getMethodID(cls, "list", "(Ljava/io/PrintWriter;)V");
        mids$[mid_load_42871fcf824ad25f] = env->getMethodID(cls, "load", "(Ljava/io/InputStream;)V");
        mids$[mid_load_6bec8244898df009] = env->getMethodID(cls, "load", "(Ljava/io/Reader;)V");
        mids$[mid_loadFromXML_42871fcf824ad25f] = env->getMethodID(cls, "loadFromXML", "(Ljava/io/InputStream;)V");
        mids$[mid_propertyNames_0dc02dfa0be4cd25] = env->getMethodID(cls, "propertyNames", "()Ljava/util/Enumeration;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_af8aa32ee9c1f184] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_83750138b7b51bf4] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_af8aa32ee9c1f184] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_25e3a1e437d39751] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_save_c55dfb0939e8fb48] = env->getMethodID(cls, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_setProperty_117fa3e1caf1236b] = env->getMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_store_c55dfb0939e8fb48] = env->getMethodID(cls, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_store_aace611d43734887] = env->getMethodID(cls, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
        mids$[mid_storeToXML_c55dfb0939e8fb48] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_storeToXML_78f8716e1ece5bfa] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_stringPropertyNames_015730311a5bacdc] = env->getMethodID(cls, "stringPropertyNames", "()Ljava/util/Set;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_0fa09c18fee449d5] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Properties::Properties() : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Properties::Properties(jint a0) : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    void Properties::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object Properties::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean Properties::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean Properties::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_65c7d273e80d497a], a0.this$);
    }

    jboolean Properties::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Enumeration Properties::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_0dc02dfa0be4cd25]));
    }

    ::java::util::Set Properties::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    jboolean Properties::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Properties::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    ::java::lang::Object Properties::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_92807efd57acb082], a0.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }

    jint Properties::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Properties::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Set Properties::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    ::java::util::Enumeration Properties::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_0dc02dfa0be4cd25]));
    }

    void Properties::list(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_d7059445128d3e18], a0.this$);
    }

    void Properties::list(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_4999b5b1f2d8269b], a0.this$);
    }

    void Properties::load(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_42871fcf824ad25f], a0.this$);
    }

    void Properties::load(const ::java::io::Reader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_6bec8244898df009], a0.this$);
    }

    void Properties::loadFromXML(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_loadFromXML_42871fcf824ad25f], a0.this$);
    }

    ::java::util::Enumeration Properties::propertyNames() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_propertyNames_0dc02dfa0be4cd25]));
    }

    ::java::lang::Object Properties::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    void Properties::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
    }

    ::java::lang::Object Properties::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::Object Properties::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jboolean Properties::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_83750138b7b51bf4], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    jboolean Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_25e3a1e437d39751], a0.this$, a1.this$, a2.this$);
    }

    void Properties::save(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_save_c55dfb0939e8fb48], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setProperty_117fa3e1caf1236b], a0.this$, a1.this$));
    }

    jint Properties::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    void Properties::store(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_c55dfb0939e8fb48], a0.this$, a1.this$);
    }

    void Properties::store(const ::java::io::Writer & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_aace611d43734887], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_c55dfb0939e8fb48], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_78f8716e1ece5bfa], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Set Properties::stringPropertyNames() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_stringPropertyNames_015730311a5bacdc]));
    }

    ::java::lang::String Properties::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::util::Collection Properties::values() const
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
    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args);
    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_list(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_load(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg);
    static PyObject *t_Properties_propertyNames(t_Properties *self);
    static PyObject *t_Properties_put(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_save(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_size(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_store(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_stringPropertyNames(t_Properties *self);
    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_values(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get__empty(t_Properties *self, void *data);
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data);
    static PyGetSetDef t_Properties__fields_[] = {
      DECLARE_GET_FIELD(t_Properties, empty),
      DECLARE_GET_FIELD(t_Properties, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Properties__methods_[] = {
      DECLARE_METHOD(t_Properties, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, of_, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clear, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clone, METH_VARARGS),
      DECLARE_METHOD(t_Properties, contains, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_Properties, elements, METH_VARARGS),
      DECLARE_METHOD(t_Properties, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, equals, METH_VARARGS),
      DECLARE_METHOD(t_Properties, get, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Properties, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keys, METH_VARARGS),
      DECLARE_METHOD(t_Properties, list, METH_VARARGS),
      DECLARE_METHOD(t_Properties, load, METH_VARARGS),
      DECLARE_METHOD(t_Properties, loadFromXML, METH_O),
      DECLARE_METHOD(t_Properties, propertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, put, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putAll, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Properties, remove, METH_VARARGS),
      DECLARE_METHOD(t_Properties, replace, METH_VARARGS),
      DECLARE_METHOD(t_Properties, save, METH_VARARGS),
      DECLARE_METHOD(t_Properties, setProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, size, METH_VARARGS),
      DECLARE_METHOD(t_Properties, store, METH_VARARGS),
      DECLARE_METHOD(t_Properties, storeToXML, METH_VARARGS),
      DECLARE_METHOD(t_Properties, stringPropertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, toString, METH_VARARGS),
      DECLARE_METHOD(t_Properties, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Properties)[] = {
      { Py_tp_methods, t_Properties__methods_ },
      { Py_tp_init, (void *) t_Properties_init_ },
      { Py_tp_getset, t_Properties__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Properties)[] = {
      &PY_TYPE_DEF(::java::util::Hashtable),
      NULL
    };

    DEFINE_TYPE(Properties, t_Properties, Properties);
    PyObject *t_Properties::wrap_Object(const Properties& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Properties::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Properties::install(PyObject *module)
    {
      installType(&PY_TYPE(Properties), &PY_TYPE_DEF(Properties), module, "Properties", 0);
    }

    void t_Properties::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "class_", make_descriptor(Properties::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "wrapfn_", make_descriptor(t_Properties::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Properties::initializeClass, 1)))
        return NULL;
      return t_Properties::wrap_Object(Properties(((t_Properties *) arg)->object.this$));
    }
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Properties::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Properties object((jobject) NULL);

          INT_CALL(object = Properties());
          self->object = object;
          self->parameters[0] = ::java::lang::PY_TYPE(Object);
          self->parameters[1] = ::java::lang::PY_TYPE(Object);
          break;
        }
       case 1:
        {
          jint a0;
          Properties object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Properties(a0));
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Object);
            self->parameters[1] = ::java::lang::PY_TYPE(Object);
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.elements());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "elements", args, 2);
    }

    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Properties_get(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keys());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keys", args, 2);
    }

    static PyObject *t_Properties_list(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_Properties_load(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Reader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "load", args);
      return NULL;
    }

    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(self->object.loadFromXML(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "loadFromXML", arg);
      return NULL;
    }

    static PyObject *t_Properties_propertyNames(t_Properties *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.propertyNames());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Properties_put(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return ::java::lang::t_Object::wrap_Object(result);
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

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_Properties_save(t_Properties *self, PyObject *args)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);

      if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.save(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "save", args);
      return NULL;
    }

    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.setProperty(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_size(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Properties_store(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "store", args);
      return NULL;
    }

    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);

          if (!parseArgs(args, "kss", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "storeToXML", args);
      return NULL;
    }

    static PyObject *t_Properties_stringPropertyNames(t_Properties *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.stringPropertyNames());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Properties_values(t_Properties *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Properties_get__empty(t_Properties *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_1b3f5cad10162d50] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getRange_11b109bd155ca898] = env->getMethodID(cls, "getRange", "()Ljava/lang/String;");
        mids$[mid_getWeight_dff5885c2c873297] = env->getMethodID(cls, "getWeight", "()D");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_mapEquivalents_4059283f910620ee] = env->getStaticMethodID(cls, "mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_parse_aade4ea8882e7a2c] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_parse_48714afa09439ff5] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_WEIGHT = env->getStaticDoubleField(cls, "MAX_WEIGHT");
        MIN_WEIGHT = env->getStaticDoubleField(cls, "MIN_WEIGHT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b3f5cad10162d50, a0.this$, a1)) {}

    jboolean Locale$LanguageRange::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String Locale$LanguageRange::getRange() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRange_11b109bd155ca898]));
    }

    jdouble Locale$LanguageRange::getWeight() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getWeight_dff5885c2c873297]);
    }

    jint Locale$LanguageRange::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    ::java::util::List Locale$LanguageRange::mapEquivalents(const ::java::util::List & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_mapEquivalents_4059283f910620ee], a0.this$, a1.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_aade4ea8882e7a2c], a0.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_48714afa09439ff5], a0.this$, a1.this$));
    }

    ::java::lang::String Locale$LanguageRange::toString() const
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InstantiationException::InstantiationException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    InstantiationException::InstantiationException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NoSuchElementException::NoSuchElementException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    NoSuchElementException::NoSuchElementException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_elements_0dc02dfa0be4cd25] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_get_9facd1449e0950d3] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keys_0dc02dfa0be4cd25] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Dictionary::Dictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ::java::util::Enumeration Dictionary::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_0dc02dfa0be4cd25]));
    }

    ::java::lang::Object Dictionary::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    jboolean Dictionary::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Enumeration Dictionary::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_0dc02dfa0be4cd25]));
    }

    ::java::lang::Object Dictionary::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    ::java::lang::Object Dictionary::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jint Dictionary::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
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
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getErrorIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getErrorIndex", "()I");
        mids$[mid_getIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setErrorIndex_99803b0791f320ff] = env->getMethodID(cls, "setErrorIndex", "(I)V");
        mids$[mid_setIndex_99803b0791f320ff] = env->getMethodID(cls, "setIndex", "(I)V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParsePosition::ParsePosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    jboolean ParsePosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint ParsePosition::getErrorIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorIndex_570ce0828f81a2c1]);
    }

    jint ParsePosition::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_570ce0828f81a2c1]);
    }

    jint ParsePosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    void ParsePosition::setErrorIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setErrorIndex_99803b0791f320ff], a0);
    }

    void ParsePosition::setIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setIndex_99803b0791f320ff], a0);
    }

    ::java::lang::String ParsePosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "java/lang/Package.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Package.h"
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
        mids$[mid_getImplementationTitle_11b109bd155ca898] = env->getMethodID(cls, "getImplementationTitle", "()Ljava/lang/String;");
        mids$[mid_getImplementationVendor_11b109bd155ca898] = env->getMethodID(cls, "getImplementationVendor", "()Ljava/lang/String;");
        mids$[mid_getImplementationVersion_11b109bd155ca898] = env->getMethodID(cls, "getImplementationVersion", "()Ljava/lang/String;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackage_2ebccdeed255784a] = env->getStaticMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getPackages_23df86f75843b87b] = env->getStaticMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_getSpecificationTitle_11b109bd155ca898] = env->getMethodID(cls, "getSpecificationTitle", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVendor_11b109bd155ca898] = env->getMethodID(cls, "getSpecificationVendor", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVersion_11b109bd155ca898] = env->getMethodID(cls, "getSpecificationVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isCompatibleWith_7edad2c2f64f4d68] = env->getMethodID(cls, "isCompatibleWith", "(Ljava/lang/String;)Z");
        mids$[mid_isSealed_b108b35ef48e27bd] = env->getMethodID(cls, "isSealed", "()Z");
        mids$[mid_isSealed_c31132c160c2df88] = env->getMethodID(cls, "isSealed", "(Ljava/net/URL;)Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String Package::getImplementationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationTitle_11b109bd155ca898]));
    }

    ::java::lang::String Package::getImplementationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVendor_11b109bd155ca898]));
    }

    ::java::lang::String Package::getImplementationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVersion_11b109bd155ca898]));
    }

    ::java::lang::String Package::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    Package Package::getPackage(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Package(env->callStaticObjectMethod(cls, mids$[mid_getPackage_2ebccdeed255784a], a0.this$));
    }

    JArray< Package > Package::getPackages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Package >(env->callStaticObjectMethod(cls, mids$[mid_getPackages_23df86f75843b87b]));
    }

    ::java::lang::String Package::getSpecificationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationTitle_11b109bd155ca898]));
    }

    ::java::lang::String Package::getSpecificationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVendor_11b109bd155ca898]));
    }

    ::java::lang::String Package::getSpecificationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVersion_11b109bd155ca898]));
    }

    jint Package::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Package::isCompatibleWith(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_7edad2c2f64f4d68], a0.this$);
    }

    jboolean Package::isSealed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_b108b35ef48e27bd]);
    }

    jboolean Package::isSealed(const ::java::net::URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_c31132c160c2df88], a0.this$);
    }

    ::java::lang::String Package::toString() const
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
#include "java/io/Console.h"
#include "java/io/Reader.h"
#include "java/io/Flushable.h"
#include "java/io/PrintWriter.h"
#include "java/lang/Class.h"
#include "java/io/Console.h"
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
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_e74765ad272a293e] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_printf_e74765ad272a293e] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_readLine_11b109bd155ca898] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLine_f5b4dd623dba97e9] = env->getMethodID(cls, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_readPassword_1c41284d788a6957] = env->getMethodID(cls, "readPassword", "()[C");
        mids$[mid_readPassword_a7132a73eeb55370] = env->getMethodID(cls, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
        mids$[mid_reader_26c6a3f16521a493] = env->getMethodID(cls, "reader", "()Ljava/io/Reader;");
        mids$[mid_writer_aac0951e65427d21] = env->getMethodID(cls, "writer", "()Ljava/io/PrintWriter;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Console::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    Console Console::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_format_e74765ad272a293e], a0.this$, a1.this$));
    }

    Console Console::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_printf_e74765ad272a293e], a0.this$, a1.this$));
    }

    ::java::lang::String Console::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_11b109bd155ca898]));
    }

    ::java::lang::String Console::readLine(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_f5b4dd623dba97e9], a0.this$, a1.this$));
    }

    JArray< jchar > Console::readPassword() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_1c41284d788a6957]));
    }

    JArray< jchar > Console::readPassword(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_a7132a73eeb55370], a0.this$, a1.this$));
    }

    ::java::io::Reader Console::reader() const
    {
      return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_reader_26c6a3f16521a493]));
    }

    ::java::io::PrintWriter Console::writer() const
    {
      return ::java::io::PrintWriter(env->callObjectMethod(this$, mids$[mid_writer_aac0951e65427d21]));
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
#include "java/lang/StringBuffer.h"
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_5e688138ffe60231] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_d63e618e54305c25] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
        mids$[mid_append_e2a8e75a9f64ce9a] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuffer;");
        mids$[mid_append_1ee142df065b7c14] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_append_501cfe7a6ccfbca3] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuffer;");
        mids$[mid_append_9b9290318e5b4e64] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuffer;");
        mids$[mid_append_5ebd6fc6f4a101a2] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuffer;");
        mids$[mid_append_5c397d14cfa3bcc9] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuffer;");
        mids$[mid_append_36febeaff75ddf89] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_append_3f11f705825c413c] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_append_e23e6047e9427d79] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_append_843e68f8c95bcf54] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuffer;");
        mids$[mid_append_f62f12fd5a8811e5] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuffer;");
        mids$[mid_append_bd15fc762c9b47e1] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_appendCodePoint_36febeaff75ddf89] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_capacity_570ce0828f81a2c1] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_9d4c2604195fbadb] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_2235cd056f5a882b] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_2235cd056f5a882b] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_819f91eddf220c5b] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_6ee9c1a1075782b3] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuffer;)I");
        mids$[mid_delete_19966ea78884e925] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_deleteCharAt_36febeaff75ddf89] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_ensureCapacity_99803b0791f320ff] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_805ac8fcb83c07e9] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_02f02486e9727d8f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_01c41545a950bc7c] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_c9eacee037d85dfc] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuffer;");
        mids$[mid_insert_d650023aff65c33a] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_647577cad4bb29d1] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_6d6bcce9bb290dad] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuffer;");
        mids$[mid_insert_31db0f4b6b6b12ac] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuffer;");
        mids$[mid_insert_ace13ba1e44c37e9] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuffer;");
        mids$[mid_insert_19966ea78884e925] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_insert_4afd9a264a11798e] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_ce87f9c56e57e3f2] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_6eabe3559ca3d641] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_8c1acdc965e2f05f] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuffer;");
        mids$[mid_insert_1df060702cf535b4] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_lastIndexOf_02f02486e9727d8f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_01c41545a950bc7c] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_570ce0828f81a2c1] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_819f91eddf220c5b] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_3d833d50d0046758] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_reverse_8ebc622be17217f1] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuffer;");
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

    StringBuffer::StringBuffer() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    StringBuffer::StringBuffer(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    StringBuffer::StringBuffer(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    StringBuffer::StringBuffer(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_5e688138ffe60231, a0.this$)) {}

    StringBuffer StringBuffer::append(const StringBuffer & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_d63e618e54305c25], a0.this$));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_e2a8e75a9f64ce9a], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::String & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_1ee142df065b7c14], a0.this$));
    }

    StringBuffer StringBuffer::append(jboolean a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_501cfe7a6ccfbca3], a0));
    }

    StringBuffer StringBuffer::append(jchar a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_9b9290318e5b4e64], a0));
    }

    StringBuffer StringBuffer::append(jdouble a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_5ebd6fc6f4a101a2], a0));
    }

    StringBuffer StringBuffer::append(jfloat a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_5c397d14cfa3bcc9], a0));
    }

    StringBuffer StringBuffer::append(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_36febeaff75ddf89], a0));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_3f11f705825c413c], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::Object & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_e23e6047e9427d79], a0.this$));
    }

    StringBuffer StringBuffer::append(jlong a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_843e68f8c95bcf54], a0));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_f62f12fd5a8811e5], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_bd15fc762c9b47e1], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::appendCodePoint(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_appendCodePoint_36febeaff75ddf89], a0));
    }

    jint StringBuffer::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_570ce0828f81a2c1]);
    }

    jchar StringBuffer::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_9d4c2604195fbadb], a0);
    }

    jint StringBuffer::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_2235cd056f5a882b], a0);
    }

    jint StringBuffer::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_2235cd056f5a882b], a0);
    }

    jint StringBuffer::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_819f91eddf220c5b], a0, a1);
    }

    jint StringBuffer::compareTo(const StringBuffer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_6ee9c1a1075782b3], a0.this$);
    }

    StringBuffer StringBuffer::delete$(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_delete_19966ea78884e925], a0, a1));
    }

    StringBuffer StringBuffer::deleteCharAt(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_deleteCharAt_36febeaff75ddf89], a0));
    }

    void StringBuffer::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_99803b0791f320ff], a0);
    }

    void StringBuffer::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_805ac8fcb83c07e9], a0, a1, a2.this$, a3);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_02f02486e9727d8f], a0.this$);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_01c41545a950bc7c], a0.this$, a1);
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_c9eacee037d85dfc], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_d650023aff65c33a], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jboolean a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_647577cad4bb29d1], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jchar a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_6d6bcce9bb290dad], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jdouble a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_31db0f4b6b6b12ac], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jfloat a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_ace13ba1e44c37e9], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_19966ea78884e925], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_4afd9a264a11798e], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_ce87f9c56e57e3f2], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jlong a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_6eabe3559ca3d641], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_8c1acdc965e2f05f], a0, a1.this$, a2, a3));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_1df060702cf535b4], a0, a1.this$, a2, a3));
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_02f02486e9727d8f], a0.this$);
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_01c41545a950bc7c], a0.this$, a1);
    }

    jint StringBuffer::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_570ce0828f81a2c1]);
    }

    jint StringBuffer::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_819f91eddf220c5b], a0, a1);
    }

    StringBuffer StringBuffer::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_replace_3d833d50d0046758], a0, a1, a2.this$));
    }

    StringBuffer StringBuffer::reverse() const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_reverse_8ebc622be17217f1]));
    }

    void StringBuffer::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_8c560582d522cb03], a0, a1);
    }

    void StringBuffer::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_99803b0791f320ff], a0);
    }

    ::java::lang::CharSequence StringBuffer::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_be25fa7011a1ec8f], a0, a1));
    }

    ::java::lang::String StringBuffer::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_8cc8a10236476f23], a0));
    }

    ::java::lang::String StringBuffer::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_5d51f1f447446760], a0, a1));
    }

    ::java::lang::String StringBuffer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void StringBuffer::trimToSize() const
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
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AutoCloseable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_put_d6df10f4e35ef1e8] = env->getMethodID(cls, "put", "(Ljava/lang/String;Z)V");
        mids$[mid_put_765fffe599606885] = env->getMethodID(cls, "put", "(Ljava/lang/String;B)V");
        mids$[mid_put_a76d04942c14ead9] = env->getMethodID(cls, "put", "(Ljava/lang/String;C)V");
        mids$[mid_put_1b3f5cad10162d50] = env->getMethodID(cls, "put", "(Ljava/lang/String;D)V");
        mids$[mid_put_caffeb4adb589425] = env->getMethodID(cls, "put", "(Ljava/lang/String;F)V");
        mids$[mid_put_e227023543046618] = env->getMethodID(cls, "put", "(Ljava/lang/String;I)V");
        mids$[mid_put_562cf77ba0f3b1a4] = env->getMethodID(cls, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_put_b3627b2a342830e7] = env->getMethodID(cls, "put", "(Ljava/lang/String;J)V");
        mids$[mid_put_acddf532d962ee8e] = env->getMethodID(cls, "put", "(Ljava/lang/String;S)V");
        mids$[mid_write_b30622acc9638b65] = env->getMethodID(cls, "write", "(Ljava/io/ObjectOutput;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream$PutField::ObjectOutputStream$PutField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_d6df10f4e35ef1e8], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jbyte a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_765fffe599606885], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_a76d04942c14ead9], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jdouble a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_1b3f5cad10162d50], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jfloat a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_caffeb4adb589425], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_e227023543046618], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_562cf77ba0f3b1a4], a0.this$, a1.this$);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jlong a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_b3627b2a342830e7], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jshort a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_acddf532d962ee8e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::write(const ::java::io::ObjectOutput & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_b30622acc9638b65], a0.this$);
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
#include "java/io/FilenameFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilenameFilter::class$ = NULL;
    jmethodID *FilenameFilter::mids$ = NULL;
    bool FilenameFilter::live$ = false;

    jclass FilenameFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilenameFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_aa17b1bcad537066] = env->getMethodID(cls, "accept", "(Ljava/io/File;Ljava/lang/String;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FilenameFilter::accept(const ::java::io::File & a0, const ::java::lang::String & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_aa17b1bcad537066], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args);

    static PyMethodDef t_FilenameFilter__methods_[] = {
      DECLARE_METHOD(t_FilenameFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilenameFilter, accept, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilenameFilter)[] = {
      { Py_tp_methods, t_FilenameFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilenameFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FilenameFilter, t_FilenameFilter, FilenameFilter);

    void t_FilenameFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FilenameFilter), &PY_TYPE_DEF(FilenameFilter), module, "FilenameFilter", 0);
    }

    void t_FilenameFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "class_", make_descriptor(FilenameFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "wrapfn_", make_descriptor(t_FilenameFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilenameFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilenameFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilenameFilter::initializeClass, 1)))
        return NULL;
      return t_FilenameFilter::wrap_Object(FilenameFilter(((t_FilenameFilter *) arg)->object.this$));
    }
    static PyObject *t_FilenameFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilenameFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FilenameFilter_accept(t_FilenameFilter *self, PyObject *args)
    {
      ::java::io::File a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.accept(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", args);
      return NULL;
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InterruptedException::InterruptedException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    InterruptedException::InterruptedException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
        mids$[mid_valueOf_e9c359bf2bd9b61b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;");
        mids$[mid_values_dee38d137b2ac2d6] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$IsoCountryCode;");

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
      return Locale$IsoCountryCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e9c359bf2bd9b61b], a0.this$));
    }

    JArray< Locale$IsoCountryCode > Locale$IsoCountryCode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$IsoCountryCode >(env->callStaticObjectMethod(cls, mids$[mid_values_dee38d137b2ac2d6]));
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
        mids$[mid_compare_52527a74e1b581d7] = env->getMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_naturalOrder_96e45e3694fbbb22] = env->getStaticMethodID(cls, "naturalOrder", "()Ljava/util/Comparator;");
        mids$[mid_nullsFirst_7a4cd21393022d6a] = env->getStaticMethodID(cls, "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_nullsLast_7a4cd21393022d6a] = env->getStaticMethodID(cls, "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_reverseOrder_96e45e3694fbbb22] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reversed_96e45e3694fbbb22] = env->getMethodID(cls, "reversed", "()Ljava/util/Comparator;");
        mids$[mid_thenComparing_7a4cd21393022d6a] = env->getMethodID(cls, "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparator::compare(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callIntMethod(this$, mids$[mid_compare_52527a74e1b581d7], a0.this$, a1.this$);
    }

    jboolean Comparator::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    Comparator Comparator::naturalOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_naturalOrder_96e45e3694fbbb22]));
    }

    Comparator Comparator::nullsFirst(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsFirst_7a4cd21393022d6a], a0.this$));
    }

    Comparator Comparator::nullsLast(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsLast_7a4cd21393022d6a], a0.this$));
    }

    Comparator Comparator::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_96e45e3694fbbb22]));
    }

    Comparator Comparator::reversed() const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_reversed_96e45e3694fbbb22]));
    }

    Comparator Comparator::thenComparing(const Comparator & a0) const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_thenComparing_7a4cd21393022d6a], a0.this$));
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
#include "java/util/OptionalDouble.h"
#include "java/lang/Runnable.h"
#include "java/util/function/Supplier.h"
#include "java/util/OptionalDouble.h"
#include "java/lang/Throwable.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/stream/DoubleStream.h"
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
        mids$[mid_empty_1edd71440bc9c025] = env->getStaticMethodID(cls, "empty", "()Ljava/util/OptionalDouble;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAsDouble_dff5885c2c873297] = env->getMethodID(cls, "getAsDouble", "()D");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_ifPresent_6444b3e27af46e9d] = env->getMethodID(cls, "ifPresent", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_ifPresentOrElse_21108a6192158647] = env->getMethodID(cls, "ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_b108b35ef48e27bd] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_9afec6b700c1a06e] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/OptionalDouble;");
        mids$[mid_orElse_dcbc7ce2902fa136] = env->getMethodID(cls, "orElse", "(D)D");
        mids$[mid_orElseThrow_dff5885c2c873297] = env->getMethodID(cls, "orElseThrow", "()D");
        mids$[mid_orElseThrow_ccfb19691abd21ea] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)D");
        mids$[mid_stream_0636ae0567d24d63] = env->getMethodID(cls, "stream", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OptionalDouble OptionalDouble::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_empty_1edd71440bc9c025]));
    }

    jboolean OptionalDouble::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jdouble OptionalDouble::getAsDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAsDouble_dff5885c2c873297]);
    }

    jint OptionalDouble::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    void OptionalDouble::ifPresent(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresent_6444b3e27af46e9d], a0.this$);
    }

    void OptionalDouble::ifPresentOrElse(const ::java::util::function::DoubleConsumer & a0, const ::java::lang::Runnable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresentOrElse_21108a6192158647], a0.this$, a1.this$);
    }

    jboolean OptionalDouble::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    jboolean OptionalDouble::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_b108b35ef48e27bd]);
    }

    OptionalDouble OptionalDouble::of(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_of_9afec6b700c1a06e], a0));
    }

    jdouble OptionalDouble::orElse(jdouble a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElse_dcbc7ce2902fa136], a0);
    }

    jdouble OptionalDouble::orElseThrow() const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_dff5885c2c873297]);
    }

    jdouble OptionalDouble::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_ccfb19691abd21ea], a0.this$);
    }

    ::java::util::stream::DoubleStream OptionalDouble::stream() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_stream_0636ae0567d24d63]));
    }

    ::java::lang::String OptionalDouble::toString() const
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ReflectiveOperationException::ReflectiveOperationException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidObjectException::InvalidObjectException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_sync_0fa09c18fee449d5] = env->getMethodID(cls, "sync", "()V");
        mids$[mid_valid_b108b35ef48e27bd] = env->getMethodID(cls, "valid", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new FileDescriptor(env->getStaticObjectField(cls, "err", "Ljava/io/FileDescriptor;"));
        in = new FileDescriptor(env->getStaticObjectField(cls, "in", "Ljava/io/FileDescriptor;"));
        out = new FileDescriptor(env->getStaticObjectField(cls, "out", "Ljava/io/FileDescriptor;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileDescriptor::FileDescriptor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    void FileDescriptor::sync() const
    {
      env->callVoidMethod(this$, mids$[mid_sync_0fa09c18fee449d5]);
    }

    jboolean FileDescriptor::valid() const
    {
      return env->callBooleanMethod(this$, mids$[mid_valid_b108b35ef48e27bd]);
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
#include "java/io/NotActiveException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *NotActiveException::class$ = NULL;
    jmethodID *NotActiveException::mids$ = NULL;
    bool NotActiveException::live$ = false;

    jclass NotActiveException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/NotActiveException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NotActiveException::NotActiveException() : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    NotActiveException::NotActiveException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NotActiveException__methods_[] = {
      DECLARE_METHOD(t_NotActiveException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NotActiveException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NotActiveException)[] = {
      { Py_tp_methods, t_NotActiveException__methods_ },
      { Py_tp_init, (void *) t_NotActiveException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NotActiveException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(NotActiveException, t_NotActiveException, NotActiveException);

    void t_NotActiveException::install(PyObject *module)
    {
      installType(&PY_TYPE(NotActiveException), &PY_TYPE_DEF(NotActiveException), module, "NotActiveException", 0);
    }

    void t_NotActiveException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "class_", make_descriptor(NotActiveException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "wrapfn_", make_descriptor(t_NotActiveException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NotActiveException::initializeClass, 1)))
        return NULL;
      return t_NotActiveException::wrap_Object(NotActiveException(((t_NotActiveException *) arg)->object.this$));
    }
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NotActiveException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NotActiveException object((jobject) NULL);

          INT_CALL(object = NotActiveException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NotActiveException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NotActiveException(a0));
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
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Iterable::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    ::java::util::Spliterator Iterable::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
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
#include "java/util/TimeZone.h"
#include "java/util/Date.h"
#include "java/util/TimeZone.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TimeZone::class$ = NULL;
    jmethodID *TimeZone::mids$ = NULL;
    bool TimeZone::live$ = false;
    jint TimeZone::LONG = (jint) 0;
    jint TimeZone::SHORT = (jint) 0;

    jclass TimeZone::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TimeZone");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_getAvailableIDs_692f4257baa8d3c3] = env->getStaticMethodID(cls, "getAvailableIDs", "()[Ljava/lang/String;");
        mids$[mid_getAvailableIDs_054ff2a17c4a1ad4] = env->getStaticMethodID(cls, "getAvailableIDs", "(I)[Ljava/lang/String;");
        mids$[mid_getDSTSavings_570ce0828f81a2c1] = env->getMethodID(cls, "getDSTSavings", "()I");
        mids$[mid_getDefault_e40c7977e71c6d44] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/TimeZone;");
        mids$[mid_getDisplayName_11b109bd155ca898] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_3cd873bfb132c4fd] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_7715d8a8570f7999] = env->getMethodID(cls, "getDisplayName", "(ZI)Ljava/lang/String;");
        mids$[mid_getDisplayName_03b5069145ddcf0f] = env->getMethodID(cls, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getID_11b109bd155ca898] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
        mids$[mid_getOffset_d0f2acf0c955e055] = env->getMethodID(cls, "getOffset", "(J)I");
        mids$[mid_getOffset_763c8980911abee3] = env->getMethodID(cls, "getOffset", "(IIIIII)I");
        mids$[mid_getRawOffset_570ce0828f81a2c1] = env->getMethodID(cls, "getRawOffset", "()I");
        mids$[mid_getTimeZone_cda1c9cb9ac735cd] = env->getStaticMethodID(cls, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
        mids$[mid_hasSameRules_df28b4e23f90f50d] = env->getMethodID(cls, "hasSameRules", "(Ljava/util/TimeZone;)Z");
        mids$[mid_inDaylightTime_f90360441aeddba6] = env->getMethodID(cls, "inDaylightTime", "(Ljava/util/Date;)Z");
        mids$[mid_observesDaylightTime_b108b35ef48e27bd] = env->getMethodID(cls, "observesDaylightTime", "()Z");
        mids$[mid_setDefault_5598c38439d340f6] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/TimeZone;)V");
        mids$[mid_setID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
        mids$[mid_setRawOffset_99803b0791f320ff] = env->getMethodID(cls, "setRawOffset", "(I)V");
        mids$[mid_useDaylightTime_b108b35ef48e27bd] = env->getMethodID(cls, "useDaylightTime", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        LONG = env->getStaticIntField(cls, "LONG");
        SHORT = env->getStaticIntField(cls, "SHORT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TimeZone::TimeZone() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ::java::lang::Object TimeZone::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_692f4257baa8d3c3]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_054ff2a17c4a1ad4], a0));
    }

    jint TimeZone::getDSTSavings() const
    {
      return env->callIntMethod(this$, mids$[mid_getDSTSavings_570ce0828f81a2c1]);
    }

    TimeZone TimeZone::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getDefault_e40c7977e71c6d44]));
    }

    ::java::lang::String TimeZone::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_11b109bd155ca898]));
    }

    ::java::lang::String TimeZone::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cd873bfb132c4fd], a0.this$));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_7715d8a8570f7999], a0, a1));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1, const ::java::util::Locale & a2) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_03b5069145ddcf0f], a0, a1, a2.this$));
    }

    ::java::lang::String TimeZone::getID() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_11b109bd155ca898]));
    }

    jint TimeZone::getOffset(jlong a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_d0f2acf0c955e055], a0);
    }

    jint TimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_763c8980911abee3], a0, a1, a2, a3, a4, a5);
    }

    jint TimeZone::getRawOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getRawOffset_570ce0828f81a2c1]);
    }

    TimeZone TimeZone::getTimeZone(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getTimeZone_cda1c9cb9ac735cd], a0.this$));
    }

    jboolean TimeZone::hasSameRules(const TimeZone & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasSameRules_df28b4e23f90f50d], a0.this$);
    }

    jboolean TimeZone::inDaylightTime(const ::java::util::Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_inDaylightTime_f90360441aeddba6], a0.this$);
    }

    jboolean TimeZone::observesDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_observesDaylightTime_b108b35ef48e27bd]);
    }

    void TimeZone::setDefault(const TimeZone & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_5598c38439d340f6], a0.this$);
    }

    void TimeZone::setID(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setID_d0bc48d5b00dc40c], a0.this$);
    }

    void TimeZone::setRawOffset(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setRawOffset_99803b0791f320ff], a0);
    }

    jboolean TimeZone::useDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_useDaylightTime_b108b35ef48e27bd]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg);
    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TimeZone_clone(t_TimeZone *self);
    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args);
    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self);
    static PyObject *t_TimeZone_getDefault(PyTypeObject *type);
    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getID(t_TimeZone *self);
    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self);
    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data);
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data);
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data);
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data);
    static PyGetSetDef t_TimeZone__fields_[] = {
      DECLARE_GET_FIELD(t_TimeZone, availableIDs),
      DECLARE_GET_FIELD(t_TimeZone, dSTSavings),
      DECLARE_GETSET_FIELD(t_TimeZone, default),
      DECLARE_GET_FIELD(t_TimeZone, displayName),
      DECLARE_GETSET_FIELD(t_TimeZone, iD),
      DECLARE_GETSET_FIELD(t_TimeZone, rawOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TimeZone__methods_[] = {
      DECLARE_METHOD(t_TimeZone, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, clone, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getAvailableIDs, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDSTSavings, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getDefault, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getID, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getOffset, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getRawOffset, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getTimeZone, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, hasSameRules, METH_O),
      DECLARE_METHOD(t_TimeZone, inDaylightTime, METH_O),
      DECLARE_METHOD(t_TimeZone, observesDaylightTime, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, setDefault, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, setID, METH_O),
      DECLARE_METHOD(t_TimeZone, setRawOffset, METH_O),
      DECLARE_METHOD(t_TimeZone, useDaylightTime, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TimeZone)[] = {
      { Py_tp_methods, t_TimeZone__methods_ },
      { Py_tp_init, (void *) t_TimeZone_init_ },
      { Py_tp_getset, t_TimeZone__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TimeZone)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(TimeZone, t_TimeZone, TimeZone);

    void t_TimeZone::install(PyObject *module)
    {
      installType(&PY_TYPE(TimeZone), &PY_TYPE_DEF(TimeZone), module, "TimeZone", 0);
    }

    void t_TimeZone::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "class_", make_descriptor(TimeZone::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "wrapfn_", make_descriptor(t_TimeZone::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "boxfn_", make_descriptor(boxObject));
      env->getClass(TimeZone::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "LONG", make_descriptor(TimeZone::LONG));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "SHORT", make_descriptor(TimeZone::SHORT));
    }

    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TimeZone::initializeClass, 1)))
        return NULL;
      return t_TimeZone::wrap_Object(TimeZone(((t_TimeZone *) arg)->object.this$));
    }
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TimeZone::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds)
    {
      TimeZone object((jobject) NULL);

      INT_CALL(object = TimeZone());
      self->object = object;

      return 0;
    }

    static PyObject *t_TimeZone_clone(t_TimeZone *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          jint a0;
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError(type, "getAvailableIDs", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDSTSavings());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getDefault(PyTypeObject *type)
    {
      TimeZone result((jobject) NULL);
      OBJ_CALL(result = ::java::util::TimeZone::getDefault());
      return t_TimeZone::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args)
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
        break;
       case 2:
        {
          jboolean a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jboolean a0;
          jint a1;
          ::java::util::Locale a2((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZIk", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getID(t_TimeZone *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getID());
      return j2p(result);
    }

    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          jint result;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = self->object.getOffset(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getOffset", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getRawOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      TimeZone result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::TimeZone::getTimeZone(a0));
        return t_TimeZone::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getTimeZone", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.hasSameRules(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasSameRules", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg)
    {
      ::java::util::Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::util::Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.inDaylightTime(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "inDaylightTime", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.observesDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(::java::util::TimeZone::setDefault(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setDefault", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg)
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

    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setRawOffset(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setRawOffset", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.useDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableIDs());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDSTSavings());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data)
    {
      TimeZone value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_TimeZone::wrap_Object(value);
    }
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        TimeZone value((jobject) NULL);
        if (!parseArg(arg, "k", TimeZone::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getID());
      return j2p(value);
    }
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data)
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

    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRawOffset());
      return PyLong_FromLong((long) value);
    }
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setRawOffset(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "rawOffset", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileNotFoundException::class$ = NULL;
    jmethodID *FileNotFoundException::mids$ = NULL;
    bool FileNotFoundException::live$ = false;

    jclass FileNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileNotFoundException::FileNotFoundException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    FileNotFoundException::FileNotFoundException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_FileNotFoundException__methods_[] = {
      DECLARE_METHOD(t_FileNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileNotFoundException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileNotFoundException)[] = {
      { Py_tp_methods, t_FileNotFoundException__methods_ },
      { Py_tp_init, (void *) t_FileNotFoundException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileNotFoundException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(FileNotFoundException, t_FileNotFoundException, FileNotFoundException);

    void t_FileNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(FileNotFoundException), &PY_TYPE_DEF(FileNotFoundException), module, "FileNotFoundException", 0);
    }

    void t_FileNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "class_", make_descriptor(FileNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "wrapfn_", make_descriptor(t_FileNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileNotFoundException::initializeClass, 1)))
        return NULL;
      return t_FileNotFoundException::wrap_Object(FileNotFoundException(((t_FileNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          FileNotFoundException object((jobject) NULL);

          INT_CALL(object = FileNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          FileNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileNotFoundException(a0));
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
