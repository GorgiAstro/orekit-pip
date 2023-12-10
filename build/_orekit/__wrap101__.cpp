#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
        mids$[mid_valueOf_280454c805a6af8a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter$Status;");
        mids$[mid_values_21d45d7a85114301] = env->getStaticMethodID(cls, "values", "()[Ljava/io/ObjectInputFilter$Status;");

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
      return ObjectInputFilter$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_280454c805a6af8a], a0.this$));
    }

    JArray< ObjectInputFilter$Status > ObjectInputFilter$Status::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ObjectInputFilter$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_21d45d7a85114301]));
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
#include "java/io/ObjectStreamClass.h"
#include "java/io/ObjectStreamField.h"
#include "java/io/Serializable.h"
#include "java/io/ObjectStreamClass.h"
#include "java/lang/Class.h"
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
        mids$[mid_forClass_7c16c5008b34b3db] = env->getMethodID(cls, "forClass", "()Ljava/lang/Class;");
        mids$[mid_getField_f1b0f4b30d446865] = env->getMethodID(cls, "getField", "(Ljava/lang/String;)Ljava/io/ObjectStreamField;");
        mids$[mid_getFields_a46c3bb6482c1ee0] = env->getMethodID(cls, "getFields", "()[Ljava/io/ObjectStreamField;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSerialVersionUID_492808a339bfa35f] = env->getMethodID(cls, "getSerialVersionUID", "()J");
        mids$[mid_lookup_9098be045c4c24e9] = env->getStaticMethodID(cls, "lookup", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_lookupAny_9098be045c4c24e9] = env->getStaticMethodID(cls, "lookupAny", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        NO_FIELDS = new JArray< ::java::io::ObjectStreamField >(env->getStaticObjectField(cls, "NO_FIELDS", "[Ljava/io/ObjectStreamField;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Class ObjectStreamClass::forClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_forClass_7c16c5008b34b3db]));
    }

    ::java::io::ObjectStreamField ObjectStreamClass::getField(const ::java::lang::String & a0) const
    {
      return ::java::io::ObjectStreamField(env->callObjectMethod(this$, mids$[mid_getField_f1b0f4b30d446865], a0.this$));
    }

    JArray< ::java::io::ObjectStreamField > ObjectStreamClass::getFields() const
    {
      return JArray< ::java::io::ObjectStreamField >(env->callObjectMethod(this$, mids$[mid_getFields_a46c3bb6482c1ee0]));
    }

    ::java::lang::String ObjectStreamClass::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jlong ObjectStreamClass::getSerialVersionUID() const
    {
      return env->callLongMethod(this$, mids$[mid_getSerialVersionUID_492808a339bfa35f]);
    }

    ObjectStreamClass ObjectStreamClass::lookup(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookup_9098be045c4c24e9], a0.this$));
    }

    ObjectStreamClass ObjectStreamClass::lookupAny(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookupAny_9098be045c4c24e9], a0.this$));
    }

    ::java::lang::String ObjectStreamClass::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_arrayLength_492808a339bfa35f] = env->getMethodID(cls, "arrayLength", "()J");
        mids$[mid_depth_492808a339bfa35f] = env->getMethodID(cls, "depth", "()J");
        mids$[mid_references_492808a339bfa35f] = env->getMethodID(cls, "references", "()J");
        mids$[mid_serialClass_7c16c5008b34b3db] = env->getMethodID(cls, "serialClass", "()Ljava/lang/Class;");
        mids$[mid_streamBytes_492808a339bfa35f] = env->getMethodID(cls, "streamBytes", "()J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jlong ObjectInputFilter$FilterInfo::arrayLength() const
    {
      return env->callLongMethod(this$, mids$[mid_arrayLength_492808a339bfa35f]);
    }

    jlong ObjectInputFilter$FilterInfo::depth() const
    {
      return env->callLongMethod(this$, mids$[mid_depth_492808a339bfa35f]);
    }

    jlong ObjectInputFilter$FilterInfo::references() const
    {
      return env->callLongMethod(this$, mids$[mid_references_492808a339bfa35f]);
    }

    ::java::lang::Class ObjectInputFilter$FilterInfo::serialClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_serialClass_7c16c5008b34b3db]));
    }

    jlong ObjectInputFilter$FilterInfo::streamBytes() const
    {
      return env->callLongMethod(this$, mids$[mid_streamBytes_492808a339bfa35f]);
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
#include "java/io/DataInput.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
        mids$[mid_readBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_42a1555092006f7f] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_7818f5b58320cd1f] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_dff5885c2c873297] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFloat_5adccb493ada08e8] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_20012b3010a39c05] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_d7af9aedcdd3845b] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_570ce0828f81a2c1] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_11b109bd155ca898] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_492808a339bfa35f] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readShort_b5dd6688e7dce57d] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_11b109bd155ca898] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnsignedByte_570ce0828f81a2c1] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_570ce0828f81a2c1] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_skipBytes_2235cd056f5a882b] = env->getMethodID(cls, "skipBytes", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean DataInput::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_b108b35ef48e27bd]);
    }

    jbyte DataInput::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_42a1555092006f7f]);
    }

    jchar DataInput::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_7818f5b58320cd1f]);
    }

    jdouble DataInput::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_dff5885c2c873297]);
    }

    jfloat DataInput::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_5adccb493ada08e8]);
    }

    void DataInput::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_20012b3010a39c05], a0.this$);
    }

    void DataInput::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    jint DataInput::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_570ce0828f81a2c1]);
    }

    ::java::lang::String DataInput::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_11b109bd155ca898]));
    }

    jlong DataInput::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_492808a339bfa35f]);
    }

    jshort DataInput::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_b5dd6688e7dce57d]);
    }

    ::java::lang::String DataInput::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_11b109bd155ca898]));
    }

    jint DataInput::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_570ce0828f81a2c1]);
    }

    jint DataInput::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_570ce0828f81a2c1]);
    }

    jint DataInput::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_2235cd056f5a882b], a0);
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SyncFailedException::SyncFailedException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
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
#include "java/io/ObjectStreamField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamField::class$ = NULL;
    jmethodID *ObjectStreamField::mids$ = NULL;
    bool ObjectStreamField::live$ = false;

    jclass ObjectStreamField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_54422b304601666c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
        mids$[mid_init$_b6de2346b8ffb4ec] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
        mids$[mid_compareTo_90eb61a0d5cc5e34] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getOffset_570ce0828f81a2c1] = env->getMethodID(cls, "getOffset", "()I");
        mids$[mid_getType_7c16c5008b34b3db] = env->getMethodID(cls, "getType", "()Ljava/lang/Class;");
        mids$[mid_getTypeCode_7818f5b58320cd1f] = env->getMethodID(cls, "getTypeCode", "()C");
        mids$[mid_getTypeString_11b109bd155ca898] = env->getMethodID(cls, "getTypeString", "()Ljava/lang/String;");
        mids$[mid_isPrimitive_b108b35ef48e27bd] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isUnshared_b108b35ef48e27bd] = env->getMethodID(cls, "isUnshared", "()Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_setOffset_99803b0791f320ff] = env->getMethodID(cls, "setOffset", "(I)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_54422b304601666c, a0.this$, a1.this$)) {}

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6de2346b8ffb4ec, a0.this$, a1.this$, a2)) {}

    jint ObjectStreamField::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::lang::String ObjectStreamField::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jint ObjectStreamField::getOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_570ce0828f81a2c1]);
    }

    ::java::lang::Class ObjectStreamField::getType() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getType_7c16c5008b34b3db]));
    }

    jchar ObjectStreamField::getTypeCode() const
    {
      return env->callCharMethod(this$, mids$[mid_getTypeCode_7818f5b58320cd1f]);
    }

    ::java::lang::String ObjectStreamField::getTypeString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeString_11b109bd155ca898]));
    }

    jboolean ObjectStreamField::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_b108b35ef48e27bd]);
    }

    jboolean ObjectStreamField::isUnshared() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isUnshared_b108b35ef48e27bd]);
    }

    ::java::lang::String ObjectStreamField::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectStreamField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectStreamField_init_(t_ObjectStreamField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectStreamField_compareTo(t_ObjectStreamField *self, PyObject *arg);
    static PyObject *t_ObjectStreamField_getName(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getOffset(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getType(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getTypeCode(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_getTypeString(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_isPrimitive(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_isUnshared(t_ObjectStreamField *self);
    static PyObject *t_ObjectStreamField_toString(t_ObjectStreamField *self, PyObject *args);
    static PyObject *t_ObjectStreamField_get__name(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__offset(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__primitive(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__type(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__typeCode(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__typeString(t_ObjectStreamField *self, void *data);
    static PyObject *t_ObjectStreamField_get__unshared(t_ObjectStreamField *self, void *data);
    static PyGetSetDef t_ObjectStreamField__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectStreamField, name),
      DECLARE_GET_FIELD(t_ObjectStreamField, offset),
      DECLARE_GET_FIELD(t_ObjectStreamField, primitive),
      DECLARE_GET_FIELD(t_ObjectStreamField, type),
      DECLARE_GET_FIELD(t_ObjectStreamField, typeCode),
      DECLARE_GET_FIELD(t_ObjectStreamField, typeString),
      DECLARE_GET_FIELD(t_ObjectStreamField, unshared),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectStreamField__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamField, compareTo, METH_O),
      DECLARE_METHOD(t_ObjectStreamField, getName, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getOffset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getType, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getTypeCode, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, getTypeString, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, isUnshared, METH_NOARGS),
      DECLARE_METHOD(t_ObjectStreamField, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamField)[] = {
      { Py_tp_methods, t_ObjectStreamField__methods_ },
      { Py_tp_init, (void *) t_ObjectStreamField_init_ },
      { Py_tp_getset, t_ObjectStreamField__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamField, t_ObjectStreamField, ObjectStreamField);

    void t_ObjectStreamField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamField), &PY_TYPE_DEF(ObjectStreamField), module, "ObjectStreamField", 0);
    }

    void t_ObjectStreamField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "class_", make_descriptor(ObjectStreamField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "wrapfn_", make_descriptor(t_ObjectStreamField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectStreamField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamField::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamField::wrap_Object(ObjectStreamField(((t_ObjectStreamField *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectStreamField_init_(t_ObjectStreamField *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Class a1((jobject) NULL);
          PyTypeObject **p1;
          ObjectStreamField object((jobject) NULL);

          if (!parseArgs(args, "sK", ::java::lang::Class::initializeClass, &a0, &a1, &p1, ::java::lang::t_Class::parameters_))
          {
            INT_CALL(object = ObjectStreamField(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Class a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ObjectStreamField object((jobject) NULL);

          if (!parseArgs(args, "sKZ", ::java::lang::Class::initializeClass, &a0, &a1, &p1, ::java::lang::t_Class::parameters_, &a2))
          {
            INT_CALL(object = ObjectStreamField(a0, a1, a2));
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

    static PyObject *t_ObjectStreamField_compareTo(t_ObjectStreamField *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_ObjectStreamField_getName(t_ObjectStreamField *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamField_getOffset(t_ObjectStreamField *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectStreamField_getType(t_ObjectStreamField *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getType());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_ObjectStreamField_getTypeCode(t_ObjectStreamField *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getTypeCode());
      return c2p(result);
    }

    static PyObject *t_ObjectStreamField_getTypeString(t_ObjectStreamField *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeString());
      return j2p(result);
    }

    static PyObject *t_ObjectStreamField_isPrimitive(t_ObjectStreamField *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectStreamField_isUnshared(t_ObjectStreamField *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isUnshared());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectStreamField_toString(t_ObjectStreamField *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ObjectStreamField), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ObjectStreamField_get__name(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamField_get__offset(t_ObjectStreamField *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_ObjectStreamField_get__primitive(t_ObjectStreamField *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ObjectStreamField_get__type(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getType());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_ObjectStreamField_get__typeCode(t_ObjectStreamField *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getTypeCode());
      return c2p(value);
    }

    static PyObject *t_ObjectStreamField_get__typeString(t_ObjectStreamField *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeString());
      return j2p(value);
    }

    static PyObject *t_ObjectStreamField_get__unshared(t_ObjectStreamField *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isUnshared());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Thread.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread$UncaughtExceptionHandler::class$ = NULL;
    jmethodID *Thread$UncaughtExceptionHandler::mids$ = NULL;
    bool Thread$UncaughtExceptionHandler::live$ = false;

    jclass Thread$UncaughtExceptionHandler::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread$UncaughtExceptionHandler");

        mids$ = new jmethodID[max_mid];
        mids$[mid_uncaughtException_14ba6d7e16e50ef1] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Thread$UncaughtExceptionHandler::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_14ba6d7e16e50ef1], a0.this$, a1.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread$UncaughtExceptionHandler_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$UncaughtExceptionHandler_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$UncaughtExceptionHandler_uncaughtException(t_Thread$UncaughtExceptionHandler *self, PyObject *args);

    static PyMethodDef t_Thread$UncaughtExceptionHandler__methods_[] = {
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$UncaughtExceptionHandler, uncaughtException, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread$UncaughtExceptionHandler)[] = {
      { Py_tp_methods, t_Thread$UncaughtExceptionHandler__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread$UncaughtExceptionHandler)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Thread$UncaughtExceptionHandler, t_Thread$UncaughtExceptionHandler, Thread$UncaughtExceptionHandler);

    void t_Thread$UncaughtExceptionHandler::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread$UncaughtExceptionHandler), &PY_TYPE_DEF(Thread$UncaughtExceptionHandler), module, "Thread$UncaughtExceptionHandler", 0);
    }

    void t_Thread$UncaughtExceptionHandler::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "class_", make_descriptor(Thread$UncaughtExceptionHandler::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "wrapfn_", make_descriptor(t_Thread$UncaughtExceptionHandler::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$UncaughtExceptionHandler), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Thread$UncaughtExceptionHandler_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread$UncaughtExceptionHandler::initializeClass, 1)))
        return NULL;
      return t_Thread$UncaughtExceptionHandler::wrap_Object(Thread$UncaughtExceptionHandler(((t_Thread$UncaughtExceptionHandler *) arg)->object.this$));
    }
    static PyObject *t_Thread$UncaughtExceptionHandler_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread$UncaughtExceptionHandler::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Thread$UncaughtExceptionHandler_uncaughtException(t_Thread$UncaughtExceptionHandler *self, PyObject *args)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ModuleLayer$Controller::class$ = NULL;
    jmethodID *ModuleLayer$Controller::mids$ = NULL;
    bool ModuleLayer$Controller::live$ = false;

    jclass ModuleLayer$Controller::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ModuleLayer$Controller");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addExports_52a8fd996fa69f25] = env->getMethodID(cls, "addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addOpens_52a8fd996fa69f25] = env->getMethodID(cls, "addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addReads_6fcb9d780be10f52] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_layer_1488df134b0cb760] = env->getMethodID(cls, "layer", "()Ljava/lang/ModuleLayer;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer$Controller ModuleLayer$Controller::addExports(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addExports_52a8fd996fa69f25], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addOpens(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addOpens_52a8fd996fa69f25], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addReads(const ::java::lang::Module & a0, const ::java::lang::Module & a1) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addReads_6fcb9d780be10f52], a0.this$, a1.this$));
    }

    ::java::lang::ModuleLayer ModuleLayer$Controller::layer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_layer_1488df134b0cb760]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self);

    static PyMethodDef t_ModuleLayer$Controller__methods_[] = {
      DECLARE_METHOD(t_ModuleLayer$Controller, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addExports, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addOpens, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addReads, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, layer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ModuleLayer$Controller)[] = {
      { Py_tp_methods, t_ModuleLayer$Controller__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ModuleLayer$Controller)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ModuleLayer$Controller, t_ModuleLayer$Controller, ModuleLayer$Controller);

    void t_ModuleLayer$Controller::install(PyObject *module)
    {
      installType(&PY_TYPE(ModuleLayer$Controller), &PY_TYPE_DEF(ModuleLayer$Controller), module, "ModuleLayer$Controller", 0);
    }

    void t_ModuleLayer$Controller::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "class_", make_descriptor(ModuleLayer$Controller::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "wrapfn_", make_descriptor(t_ModuleLayer$Controller::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ModuleLayer$Controller::initializeClass, 1)))
        return NULL;
      return t_ModuleLayer$Controller::wrap_Object(ModuleLayer$Controller(((t_ModuleLayer$Controller *) arg)->object.this$));
    }
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ModuleLayer$Controller::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addExports(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addExports", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addOpens(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addOpens", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::Module a1((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addReads(a0, a1));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addReads", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self)
    {
      ::java::lang::ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = self->object.layer());
      return ::java::lang::t_ModuleLayer::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Thread$State.h"
#include "java/lang/String.h"
#include "java/lang/Thread$State.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread$State::class$ = NULL;
    jmethodID *Thread$State::mids$ = NULL;
    bool Thread$State::live$ = false;
    Thread$State *Thread$State::BLOCKED = NULL;
    Thread$State *Thread$State::NEW = NULL;
    Thread$State *Thread$State::RUNNABLE = NULL;
    Thread$State *Thread$State::TERMINATED = NULL;
    Thread$State *Thread$State::TIMED_WAITING = NULL;
    Thread$State *Thread$State::WAITING = NULL;

    jclass Thread$State::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread$State");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_a21fae21a6a35b05] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;");
        mids$[mid_values_063ea36041ceb7fd] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/Thread$State;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BLOCKED = new Thread$State(env->getStaticObjectField(cls, "BLOCKED", "Ljava/lang/Thread$State;"));
        NEW = new Thread$State(env->getStaticObjectField(cls, "NEW", "Ljava/lang/Thread$State;"));
        RUNNABLE = new Thread$State(env->getStaticObjectField(cls, "RUNNABLE", "Ljava/lang/Thread$State;"));
        TERMINATED = new Thread$State(env->getStaticObjectField(cls, "TERMINATED", "Ljava/lang/Thread$State;"));
        TIMED_WAITING = new Thread$State(env->getStaticObjectField(cls, "TIMED_WAITING", "Ljava/lang/Thread$State;"));
        WAITING = new Thread$State(env->getStaticObjectField(cls, "WAITING", "Ljava/lang/Thread$State;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread$State Thread$State::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Thread$State(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a21fae21a6a35b05], a0.this$));
    }

    JArray< Thread$State > Thread$State::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Thread$State >(env->callStaticObjectMethod(cls, mids$[mid_values_063ea36041ceb7fd]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread$State_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$State_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread$State_of_(t_Thread$State *self, PyObject *args);
    static PyObject *t_Thread$State_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Thread$State_values(PyTypeObject *type);
    static PyObject *t_Thread$State_get__parameters_(t_Thread$State *self, void *data);
    static PyGetSetDef t_Thread$State__fields_[] = {
      DECLARE_GET_FIELD(t_Thread$State, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Thread$State__methods_[] = {
      DECLARE_METHOD(t_Thread$State, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, of_, METH_VARARGS),
      DECLARE_METHOD(t_Thread$State, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread$State, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread$State)[] = {
      { Py_tp_methods, t_Thread$State__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Thread$State__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread$State)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Thread$State, t_Thread$State, Thread$State);
    PyObject *t_Thread$State::wrap_Object(const Thread$State& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Thread$State::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Thread$State *self = (t_Thread$State *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Thread$State::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Thread$State::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Thread$State *self = (t_Thread$State *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Thread$State::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread$State), &PY_TYPE_DEF(Thread$State), module, "Thread$State", 0);
    }

    void t_Thread$State::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "class_", make_descriptor(Thread$State::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "wrapfn_", make_descriptor(t_Thread$State::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "boxfn_", make_descriptor(boxObject));
      env->getClass(Thread$State::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "BLOCKED", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::BLOCKED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "NEW", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::NEW)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "RUNNABLE", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::RUNNABLE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "TERMINATED", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::TERMINATED)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "TIMED_WAITING", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::TIMED_WAITING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread$State), "WAITING", make_descriptor(t_Thread$State::wrap_Object(*Thread$State::WAITING)));
    }

    static PyObject *t_Thread$State_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread$State::initializeClass, 1)))
        return NULL;
      return t_Thread$State::wrap_Object(Thread$State(((t_Thread$State *) arg)->object.this$));
    }
    static PyObject *t_Thread$State_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread$State::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Thread$State_of_(t_Thread$State *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Thread$State_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Thread$State result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread$State::valueOf(a0));
        return t_Thread$State::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Thread$State_values(PyTypeObject *type)
    {
      JArray< Thread$State > result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread$State::values());
      return JArray<jobject>(result.this$).wrap(t_Thread$State::wrap_jobject);
    }
    static PyObject *t_Thread$State_get__parameters_(t_Thread$State *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
