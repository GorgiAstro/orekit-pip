#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventOccurrence::class$ = NULL;
        jmethodID *EventOccurrence::mids$ = NULL;
        bool EventOccurrence::live$ = false;

        jclass EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_22eaf1594b4245bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getAction_2ecf57a2edb373ef] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_7786706b02d94c05] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/ODEState;");
            mids$[mid_getStopTime_557b8123390d8d0c] = env->getMethodID(cls, "getStopTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventOccurrence::EventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22eaf1594b4245bf, a0.this$, a1.this$, a2)) {}

        ::org::hipparchus::ode::events::Action EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_2ecf57a2edb373ef]));
        }

        ::org::hipparchus::ode::ODEState EventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_getNewState_7786706b02d94c05]));
        }

        jdouble EventOccurrence::getStopTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStopTime_557b8123390d8d0c]);
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
        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data);
        static PyGetSetDef t_EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventOccurrence, stopTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventOccurrence)[] = {
          { Py_tp_methods, t_EventOccurrence__methods_ },
          { Py_tp_init, (void *) t_EventOccurrence_init_ },
          { Py_tp_getset, t_EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventOccurrence, t_EventOccurrence, EventOccurrence);

        void t_EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventOccurrence), &PY_TYPE_DEF(EventOccurrence), module, "EventOccurrence", 0);
        }

        void t_EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "class_", make_descriptor(EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "wrapfn_", make_descriptor(t_EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventOccurrence::wrap_Object(EventOccurrence(((t_EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          EventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KkD", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &a2))
          {
            INT_CALL(object = EventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::ODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStopTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStopTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractList::class$ = NULL;
    jmethodID *AbstractList::mids$ = NULL;
    bool AbstractList::live$ = false;

    jclass AbstractList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_3e1115797609a4d9] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_c5e40f007e7fded1] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_8a5ee63f2530538f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_38a1845c8d44a9b0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_996d185ac031638c] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_bd2239bed91d009f] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_8a5ee63f2530538f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_set_ff7fbb4a04f4c36b] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_subList_db6a96225c690c76] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_removeRange_a84c9a223722150c] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    void AbstractList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_3e1115797609a4d9], a0, a1.this$);
    }

    jboolean AbstractList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_c5e40f007e7fded1], a0, a1.this$);
    }

    void AbstractList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    jboolean AbstractList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object AbstractList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_8a5ee63f2530538f], a0));
    }

    jint AbstractList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint AbstractList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_38a1845c8d44a9b0], a0.this$);
    }

    ::java::util::Iterator AbstractList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jint AbstractList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_38a1845c8d44a9b0], a0.this$);
    }

    ::java::util::ListIterator AbstractList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_996d185ac031638c]));
    }

    ::java::util::ListIterator AbstractList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_bd2239bed91d009f], a0));
    }

    ::java::lang::Object AbstractList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_8a5ee63f2530538f], a0));
    }

    ::java::lang::Object AbstractList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_ff7fbb4a04f4c36b], a0, a1.this$));
    }

    ::java::util::List AbstractList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_db6a96225c690c76], a0, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data);
    static PyGetSetDef t_AbstractList__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractList__methods_[] = {
      DECLARE_METHOD(t_AbstractList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, add, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, clear, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, get, METH_O),
      DECLARE_METHOD(t_AbstractList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, indexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, lastIndexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, remove, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, set, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, subList, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractList)[] = {
      { Py_tp_methods, t_AbstractList__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractList *)) get_generic_iterator< t_AbstractList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractList, t_AbstractList, AbstractList);
    PyObject *t_AbstractList::wrap_Object(const AbstractList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractList::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractList), &PY_TYPE_DEF(AbstractList), module, "AbstractList", 0);
    }

    void t_AbstractList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "class_", make_descriptor(AbstractList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "wrapfn_", make_descriptor(t_AbstractList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractList::initializeClass, 1)))
        return NULL;
      return t_AbstractList::wrap_Object(AbstractList(((t_AbstractList *) arg)->object.this$));
    }
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/List.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedLofOffset::class$ = NULL;
      jmethodID *TabulatedLofOffset::mids$ = NULL;
      bool TabulatedLofOffset::live$ = false;

      jclass TabulatedLofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedLofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_534040e366b4b0a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_b2ac97ad3b8624a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTable_0d9551367f7ecdef] = env->getMethodID(cls, "getTable", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_534040e366b4b0a7, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::orekit::time::AbsoluteDate & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2ac97ad3b8624a2, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
      }

      ::java::util::List TabulatedLofOffset::getTable() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTable_0d9551367f7ecdef]));
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
      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args);
      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data);
      static PyGetSetDef t_TabulatedLofOffset__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedLofOffset, maxDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, minDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, table),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedLofOffset__methods_[] = {
        DECLARE_METHOD(t_TabulatedLofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getTable, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedLofOffset)[] = {
        { Py_tp_methods, t_TabulatedLofOffset__methods_ },
        { Py_tp_init, (void *) t_TabulatedLofOffset_init_ },
        { Py_tp_getset, t_TabulatedLofOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedLofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedLofOffset, t_TabulatedLofOffset, TabulatedLofOffset);

      void t_TabulatedLofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedLofOffset), &PY_TYPE_DEF(TabulatedLofOffset), module, "TabulatedLofOffset", 0);
      }

      void t_TabulatedLofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "class_", make_descriptor(TabulatedLofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "wrapfn_", make_descriptor(t_TabulatedLofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedLofOffset::initializeClass, 1)))
          return NULL;
        return t_TabulatedLofOffset::wrap_Object(TabulatedLofOffset(((t_TabulatedLofOffset *) arg)->object.this$));
      }
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedLofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a5, &a6))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getTable());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getTable());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ForceModelContext::class$ = NULL;
            jmethodID *ForceModelContext::mids$ = NULL;
            bool ForceModelContext::live$ = false;

            jclass ForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAuxiliaryElements_53e9e25baae02d2b] = env->getMethodID(cls, "getAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements ForceModelContext::getAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getAuxiliaryElements_53e9e25baae02d2b]));
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
          namespace forces {
            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self);
            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data);
            static PyGetSetDef t_ForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_ForceModelContext, auxiliaryElements),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ForceModelContext__methods_[] = {
              DECLARE_METHOD(t_ForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, getAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ForceModelContext)[] = {
              { Py_tp_methods, t_ForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ForceModelContext, t_ForceModelContext, ForceModelContext);

            void t_ForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(ForceModelContext), &PY_TYPE_DEF(ForceModelContext), module, "ForceModelContext", 0);
            }

            void t_ForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "class_", make_descriptor(ForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "wrapfn_", make_descriptor(t_ForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ForceModelContext::initializeClass, 1)))
                return NULL;
              return t_ForceModelContext::wrap_Object(ForceModelContext(((t_ForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }

            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemParser::class$ = NULL;
              jmethodID *AemParser::mids$ = NULL;
              bool AemParser::live$ = false;

              jclass AemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_1866fa061237087b] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_880defc2f8f9f844] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_ddfc9cfbbf6a749c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_build_1866fa061237087b]));
              }

              jboolean AemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean AemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean AemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_880defc2f8f9f844]));
              }

              jboolean AemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean AemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean AemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_parse_ddfc9cfbbf6a749c], a0.this$));
              }

              jboolean AemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean AemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean AemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void AemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
            namespace aem {
              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg);
              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data);
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data);
              static PyGetSetDef t_AemParser__fields_[] = {
                DECLARE_GET_FIELD(t_AemParser, header),
                DECLARE_GET_FIELD(t_AemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemParser__methods_[] = {
                DECLARE_METHOD(t_AemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, parse, METH_O),
                DECLARE_METHOD(t_AemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemParser)[] = {
                { Py_tp_methods, t_AemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AemParser, t_AemParser, AemParser);
              PyObject *t_AemParser::wrap_Object(const AemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AemParser), &PY_TYPE_DEF(AemParser), module, "AemParser", 0);
              }

              void t_AemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "class_", make_descriptor(AemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "wrapfn_", make_descriptor(t_AemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemParser::initializeClass, 1)))
                  return NULL;
                return t_AemParser::wrap_Object(AemParser(((t_AemParser *) arg)->object.this$));
              }
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary::class$ = NULL;
      jmethodID *FieldArrayDictionary::mids$ = NULL;
      bool FieldArrayDictionary::live$ = false;

      jclass FieldArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_f89bf3117923cd08] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_694b97800b8b07ac] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Map;)V");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_4acd5b0987a64fc1] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getData_0d9551367f7ecdef] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_7750c55ea2bf389f] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/FieldArrayDictionary$Entry;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_put_7d8c14f144e3f080] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_put_83a3b21e73294ddc] = env->getMethodID(cls, "put", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_putAll_e30d6d9efab7b075] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_fd2162b8a05a22fe] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_e712b7d773a9bf41] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/FieldArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f89bf3117923cd08, a0.this$, a1)) {}

      FieldArrayDictionary::FieldArrayDictionary(const ::org::hipparchus::Field & a0, const ::java::util::Map & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_694b97800b8b07ac, a0.this$, a1.this$)) {}

      void FieldArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_get_4acd5b0987a64fc1], a0.this$));
      }

      ::java::util::List FieldArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_0d9551367f7ecdef]));
      }

      ::org::orekit::utils::FieldArrayDictionary$Entry FieldArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::FieldArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_7750c55ea2bf389f], a0.this$));
      }

      ::org::hipparchus::Field FieldArrayDictionary::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_7d8c14f144e3f080], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::put(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_83a3b21e73294ddc], a0.this$, a1.this$);
      }

      void FieldArrayDictionary::putAll(const FieldArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_e30d6d9efab7b075], a0.this$);
      }

      void FieldArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
      }

      jboolean FieldArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_fd2162b8a05a22fe], a0.this$);
      }

      jint FieldArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }

      ::java::util::Map FieldArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_1e62c2f73fbdd1c4]));
      }

      ::java::lang::String FieldArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      FieldArrayDictionary FieldArrayDictionary::unmodifiableView() const
      {
        return FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_e712b7d773a9bf41]));
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
      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args);
      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg);
      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self);
      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data);
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary, data),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, field),
        DECLARE_GET_FIELD(t_FieldArrayDictionary, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_FieldArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary)[] = {
        { Py_tp_methods, t_FieldArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_FieldArrayDictionary_init_ },
        { Py_tp_getset, t_FieldArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary, t_FieldArrayDictionary, FieldArrayDictionary);
      PyObject *t_FieldArrayDictionary::wrap_Object(const FieldArrayDictionary& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary *self = (t_FieldArrayDictionary *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary), &PY_TYPE_DEF(FieldArrayDictionary), module, "FieldArrayDictionary", 0);
      }

      void t_FieldArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "class_", make_descriptor(FieldArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "wrapfn_", make_descriptor(t_FieldArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary::wrap_Object(FieldArrayDictionary(((t_FieldArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary_of_(t_FieldArrayDictionary *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldArrayDictionary_init_(t_FieldArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            FieldArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = FieldArrayDictionary(a0, a1));
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

      static PyObject *t_FieldArrayDictionary_clear(t_FieldArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldArrayDictionary_get(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getData(t_FieldArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_getEntry(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::FieldArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_FieldArrayDictionary$Entry::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_getField(t_FieldArrayDictionary *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldArrayDictionary_put(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "s[D", &a0, &a1))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.put(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_putAll(t_FieldArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldArrayDictionary a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", FieldArrayDictionary::initializeClass, &a0, &p0, t_FieldArrayDictionary::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_remove(t_FieldArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary_size(t_FieldArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary_toMap(t_FieldArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result);
      }

      static PyObject *t_FieldArrayDictionary_toString(t_FieldArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldArrayDictionary_unmodifiableView(t_FieldArrayDictionary *self)
      {
        FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldArrayDictionary_get__parameters_(t_FieldArrayDictionary *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary_get__data(t_FieldArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldArrayDictionary_get__field(t_FieldArrayDictionary *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonEphemerisFileWriter::mids$ = NULL;
        bool PythonEphemerisFileWriter::live$ = false;

        jclass PythonEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_507409137616ad7b] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_0fa910eb9c2e844e] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileWriter::PythonEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEphemerisFileWriter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace general {
        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self);
        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileWriter, t_PythonEphemerisFileWriter, PythonEphemerisFileWriter);

        void t_PythonEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileWriter), &PY_TYPE_DEF(PythonEphemerisFileWriter), module, "PythonEphemerisFileWriter", 1);
        }

        void t_PythonEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "class_", make_descriptor(PythonEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write1 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileWriter::wrap_Object(PythonEphemerisFileWriter(((t_PythonEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = env->fromJString((jstring) a0, 0);
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$LaserConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$LaserConfiguration::mids$ = NULL;
        bool CRDConfiguration$LaserConfiguration::live$ = false;

        jclass CRDConfiguration$LaserConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBeamDivergence_557b8123390d8d0c] = env->getMethodID(cls, "getBeamDivergence", "()D");
            mids$[mid_getLaserId_3cffd47377eca18a] = env->getMethodID(cls, "getLaserId", "()Ljava/lang/String;");
            mids$[mid_getLaserType_3cffd47377eca18a] = env->getMethodID(cls, "getLaserType", "()Ljava/lang/String;");
            mids$[mid_getNominalFireRate_557b8123390d8d0c] = env->getMethodID(cls, "getNominalFireRate", "()D");
            mids$[mid_getPrimaryWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getPrimaryWavelength", "()D");
            mids$[mid_getPulseEnergy_557b8123390d8d0c] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getPulseInOutgoingSemiTrain_412668abc8d889e9] = env->getMethodID(cls, "getPulseInOutgoingSemiTrain", "()I");
            mids$[mid_getPulseWidth_557b8123390d8d0c] = env->getMethodID(cls, "getPulseWidth", "()D");
            mids$[mid_setBeamDivergence_10f281d777284cea] = env->getMethodID(cls, "setBeamDivergence", "(D)V");
            mids$[mid_setLaserId_f5ffdf29129ef90a] = env->getMethodID(cls, "setLaserId", "(Ljava/lang/String;)V");
            mids$[mid_setLaserType_f5ffdf29129ef90a] = env->getMethodID(cls, "setLaserType", "(Ljava/lang/String;)V");
            mids$[mid_setNominalFireRate_10f281d777284cea] = env->getMethodID(cls, "setNominalFireRate", "(D)V");
            mids$[mid_setPrimaryWavelength_10f281d777284cea] = env->getMethodID(cls, "setPrimaryWavelength", "(D)V");
            mids$[mid_setPulseEnergy_10f281d777284cea] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setPulseInOutgoingSemiTrain_a3da1a935cb37f7b] = env->getMethodID(cls, "setPulseInOutgoingSemiTrain", "(I)V");
            mids$[mid_setPulseWidth_10f281d777284cea] = env->getMethodID(cls, "setPulseWidth", "(D)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$LaserConfiguration::CRDConfiguration$LaserConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble CRDConfiguration$LaserConfiguration::getBeamDivergence() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeamDivergence_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserId_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserType_3cffd47377eca18a]));
        }

        jdouble CRDConfiguration$LaserConfiguration::getNominalFireRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNominalFireRate_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPrimaryWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrimaryWavelength_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_557b8123390d8d0c]);
        }

        jint CRDConfiguration$LaserConfiguration::getPulseInOutgoingSemiTrain() const
        {
          return env->callIntMethod(this$, mids$[mid_getPulseInOutgoingSemiTrain_412668abc8d889e9]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseWidth_557b8123390d8d0c]);
        }

        void CRDConfiguration$LaserConfiguration::setBeamDivergence(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBeamDivergence_10f281d777284cea], a0);
        }

        void CRDConfiguration$LaserConfiguration::setLaserId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setLaserType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserType_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setNominalFireRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNominalFireRate_10f281d777284cea], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPrimaryWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrimaryWavelength_10f281d777284cea], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_10f281d777284cea], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseInOutgoingSemiTrain(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseInOutgoingSemiTrain_a3da1a935cb37f7b], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseWidth_10f281d777284cea], a0);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$LaserConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, beamDivergence),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, nominalFireRate),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, primaryWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseInOutgoingSemiTrain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseWidth),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$LaserConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getBeamDivergence, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getNominalFireRate, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPrimaryWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseInOutgoingSemiTrain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setBeamDivergence, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setNominalFireRate, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPrimaryWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseInOutgoingSemiTrain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$LaserConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$LaserConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$LaserConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$LaserConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$LaserConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$LaserConfiguration, t_CRDConfiguration$LaserConfiguration, CRDConfiguration$LaserConfiguration);

        void t_CRDConfiguration$LaserConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$LaserConfiguration), &PY_TYPE_DEF(CRDConfiguration$LaserConfiguration), module, "CRDConfiguration$LaserConfiguration", 0);
        }

        void t_CRDConfiguration$LaserConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "class_", make_descriptor(CRDConfiguration$LaserConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$LaserConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$LaserConfiguration::wrap_Object(CRDConfiguration$LaserConfiguration(((t_CRDConfiguration$LaserConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$LaserConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$LaserConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setBeamDivergence(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBeamDivergence", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNominalFireRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNominalFireRate", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrimaryWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrimaryWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPulseInOutgoingSemiTrain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseInOutgoingSemiTrain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setBeamDivergence(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "beamDivergence", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserId());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserType());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNominalFireRate(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nominalFireRate", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrimaryWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "primaryWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPulseInOutgoingSemiTrain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseInOutgoingSemiTrain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseWidth", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Throwable.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonGenerator::class$ = NULL;
            jmethodID *PythonGenerator::mids$ = NULL;
            bool PythonGenerator::live$ = false;

            jclass PythonGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_26917e8002e2fe0e] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_c03a7791f2fcb1f1] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_f5ffdf29129ef90a] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_f5ffdf29129ef90a] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_3cffd47377eca18a] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_3cffd47377eca18a] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0640e6acf969ed28] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_siToCcsdsName_60bb1b490b673cbf] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_9547058464ed819e] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_efa2aa6df7244612] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_4ccaedadb068bdeb] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_a576ec9025591acc] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_93ab992976af83e7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_011f5c0c4346496d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_134df300ac33b05f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_23e19e02040a2cc2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_a717407bcf2f477f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_8e286bd988c33b7f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_f678851e8742cc77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_102587d250c3217b] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_01ce980d49cb2b81] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonGenerator::PythonGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self);
            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args);
            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5);
            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0);
            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4);
            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0);
            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data);
            static PyGetSetDef t_PythonGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonGenerator)[] = {
              { Py_tp_methods, t_PythonGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonGenerator_init_ },
              { Py_tp_getset, t_PythonGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonGenerator, t_PythonGenerator, PythonGenerator);

            void t_PythonGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonGenerator), &PY_TYPE_DEF(PythonGenerator), module, "PythonGenerator", 1);
            }

            void t_PythonGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "class_", make_descriptor(PythonGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "wrapfn_", make_descriptor(t_PythonGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "close", "()V", (void *) t_PythonGenerator_close0 },
                { "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToCalendarString1 },
                { "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString2 },
                { "dateToString", "(IIIIID)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString3 },
                { "doubleToString", "(D)Ljava/lang/String;", (void *) t_PythonGenerator_doubleToString4 },
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_endMessage5 },
                { "enterSection", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_enterSection6 },
                { "exitSection", "()Ljava/lang/String;", (void *) t_PythonGenerator_exitSection7 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonGenerator_getFormat8 },
                { "getOutputName", "()Ljava/lang/String;", (void *) t_PythonGenerator_getOutputName9 },
                { "newLine", "()V", (void *) t_PythonGenerator_newLine10 },
                { "pythonDecRef", "()V", (void *) t_PythonGenerator_pythonDecRef11 },
                { "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;", (void *) t_PythonGenerator_siToCcsdsName12 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonGenerator_startMessage13 },
                { "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;", (void *) t_PythonGenerator_unitsListToString14 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonGenerator_writeComments15 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V", (void *) t_PythonGenerator_writeEntry16 },
                { "writeEntry", "(Ljava/lang/String;CZ)V", (void *) t_PythonGenerator_writeEntry17 },
                { "writeEntry", "(Ljava/lang/String;IZ)V", (void *) t_PythonGenerator_writeEntry18 },
                { "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V", (void *) t_PythonGenerator_writeEntry19 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry20 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry21 },
                { "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry22 },
                { "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V", (void *) t_PythonGenerator_writeEntry23 },
                { "writeRawData", "(C)V", (void *) t_PythonGenerator_writeRawData24 },
                { "writeRawData", "(Ljava/lang/CharSequence;)V", (void *) t_PythonGenerator_writeRawData25 },
              };
              env->registerNatives(cls, methods, 26);
            }

            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonGenerator::wrap_Object(PythonGenerator(((t_PythonGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds)
            {
              PythonGenerator object((jobject) NULL);

              INT_CALL(object = PythonGenerator());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "close", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToCalendarString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToCalendarString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "iiiiid", (int) a0, (int) a1, (int) a2, (int) a3, (int) a4, (double) a5);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "doubleToString", "d", (double) a0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("doubleToString", result);
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

            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "enterSection", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "exitSection", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("exitSection", result);
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

            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getOutputName", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getOutputName", result);
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

            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "newLine", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "siToCcsdsName", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("siToCcsdsName", result);
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

            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "unitsListToString", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("unitsListToString", result);
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

            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Enum::wrap_Object(::java::lang::Enum(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = c2p(a1);;
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OiO", o0, (int) a1, o2);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Double::wrap_Object(::java::lang::Double(a1));
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OdOO", o0, (double) a1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a1));
              PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *o4 = (a4 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOOO", o0, o1, o2, o3, o4);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = c2p(a0);;
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::lang::t_CharSequence::wrap_Object(::java::lang::CharSequence(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState$EventOccurrence::class$ = NULL;
        jmethodID *FieldEventState$EventOccurrence::mids$ = NULL;
        bool FieldEventState$EventOccurrence::live$ = false;

        jclass FieldEventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_2ecf57a2edb373ef] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_381b3e011cde018d] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getStopDate_f1fe4daf77c66560] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldEventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_2ecf57a2edb373ef]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_381b3e011cde018d]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_f1fe4daf77c66560]));
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
        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState$EventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState$EventOccurrence, t_FieldEventState$EventOccurrence, FieldEventState$EventOccurrence);
        PyObject *t_FieldEventState$EventOccurrence::wrap_Object(const FieldEventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState$EventOccurrence), &PY_TYPE_DEF(FieldEventState$EventOccurrence), module, "FieldEventState$EventOccurrence", 0);
        }

        void t_FieldEventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "class_", make_descriptor(FieldEventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "wrapfn_", make_descriptor(t_FieldEventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventState$EventOccurrence::wrap_Object(FieldEventState$EventOccurrence(((t_FieldEventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseAbstractUnivariateSolver::class$ = NULL;
        jmethodID *BaseAbstractUnivariateSolver::mids$ = NULL;
        bool BaseAbstractUnivariateSolver::live$ = false;

        jclass BaseAbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_getStartValue_557b8123390d8d0c] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_solve_2acf1fcf666df32e] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_277b266ef2505d2d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_50fe689dc1cd3df5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_computeObjectiveValue_7e960cd6eee376d8] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_verifyInterval_ab23f4ae0fb33968] = env->getMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_87096e3fd8086100] = env->getMethodID(cls, "verifySequence", "(DDD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_isBracketing_41fce65646328eb2] = env->getMethodID(cls, "isBracketing", "(DD)Z");
            mids$[mid_isSequence_3d7c70c33c048085] = env->getMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_verifyBracketing_ab23f4ae0fb33968] = env->getMethodID(cls, "verifyBracketing", "(DD)V");
            mids$[mid_incrementEvaluationCount_0640e6acf969ed28] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
            mids$[mid_setup_4473eacac8160c42] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint BaseAbstractUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jdouble BaseAbstractUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateSolver::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateSolver::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateSolver::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_557b8123390d8d0c]);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_2acf1fcf666df32e], a0, a1.this$, a2);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_277b266ef2505d2d], a0, a1.this$, a2, a3);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_50fe689dc1cd3df5], a0, a1.this$, a2, a3, a4);
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
        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, max),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, min),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, startValue),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMax, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMin, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateSolver, t_BaseAbstractUnivariateSolver, BaseAbstractUnivariateSolver);
        PyObject *t_BaseAbstractUnivariateSolver::wrap_Object(const BaseAbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateSolver), &PY_TYPE_DEF(BaseAbstractUnivariateSolver), module, "BaseAbstractUnivariateSolver", 0);
        }

        void t_BaseAbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "class_", make_descriptor(BaseAbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateSolver::wrap_Object(BaseAbstractUnivariateSolver(((t_BaseAbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::live$ = false;
        ::java::lang::String *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD = NULL;
        jint OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_72d5ae0b9255b495] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_METHOD = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Ljava/lang/String;"));
            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::addNewSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_72d5ae0b9255b495], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), module, "OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(j2p(*OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(((t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment result((jobject) NULL);

          if (!parseArgs(args, "KsIK", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorWriter");

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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *MetadataKey::class$ = NULL;
          jmethodID *MetadataKey::mids$ = NULL;
          bool MetadataKey::live$ = false;
          MetadataKey *MetadataKey::COMMENT = NULL;
          MetadataKey *MetadataKey::TIME_SYSTEM = NULL;

          jclass MetadataKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/MetadataKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_ad5e21f9c69528ca] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Metadata;)Z");
              mids$[mid_valueOf_ff2882a839918347] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/MetadataKey;");
              mids$[mid_values_a124e3e9387baee9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/MetadataKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              COMMENT = new MetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              TIME_SYSTEM = new MetadataKey(env->getStaticObjectField(cls, "TIME_SYSTEM", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean MetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Metadata & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_ad5e21f9c69528ca], a0.this$, a1.this$, a2.this$);
          }

          MetadataKey MetadataKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ff2882a839918347], a0.this$));
          }

          JArray< MetadataKey > MetadataKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< MetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a124e3e9387baee9]));
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
          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_MetadataKey_values(PyTypeObject *type);
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data);
          static PyGetSetDef t_MetadataKey__fields_[] = {
            DECLARE_GET_FIELD(t_MetadataKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MetadataKey__methods_[] = {
            DECLARE_METHOD(t_MetadataKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, process, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MetadataKey)[] = {
            { Py_tp_methods, t_MetadataKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MetadataKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MetadataKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(MetadataKey, t_MetadataKey, MetadataKey);
          PyObject *t_MetadataKey::wrap_Object(const MetadataKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MetadataKey::install(PyObject *module)
          {
            installType(&PY_TYPE(MetadataKey), &PY_TYPE_DEF(MetadataKey), module, "MetadataKey", 0);
          }

          void t_MetadataKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "class_", make_descriptor(MetadataKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "wrapfn_", make_descriptor(t_MetadataKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(MetadataKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "COMMENT", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "TIME_SYSTEM", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::TIME_SYSTEM)));
          }

          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MetadataKey::initializeClass, 1)))
              return NULL;
            return t_MetadataKey::wrap_Object(MetadataKey(((t_MetadataKey *) arg)->object.this$));
          }
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MetadataKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Metadata a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            MetadataKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::valueOf(a0));
              return t_MetadataKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_MetadataKey_values(PyTypeObject *type)
          {
            JArray< MetadataKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::values());
            return JArray<jobject>(result.this$).wrap(t_MetadataKey::wrap_jobject);
          }
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data)
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
#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "java/io/IOException.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *AstronomicalAmplitudeReader::class$ = NULL;
          jmethodID *AstronomicalAmplitudeReader::mids$ = NULL;
          bool AstronomicalAmplitudeReader::live$ = false;

          jclass AstronomicalAmplitudeReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0a68f778fdf0010e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIID)V");
              mids$[mid_getAstronomicalAmplitudesMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getAstronomicalAmplitudesMap", "()Ljava/util/Map;");
              mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AstronomicalAmplitudeReader::AstronomicalAmplitudeReader(const ::java::lang::String & a0, jint a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a68f778fdf0010e, a0.this$, a1, a2, a3, a4)) {}

          ::java::util::Map AstronomicalAmplitudeReader::getAstronomicalAmplitudesMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAstronomicalAmplitudesMap_1e62c2f73fbdd1c4]));
          }

          ::java::lang::String AstronomicalAmplitudeReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
          }

          void AstronomicalAmplitudeReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
          }

          jboolean AstronomicalAmplitudeReader::stillAcceptsData() const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args);
          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data);
          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data);
          static PyGetSetDef t_AstronomicalAmplitudeReader__fields_[] = {
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, astronomicalAmplitudesMap),
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AstronomicalAmplitudeReader__methods_[] = {
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getAstronomicalAmplitudesMap, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AstronomicalAmplitudeReader)[] = {
            { Py_tp_methods, t_AstronomicalAmplitudeReader__methods_ },
            { Py_tp_init, (void *) t_AstronomicalAmplitudeReader_init_ },
            { Py_tp_getset, t_AstronomicalAmplitudeReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AstronomicalAmplitudeReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AstronomicalAmplitudeReader, t_AstronomicalAmplitudeReader, AstronomicalAmplitudeReader);

          void t_AstronomicalAmplitudeReader::install(PyObject *module)
          {
            installType(&PY_TYPE(AstronomicalAmplitudeReader), &PY_TYPE_DEF(AstronomicalAmplitudeReader), module, "AstronomicalAmplitudeReader", 0);
          }

          void t_AstronomicalAmplitudeReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "class_", make_descriptor(AstronomicalAmplitudeReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "wrapfn_", make_descriptor(t_AstronomicalAmplitudeReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 1)))
              return NULL;
            return t_AstronomicalAmplitudeReader::wrap_Object(AstronomicalAmplitudeReader(((t_AstronomicalAmplitudeReader *) arg)->object.this$));
          }
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jdouble a4;
            AstronomicalAmplitudeReader object((jobject) NULL);

            if (!parseArgs(args, "sIIID", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AstronomicalAmplitudeReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args)
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

          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeTroposphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeTroposphericDelayModifier::live$ = false;

          jclass TurnAroundRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b6cf54f3c9220bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeTroposphericDelayModifier::TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6cf54f3c9220bc7, a0.this$)) {}

          ::java::util::List TurnAroundRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void TurnAroundRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void TurnAroundRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeTroposphericDelayModifier, t_TurnAroundRangeTroposphericDelayModifier, TurnAroundRangeTroposphericDelayModifier);

          void t_TurnAroundRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeTroposphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier), module, "TurnAroundRangeTroposphericDelayModifier", 0);
          }

          void t_TurnAroundRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "class_", make_descriptor(TurnAroundRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeTroposphericDelayModifier::wrap_Object(TurnAroundRangeTroposphericDelayModifier(((t_TurnAroundRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TurnAroundRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TurnAroundRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data)
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
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *BinomialDistribution::class$ = NULL;
        jmethodID *BinomialDistribution::mids$ = NULL;
        bool BinomialDistribution::live$ = false;

        jclass BinomialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/BinomialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfTrials_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfTrials", "()I");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialDistribution::BinomialDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

        jdouble BinomialDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jint BinomialDistribution::getNumberOfTrials() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfTrials_412668abc8d889e9]);
        }

        jdouble BinomialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble BinomialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble BinomialDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c]);
        }

        jint BinomialDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint BinomialDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean BinomialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble BinomialDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble BinomialDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
    namespace distribution {
      namespace discrete {
        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data);
        static PyGetSetDef t_BinomialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BinomialDistribution, numberOfTrials),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BinomialDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BinomialDistribution__methods_[] = {
          DECLARE_METHOD(t_BinomialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumberOfTrials, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialDistribution)[] = {
          { Py_tp_methods, t_BinomialDistribution__methods_ },
          { Py_tp_init, (void *) t_BinomialDistribution_init_ },
          { Py_tp_getset, t_BinomialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(BinomialDistribution, t_BinomialDistribution, BinomialDistribution);

        void t_BinomialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialDistribution), &PY_TYPE_DEF(BinomialDistribution), module, "BinomialDistribution", 0);
        }

        void t_BinomialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "class_", make_descriptor(BinomialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "wrapfn_", make_descriptor(t_BinomialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialDistribution::initializeClass, 1)))
            return NULL;
          return t_BinomialDistribution::wrap_Object(BinomialDistribution(((t_BinomialDistribution *) arg)->object.this$));
        }
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          BinomialDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = BinomialDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *BasicConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *BasicConstantThrustPropulsionModel::mids$ = NULL;
          bool BasicConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *BasicConstantThrustPropulsionModel::FLOW_RATE = NULL;
          jdouble BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE = (jdouble) 0;
          ::java::lang::String *BasicConstantThrustPropulsionModel::THRUST = NULL;
          jdouble BasicConstantThrustPropulsionModel::THRUST_SCALE = (jdouble) 0;

          jclass BasicConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cf2d903473e9fd3b] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_61fb1c1298b85822] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_86c4a0582e0747ce] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_e3919ad898361abd] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_b0b988f941da47d8] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b4c4f24efa81746b] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_73a8498c189497cd] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FLOW_RATE = new ::java::lang::String(env->getStaticObjectField(cls, "FLOW_RATE", "Ljava/lang/String;"));
              FLOW_RATE_SCALE = env->getStaticDoubleField(cls, "FLOW_RATE_SCALE");
              THRUST = new ::java::lang::String(env->getStaticObjectField(cls, "THRUST", "Ljava/lang/String;"));
              THRUST_SCALE = env->getStaticDoubleField(cls, "THRUST_SCALE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_cf2d903473e9fd3b, a0, a1, a2.this$, a3.this$)) {}

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_61fb1c1298b85822, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          jdouble BasicConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_557b8123390d8d0c]);
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_86c4a0582e0747ce], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement BasicConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_e3919ad898361abd], a0.this$));
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b0b988f941da47d8], a0.this$);
          }

          ::java::util::List BasicConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b4c4f24efa81746b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_73a8498c189497cd], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3df461fe15362b2b], a0.this$));
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
          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_BasicConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BasicConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BasicConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_BasicConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_BasicConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_BasicConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BasicConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(BasicConstantThrustPropulsionModel, t_BasicConstantThrustPropulsionModel, BasicConstantThrustPropulsionModel);

          void t_BasicConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(BasicConstantThrustPropulsionModel), &PY_TYPE_DEF(BasicConstantThrustPropulsionModel), module, "BasicConstantThrustPropulsionModel", 0);
          }

          void t_BasicConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "class_", make_descriptor(BasicConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_BasicConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(BasicConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::FLOW_RATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::THRUST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::THRUST_SCALE));
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_BasicConstantThrustPropulsionModel::wrap_Object(BasicConstantThrustPropulsionModel(((t_BasicConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *Covariance::class$ = NULL;
        jmethodID *Covariance::mids$ = NULL;
        bool Covariance::live$ = false;

        jclass Covariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/Covariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_3490b011a7c22af0] = env->getMethodID(cls, "<init>", "([[DZ)V");
            mids$[mid_init$_1fed4fc8db78540d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Z)V");
            mids$[mid_covariance_628a76297e217f13] = env->getMethodID(cls, "covariance", "([D[D)D");
            mids$[mid_covariance_81226d0b24750fea] = env->getMethodID(cls, "covariance", "([D[DZ)D");
            mids$[mid_getCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_computeCovarianceMatrix_340b47d21842d02c] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_1d40fe87afcd29e7] = env->getMethodID(cls, "computeCovarianceMatrix", "([[DZ)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_05cc2960cde80114] = env->getMethodID(cls, "computeCovarianceMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_e1d072ab7390a6e5] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Z)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Covariance::Covariance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3490b011a7c22af0, a0.this$, a1)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1fed4fc8db78540d, a0.this$, a1)) {}

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_81226d0b24750fea], a0.this$, a1.this$, a2);
        }

        ::org::hipparchus::linear::RealMatrix Covariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_70a207fcbc031df2]));
        }

        jint Covariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
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
      namespace correlation {
        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args);
        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self);
        static PyObject *t_Covariance_getN(t_Covariance *self);
        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data);
        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data);
        static PyGetSetDef t_Covariance__fields_[] = {
          DECLARE_GET_FIELD(t_Covariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_Covariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Covariance__methods_[] = {
          DECLARE_METHOD(t_Covariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, covariance, METH_VARARGS),
          DECLARE_METHOD(t_Covariance, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Covariance, getN, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Covariance)[] = {
          { Py_tp_methods, t_Covariance__methods_ },
          { Py_tp_init, (void *) t_Covariance_init_ },
          { Py_tp_getset, t_Covariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Covariance)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Covariance, t_Covariance, Covariance);

        void t_Covariance::install(PyObject *module)
        {
          installType(&PY_TYPE(Covariance), &PY_TYPE_DEF(Covariance), module, "Covariance", 0);
        }

        void t_Covariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "class_", make_descriptor(Covariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "wrapfn_", make_descriptor(t_Covariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Covariance::initializeClass, 1)))
            return NULL;
          return t_Covariance::wrap_Object(Covariance(((t_Covariance *) arg)->object.this$));
        }
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Covariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Covariance object((jobject) NULL);

              INT_CALL(object = Covariance());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[DZ", &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "kZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
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

        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "covariance", args);
          return NULL;
        }

        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Covariance_getN(t_Covariance *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseIonosphericDelayModifier::class$ = NULL;
          jmethodID *PhaseIonosphericDelayModifier::mids$ = NULL;
          bool PhaseIonosphericDelayModifier::live$ = false;

          jclass PhaseIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseIonosphericDelayModifier::PhaseIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          ::java::util::List PhaseIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void PhaseIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void PhaseIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self);
          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseIonosphericDelayModifier, t_PhaseIonosphericDelayModifier, PhaseIonosphericDelayModifier);

          void t_PhaseIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseIonosphericDelayModifier), &PY_TYPE_DEF(PhaseIonosphericDelayModifier), module, "PhaseIonosphericDelayModifier", 0);
          }

          void t_PhaseIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "class_", make_descriptor(PhaseIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseIonosphericDelayModifier::wrap_Object(PhaseIonosphericDelayModifier(((t_PhaseIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            PhaseIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame5B::class$ = NULL;
          jmethodID *SubFrame5B::mids$ = NULL;
          bool SubFrame5B::live$ = false;

          jclass SubFrame5B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame5B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReservedA10_412668abc8d889e9] = env->getMethodID(cls, "getReservedA10", "()I");
              mids$[mid_getReservedB10_412668abc8d889e9] = env->getMethodID(cls, "getReservedB10", "()I");
              mids$[mid_getSvHealth_0092017e99012694] = env->getMethodID(cls, "getSvHealth", "(I)I");
              mids$[mid_getTOA_412668abc8d889e9] = env->getMethodID(cls, "getTOA", "()I");
              mids$[mid_getWeekNumber_412668abc8d889e9] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame5B::getReservedA10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA10_412668abc8d889e9]);
          }

          jint SubFrame5B::getReservedB10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB10_412668abc8d889e9]);
          }

          jint SubFrame5B::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_0092017e99012694], a0);
          }

          jint SubFrame5B::getTOA() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOA_412668abc8d889e9]);
          }

          jint SubFrame5B::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_412668abc8d889e9]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg);
          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data);
          static PyGetSetDef t_SubFrame5B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame5B, reservedA10),
            DECLARE_GET_FIELD(t_SubFrame5B, reservedB10),
            DECLARE_GET_FIELD(t_SubFrame5B, tOA),
            DECLARE_GET_FIELD(t_SubFrame5B, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame5B__methods_[] = {
            DECLARE_METHOD(t_SubFrame5B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, getReservedA10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getReservedB10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getSvHealth, METH_O),
            DECLARE_METHOD(t_SubFrame5B, getTOA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame5B)[] = {
            { Py_tp_methods, t_SubFrame5B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame5B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame5B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame5B, t_SubFrame5B, SubFrame5B);

          void t_SubFrame5B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame5B), &PY_TYPE_DEF(SubFrame5B), module, "SubFrame5B", 0);
          }

          void t_SubFrame5B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "class_", make_descriptor(SubFrame5B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "wrapfn_", make_descriptor(t_SubFrame5B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame5B::initializeClass, 1)))
              return NULL;
            return t_SubFrame5B::wrap_Object(SubFrame5B(((t_SubFrame5B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame5B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataFilter::class$ = NULL;
      jmethodID *DataFilter::mids$ = NULL;
      bool DataFilter::live$ = false;

      jclass DataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::data::DataSource DataFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_d33f4b0b3a1030ad], a0.this$));
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
      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg);

      static PyMethodDef t_DataFilter__methods_[] = {
        DECLARE_METHOD(t_DataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataFilter)[] = {
        { Py_tp_methods, t_DataFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataFilter, t_DataFilter, DataFilter);

      void t_DataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(DataFilter), &PY_TYPE_DEF(DataFilter), module, "DataFilter", 0);
      }

      void t_DataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "class_", make_descriptor(DataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "wrapfn_", make_descriptor(t_DataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataFilter::initializeClass, 1)))
          return NULL;
        return t_DataFilter::wrap_Object(DataFilter(((t_DataFilter *) arg)->object.this$));
      }
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileFactory::class$ = NULL;
        jmethodID *TileFactory::mids$ = NULL;
        bool TileFactory::live$ = false;

        jclass TileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createTile_c36eccfe3059a213] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::raster::Tile TileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_createTile_c36eccfe3059a213]));
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
      namespace raster {
        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args);
        static PyObject *t_TileFactory_createTile(t_TileFactory *self);
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data);
        static PyGetSetDef t_TileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_TileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TileFactory__methods_[] = {
          DECLARE_METHOD(t_TileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_TileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileFactory)[] = {
          { Py_tp_methods, t_TileFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileFactory, t_TileFactory, TileFactory);
        PyObject *t_TileFactory::wrap_Object(const TileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(TileFactory), &PY_TYPE_DEF(TileFactory), module, "TileFactory", 0);
        }

        void t_TileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "class_", make_descriptor(TileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "wrapfn_", make_descriptor(t_TileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileFactory::initializeClass, 1)))
            return NULL;
          return t_TileFactory::wrap_Object(TileFactory(((t_TileFactory *) arg)->object.this$));
        }
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TileFactory_createTile(t_TileFactory *self)
        {
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
        }
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LoessInterpolator::class$ = NULL;
        jmethodID *LoessInterpolator::mids$ = NULL;
        bool LoessInterpolator::live$ = false;
        jdouble LoessInterpolator::DEFAULT_ACCURACY = (jdouble) 0;
        jdouble LoessInterpolator::DEFAULT_BANDWIDTH = (jdouble) 0;
        jint LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS = (jint) 0;

        jclass LoessInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LoessInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_3191da1710a102eb] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_interpolate_c07bcf24349320f1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_smooth_d2593442847fe350] = env->getMethodID(cls, "smooth", "([D[D)[D");
            mids$[mid_smooth_79894073e73ed985] = env->getMethodID(cls, "smooth", "([D[D[D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ACCURACY");
            DEFAULT_BANDWIDTH = env->getStaticDoubleField(cls, "DEFAULT_BANDWIDTH");
            DEFAULT_ROBUSTNESS_ITERS = env->getStaticIntField(cls, "DEFAULT_ROBUSTNESS_ITERS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LoessInterpolator::LoessInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3191da1710a102eb, a0, a1, a2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LoessInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c07bcf24349320f1], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_d2593442847fe350], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_79894073e73ed985], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args);
        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args);

        static PyMethodDef t_LoessInterpolator__methods_[] = {
          DECLARE_METHOD(t_LoessInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, interpolate, METH_VARARGS),
          DECLARE_METHOD(t_LoessInterpolator, smooth, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LoessInterpolator)[] = {
          { Py_tp_methods, t_LoessInterpolator__methods_ },
          { Py_tp_init, (void *) t_LoessInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LoessInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LoessInterpolator, t_LoessInterpolator, LoessInterpolator);

        void t_LoessInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LoessInterpolator), &PY_TYPE_DEF(LoessInterpolator), module, "LoessInterpolator", 0);
        }

        void t_LoessInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "class_", make_descriptor(LoessInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "wrapfn_", make_descriptor(t_LoessInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(LoessInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ACCURACY", make_descriptor(LoessInterpolator::DEFAULT_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_BANDWIDTH", make_descriptor(LoessInterpolator::DEFAULT_BANDWIDTH));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ROBUSTNESS_ITERS", make_descriptor(LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS));
        }

        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LoessInterpolator::initializeClass, 1)))
            return NULL;
          return t_LoessInterpolator::wrap_Object(LoessInterpolator(((t_LoessInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LoessInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LoessInterpolator object((jobject) NULL);

              INT_CALL(object = LoessInterpolator());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = LoessInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = LoessInterpolator(a0, a1, a2));
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

        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }

        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1));
                return result.wrap();
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "smooth", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OneWayGNSSPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *OneWayGNSSPhaseAmbiguityModifier::mids$ = NULL;
          bool OneWayGNSSPhaseAmbiguityModifier::live$ = false;

          jclass OneWayGNSSPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhaseAmbiguityModifier::OneWayGNSSPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

          ::java::util::List OneWayGNSSPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OneWayGNSSPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void OneWayGNSSPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_OneWayGNSSPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseAmbiguityModifier, t_OneWayGNSSPhaseAmbiguityModifier, OneWayGNSSPhaseAmbiguityModifier);

          void t_OneWayGNSSPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), &PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier), module, "OneWayGNSSPhaseAmbiguityModifier", 0);
          }

          void t_OneWayGNSSPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "class_", make_descriptor(OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseAmbiguityModifier::wrap_Object(OneWayGNSSPhaseAmbiguityModifier(((t_OneWayGNSSPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OneWayGNSSPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OneWayGNSSPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *UserDefinedXmlTokenBuilder::class$ = NULL;
            jmethodID *UserDefinedXmlTokenBuilder::mids$ = NULL;
            bool UserDefinedXmlTokenBuilder::live$ = false;

            jclass UserDefinedXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedXmlTokenBuilder::UserDefinedXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::java::util::List UserDefinedXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_5a8e94497b45a4c0], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_UserDefinedXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedXmlTokenBuilder)[] = {
              { Py_tp_methods, t_UserDefinedXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_UserDefinedXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserDefinedXmlTokenBuilder, t_UserDefinedXmlTokenBuilder, UserDefinedXmlTokenBuilder);

            void t_UserDefinedXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedXmlTokenBuilder), &PY_TYPE_DEF(UserDefinedXmlTokenBuilder), module, "UserDefinedXmlTokenBuilder", 0);
            }

            void t_UserDefinedXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "class_", make_descriptor(UserDefinedXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "wrapfn_", make_descriptor(t_UserDefinedXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_UserDefinedXmlTokenBuilder::wrap_Object(UserDefinedXmlTokenBuilder(((t_UserDefinedXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              UserDefinedXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = UserDefinedXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/time/TAIScale.h"
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

      ::java::lang::Class *TAIScale::class$ = NULL;
      jmethodID *TAIScale::mids$ = NULL;
      bool TAIScale::live$ = false;

      jclass TAIScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIScale");

          mids$ = new jmethodID[max_mid];
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

      ::java::lang::String TAIScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble TAIScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TAIScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble TAIScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String TAIScale::toString() const
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
      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_getName(t_TAIScale *self);
      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data);
      static PyGetSetDef t_TAIScale__fields_[] = {
        DECLARE_GET_FIELD(t_TAIScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TAIScale__methods_[] = {
        DECLARE_METHOD(t_TAIScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TAIScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIScale)[] = {
        { Py_tp_methods, t_TAIScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TAIScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIScale, t_TAIScale, TAIScale);

      void t_TAIScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIScale), &PY_TYPE_DEF(TAIScale), module, "TAIScale", 0);
      }

      void t_TAIScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "class_", make_descriptor(TAIScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "wrapfn_", make_descriptor(t_TAIScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIScale::initializeClass, 1)))
          return NULL;
        return t_TAIScale::wrap_Object(TAIScale(((t_TAIScale *) arg)->object.this$));
      }
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TAIScale_getName(t_TAIScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args)
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

      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args)
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

      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TAIScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersOffsetComputer::class$ = NULL;
          jmethodID *PhaseCentersOffsetComputer::mids$ = NULL;
          bool PhaseCentersOffsetComputer::live$ = false;

          jclass PhaseCentersOffsetComputer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_59cfeb08e5a13ccd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_offset_998e18f6a9251793] = env->getMethodID(cls, "offset", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersOffsetComputer::PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59cfeb08e5a13ccd, a0.this$, a1.this$)) {}

          jdouble PhaseCentersOffsetComputer::offset(const ::org::orekit::frames::StaticTransform & a0, const ::org::orekit::frames::StaticTransform & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_998e18f6a9251793], a0.this$, a1.this$);
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
          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args);

          static PyMethodDef t_PhaseCentersOffsetComputer__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, offset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersOffsetComputer)[] = {
            { Py_tp_methods, t_PhaseCentersOffsetComputer__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersOffsetComputer_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersOffsetComputer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersOffsetComputer, t_PhaseCentersOffsetComputer, PhaseCentersOffsetComputer);

          void t_PhaseCentersOffsetComputer::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersOffsetComputer), &PY_TYPE_DEF(PhaseCentersOffsetComputer), module, "PhaseCentersOffsetComputer", 0);
          }

          void t_PhaseCentersOffsetComputer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "class_", make_descriptor(PhaseCentersOffsetComputer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "wrapfn_", make_descriptor(t_PhaseCentersOffsetComputer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersOffsetComputer::wrap_Object(PhaseCentersOffsetComputer(((t_PhaseCentersOffsetComputer *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersOffsetComputer object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersOffsetComputer(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args)
          {
            ::org::orekit::frames::StaticTransform a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::frames::StaticTransform::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.offset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *ParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool ParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass ParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_96c74a7b518a43e9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_c68a5ca0cc166e0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDurationDriver_4194657b5e280ddc] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_e73bc59e931ba25e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_aa9de813b19ee575] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_96c74a7b518a43e9, a0.this$, a1.this$, a2.this$)) {}

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c68a5ca0cc166e0d, a0.this$, a1.this$, a2)) {}

        jdouble ParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_e73bc59e931ba25e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_e73bc59e931ba25e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_e73bc59e931ba25e]));
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
        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_ParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_ParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_ParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_ParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ParameterDrivenDateIntervalDetector, t_ParameterDrivenDateIntervalDetector, ParameterDrivenDateIntervalDetector);
        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_Object(const ParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(ParameterDrivenDateIntervalDetector), module, "ParameterDrivenDateIntervalDetector", 0);
        }

        void t_ParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "class_", make_descriptor(ParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_ParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(ParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_ParameterDrivenDateIntervalDetector::wrap_Object(ParameterDrivenDateIntervalDetector(((t_ParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *MeasurementFilter::class$ = NULL;
          jmethodID *MeasurementFilter::mids$ = NULL;
          bool MeasurementFilter::live$ = false;

          jclass MeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/MeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_filter_87933cc299a70778] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_87933cc299a70778], a0.this$, a1.this$);
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
        namespace filtering {
          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data);
          static PyGetSetDef t_MeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_MeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementFilter)[] = {
            { Py_tp_methods, t_MeasurementFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementFilter, t_MeasurementFilter, MeasurementFilter);
          PyObject *t_MeasurementFilter::wrap_Object(const MeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementFilter), &PY_TYPE_DEF(MeasurementFilter), module, "MeasurementFilter", 0);
          }

          void t_MeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "class_", make_descriptor(MeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "wrapfn_", make_descriptor(t_MeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_MeasurementFilter::wrap_Object(MeasurementFilter(((t_MeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data)
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
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/PropagationType.h"
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
            mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_613c8f46c659f636] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_f1fe4daf77c66560] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapArrayToState_90cbab6bce028b0d] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapArrayToState_2d55a845b18a3006] = env->getMethodID(cls, "mapArrayToState", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapDateToDouble_b884068a2c99f6ca] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_mapDoubleToDate_61a24ec56865ba5a] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapDoubleToDate_3281eb2bff5217b3] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapStateToArray_b5f12a51288f780a] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setPositionAngleType_0640e6acf969ed28] = env->getMethodID(cls, "setPositionAngleType", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider FieldStateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
        }

        ::org::orekit::frames::Frame FieldStateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_613c8f46c659f636]));
        }

        ::org::orekit::orbits::OrbitType FieldStateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::orbits::PositionAngleType FieldStateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_f1fe4daf77c66560]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_90cbab6bce028b0d], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_2d55a845b18a3006], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mapDateToDouble_b884068a2c99f6ca], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_61a24ec56865ba5a], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_3281eb2bff5217b3], a0.this$, a1.this$));
        }

        void FieldStateMapper::mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_b5f12a51288f780a], a0.this$, a1.this$, a2.this$);
        }

        void FieldStateMapper::setPositionAngleType() const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_0640e6acf969ed28]);
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
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataWriter::class$ = NULL;
            jmethodID *AdmCommonMetadataWriter::mids$ = NULL;
            bool AdmCommonMetadataWriter::live$ = false;

            jclass AdmCommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_27cf97d3f8749865] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmCommonMetadataWriter::AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_27cf97d3f8749865, a0.this$)) {}
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
            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmCommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataWriter)[] = {
              { Py_tp_methods, t_AdmCommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_AdmCommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataWriter, t_AdmCommonMetadataWriter, AdmCommonMetadataWriter);

            void t_AdmCommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataWriter), &PY_TYPE_DEF(AdmCommonMetadataWriter), module, "AdmCommonMetadataWriter", 0);
            }

            void t_AdmCommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "class_", make_descriptor(AdmCommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "wrapfn_", make_descriptor(t_AdmCommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataWriter::wrap_Object(AdmCommonMetadataWriter(((t_AdmCommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a0((jobject) NULL);
              AdmCommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = AdmCommonMetadataWriter(a0));
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
      }
    }
  }
}
