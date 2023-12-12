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
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_element_e661fe3ba2fafb22] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_offer_221e8e85cb385209] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_e661fe3ba2fafb22] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_poll_e661fe3ba2fafb22] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_remove_e661fe3ba2fafb22] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Queue::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Queue::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_e661fe3ba2fafb22]));
    }

    jboolean Queue::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Queue::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Queue::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Queue::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_e661fe3ba2fafb22]));
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_defaulted_fd2162b8a05a22fe] = env->getMethodID(cls, "defaulted", "(Ljava/lang/String;)Z");
        mids$[mid_get_25eab1df282b7da1] = env->getMethodID(cls, "get", "(Ljava/lang/String;Z)Z");
        mids$[mid_get_7e64616b59cda34c] = env->getMethodID(cls, "get", "(Ljava/lang/String;B)B");
        mids$[mid_get_aa3dbdfe21f97666] = env->getMethodID(cls, "get", "(Ljava/lang/String;C)C");
        mids$[mid_get_792704fafbc1ba32] = env->getMethodID(cls, "get", "(Ljava/lang/String;D)D");
        mids$[mid_get_8932d96572bfa5e9] = env->getMethodID(cls, "get", "(Ljava/lang/String;F)F");
        mids$[mid_get_f5fd9af3faa747d5] = env->getMethodID(cls, "get", "(Ljava/lang/String;I)I");
        mids$[mid_get_d99c45aaa01ca49f] = env->getMethodID(cls, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_get_08826549b8f2bdcc] = env->getMethodID(cls, "get", "(Ljava/lang/String;J)J");
        mids$[mid_get_c262b427c2fc0c80] = env->getMethodID(cls, "get", "(Ljava/lang/String;S)S");
        mids$[mid_getObjectStreamClass_dbbdc211e0cefa39] = env->getMethodID(cls, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream$GetField::ObjectInputStream$GetField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    jboolean ObjectInputStream$GetField::defaulted(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_defaulted_fd2162b8a05a22fe], a0.this$);
    }

    jboolean ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_get_25eab1df282b7da1], a0.this$, a1);
    }

    jbyte ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jbyte a1) const
    {
      return env->callByteMethod(this$, mids$[mid_get_7e64616b59cda34c], a0.this$, a1);
    }

    jchar ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jchar a1) const
    {
      return env->callCharMethod(this$, mids$[mid_get_aa3dbdfe21f97666], a0.this$, a1);
    }

    jdouble ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jdouble a1) const
    {
      return env->callDoubleMethod(this$, mids$[mid_get_792704fafbc1ba32], a0.this$, a1);
    }

    jfloat ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jfloat a1) const
    {
      return env->callFloatMethod(this$, mids$[mid_get_8932d96572bfa5e9], a0.this$, a1);
    }

    jint ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_get_f5fd9af3faa747d5], a0.this$, a1);
    }

    ::java::lang::Object ObjectInputStream$GetField::get$(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_d99c45aaa01ca49f], a0.this$, a1.this$));
    }

    jlong ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jlong a1) const
    {
      return env->callLongMethod(this$, mids$[mid_get_08826549b8f2bdcc], a0.this$, a1);
    }

    jshort ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jshort a1) const
    {
      return env->callShortMethod(this$, mids$[mid_get_c262b427c2fc0c80], a0.this$, a1);
    }

    ::java::io::ObjectStreamClass ObjectInputStream$GetField::getObjectStreamClass() const
    {
      return ::java::io::ObjectStreamClass(env->callObjectMethod(this$, mids$[mid_getObjectStreamClass_dbbdc211e0cefa39]));
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
#include "java/util/OptionalDouble.h"
#include "java/lang/Runnable.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/util/OptionalDouble.h"
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
        mids$[mid_empty_e3186f0c7a9ab30b] = env->getStaticMethodID(cls, "empty", "()Ljava/util/OptionalDouble;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAsDouble_557b8123390d8d0c] = env->getMethodID(cls, "getAsDouble", "()D");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_ifPresent_fda350dd3513069c] = env->getMethodID(cls, "ifPresent", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_ifPresentOrElse_67dd0e15cf1c0ffe] = env->getMethodID(cls, "ifPresentOrElse", "(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_89b302893bdbe1f1] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_afa36fca5724ddcb] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/OptionalDouble;");
        mids$[mid_orElse_7e960cd6eee376d8] = env->getMethodID(cls, "orElse", "(D)D");
        mids$[mid_orElseThrow_557b8123390d8d0c] = env->getMethodID(cls, "orElseThrow", "()D");
        mids$[mid_orElseThrow_a5cf1eb1c68623c3] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)D");
        mids$[mid_stream_78c9b5d7fa0dbac0] = env->getMethodID(cls, "stream", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OptionalDouble OptionalDouble::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_empty_e3186f0c7a9ab30b]));
    }

    jboolean OptionalDouble::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jdouble OptionalDouble::getAsDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAsDouble_557b8123390d8d0c]);
    }

    jint OptionalDouble::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    void OptionalDouble::ifPresent(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresent_fda350dd3513069c], a0.this$);
    }

    void OptionalDouble::ifPresentOrElse(const ::java::util::function::DoubleConsumer & a0, const ::java::lang::Runnable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_ifPresentOrElse_67dd0e15cf1c0ffe], a0.this$, a1.this$);
    }

    jboolean OptionalDouble::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    jboolean OptionalDouble::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_89b302893bdbe1f1]);
    }

    OptionalDouble OptionalDouble::of(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return OptionalDouble(env->callStaticObjectMethod(cls, mids$[mid_of_afa36fca5724ddcb], a0));
    }

    jdouble OptionalDouble::orElse(jdouble a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElse_7e960cd6eee376d8], a0);
    }

    jdouble OptionalDouble::orElseThrow() const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_557b8123390d8d0c]);
    }

    jdouble OptionalDouble::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return env->callDoubleMethod(this$, mids$[mid_orElseThrow_a5cf1eb1c68623c3], a0.this$);
    }

    ::java::util::stream::DoubleStream OptionalDouble::stream() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_stream_78c9b5d7fa0dbac0]));
    }

    ::java::lang::String OptionalDouble::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "java/lang/SecurityException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityException::class$ = NULL;
    jmethodID *SecurityException::mids$ = NULL;
    bool SecurityException::live$ = false;

    jclass SecurityException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityException::SecurityException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SecurityException__methods_[] = {
      DECLARE_METHOD(t_SecurityException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityException)[] = {
      { Py_tp_methods, t_SecurityException__methods_ },
      { Py_tp_init, (void *) t_SecurityException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(SecurityException, t_SecurityException, SecurityException);

    void t_SecurityException::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityException), &PY_TYPE_DEF(SecurityException), module, "SecurityException", 0);
    }

    void t_SecurityException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "class_", make_descriptor(SecurityException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "wrapfn_", make_descriptor(t_SecurityException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityException::initializeClass, 1)))
        return NULL;
      return t_SecurityException::wrap_Object(SecurityException(((t_SecurityException *) arg)->object.this$));
    }
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          SecurityException object((jobject) NULL);

          INT_CALL(object = SecurityException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SecurityException(a0, a1));
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
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/lang/Class.h"
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
        mids$[mid_checkInput_e04658988b631719] = env->getMethodID(cls, "checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::io::ObjectInputFilter$Status ObjectInputFilter::checkInput(const ::java::io::ObjectInputFilter$FilterInfo & a0) const
    {
      return ::java::io::ObjectInputFilter$Status(env->callObjectMethod(this$, mids$[mid_checkInput_e04658988b631719], a0.this$));
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
        mids$[mid_forClass_d4b191ff8147475d] = env->getMethodID(cls, "forClass", "()Ljava/lang/Class;");
        mids$[mid_getField_08225b2fd24da2ad] = env->getMethodID(cls, "getField", "(Ljava/lang/String;)Ljava/io/ObjectStreamField;");
        mids$[mid_getFields_7934f9002a889ae9] = env->getMethodID(cls, "getFields", "()[Ljava/io/ObjectStreamField;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSerialVersionUID_9e26256fb0d384a2] = env->getMethodID(cls, "getSerialVersionUID", "()J");
        mids$[mid_lookup_f8433cde6293a234] = env->getStaticMethodID(cls, "lookup", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_lookupAny_f8433cde6293a234] = env->getStaticMethodID(cls, "lookupAny", "(Ljava/lang/Class;)Ljava/io/ObjectStreamClass;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        NO_FIELDS = new JArray< ::java::io::ObjectStreamField >(env->getStaticObjectField(cls, "NO_FIELDS", "[Ljava/io/ObjectStreamField;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Class ObjectStreamClass::forClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_forClass_d4b191ff8147475d]));
    }

    ::java::io::ObjectStreamField ObjectStreamClass::getField(const ::java::lang::String & a0) const
    {
      return ::java::io::ObjectStreamField(env->callObjectMethod(this$, mids$[mid_getField_08225b2fd24da2ad], a0.this$));
    }

    JArray< ::java::io::ObjectStreamField > ObjectStreamClass::getFields() const
    {
      return JArray< ::java::io::ObjectStreamField >(env->callObjectMethod(this$, mids$[mid_getFields_7934f9002a889ae9]));
    }

    ::java::lang::String ObjectStreamClass::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jlong ObjectStreamClass::getSerialVersionUID() const
    {
      return env->callLongMethod(this$, mids$[mid_getSerialVersionUID_9e26256fb0d384a2]);
    }

    ObjectStreamClass ObjectStreamClass::lookup(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookup_f8433cde6293a234], a0.this$));
    }

    ObjectStreamClass ObjectStreamClass::lookupAny(const ::java::lang::Class & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ObjectStreamClass(env->callStaticObjectMethod(cls, mids$[mid_lookupAny_f8433cde6293a234], a0.this$));
    }

    ::java::lang::String ObjectStreamClass::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_5f2f5f3d7421182b] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_activeCount_412668abc8d889e9] = env->getMethodID(cls, "activeCount", "()I");
        mids$[mid_activeGroupCount_412668abc8d889e9] = env->getMethodID(cls, "activeGroupCount", "()I");
        mids$[mid_allowThreadSuspension_bc7235a51f399397] = env->getMethodID(cls, "allowThreadSuspension", "(Z)Z");
        mids$[mid_checkAccess_0640e6acf969ed28] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_destroy_0640e6acf969ed28] = env->getMethodID(cls, "destroy", "()V");
        mids$[mid_enumerate_33318ecfe98749af] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_enumerate_3372509a943b910a] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;)I");
        mids$[mid_enumerate_6ddae58fe6e2ebee] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;Z)I");
        mids$[mid_enumerate_82a98c7b62ede06a] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;Z)I");
        mids$[mid_getMaxPriority_412668abc8d889e9] = env->getMethodID(cls, "getMaxPriority", "()I");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_33ca5756bd56429e] = env->getMethodID(cls, "getParent", "()Ljava/lang/ThreadGroup;");
        mids$[mid_interrupt_0640e6acf969ed28] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_isDaemon_89b302893bdbe1f1] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isDestroyed_89b302893bdbe1f1] = env->getMethodID(cls, "isDestroyed", "()Z");
        mids$[mid_list_0640e6acf969ed28] = env->getMethodID(cls, "list", "()V");
        mids$[mid_parentOf_6ecd715167b5bcc1] = env->getMethodID(cls, "parentOf", "(Ljava/lang/ThreadGroup;)Z");
        mids$[mid_resume_0640e6acf969ed28] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_setDaemon_ed2afdb8506b9742] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setMaxPriority_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxPriority", "(I)V");
        mids$[mid_stop_0640e6acf969ed28] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_0640e6acf969ed28] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_uncaughtException_6ab5c8a40df48e4f] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ThreadGroup::ThreadGroup(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    ThreadGroup::ThreadGroup(const ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f2f5f3d7421182b, a0.this$, a1.this$)) {}

    jint ThreadGroup::activeCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeCount_412668abc8d889e9]);
    }

    jint ThreadGroup::activeGroupCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeGroupCount_412668abc8d889e9]);
    }

    jboolean ThreadGroup::allowThreadSuspension(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_allowThreadSuspension_bc7235a51f399397], a0);
    }

    void ThreadGroup::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_0640e6acf969ed28]);
    }

    void ThreadGroup::destroy() const
    {
      env->callVoidMethod(this$, mids$[mid_destroy_0640e6acf969ed28]);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_33318ecfe98749af], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_3372509a943b910a], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_6ddae58fe6e2ebee], a0.this$, a1);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_82a98c7b62ede06a], a0.this$, a1);
    }

    jint ThreadGroup::getMaxPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaxPriority_412668abc8d889e9]);
    }

    ::java::lang::String ThreadGroup::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    ThreadGroup ThreadGroup::getParent() const
    {
      return ThreadGroup(env->callObjectMethod(this$, mids$[mid_getParent_33ca5756bd56429e]));
    }

    void ThreadGroup::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_0640e6acf969ed28]);
    }

    jboolean ThreadGroup::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_89b302893bdbe1f1]);
    }

    jboolean ThreadGroup::isDestroyed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDestroyed_89b302893bdbe1f1]);
    }

    void ThreadGroup::list() const
    {
      env->callVoidMethod(this$, mids$[mid_list_0640e6acf969ed28]);
    }

    jboolean ThreadGroup::parentOf(const ThreadGroup & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_parentOf_6ecd715167b5bcc1], a0.this$);
    }

    void ThreadGroup::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_0640e6acf969ed28]);
    }

    void ThreadGroup::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_ed2afdb8506b9742], a0);
    }

    void ThreadGroup::setMaxPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaxPriority_a3da1a935cb37f7b], a0);
    }

    void ThreadGroup::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_0640e6acf969ed28]);
    }

    void ThreadGroup::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_0640e6acf969ed28]);
    }

    ::java::lang::String ThreadGroup::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void ThreadGroup::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_6ab5c8a40df48e4f], a0.this$, a1.this$);
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SyncFailedException::SyncFailedException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
        mids$[mid_boot_a9837dd004e81a19] = env->getStaticMethodID(cls, "boot", "()Ljava/lang/ModuleLayer;");
        mids$[mid_empty_a9837dd004e81a19] = env->getStaticMethodID(cls, "empty", "()Ljava/lang/ModuleLayer;");
        mids$[mid_findLoader_a03391f23408d51d] = env->getMethodID(cls, "findLoader", "(Ljava/lang/String;)Ljava/lang/ClassLoader;");
        mids$[mid_findModule_9c3a4165b34182b4] = env->getMethodID(cls, "findModule", "(Ljava/lang/String;)Ljava/util/Optional;");
        mids$[mid_modules_2dfcbd371d62f4e1] = env->getMethodID(cls, "modules", "()Ljava/util/Set;");
        mids$[mid_parents_0d9551367f7ecdef] = env->getMethodID(cls, "parents", "()Ljava/util/List;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer ModuleLayer::boot()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_boot_a9837dd004e81a19]));
    }

    ModuleLayer ModuleLayer::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_empty_a9837dd004e81a19]));
    }

    ::java::lang::ClassLoader ModuleLayer::findLoader(const ::java::lang::String & a0) const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_findLoader_a03391f23408d51d], a0.this$));
    }

    ::java::util::Optional ModuleLayer::findModule(const ::java::lang::String & a0) const
    {
      return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findModule_9c3a4165b34182b4], a0.this$));
    }

    ::java::util::Set ModuleLayer::modules() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_modules_2dfcbd371d62f4e1]));
    }

    ::java::util::List ModuleLayer::parents() const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parents_0d9551367f7ecdef]));
    }

    ::java::lang::String ModuleLayer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/io/Serializable.h"
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
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_readResolve_e661fe3ba2fafb22] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

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
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint AttributedCharacterIterator$Attribute::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    ::java::lang::String AttributedCharacterIterator$Attribute::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_ed2afdb8506b9742] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_a3da1a935cb37f7b] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_f5ffdf29129ef90a] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_a3da1a935cb37f7b] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_f5ffdf29129ef90a] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_10f281d777284cea] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFloat_3ac7cc3def9efaa9] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_a3da1a935cb37f7b] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_3cd6a6b354c6aa22] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeShort_a3da1a935cb37f7b] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_f5ffdf29129ef90a] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void DataOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void DataOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void DataOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }

    void DataOutput::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_ed2afdb8506b9742], a0);
    }

    void DataOutput::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_a3da1a935cb37f7b], a0);
    }

    void DataOutput::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_f5ffdf29129ef90a], a0.this$);
    }

    void DataOutput::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_a3da1a935cb37f7b], a0);
    }

    void DataOutput::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_f5ffdf29129ef90a], a0.this$);
    }

    void DataOutput::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_10f281d777284cea], a0);
    }

    void DataOutput::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_3ac7cc3def9efaa9], a0);
    }

    void DataOutput::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_a3da1a935cb37f7b], a0);
    }

    void DataOutput::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_3cd6a6b354c6aa22], a0);
    }

    void DataOutput::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_a3da1a935cb37f7b], a0);
    }

    void DataOutput::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_f5ffdf29129ef90a], a0.this$);
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}
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
#include "java/security/Permission.h"
#include "java/lang/SecurityException.h"
#include "java/io/Serializable.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_checkGuard_009757f2c0fd9090] = env->getMethodID(cls, "checkGuard", "(Ljava/lang/Object;)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_3cffd47377eca18a] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_a8c459a5c587bd4f] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Permission::Permission(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    void Permission::checkGuard(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkGuard_009757f2c0fd9090], a0.this$);
    }

    jboolean Permission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String Permission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_3cffd47377eca18a]));
    }

    ::java::lang::String Permission::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jint Permission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Permission::implies(const Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_a8c459a5c587bd4f], a0.this$);
    }

    ::java::lang::String Permission::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        mids$[mid_forEachRemaining_009757f2c0fd9090] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");
        mids$[mid_tryAdvance_221e8e85cb385209] = env->getMethodID(cls, "tryAdvance", "(Ljava/lang/Object;)Z");
        mids$[mid_trySplit_cb8bbf8b8d713578] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfPrimitive;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfPrimitive::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_009757f2c0fd9090], a0.this$);
    }

    jboolean Spliterator$OfPrimitive::tryAdvance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_221e8e85cb385209], a0.this$);
    }

    Spliterator$OfPrimitive Spliterator$OfPrimitive::trySplit() const
    {
      return Spliterator$OfPrimitive(env->callObjectMethod(this$, mids$[mid_trySplit_cb8bbf8b8d713578]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/System$Logger$Level.h"
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
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSeverity_412668abc8d889e9] = env->getMethodID(cls, "getSeverity", "()I");
        mids$[mid_valueOf_0df800252628b85f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/System$Logger$Level;");
        mids$[mid_values_de06acb541c2af58] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/System$Logger$Level;");

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
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jint System$Logger$Level::getSeverity() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeverity_412668abc8d889e9]);
    }

    System$Logger$Level System$Logger$Level::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return System$Logger$Level(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0df800252628b85f], a0.this$));
    }

    JArray< System$Logger$Level > System$Logger$Level::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< System$Logger$Level >(env->callStaticObjectMethod(cls, mids$[mid_values_de06acb541c2af58]));
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
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_current_d156d1ce330f6993] = env->getMethodID(cls, "current", "()C");
        mids$[mid_first_d156d1ce330f6993] = env->getMethodID(cls, "first", "()C");
        mids$[mid_getBeginIndex_412668abc8d889e9] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_412668abc8d889e9] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getIndex_412668abc8d889e9] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_last_d156d1ce330f6993] = env->getMethodID(cls, "last", "()C");
        mids$[mid_next_d156d1ce330f6993] = env->getMethodID(cls, "next", "()C");
        mids$[mid_previous_d156d1ce330f6993] = env->getMethodID(cls, "previous", "()C");
        mids$[mid_setIndex_4affd00329d5d4cf] = env->getMethodID(cls, "setIndex", "(I)C");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DONE = env->getStaticCharField(cls, "DONE");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object CharacterIterator::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jchar CharacterIterator::current() const
    {
      return env->callCharMethod(this$, mids$[mid_current_d156d1ce330f6993]);
    }

    jchar CharacterIterator::first() const
    {
      return env->callCharMethod(this$, mids$[mid_first_d156d1ce330f6993]);
    }

    jint CharacterIterator::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_412668abc8d889e9]);
    }

    jint CharacterIterator::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_412668abc8d889e9]);
    }

    jint CharacterIterator::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_412668abc8d889e9]);
    }

    jchar CharacterIterator::last() const
    {
      return env->callCharMethod(this$, mids$[mid_last_d156d1ce330f6993]);
    }

    jchar CharacterIterator::next() const
    {
      return env->callCharMethod(this$, mids$[mid_next_d156d1ce330f6993]);
    }

    jchar CharacterIterator::previous() const
    {
      return env->callCharMethod(this$, mids$[mid_previous_d156d1ce330f6993]);
    }

    jchar CharacterIterator::setIndex(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_setIndex_4affd00329d5d4cf], a0);
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
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_3cffd47377eca18a] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_a8c459a5c587bd4f] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BasicPermission::BasicPermission(const ::java::lang::String & a0) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    BasicPermission::BasicPermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

    jboolean BasicPermission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String BasicPermission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_3cffd47377eca18a]));
    }

    jint BasicPermission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean BasicPermission::implies(const ::java::security::Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_a8c459a5c587bd4f], a0.this$);
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
#include "java/lang/Thread.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/util/Map.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Thread.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Class.h"
#include "java/lang/Thread$State.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Thread::class$ = NULL;
    jmethodID *Thread::mids$ = NULL;
    bool Thread::live$ = false;
    jint Thread::MAX_PRIORITY = (jint) 0;
    jint Thread::MIN_PRIORITY = (jint) 0;
    jint Thread::NORM_PRIORITY = (jint) 0;

    jclass Thread::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Thread");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_28b7ec64eba9f306] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;)V");
        mids$[mid_init$_5f2f5f3d7421182b] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_init$_38f58160c6e4b41d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_15e963f75c03e9c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V");
        mids$[mid_init$_643d9099f9bb7c38] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_324bd55ce542cf89] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V");
        mids$[mid_init$_f6117e8acc32a6e9] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V");
        mids$[mid_activeCount_412668abc8d889e9] = env->getStaticMethodID(cls, "activeCount", "()I");
        mids$[mid_checkAccess_0640e6acf969ed28] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_countStackFrames_412668abc8d889e9] = env->getMethodID(cls, "countStackFrames", "()I");
        mids$[mid_currentThread_39a13f26f025dcaa] = env->getStaticMethodID(cls, "currentThread", "()Ljava/lang/Thread;");
        mids$[mid_dumpStack_0640e6acf969ed28] = env->getStaticMethodID(cls, "dumpStack", "()V");
        mids$[mid_enumerate_33318ecfe98749af] = env->getStaticMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_getAllStackTraces_1e62c2f73fbdd1c4] = env->getStaticMethodID(cls, "getAllStackTraces", "()Ljava/util/Map;");
        mids$[mid_getContextClassLoader_822bf82dfc5992ba] = env->getMethodID(cls, "getContextClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getDefaultUncaughtExceptionHandler_97fdfc9062f9f501] = env->getStaticMethodID(cls, "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_getId_9e26256fb0d384a2] = env->getMethodID(cls, "getId", "()J");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPriority_412668abc8d889e9] = env->getMethodID(cls, "getPriority", "()I");
        mids$[mid_getStackTrace_8174c106a73a6243] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getState_7ec835d9beacad15] = env->getMethodID(cls, "getState", "()Ljava/lang/Thread$State;");
        mids$[mid_getThreadGroup_33ca5756bd56429e] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getUncaughtExceptionHandler_97fdfc9062f9f501] = env->getMethodID(cls, "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_holdsLock_221e8e85cb385209] = env->getStaticMethodID(cls, "holdsLock", "(Ljava/lang/Object;)Z");
        mids$[mid_interrupt_0640e6acf969ed28] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_interrupted_89b302893bdbe1f1] = env->getStaticMethodID(cls, "interrupted", "()Z");
        mids$[mid_isAlive_89b302893bdbe1f1] = env->getMethodID(cls, "isAlive", "()Z");
        mids$[mid_isDaemon_89b302893bdbe1f1] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isInterrupted_89b302893bdbe1f1] = env->getMethodID(cls, "isInterrupted", "()Z");
        mids$[mid_join_0640e6acf969ed28] = env->getMethodID(cls, "join", "()V");
        mids$[mid_join_3cd6a6b354c6aa22] = env->getMethodID(cls, "join", "(J)V");
        mids$[mid_join_0bf85841a094cb2e] = env->getMethodID(cls, "join", "(JI)V");
        mids$[mid_onSpinWait_0640e6acf969ed28] = env->getStaticMethodID(cls, "onSpinWait", "()V");
        mids$[mid_resume_0640e6acf969ed28] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_run_0640e6acf969ed28] = env->getMethodID(cls, "run", "()V");
        mids$[mid_setContextClassLoader_3cf05a86101dd452] = env->getMethodID(cls, "setContextClassLoader", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_setDaemon_ed2afdb8506b9742] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setDefaultUncaughtExceptionHandler_fb240d20456c6da7] = env->getStaticMethodID(cls, "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_setName_f5ffdf29129ef90a] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
        mids$[mid_setPriority_a3da1a935cb37f7b] = env->getMethodID(cls, "setPriority", "(I)V");
        mids$[mid_setUncaughtExceptionHandler_fb240d20456c6da7] = env->getMethodID(cls, "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_sleep_3cd6a6b354c6aa22] = env->getStaticMethodID(cls, "sleep", "(J)V");
        mids$[mid_sleep_0bf85841a094cb2e] = env->getStaticMethodID(cls, "sleep", "(JI)V");
        mids$[mid_start_0640e6acf969ed28] = env->getMethodID(cls, "start", "()V");
        mids$[mid_stop_0640e6acf969ed28] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_0640e6acf969ed28] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_yield_0640e6acf969ed28] = env->getStaticMethodID(cls, "yield", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_PRIORITY = env->getStaticIntField(cls, "MAX_PRIORITY");
        MIN_PRIORITY = env->getStaticIntField(cls, "MIN_PRIORITY");
        NORM_PRIORITY = env->getStaticIntField(cls, "NORM_PRIORITY");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread::Thread() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Thread::Thread(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28b7ec64eba9f306, a0.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f2f5f3d7421182b, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_38f58160c6e4b41d, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15e963f75c03e9c6, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_643d9099f9bb7c38, a0.this$, a1.this$, a2.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_324bd55ce542cf89, a0.this$, a1.this$, a2.this$, a3)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6117e8acc32a6e9, a0.this$, a1.this$, a2.this$, a3, a4)) {}

    jint Thread::activeCount()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_activeCount_412668abc8d889e9]);
    }

    void Thread::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_0640e6acf969ed28]);
    }

    jint Thread::countStackFrames() const
    {
      return env->callIntMethod(this$, mids$[mid_countStackFrames_412668abc8d889e9]);
    }

    Thread Thread::currentThread()
    {
      jclass cls = env->getClass(initializeClass);
      return Thread(env->callStaticObjectMethod(cls, mids$[mid_currentThread_39a13f26f025dcaa]));
    }

    void Thread::dumpStack()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_dumpStack_0640e6acf969ed28]);
    }

    jint Thread::enumerate(const JArray< Thread > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_enumerate_33318ecfe98749af], a0.this$);
    }

    ::java::util::Map Thread::getAllStackTraces()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getAllStackTraces_1e62c2f73fbdd1c4]));
    }

    ::java::lang::ClassLoader Thread::getContextClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getContextClassLoader_822bf82dfc5992ba]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getDefaultUncaughtExceptionHandler()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callStaticObjectMethod(cls, mids$[mid_getDefaultUncaughtExceptionHandler_97fdfc9062f9f501]));
    }

    jlong Thread::getId() const
    {
      return env->callLongMethod(this$, mids$[mid_getId_9e26256fb0d384a2]);
    }

    ::java::lang::String Thread::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jint Thread::getPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getPriority_412668abc8d889e9]);
    }

    JArray< ::java::lang::StackTraceElement > Thread::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_8174c106a73a6243]));
    }

    ::java::lang::Thread$State Thread::getState() const
    {
      return ::java::lang::Thread$State(env->callObjectMethod(this$, mids$[mid_getState_7ec835d9beacad15]));
    }

    ::java::lang::ThreadGroup Thread::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_33ca5756bd56429e]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getUncaughtExceptionHandler() const
    {
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callObjectMethod(this$, mids$[mid_getUncaughtExceptionHandler_97fdfc9062f9f501]));
    }

    jboolean Thread::holdsLock(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_holdsLock_221e8e85cb385209], a0.this$);
    }

    void Thread::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_0640e6acf969ed28]);
    }

    jboolean Thread::interrupted()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_interrupted_89b302893bdbe1f1]);
    }

    jboolean Thread::isAlive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAlive_89b302893bdbe1f1]);
    }

    jboolean Thread::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_89b302893bdbe1f1]);
    }

    jboolean Thread::isInterrupted() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterrupted_89b302893bdbe1f1]);
    }

    void Thread::join() const
    {
      env->callVoidMethod(this$, mids$[mid_join_0640e6acf969ed28]);
    }

    void Thread::join(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_join_3cd6a6b354c6aa22], a0);
    }

    void Thread::join(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_join_0bf85841a094cb2e], a0, a1);
    }

    void Thread::onSpinWait()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_onSpinWait_0640e6acf969ed28]);
    }

    void Thread::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_0640e6acf969ed28]);
    }

    void Thread::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_0640e6acf969ed28]);
    }

    void Thread::setContextClassLoader(const ::java::lang::ClassLoader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setContextClassLoader_3cf05a86101dd452], a0.this$);
    }

    void Thread::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_ed2afdb8506b9742], a0);
    }

    void Thread::setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefaultUncaughtExceptionHandler_fb240d20456c6da7], a0.this$);
    }

    void Thread::setName(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setName_f5ffdf29129ef90a], a0.this$);
    }

    void Thread::setPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPriority_a3da1a935cb37f7b], a0);
    }

    void Thread::setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setUncaughtExceptionHandler_fb240d20456c6da7], a0.this$);
    }

    void Thread::sleep(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_3cd6a6b354c6aa22], a0);
    }

    void Thread::sleep(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_0bf85841a094cb2e], a0, a1);
    }

    void Thread::start() const
    {
      env->callVoidMethod(this$, mids$[mid_start_0640e6acf969ed28]);
    }

    void Thread::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_0640e6acf969ed28]);
    }

    void Thread::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_0640e6acf969ed28]);
    }

    ::java::lang::String Thread::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void Thread::yield()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_yield_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Thread_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Thread_init_(t_Thread *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Thread_activeCount(PyTypeObject *type);
    static PyObject *t_Thread_checkAccess(t_Thread *self);
    static PyObject *t_Thread_countStackFrames(t_Thread *self);
    static PyObject *t_Thread_currentThread(PyTypeObject *type);
    static PyObject *t_Thread_dumpStack(PyTypeObject *type);
    static PyObject *t_Thread_enumerate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_getAllStackTraces(PyTypeObject *type);
    static PyObject *t_Thread_getContextClassLoader(t_Thread *self);
    static PyObject *t_Thread_getDefaultUncaughtExceptionHandler(PyTypeObject *type);
    static PyObject *t_Thread_getId(t_Thread *self);
    static PyObject *t_Thread_getName(t_Thread *self);
    static PyObject *t_Thread_getPriority(t_Thread *self);
    static PyObject *t_Thread_getStackTrace(t_Thread *self);
    static PyObject *t_Thread_getState(t_Thread *self);
    static PyObject *t_Thread_getThreadGroup(t_Thread *self);
    static PyObject *t_Thread_getUncaughtExceptionHandler(t_Thread *self);
    static PyObject *t_Thread_holdsLock(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_interrupt(t_Thread *self);
    static PyObject *t_Thread_interrupted(PyTypeObject *type);
    static PyObject *t_Thread_isAlive(t_Thread *self);
    static PyObject *t_Thread_isDaemon(t_Thread *self);
    static PyObject *t_Thread_isInterrupted(t_Thread *self);
    static PyObject *t_Thread_join(t_Thread *self, PyObject *args);
    static PyObject *t_Thread_onSpinWait(PyTypeObject *type);
    static PyObject *t_Thread_resume(t_Thread *self);
    static PyObject *t_Thread_run(t_Thread *self);
    static PyObject *t_Thread_setContextClassLoader(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setDaemon(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setDefaultUncaughtExceptionHandler(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Thread_setName(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setPriority(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_setUncaughtExceptionHandler(t_Thread *self, PyObject *arg);
    static PyObject *t_Thread_sleep(PyTypeObject *type, PyObject *args);
    static PyObject *t_Thread_start(t_Thread *self);
    static PyObject *t_Thread_stop(t_Thread *self);
    static PyObject *t_Thread_suspend(t_Thread *self);
    static PyObject *t_Thread_toString(t_Thread *self, PyObject *args);
    static PyObject *t_Thread_yield(PyTypeObject *type);
    static PyObject *t_Thread_get__alive(t_Thread *self, void *data);
    static PyObject *t_Thread_get__allStackTraces(t_Thread *self, void *data);
    static PyObject *t_Thread_get__contextClassLoader(t_Thread *self, void *data);
    static int t_Thread_set__contextClassLoader(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__daemon(t_Thread *self, void *data);
    static int t_Thread_set__daemon(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__defaultUncaughtExceptionHandler(t_Thread *self, void *data);
    static int t_Thread_set__defaultUncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__id(t_Thread *self, void *data);
    static PyObject *t_Thread_get__name(t_Thread *self, void *data);
    static int t_Thread_set__name(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__priority(t_Thread *self, void *data);
    static int t_Thread_set__priority(t_Thread *self, PyObject *arg, void *data);
    static PyObject *t_Thread_get__stackTrace(t_Thread *self, void *data);
    static PyObject *t_Thread_get__state(t_Thread *self, void *data);
    static PyObject *t_Thread_get__threadGroup(t_Thread *self, void *data);
    static PyObject *t_Thread_get__uncaughtExceptionHandler(t_Thread *self, void *data);
    static int t_Thread_set__uncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data);
    static PyGetSetDef t_Thread__fields_[] = {
      DECLARE_GET_FIELD(t_Thread, alive),
      DECLARE_GET_FIELD(t_Thread, allStackTraces),
      DECLARE_GETSET_FIELD(t_Thread, contextClassLoader),
      DECLARE_GETSET_FIELD(t_Thread, daemon),
      DECLARE_GETSET_FIELD(t_Thread, defaultUncaughtExceptionHandler),
      DECLARE_GET_FIELD(t_Thread, id),
      DECLARE_GETSET_FIELD(t_Thread, name),
      DECLARE_GETSET_FIELD(t_Thread, priority),
      DECLARE_GET_FIELD(t_Thread, stackTrace),
      DECLARE_GET_FIELD(t_Thread, state),
      DECLARE_GET_FIELD(t_Thread, threadGroup),
      DECLARE_GETSET_FIELD(t_Thread, uncaughtExceptionHandler),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Thread__methods_[] = {
      DECLARE_METHOD(t_Thread, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, activeCount, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, checkAccess, METH_NOARGS),
      DECLARE_METHOD(t_Thread, countStackFrames, METH_NOARGS),
      DECLARE_METHOD(t_Thread, currentThread, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, dumpStack, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, enumerate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, getAllStackTraces, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, getContextClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getDefaultUncaughtExceptionHandler, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, getId, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getName, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getPriority, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getState, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getThreadGroup, METH_NOARGS),
      DECLARE_METHOD(t_Thread, getUncaughtExceptionHandler, METH_NOARGS),
      DECLARE_METHOD(t_Thread, holdsLock, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, interrupt, METH_NOARGS),
      DECLARE_METHOD(t_Thread, interrupted, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, isAlive, METH_NOARGS),
      DECLARE_METHOD(t_Thread, isDaemon, METH_NOARGS),
      DECLARE_METHOD(t_Thread, isInterrupted, METH_NOARGS),
      DECLARE_METHOD(t_Thread, join, METH_VARARGS),
      DECLARE_METHOD(t_Thread, onSpinWait, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, resume, METH_NOARGS),
      DECLARE_METHOD(t_Thread, run, METH_NOARGS),
      DECLARE_METHOD(t_Thread, setContextClassLoader, METH_O),
      DECLARE_METHOD(t_Thread, setDaemon, METH_O),
      DECLARE_METHOD(t_Thread, setDefaultUncaughtExceptionHandler, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Thread, setName, METH_O),
      DECLARE_METHOD(t_Thread, setPriority, METH_O),
      DECLARE_METHOD(t_Thread, setUncaughtExceptionHandler, METH_O),
      DECLARE_METHOD(t_Thread, sleep, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Thread, start, METH_NOARGS),
      DECLARE_METHOD(t_Thread, stop, METH_NOARGS),
      DECLARE_METHOD(t_Thread, suspend, METH_NOARGS),
      DECLARE_METHOD(t_Thread, toString, METH_VARARGS),
      DECLARE_METHOD(t_Thread, yield, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Thread)[] = {
      { Py_tp_methods, t_Thread__methods_ },
      { Py_tp_init, (void *) t_Thread_init_ },
      { Py_tp_getset, t_Thread__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Thread)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Thread, t_Thread, Thread);

    void t_Thread::install(PyObject *module)
    {
      installType(&PY_TYPE(Thread), &PY_TYPE_DEF(Thread), module, "Thread", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "UncaughtExceptionHandler", make_descriptor(&PY_TYPE_DEF(Thread$UncaughtExceptionHandler)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "State", make_descriptor(&PY_TYPE_DEF(Thread$State)));
    }

    void t_Thread::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "class_", make_descriptor(Thread::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "wrapfn_", make_descriptor(t_Thread::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "boxfn_", make_descriptor(boxObject));
      env->getClass(Thread::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "MAX_PRIORITY", make_descriptor(Thread::MAX_PRIORITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "MIN_PRIORITY", make_descriptor(Thread::MIN_PRIORITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Thread), "NORM_PRIORITY", make_descriptor(Thread::NORM_PRIORITY));
    }

    static PyObject *t_Thread_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Thread::initializeClass, 1)))
        return NULL;
      return t_Thread::wrap_Object(Thread(((t_Thread *) arg)->object.this$));
    }
    static PyObject *t_Thread_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Thread::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Thread_init_(t_Thread *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Thread object((jobject) NULL);

          INT_CALL(object = Thread());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Thread(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Runnable a0((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Runnable::initializeClass, &a0))
          {
            INT_CALL(object = Thread(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::ThreadGroup::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Runnable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Runnable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kk", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Thread(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kks", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = Thread(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jlong a3;
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kksJ", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = Thread(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);
          ::java::lang::Runnable a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          jlong a3;
          jboolean a4;
          Thread object((jobject) NULL);

          if (!parseArgs(args, "kksJZ", ::java::lang::ThreadGroup::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Thread(a0, a1, a2, a3, a4));
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

    static PyObject *t_Thread_activeCount(PyTypeObject *type)
    {
      jint result;
      OBJ_CALL(result = ::java::lang::Thread::activeCount());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_checkAccess(t_Thread *self)
    {
      OBJ_CALL(self->object.checkAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_countStackFrames(t_Thread *self)
    {
      jint result;
      OBJ_CALL(result = self->object.countStackFrames());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_currentThread(PyTypeObject *type)
    {
      Thread result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::currentThread());
      return t_Thread::wrap_Object(result);
    }

    static PyObject *t_Thread_dumpStack(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::dumpStack());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_enumerate(PyTypeObject *type, PyObject *arg)
    {
      JArray< Thread > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[k", Thread::initializeClass, &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread::enumerate(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "enumerate", arg);
      return NULL;
    }

    static PyObject *t_Thread_getAllStackTraces(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::getAllStackTraces());
      return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Thread), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_Thread_getContextClassLoader(t_Thread *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getContextClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Thread_getDefaultUncaughtExceptionHandler(PyTypeObject *type)
    {
      ::java::lang::Thread$UncaughtExceptionHandler result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Thread::getDefaultUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(result);
    }

    static PyObject *t_Thread_getId(t_Thread *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getId());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Thread_getName(t_Thread *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Thread_getPriority(t_Thread *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPriority());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Thread_getStackTrace(t_Thread *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Thread_getState(t_Thread *self)
    {
      ::java::lang::Thread$State result((jobject) NULL);
      OBJ_CALL(result = self->object.getState());
      return ::java::lang::t_Thread$State::wrap_Object(result);
    }

    static PyObject *t_Thread_getThreadGroup(t_Thread *self)
    {
      ::java::lang::ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_Thread_getUncaughtExceptionHandler(t_Thread *self)
    {
      ::java::lang::Thread$UncaughtExceptionHandler result((jobject) NULL);
      OBJ_CALL(result = self->object.getUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(result);
    }

    static PyObject *t_Thread_holdsLock(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::Thread::holdsLock(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "holdsLock", arg);
      return NULL;
    }

    static PyObject *t_Thread_interrupt(t_Thread *self)
    {
      OBJ_CALL(self->object.interrupt());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_interrupted(PyTypeObject *type)
    {
      jboolean result;
      OBJ_CALL(result = ::java::lang::Thread::interrupted());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isAlive(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAlive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isDaemon(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDaemon());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_isInterrupted(t_Thread *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterrupted());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Thread_join(t_Thread *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.join());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.join(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(self->object.join(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "join", args);
      return NULL;
    }

    static PyObject *t_Thread_onSpinWait(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::onSpinWait());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_resume(t_Thread *self)
    {
      OBJ_CALL(self->object.resume());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_run(t_Thread *self)
    {
      OBJ_CALL(self->object.run());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_setContextClassLoader(t_Thread *self, PyObject *arg)
    {
      ::java::lang::ClassLoader a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::ClassLoader::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setContextClassLoader(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setContextClassLoader", arg);
      return NULL;
    }

    static PyObject *t_Thread_setDaemon(t_Thread *self, PyObject *arg)
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

    static PyObject *t_Thread_setDefaultUncaughtExceptionHandler(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Thread$UncaughtExceptionHandler a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::Thread::setDefaultUncaughtExceptionHandler(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setDefaultUncaughtExceptionHandler", arg);
      return NULL;
    }

    static PyObject *t_Thread_setName(t_Thread *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setName(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setName", arg);
      return NULL;
    }

    static PyObject *t_Thread_setPriority(t_Thread *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setPriority(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPriority", arg);
      return NULL;
    }

    static PyObject *t_Thread_setUncaughtExceptionHandler(t_Thread *self, PyObject *arg)
    {
      ::java::lang::Thread$UncaughtExceptionHandler a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setUncaughtExceptionHandler(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setUncaughtExceptionHandler", arg);
      return NULL;
    }

    static PyObject *t_Thread_sleep(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(::java::lang::Thread::sleep(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(::java::lang::Thread::sleep(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sleep", args);
      return NULL;
    }

    static PyObject *t_Thread_start(t_Thread *self)
    {
      OBJ_CALL(self->object.start());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_stop(t_Thread *self)
    {
      OBJ_CALL(self->object.stop());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_suspend(t_Thread *self)
    {
      OBJ_CALL(self->object.suspend());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_toString(t_Thread *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Thread), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Thread_yield(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::Thread::yield());
      Py_RETURN_NONE;
    }

    static PyObject *t_Thread_get__alive(t_Thread *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAlive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Thread_get__allStackTraces(t_Thread *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllStackTraces());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_Thread_get__contextClassLoader(t_Thread *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getContextClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }
    static int t_Thread_set__contextClassLoader(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::ClassLoader value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::ClassLoader::initializeClass, &value))
        {
          INT_CALL(self->object.setContextClassLoader(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "contextClassLoader", arg);
      return -1;
    }

    static PyObject *t_Thread_get__daemon(t_Thread *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDaemon());
      Py_RETURN_BOOL(value);
    }
    static int t_Thread_set__daemon(t_Thread *self, PyObject *arg, void *data)
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

    static PyObject *t_Thread_get__defaultUncaughtExceptionHandler(t_Thread *self, void *data)
    {
      ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefaultUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(value);
    }
    static int t_Thread_set__defaultUncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &value))
        {
          INT_CALL(self->object.setDefaultUncaughtExceptionHandler(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "defaultUncaughtExceptionHandler", arg);
      return -1;
    }

    static PyObject *t_Thread_get__id(t_Thread *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getId());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_Thread_get__name(t_Thread *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
    static int t_Thread_set__name(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setName(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "name", arg);
      return -1;
    }

    static PyObject *t_Thread_get__priority(t_Thread *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPriority());
      return PyLong_FromLong((long) value);
    }
    static int t_Thread_set__priority(t_Thread *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setPriority(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "priority", arg);
      return -1;
    }

    static PyObject *t_Thread_get__stackTrace(t_Thread *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Thread_get__state(t_Thread *self, void *data)
    {
      ::java::lang::Thread$State value((jobject) NULL);
      OBJ_CALL(value = self->object.getState());
      return ::java::lang::t_Thread$State::wrap_Object(value);
    }

    static PyObject *t_Thread_get__threadGroup(t_Thread *self, void *data)
    {
      ::java::lang::ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(value);
    }

    static PyObject *t_Thread_get__uncaughtExceptionHandler(t_Thread *self, void *data)
    {
      ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
      OBJ_CALL(value = self->object.getUncaughtExceptionHandler());
      return ::java::lang::t_Thread$UncaughtExceptionHandler::wrap_Object(value);
    }
    static int t_Thread_set__uncaughtExceptionHandler(t_Thread *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Thread$UncaughtExceptionHandler value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::Thread$UncaughtExceptionHandler::initializeClass, &value))
        {
          INT_CALL(self->object.setUncaughtExceptionHandler(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "uncaughtExceptionHandler", arg);
      return -1;
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
        mids$[mid_arrayLength_9e26256fb0d384a2] = env->getMethodID(cls, "arrayLength", "()J");
        mids$[mid_depth_9e26256fb0d384a2] = env->getMethodID(cls, "depth", "()J");
        mids$[mid_references_9e26256fb0d384a2] = env->getMethodID(cls, "references", "()J");
        mids$[mid_serialClass_d4b191ff8147475d] = env->getMethodID(cls, "serialClass", "()Ljava/lang/Class;");
        mids$[mid_streamBytes_9e26256fb0d384a2] = env->getMethodID(cls, "streamBytes", "()J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jlong ObjectInputFilter$FilterInfo::arrayLength() const
    {
      return env->callLongMethod(this$, mids$[mid_arrayLength_9e26256fb0d384a2]);
    }

    jlong ObjectInputFilter$FilterInfo::depth() const
    {
      return env->callLongMethod(this$, mids$[mid_depth_9e26256fb0d384a2]);
    }

    jlong ObjectInputFilter$FilterInfo::references() const
    {
      return env->callLongMethod(this$, mids$[mid_references_9e26256fb0d384a2]);
    }

    ::java::lang::Class ObjectInputFilter$FilterInfo::serialClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_serialClass_d4b191ff8147475d]));
    }

    jlong ObjectInputFilter$FilterInfo::streamBytes() const
    {
      return env->callLongMethod(this$, mids$[mid_streamBytes_9e26256fb0d384a2]);
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
        mids$[mid_forEachRemaining_009757f2c0fd9090] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_009757f2c0fd9090], a0.this$);
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
        mids$[mid_valueOf_e8a6b88739241593] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter$Status;");
        mids$[mid_values_69aa11d66d4db3e4] = env->getStaticMethodID(cls, "values", "()[Ljava/io/ObjectInputFilter$Status;");

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
      return ObjectInputFilter$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e8a6b88739241593], a0.this$));
    }

    JArray< ObjectInputFilter$Status > ObjectInputFilter$Status::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ObjectInputFilter$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_69aa11d66d4db3e4]));
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
        mids$[mid_readBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_acadfed42a0dbd0d] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_d156d1ce330f6993] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_557b8123390d8d0c] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFloat_04fe014f7609dc26] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_d759c70c6670fd89] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_ac782c7077255dd3] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_412668abc8d889e9] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_3cffd47377eca18a] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_9e26256fb0d384a2] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readShort_2554afc868a7ba2a] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_3cffd47377eca18a] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnsignedByte_412668abc8d889e9] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_412668abc8d889e9] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_skipBytes_0092017e99012694] = env->getMethodID(cls, "skipBytes", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean DataInput::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_89b302893bdbe1f1]);
    }

    jbyte DataInput::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_acadfed42a0dbd0d]);
    }

    jchar DataInput::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_d156d1ce330f6993]);
    }

    jdouble DataInput::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_557b8123390d8d0c]);
    }

    jfloat DataInput::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_04fe014f7609dc26]);
    }

    void DataInput::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_d759c70c6670fd89], a0.this$);
    }

    void DataInput::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_ac782c7077255dd3], a0.this$, a1, a2);
    }

    jint DataInput::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_412668abc8d889e9]);
    }

    ::java::lang::String DataInput::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_3cffd47377eca18a]));
    }

    jlong DataInput::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_9e26256fb0d384a2]);
    }

    jshort DataInput::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_2554afc868a7ba2a]);
    }

    ::java::lang::String DataInput::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_3cffd47377eca18a]));
    }

    jint DataInput::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_412668abc8d889e9]);
    }

    jint DataInput::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_412668abc8d889e9]);
    }

    jint DataInput::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_0092017e99012694], a0);
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
        mids$[mid_init$_c6d8829858f3ca7b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V");
        mids$[mid_init$_98c4736689c785d5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V");
        mids$[mid_compareTo_38a1845c8d44a9b0] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getOffset_412668abc8d889e9] = env->getMethodID(cls, "getOffset", "()I");
        mids$[mid_getType_d4b191ff8147475d] = env->getMethodID(cls, "getType", "()Ljava/lang/Class;");
        mids$[mid_getTypeCode_d156d1ce330f6993] = env->getMethodID(cls, "getTypeCode", "()C");
        mids$[mid_getTypeString_3cffd47377eca18a] = env->getMethodID(cls, "getTypeString", "()Ljava/lang/String;");
        mids$[mid_isPrimitive_89b302893bdbe1f1] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isUnshared_89b302893bdbe1f1] = env->getMethodID(cls, "isUnshared", "()Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_setOffset_a3da1a935cb37f7b] = env->getMethodID(cls, "setOffset", "(I)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6d8829858f3ca7b, a0.this$, a1.this$)) {}

    ObjectStreamField::ObjectStreamField(const ::java::lang::String & a0, const ::java::lang::Class & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98c4736689c785d5, a0.this$, a1.this$, a2)) {}

    jint ObjectStreamField::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_38a1845c8d44a9b0], a0.this$);
    }

    ::java::lang::String ObjectStreamField::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jint ObjectStreamField::getOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_412668abc8d889e9]);
    }

    ::java::lang::Class ObjectStreamField::getType() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getType_d4b191ff8147475d]));
    }

    jchar ObjectStreamField::getTypeCode() const
    {
      return env->callCharMethod(this$, mids$[mid_getTypeCode_d156d1ce330f6993]);
    }

    ::java::lang::String ObjectStreamField::getTypeString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeString_3cffd47377eca18a]));
    }

    jboolean ObjectStreamField::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_89b302893bdbe1f1]);
    }

    jboolean ObjectStreamField::isUnshared() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isUnshared_89b302893bdbe1f1]);
    }

    ::java::lang::String ObjectStreamField::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        mids$[mid_uncaughtException_6ab5c8a40df48e4f] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Thread$UncaughtExceptionHandler::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_uncaughtException_6ab5c8a40df48e4f], a0.this$, a1.this$);
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
#include "java/lang/Thread$State.h"
#include "java/lang/Thread$State.h"
#include "java/lang/String.h"
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
        mids$[mid_valueOf_ec547e262f3fc5e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;");
        mids$[mid_values_ceba256230d063b4] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/Thread$State;");

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
      return Thread$State(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec547e262f3fc5e7], a0.this$));
    }

    JArray< Thread$State > Thread$State::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Thread$State >(env->callStaticObjectMethod(cls, mids$[mid_values_ceba256230d063b4]));
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
        mids$[mid_addExports_d8130dcb512da5ee] = env->getMethodID(cls, "addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addOpens_d8130dcb512da5ee] = env->getMethodID(cls, "addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addReads_3fb90a8c9cf73541] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_layer_a9837dd004e81a19] = env->getMethodID(cls, "layer", "()Ljava/lang/ModuleLayer;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer$Controller ModuleLayer$Controller::addExports(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addExports_d8130dcb512da5ee], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addOpens(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addOpens_d8130dcb512da5ee], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addReads(const ::java::lang::Module & a0, const ::java::lang::Module & a1) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addReads_3fb90a8c9cf73541], a0.this$, a1.this$));
    }

    ::java::lang::ModuleLayer ModuleLayer$Controller::layer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_layer_a9837dd004e81a19]));
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
