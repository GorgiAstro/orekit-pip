#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalAccessException::class$ = NULL;
    jmethodID *IllegalAccessException::mids$ = NULL;
    bool IllegalAccessException::live$ = false;

    jclass IllegalAccessException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalAccessException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalAccessException::IllegalAccessException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    IllegalAccessException::IllegalAccessException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalAccessException__methods_[] = {
      DECLARE_METHOD(t_IllegalAccessException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalAccessException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalAccessException)[] = {
      { Py_tp_methods, t_IllegalAccessException__methods_ },
      { Py_tp_init, (void *) t_IllegalAccessException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalAccessException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(IllegalAccessException, t_IllegalAccessException, IllegalAccessException);

    void t_IllegalAccessException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalAccessException), &PY_TYPE_DEF(IllegalAccessException), module, "IllegalAccessException", 0);
    }

    void t_IllegalAccessException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "class_", make_descriptor(IllegalAccessException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "wrapfn_", make_descriptor(t_IllegalAccessException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalAccessException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalAccessException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalAccessException::initializeClass, 1)))
        return NULL;
      return t_IllegalAccessException::wrap_Object(IllegalAccessException(((t_IllegalAccessException *) arg)->object.this$));
    }
    static PyObject *t_IllegalAccessException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalAccessException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalAccessException_init_(t_IllegalAccessException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalAccessException object((jobject) NULL);

          INT_CALL(object = IllegalAccessException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalAccessException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalAccessException(a0));
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
        mids$[mid_ceilingEntry_da79efd09d67f8b2] = env->getMethodID(cls, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_ceilingKey_9facd1449e0950d3] = env->getMethodID(cls, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingKeySet_024b2fed0d07125f] = env->getMethodID(cls, "descendingKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_descendingMap_d71603ad1730c5c7] = env->getMethodID(cls, "descendingMap", "()Ljava/util/NavigableMap;");
        mids$[mid_firstEntry_42bc55cedc6db0ee] = env->getMethodID(cls, "firstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_floorEntry_da79efd09d67f8b2] = env->getMethodID(cls, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_floorKey_9facd1449e0950d3] = env->getMethodID(cls, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headMap_ee1ff50116f0ffac] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_headMap_7b1032670f57ee23] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_higherEntry_da79efd09d67f8b2] = env->getMethodID(cls, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_higherKey_9facd1449e0950d3] = env->getMethodID(cls, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_lastEntry_42bc55cedc6db0ee] = env->getMethodID(cls, "lastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_lowerEntry_da79efd09d67f8b2] = env->getMethodID(cls, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_lowerKey_9facd1449e0950d3] = env->getMethodID(cls, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_navigableKeySet_024b2fed0d07125f] = env->getMethodID(cls, "navigableKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_pollFirstEntry_42bc55cedc6db0ee] = env->getMethodID(cls, "pollFirstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_pollLastEntry_42bc55cedc6db0ee] = env->getMethodID(cls, "pollLastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_subMap_3d23d8a4bccdf58a] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_subMap_0fcb4d861896163a] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_tailMap_ee1ff50116f0ffac] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_7b1032670f57ee23] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Map$Entry NavigableMap::ceilingEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_ceilingEntry_da79efd09d67f8b2], a0.this$));
    }

    ::java::lang::Object NavigableMap::ceilingKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceilingKey_9facd1449e0950d3], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::descendingKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingKeySet_024b2fed0d07125f]));
    }

    NavigableMap NavigableMap::descendingMap() const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_descendingMap_d71603ad1730c5c7]));
    }

    ::java::util::Map$Entry NavigableMap::firstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_firstEntry_42bc55cedc6db0ee]));
    }

    ::java::util::Map$Entry NavigableMap::floorEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_floorEntry_da79efd09d67f8b2], a0.this$));
    }

    ::java::lang::Object NavigableMap::floorKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floorKey_9facd1449e0950d3], a0.this$));
    }

    ::java::util::SortedMap NavigableMap::headMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_ee1ff50116f0ffac], a0.this$));
    }

    NavigableMap NavigableMap::headMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_headMap_7b1032670f57ee23], a0.this$, a1));
    }

    ::java::util::Map$Entry NavigableMap::higherEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_higherEntry_da79efd09d67f8b2], a0.this$));
    }

    ::java::lang::Object NavigableMap::higherKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higherKey_9facd1449e0950d3], a0.this$));
    }

    ::java::util::Map$Entry NavigableMap::lastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lastEntry_42bc55cedc6db0ee]));
    }

    ::java::util::Map$Entry NavigableMap::lowerEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lowerEntry_da79efd09d67f8b2], a0.this$));
    }

    ::java::lang::Object NavigableMap::lowerKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lowerKey_9facd1449e0950d3], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::navigableKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_navigableKeySet_024b2fed0d07125f]));
    }

    ::java::util::Map$Entry NavigableMap::pollFirstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollFirstEntry_42bc55cedc6db0ee]));
    }

    ::java::util::Map$Entry NavigableMap::pollLastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollLastEntry_42bc55cedc6db0ee]));
    }

    ::java::util::SortedMap NavigableMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_3d23d8a4bccdf58a], a0.this$, a1.this$));
    }

    NavigableMap NavigableMap::subMap(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_subMap_0fcb4d861896163a], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedMap NavigableMap::tailMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_ee1ff50116f0ffac], a0.this$));
    }

    NavigableMap NavigableMap::tailMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_tailMap_7b1032670f57ee23], a0.this$, a1));
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
#include "java/util/Locale$Category.h"
#include "java/util/Locale$Category.h"
#include "java/lang/String.h"
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
        mids$[mid_valueOf_3db19f5a3536e745] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;");
        mids$[mid_values_76952ad37d4f11e3] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$Category;");

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
      return Locale$Category(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3db19f5a3536e745], a0.this$));
    }

    JArray< Locale$Category > Locale$Category::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$Category >(env->callStaticObjectMethod(cls, mids$[mid_values_76952ad37d4f11e3]));
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
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_2990946c992aafed] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_2990946c992aafed] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4d23511a9f0db098] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_4d26fd885228c716] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_4d26fd885228c716] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_4d26fd885228c716] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_65c7d273e80d497a] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_65c7d273e80d497a] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_65c7d273e80d497a] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_4d26fd885228c716] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_4d26fd885228c716] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_4d26fd885228c716] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_4d26fd885228c716] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_4d26fd885228c716] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_4d26fd885228c716] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_4d26fd885228c716] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_2990946c992aafed] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_4d26fd885228c716] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeFirst_4d26fd885228c716] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_65c7d273e80d497a] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_4d26fd885228c716] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_65c7d273e80d497a] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Deque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean Deque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    void Deque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_2990946c992aafed], a0.this$);
    }

    void Deque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_2990946c992aafed], a0.this$);
    }

    jboolean Deque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Iterator Deque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4d23511a9f0db098]));
    }

    ::java::lang::Object Deque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_4d26fd885228c716]));
    }

    ::java::util::Iterator Deque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jboolean Deque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_65c7d273e80d497a], a0.this$);
    }

    jboolean Deque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_65c7d273e80d497a], a0.this$);
    }

    jboolean Deque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Deque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_4d26fd885228c716]));
    }

    ::java::lang::Object Deque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_4d26fd885228c716]));
    }

    void Deque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_2990946c992aafed], a0.this$);
    }

    ::java::lang::Object Deque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_4d26fd885228c716]));
    }

    jboolean Deque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Deque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_4d26fd885228c716]));
    }

    jboolean Deque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Deque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_4d26fd885228c716]));
    }

    jboolean Deque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_65c7d273e80d497a], a0.this$);
    }

    jint Deque::size() const
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
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_element_4d26fd885228c716] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_offer_65c7d273e80d497a] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_4d26fd885228c716] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_poll_4d26fd885228c716] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_remove_4d26fd885228c716] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Queue::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Queue::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_4d26fd885228c716]));
    }

    jboolean Queue::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object Queue::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_4d26fd885228c716]));
    }

    ::java::lang::Object Queue::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_4d26fd885228c716]));
    }

    ::java::lang::Object Queue::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_4d26fd885228c716]));
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
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NumberFormatException::class$ = NULL;
    jmethodID *NumberFormatException::mids$ = NULL;
    bool NumberFormatException::live$ = false;

    jclass NumberFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NumberFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NumberFormatException::NumberFormatException() : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    NumberFormatException::NumberFormatException(const ::java::lang::String & a0) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NumberFormatException__methods_[] = {
      DECLARE_METHOD(t_NumberFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormatException)[] = {
      { Py_tp_methods, t_NumberFormatException__methods_ },
      { Py_tp_init, (void *) t_NumberFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormatException)[] = {
      &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
      NULL
    };

    DEFINE_TYPE(NumberFormatException, t_NumberFormatException, NumberFormatException);

    void t_NumberFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormatException), &PY_TYPE_DEF(NumberFormatException), module, "NumberFormatException", 0);
    }

    void t_NumberFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "class_", make_descriptor(NumberFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "wrapfn_", make_descriptor(t_NumberFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormatException::initializeClass, 1)))
        return NULL;
      return t_NumberFormatException::wrap_Object(NumberFormatException(((t_NumberFormatException *) arg)->object.this$));
    }
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormatException object((jobject) NULL);

          INT_CALL(object = NumberFormatException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NumberFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NumberFormatException(a0));
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
#include "java/io/ObjectInput.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/ClassNotFoundException.h"
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
        mids$[mid_available_570ce0828f81a2c1] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_5702323b606d072b] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_619434785725cc72] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readObject_4d26fd885228c716] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint ObjectInput::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_570ce0828f81a2c1]);
    }

    void ObjectInput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    jint ObjectInput::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_5702323b606d072b], a0.this$);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_619434785725cc72], a0.this$, a1, a2);
    }

    ::java::lang::Object ObjectInput::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_4d26fd885228c716]));
    }

    jlong ObjectInput::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
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
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassNotFoundException::class$ = NULL;
    jmethodID *ClassNotFoundException::mids$ = NULL;
    bool ClassNotFoundException::live$ = false;

    jclass ClassNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_getCause_281710d8d48eb133] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getException_281710d8d48eb133] = env->getMethodID(cls, "getException", "()Ljava/lang/Throwable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ClassNotFoundException::ClassNotFoundException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}

    ::java::lang::Throwable ClassNotFoundException::getCause() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getCause_281710d8d48eb133]));
    }

    ::java::lang::Throwable ClassNotFoundException::getException() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getException_281710d8d48eb133]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args);
    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self);
    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data);
    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data);
    static PyGetSetDef t_ClassNotFoundException__fields_[] = {
      DECLARE_GET_FIELD(t_ClassNotFoundException, cause),
      DECLARE_GET_FIELD(t_ClassNotFoundException, exception),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassNotFoundException__methods_[] = {
      DECLARE_METHOD(t_ClassNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, getCause, METH_VARARGS),
      DECLARE_METHOD(t_ClassNotFoundException, getException, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassNotFoundException)[] = {
      { Py_tp_methods, t_ClassNotFoundException__methods_ },
      { Py_tp_init, (void *) t_ClassNotFoundException_init_ },
      { Py_tp_getset, t_ClassNotFoundException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassNotFoundException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(ClassNotFoundException, t_ClassNotFoundException, ClassNotFoundException);

    void t_ClassNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassNotFoundException), &PY_TYPE_DEF(ClassNotFoundException), module, "ClassNotFoundException", 0);
    }

    void t_ClassNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "class_", make_descriptor(ClassNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "wrapfn_", make_descriptor(t_ClassNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassNotFoundException::initializeClass, 1)))
        return NULL;
      return t_ClassNotFoundException::wrap_Object(ClassNotFoundException(((t_ClassNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ClassNotFoundException object((jobject) NULL);

          INT_CALL(object = ClassNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ClassNotFoundException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ClassNotFoundException(a0, a1));
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

    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args)
    {
      ::java::lang::Throwable result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCause());
        return ::java::lang::t_Throwable::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ClassNotFoundException), (PyObject *) self, "getCause", args, 2);
    }

    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self)
    {
      ::java::lang::Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(result);
    }

    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }

    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(value);
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityException::SecurityException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
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
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *DoubleSummaryStatistics::class$ = NULL;
    jmethodID *DoubleSummaryStatistics::mids$ = NULL;
    bool DoubleSummaryStatistics::live$ = false;

    jclass DoubleSummaryStatistics::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/DoubleSummaryStatistics");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_098c7cc63aadde07] = env->getMethodID(cls, "<init>", "(JDDD)V");
        mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");
        mids$[mid_combine_fbdc5ba466050c3e] = env->getMethodID(cls, "combine", "(Ljava/util/DoubleSummaryStatistics;)V");
        mids$[mid_getAverage_dff5885c2c873297] = env->getMethodID(cls, "getAverage", "()D");
        mids$[mid_getCount_492808a339bfa35f] = env->getMethodID(cls, "getCount", "()J");
        mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
        mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
        mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DoubleSummaryStatistics::DoubleSummaryStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    DoubleSummaryStatistics::DoubleSummaryStatistics(jlong a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_098c7cc63aadde07, a0, a1, a2, a3)) {}

    void DoubleSummaryStatistics::accept(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
    }

    void DoubleSummaryStatistics::combine(const DoubleSummaryStatistics & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_combine_fbdc5ba466050c3e], a0.this$);
    }

    jdouble DoubleSummaryStatistics::getAverage() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getAverage_dff5885c2c873297]);
    }

    jlong DoubleSummaryStatistics::getCount() const
    {
      return env->callLongMethod(this$, mids$[mid_getCount_492808a339bfa35f]);
    }

    jdouble DoubleSummaryStatistics::getMax() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
    }

    jdouble DoubleSummaryStatistics::getMin() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
    }

    jdouble DoubleSummaryStatistics::getSum() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
    }

    ::java::lang::String DoubleSummaryStatistics::toString() const
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
    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg);
    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self);
    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args);
    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data);
    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data);
    static PyGetSetDef t_DoubleSummaryStatistics__fields_[] = {
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, average),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, count),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, max),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, min),
      DECLARE_GET_FIELD(t_DoubleSummaryStatistics, sum),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DoubleSummaryStatistics__methods_[] = {
      DECLARE_METHOD(t_DoubleSummaryStatistics, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, accept, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, combine, METH_O),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getAverage, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getCount, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMax, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getMin, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, getSum, METH_NOARGS),
      DECLARE_METHOD(t_DoubleSummaryStatistics, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DoubleSummaryStatistics)[] = {
      { Py_tp_methods, t_DoubleSummaryStatistics__methods_ },
      { Py_tp_init, (void *) t_DoubleSummaryStatistics_init_ },
      { Py_tp_getset, t_DoubleSummaryStatistics__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DoubleSummaryStatistics)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DoubleSummaryStatistics, t_DoubleSummaryStatistics, DoubleSummaryStatistics);

    void t_DoubleSummaryStatistics::install(PyObject *module)
    {
      installType(&PY_TYPE(DoubleSummaryStatistics), &PY_TYPE_DEF(DoubleSummaryStatistics), module, "DoubleSummaryStatistics", 0);
    }

    void t_DoubleSummaryStatistics::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "class_", make_descriptor(DoubleSummaryStatistics::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "wrapfn_", make_descriptor(t_DoubleSummaryStatistics::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleSummaryStatistics), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DoubleSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DoubleSummaryStatistics::initializeClass, 1)))
        return NULL;
      return t_DoubleSummaryStatistics::wrap_Object(DoubleSummaryStatistics(((t_DoubleSummaryStatistics *) arg)->object.this$));
    }
    static PyObject *t_DoubleSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DoubleSummaryStatistics::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DoubleSummaryStatistics_init_(t_DoubleSummaryStatistics *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DoubleSummaryStatistics object((jobject) NULL);

          INT_CALL(object = DoubleSummaryStatistics());
          self->object = object;
          break;
        }
       case 4:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          DoubleSummaryStatistics object((jobject) NULL);

          if (!parseArgs(args, "JDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = DoubleSummaryStatistics(a0, a1, a2, a3));
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

    static PyObject *t_DoubleSummaryStatistics_accept(t_DoubleSummaryStatistics *self, PyObject *arg)
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

    static PyObject *t_DoubleSummaryStatistics_combine(t_DoubleSummaryStatistics *self, PyObject *arg)
    {
      DoubleSummaryStatistics a0((jobject) NULL);

      if (!parseArg(arg, "k", DoubleSummaryStatistics::initializeClass, &a0))
      {
        OBJ_CALL(self->object.combine(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "combine", arg);
      return NULL;
    }

    static PyObject *t_DoubleSummaryStatistics_getAverage(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getAverage());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getCount(t_DoubleSummaryStatistics *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMax(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMax());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getMin(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getMin());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_getSum(t_DoubleSummaryStatistics *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getSum());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_DoubleSummaryStatistics_toString(t_DoubleSummaryStatistics *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(DoubleSummaryStatistics), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_DoubleSummaryStatistics_get__average(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getAverage());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__count(t_DoubleSummaryStatistics *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getCount());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__max(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMax());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__min(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getMin());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_DoubleSummaryStatistics_get__sum(t_DoubleSummaryStatistics *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getSum());
      return PyFloat_FromDouble((double) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
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
        mids$[mid_forEachRemaining_6444b3e27af46e9d] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_tryAdvance_a1b906adcf459018] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z");
        mids$[mid_trySplit_801fcadd4b3f4dbb] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfDouble;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_6444b3e27af46e9d], a0.this$);
    }

    jboolean Spliterator$OfDouble::tryAdvance(const ::java::util::function::DoubleConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_a1b906adcf459018], a0.this$);
    }

    Spliterator$OfDouble Spliterator$OfDouble::trySplit() const
    {
      return Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_trySplit_801fcadd4b3f4dbb]));
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
#include "java/text/FieldPosition.h"
#include "java/text/Format$Field.h"
#include "java/lang/String.h"
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
        mids$[mid_init$_4dcd4db55447f521] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;)V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_0e5e8e3c6fdb72c5] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;I)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBeginIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getField_570ce0828f81a2c1] = env->getMethodID(cls, "getField", "()I");
        mids$[mid_getFieldAttribute_ed7f324d12ac0e45] = env->getMethodID(cls, "getFieldAttribute", "()Ljava/text/Format$Field;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setBeginIndex_99803b0791f320ff] = env->getMethodID(cls, "setBeginIndex", "(I)V");
        mids$[mid_setEndIndex_99803b0791f320ff] = env->getMethodID(cls, "setEndIndex", "(I)V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4dcd4db55447f521, a0.this$)) {}

    FieldPosition::FieldPosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e5e8e3c6fdb72c5, a0.this$, a1)) {}

    jboolean FieldPosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint FieldPosition::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_570ce0828f81a2c1]);
    }

    jint FieldPosition::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_570ce0828f81a2c1]);
    }

    jint FieldPosition::getField() const
    {
      return env->callIntMethod(this$, mids$[mid_getField_570ce0828f81a2c1]);
    }

    ::java::text::Format$Field FieldPosition::getFieldAttribute() const
    {
      return ::java::text::Format$Field(env->callObjectMethod(this$, mids$[mid_getFieldAttribute_ed7f324d12ac0e45]));
    }

    jint FieldPosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    void FieldPosition::setBeginIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setBeginIndex_99803b0791f320ff], a0);
    }

    void FieldPosition::setEndIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setEndIndex_99803b0791f320ff], a0);
    }

    ::java::lang::String FieldPosition::toString() const
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
        mids$[mid_forEachRemaining_2990946c992aafed] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");
        mids$[mid_tryAdvance_65c7d273e80d497a] = env->getMethodID(cls, "tryAdvance", "(Ljava/lang/Object;)Z");
        mids$[mid_trySplit_f73d1b28f655f500] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfPrimitive;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfPrimitive::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_2990946c992aafed], a0.this$);
    }

    jboolean Spliterator$OfPrimitive::tryAdvance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_65c7d273e80d497a], a0.this$);
    }

    Spliterator$OfPrimitive Spliterator$OfPrimitive::trySplit() const
    {
      return Spliterator$OfPrimitive(env->callObjectMethod(this$, mids$[mid_trySplit_f73d1b28f655f500]));
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
        mids$[mid_forEachRemaining_2990946c992aafed] = env->getMethodID(cls, "forEachRemaining", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator::forEachRemaining(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_2990946c992aafed], a0.this$);
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_998e65c64767e7ed] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_activeCount_570ce0828f81a2c1] = env->getMethodID(cls, "activeCount", "()I");
        mids$[mid_activeGroupCount_570ce0828f81a2c1] = env->getMethodID(cls, "activeGroupCount", "()I");
        mids$[mid_allowThreadSuspension_29387014c78e7f59] = env->getMethodID(cls, "allowThreadSuspension", "(Z)Z");
        mids$[mid_checkAccess_0fa09c18fee449d5] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_destroy_0fa09c18fee449d5] = env->getMethodID(cls, "destroy", "()V");
        mids$[mid_enumerate_937414aa547b433f] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_enumerate_d76130d7e84940d1] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;)I");
        mids$[mid_enumerate_1260107c6b19c381] = env->getMethodID(cls, "enumerate", "([Ljava/lang/Thread;Z)I");
        mids$[mid_enumerate_146ec43fb352608c] = env->getMethodID(cls, "enumerate", "([Ljava/lang/ThreadGroup;Z)I");
        mids$[mid_getMaxPriority_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxPriority", "()I");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_b3b4aaae6d375f3d] = env->getMethodID(cls, "getParent", "()Ljava/lang/ThreadGroup;");
        mids$[mid_interrupt_0fa09c18fee449d5] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_isDaemon_b108b35ef48e27bd] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isDestroyed_b108b35ef48e27bd] = env->getMethodID(cls, "isDestroyed", "()Z");
        mids$[mid_list_0fa09c18fee449d5] = env->getMethodID(cls, "list", "()V");
        mids$[mid_parentOf_34ea0656610dcd49] = env->getMethodID(cls, "parentOf", "(Ljava/lang/ThreadGroup;)Z");
        mids$[mid_resume_0fa09c18fee449d5] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_setDaemon_bd04c9335fb9e4cf] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setMaxPriority_99803b0791f320ff] = env->getMethodID(cls, "setMaxPriority", "(I)V");
        mids$[mid_stop_0fa09c18fee449d5] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_0fa09c18fee449d5] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_uncaughtException_14ba6d7e16e50ef1] = env->getMethodID(cls, "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ThreadGroup::ThreadGroup(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    ThreadGroup::ThreadGroup(const ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_998e65c64767e7ed, a0.this$, a1.this$)) {}

    jint ThreadGroup::activeCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeCount_570ce0828f81a2c1]);
    }

    jint ThreadGroup::activeGroupCount() const
    {
      return env->callIntMethod(this$, mids$[mid_activeGroupCount_570ce0828f81a2c1]);
    }

    jboolean ThreadGroup::allowThreadSuspension(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_allowThreadSuspension_29387014c78e7f59], a0);
    }

    void ThreadGroup::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_0fa09c18fee449d5]);
    }

    void ThreadGroup::destroy() const
    {
      env->callVoidMethod(this$, mids$[mid_destroy_0fa09c18fee449d5]);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_937414aa547b433f], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_d76130d7e84940d1], a0.this$);
    }

    jint ThreadGroup::enumerate(const JArray< ::java::lang::Thread > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_1260107c6b19c381], a0.this$, a1);
    }

    jint ThreadGroup::enumerate(const JArray< ThreadGroup > & a0, jboolean a1) const
    {
      return env->callIntMethod(this$, mids$[mid_enumerate_146ec43fb352608c], a0.this$, a1);
    }

    jint ThreadGroup::getMaxPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaxPriority_570ce0828f81a2c1]);
    }

    ::java::lang::String ThreadGroup::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    ThreadGroup ThreadGroup::getParent() const
    {
      return ThreadGroup(env->callObjectMethod(this$, mids$[mid_getParent_b3b4aaae6d375f3d]));
    }

    void ThreadGroup::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_0fa09c18fee449d5]);
    }

    jboolean ThreadGroup::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_b108b35ef48e27bd]);
    }

    jboolean ThreadGroup::isDestroyed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDestroyed_b108b35ef48e27bd]);
    }

    void ThreadGroup::list() const
    {
      env->callVoidMethod(this$, mids$[mid_list_0fa09c18fee449d5]);
    }

    jboolean ThreadGroup::parentOf(const ThreadGroup & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_parentOf_34ea0656610dcd49], a0.this$);
    }

    void ThreadGroup::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_0fa09c18fee449d5]);
    }

    void ThreadGroup::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_bd04c9335fb9e4cf], a0);
    }

    void ThreadGroup::setMaxPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaxPriority_99803b0791f320ff], a0);
    }

    void ThreadGroup::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_0fa09c18fee449d5]);
    }

    void ThreadGroup::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_0fa09c18fee449d5]);
    }

    ::java::lang::String ThreadGroup::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void ThreadGroup::uncaughtException(const ::java::lang::Thread & a0, const ::java::lang::Throwable & a1) const
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
        mids$[mid_boot_1488df134b0cb760] = env->getStaticMethodID(cls, "boot", "()Ljava/lang/ModuleLayer;");
        mids$[mid_empty_1488df134b0cb760] = env->getStaticMethodID(cls, "empty", "()Ljava/lang/ModuleLayer;");
        mids$[mid_findLoader_b64713dc34e37a10] = env->getMethodID(cls, "findLoader", "(Ljava/lang/String;)Ljava/lang/ClassLoader;");
        mids$[mid_findModule_440b7941ab9a8af2] = env->getMethodID(cls, "findModule", "(Ljava/lang/String;)Ljava/util/Optional;");
        mids$[mid_modules_015730311a5bacdc] = env->getMethodID(cls, "modules", "()Ljava/util/Set;");
        mids$[mid_parents_2afa36052df4765d] = env->getMethodID(cls, "parents", "()Ljava/util/List;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer ModuleLayer::boot()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_boot_1488df134b0cb760]));
    }

    ModuleLayer ModuleLayer::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return ModuleLayer(env->callStaticObjectMethod(cls, mids$[mid_empty_1488df134b0cb760]));
    }

    ::java::lang::ClassLoader ModuleLayer::findLoader(const ::java::lang::String & a0) const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_findLoader_b64713dc34e37a10], a0.this$));
    }

    ::java::util::Optional ModuleLayer::findModule(const ::java::lang::String & a0) const
    {
      return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findModule_440b7941ab9a8af2], a0.this$));
    }

    ::java::util::Set ModuleLayer::modules() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_modules_015730311a5bacdc]));
    }

    ::java::util::List ModuleLayer::parents() const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parents_2afa36052df4765d]));
    }

    ::java::lang::String ModuleLayer::toString() const
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
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_bd04c9335fb9e4cf] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_99803b0791f320ff] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_99803b0791f320ff] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_17db3a65980d3441] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFloat_f63147a1690942cc] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_99803b0791f320ff] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_3a8e7649f31fdb20] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeShort_99803b0791f320ff] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void DataOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void DataOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void DataOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    void DataOutput::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_bd04c9335fb9e4cf], a0);
    }

    void DataOutput::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_99803b0791f320ff], a0);
    }

    void DataOutput::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_d0bc48d5b00dc40c], a0.this$);
    }

    void DataOutput::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_99803b0791f320ff], a0);
    }

    void DataOutput::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_d0bc48d5b00dc40c], a0.this$);
    }

    void DataOutput::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_17db3a65980d3441], a0);
    }

    void DataOutput::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_f63147a1690942cc], a0);
    }

    void DataOutput::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_99803b0791f320ff], a0);
    }

    void DataOutput::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_3a8e7649f31fdb20], a0);
    }

    void DataOutput::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_99803b0791f320ff], a0);
    }

    void DataOutput::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_d0bc48d5b00dc40c], a0.this$);
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
#include "java/security/Permission.h"
#include "java/io/Serializable.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_checkGuard_2990946c992aafed] = env->getMethodID(cls, "checkGuard", "(Ljava/lang/Object;)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_11b109bd155ca898] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_fd5914bb7b2ed7bc] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Permission::Permission(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    void Permission::checkGuard(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkGuard_2990946c992aafed], a0.this$);
    }

    jboolean Permission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String Permission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_11b109bd155ca898]));
    }

    ::java::lang::String Permission::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jint Permission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean Permission::implies(const Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_fd5914bb7b2ed7bc], a0.this$);
    }

    ::java::lang::String Permission::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    SerializablePermission::SerializablePermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::BasicPermission(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}
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
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_current_7818f5b58320cd1f] = env->getMethodID(cls, "current", "()C");
        mids$[mid_first_7818f5b58320cd1f] = env->getMethodID(cls, "first", "()C");
        mids$[mid_getBeginIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_last_7818f5b58320cd1f] = env->getMethodID(cls, "last", "()C");
        mids$[mid_next_7818f5b58320cd1f] = env->getMethodID(cls, "next", "()C");
        mids$[mid_previous_7818f5b58320cd1f] = env->getMethodID(cls, "previous", "()C");
        mids$[mid_setIndex_9d4c2604195fbadb] = env->getMethodID(cls, "setIndex", "(I)C");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DONE = env->getStaticCharField(cls, "DONE");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object CharacterIterator::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jchar CharacterIterator::current() const
    {
      return env->callCharMethod(this$, mids$[mid_current_7818f5b58320cd1f]);
    }

    jchar CharacterIterator::first() const
    {
      return env->callCharMethod(this$, mids$[mid_first_7818f5b58320cd1f]);
    }

    jint CharacterIterator::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_570ce0828f81a2c1]);
    }

    jint CharacterIterator::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_570ce0828f81a2c1]);
    }

    jint CharacterIterator::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_570ce0828f81a2c1]);
    }

    jchar CharacterIterator::last() const
    {
      return env->callCharMethod(this$, mids$[mid_last_7818f5b58320cd1f]);
    }

    jchar CharacterIterator::next() const
    {
      return env->callCharMethod(this$, mids$[mid_next_7818f5b58320cd1f]);
    }

    jchar CharacterIterator::previous() const
    {
      return env->callCharMethod(this$, mids$[mid_previous_7818f5b58320cd1f]);
    }

    jchar CharacterIterator::setIndex(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_setIndex_9d4c2604195fbadb], a0);
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getActions_11b109bd155ca898] = env->getMethodID(cls, "getActions", "()Ljava/lang/String;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_implies_fd5914bb7b2ed7bc] = env->getMethodID(cls, "implies", "(Ljava/security/Permission;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    BasicPermission::BasicPermission(const ::java::lang::String & a0) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    BasicPermission::BasicPermission(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::security::Permission(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

    jboolean BasicPermission::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String BasicPermission::getActions() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActions_11b109bd155ca898]));
    }

    jint BasicPermission::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean BasicPermission::implies(const ::java::security::Permission & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_implies_fd5914bb7b2ed7bc], a0.this$);
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
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getSeverity_570ce0828f81a2c1] = env->getMethodID(cls, "getSeverity", "()I");
        mids$[mid_valueOf_12e089f7e7891274] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/System$Logger$Level;");
        mids$[mid_values_b26358edb8b776f0] = env->getStaticMethodID(cls, "values", "()[Ljava/lang/System$Logger$Level;");

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
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jint System$Logger$Level::getSeverity() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeverity_570ce0828f81a2c1]);
    }

    System$Logger$Level System$Logger$Level::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return System$Logger$Level(env->callStaticObjectMethod(cls, mids$[mid_valueOf_12e089f7e7891274], a0.this$));
    }

    JArray< System$Logger$Level > System$Logger$Level::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< System$Logger$Level >(env->callStaticObjectMethod(cls, mids$[mid_values_b26358edb8b776f0]));
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
#include "java/lang/Thread.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread$State.h"
#include "java/util/Map.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Thread.h"
#include "java/lang/Class.h"
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
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3a5469c7eeb87864] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;)V");
        mids$[mid_init$_998e65c64767e7ed] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V");
        mids$[mid_init$_d4b6d9dda8ded10d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_f90c747623080421] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V");
        mids$[mid_init$_11e2bb7560524a96] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V");
        mids$[mid_init$_24778f7a2f9b35cb] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V");
        mids$[mid_init$_e0297c15d739861e] = env->getMethodID(cls, "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V");
        mids$[mid_activeCount_570ce0828f81a2c1] = env->getStaticMethodID(cls, "activeCount", "()I");
        mids$[mid_checkAccess_0fa09c18fee449d5] = env->getMethodID(cls, "checkAccess", "()V");
        mids$[mid_countStackFrames_570ce0828f81a2c1] = env->getMethodID(cls, "countStackFrames", "()I");
        mids$[mid_currentThread_6dd10af16a0cee26] = env->getStaticMethodID(cls, "currentThread", "()Ljava/lang/Thread;");
        mids$[mid_dumpStack_0fa09c18fee449d5] = env->getStaticMethodID(cls, "dumpStack", "()V");
        mids$[mid_enumerate_937414aa547b433f] = env->getStaticMethodID(cls, "enumerate", "([Ljava/lang/Thread;)I");
        mids$[mid_getAllStackTraces_6f5a75ccd8c04465] = env->getStaticMethodID(cls, "getAllStackTraces", "()Ljava/util/Map;");
        mids$[mid_getContextClassLoader_da1c487fbe6ab900] = env->getMethodID(cls, "getContextClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getDefaultUncaughtExceptionHandler_74370c614d15da80] = env->getStaticMethodID(cls, "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_getId_492808a339bfa35f] = env->getMethodID(cls, "getId", "()J");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPriority_570ce0828f81a2c1] = env->getMethodID(cls, "getPriority", "()I");
        mids$[mid_getStackTrace_3450848eb58bb499] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getState_fe441563b46730a9] = env->getMethodID(cls, "getState", "()Ljava/lang/Thread$State;");
        mids$[mid_getThreadGroup_b3b4aaae6d375f3d] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getUncaughtExceptionHandler_74370c614d15da80] = env->getMethodID(cls, "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;");
        mids$[mid_holdsLock_65c7d273e80d497a] = env->getStaticMethodID(cls, "holdsLock", "(Ljava/lang/Object;)Z");
        mids$[mid_interrupt_0fa09c18fee449d5] = env->getMethodID(cls, "interrupt", "()V");
        mids$[mid_interrupted_b108b35ef48e27bd] = env->getStaticMethodID(cls, "interrupted", "()Z");
        mids$[mid_isAlive_b108b35ef48e27bd] = env->getMethodID(cls, "isAlive", "()Z");
        mids$[mid_isDaemon_b108b35ef48e27bd] = env->getMethodID(cls, "isDaemon", "()Z");
        mids$[mid_isInterrupted_b108b35ef48e27bd] = env->getMethodID(cls, "isInterrupted", "()Z");
        mids$[mid_join_0fa09c18fee449d5] = env->getMethodID(cls, "join", "()V");
        mids$[mid_join_3a8e7649f31fdb20] = env->getMethodID(cls, "join", "(J)V");
        mids$[mid_join_bc47df22dc246221] = env->getMethodID(cls, "join", "(JI)V");
        mids$[mid_onSpinWait_0fa09c18fee449d5] = env->getStaticMethodID(cls, "onSpinWait", "()V");
        mids$[mid_resume_0fa09c18fee449d5] = env->getMethodID(cls, "resume", "()V");
        mids$[mid_run_0fa09c18fee449d5] = env->getMethodID(cls, "run", "()V");
        mids$[mid_setContextClassLoader_5b2cbf1cefa98954] = env->getMethodID(cls, "setContextClassLoader", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_setDaemon_bd04c9335fb9e4cf] = env->getMethodID(cls, "setDaemon", "(Z)V");
        mids$[mid_setDefaultUncaughtExceptionHandler_77e41a8ba7cd5ddd] = env->getStaticMethodID(cls, "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_setName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
        mids$[mid_setPriority_99803b0791f320ff] = env->getMethodID(cls, "setPriority", "(I)V");
        mids$[mid_setUncaughtExceptionHandler_77e41a8ba7cd5ddd] = env->getMethodID(cls, "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V");
        mids$[mid_sleep_3a8e7649f31fdb20] = env->getStaticMethodID(cls, "sleep", "(J)V");
        mids$[mid_sleep_bc47df22dc246221] = env->getStaticMethodID(cls, "sleep", "(JI)V");
        mids$[mid_start_0fa09c18fee449d5] = env->getMethodID(cls, "start", "()V");
        mids$[mid_stop_0fa09c18fee449d5] = env->getMethodID(cls, "stop", "()V");
        mids$[mid_suspend_0fa09c18fee449d5] = env->getMethodID(cls, "suspend", "()V");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_yield_0fa09c18fee449d5] = env->getStaticMethodID(cls, "yield", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_PRIORITY = env->getStaticIntField(cls, "MAX_PRIORITY");
        MIN_PRIORITY = env->getStaticIntField(cls, "MIN_PRIORITY");
        NORM_PRIORITY = env->getStaticIntField(cls, "NORM_PRIORITY");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Thread::Thread() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    Thread::Thread(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a5469c7eeb87864, a0.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_998e65c64767e7ed, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::Runnable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4b6d9dda8ded10d, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f90c747623080421, a0.this$, a1.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11e2bb7560524a96, a0.this$, a1.this$, a2.this$)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24778f7a2f9b35cb, a0.this$, a1.this$, a2.this$, a3)) {}

    Thread::Thread(const ::java::lang::ThreadGroup & a0, const ::java::lang::Runnable & a1, const ::java::lang::String & a2, jlong a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0297c15d739861e, a0.this$, a1.this$, a2.this$, a3, a4)) {}

    jint Thread::activeCount()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_activeCount_570ce0828f81a2c1]);
    }

    void Thread::checkAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_0fa09c18fee449d5]);
    }

    jint Thread::countStackFrames() const
    {
      return env->callIntMethod(this$, mids$[mid_countStackFrames_570ce0828f81a2c1]);
    }

    Thread Thread::currentThread()
    {
      jclass cls = env->getClass(initializeClass);
      return Thread(env->callStaticObjectMethod(cls, mids$[mid_currentThread_6dd10af16a0cee26]));
    }

    void Thread::dumpStack()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_dumpStack_0fa09c18fee449d5]);
    }

    jint Thread::enumerate(const JArray< Thread > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_enumerate_937414aa547b433f], a0.this$);
    }

    ::java::util::Map Thread::getAllStackTraces()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getAllStackTraces_6f5a75ccd8c04465]));
    }

    ::java::lang::ClassLoader Thread::getContextClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getContextClassLoader_da1c487fbe6ab900]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getDefaultUncaughtExceptionHandler()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callStaticObjectMethod(cls, mids$[mid_getDefaultUncaughtExceptionHandler_74370c614d15da80]));
    }

    jlong Thread::getId() const
    {
      return env->callLongMethod(this$, mids$[mid_getId_492808a339bfa35f]);
    }

    ::java::lang::String Thread::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    jint Thread::getPriority() const
    {
      return env->callIntMethod(this$, mids$[mid_getPriority_570ce0828f81a2c1]);
    }

    JArray< ::java::lang::StackTraceElement > Thread::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_3450848eb58bb499]));
    }

    ::java::lang::Thread$State Thread::getState() const
    {
      return ::java::lang::Thread$State(env->callObjectMethod(this$, mids$[mid_getState_fe441563b46730a9]));
    }

    ::java::lang::ThreadGroup Thread::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_b3b4aaae6d375f3d]));
    }

    ::java::lang::Thread$UncaughtExceptionHandler Thread::getUncaughtExceptionHandler() const
    {
      return ::java::lang::Thread$UncaughtExceptionHandler(env->callObjectMethod(this$, mids$[mid_getUncaughtExceptionHandler_74370c614d15da80]));
    }

    jboolean Thread::holdsLock(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_holdsLock_65c7d273e80d497a], a0.this$);
    }

    void Thread::interrupt() const
    {
      env->callVoidMethod(this$, mids$[mid_interrupt_0fa09c18fee449d5]);
    }

    jboolean Thread::interrupted()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_interrupted_b108b35ef48e27bd]);
    }

    jboolean Thread::isAlive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAlive_b108b35ef48e27bd]);
    }

    jboolean Thread::isDaemon() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDaemon_b108b35ef48e27bd]);
    }

    jboolean Thread::isInterrupted() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterrupted_b108b35ef48e27bd]);
    }

    void Thread::join() const
    {
      env->callVoidMethod(this$, mids$[mid_join_0fa09c18fee449d5]);
    }

    void Thread::join(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_join_3a8e7649f31fdb20], a0);
    }

    void Thread::join(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_join_bc47df22dc246221], a0, a1);
    }

    void Thread::onSpinWait()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_onSpinWait_0fa09c18fee449d5]);
    }

    void Thread::resume() const
    {
      env->callVoidMethod(this$, mids$[mid_resume_0fa09c18fee449d5]);
    }

    void Thread::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_0fa09c18fee449d5]);
    }

    void Thread::setContextClassLoader(const ::java::lang::ClassLoader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setContextClassLoader_5b2cbf1cefa98954], a0.this$);
    }

    void Thread::setDaemon(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDaemon_bd04c9335fb9e4cf], a0);
    }

    void Thread::setDefaultUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefaultUncaughtExceptionHandler_77e41a8ba7cd5ddd], a0.this$);
    }

    void Thread::setName(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setName_d0bc48d5b00dc40c], a0.this$);
    }

    void Thread::setPriority(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPriority_99803b0791f320ff], a0);
    }

    void Thread::setUncaughtExceptionHandler(const ::java::lang::Thread$UncaughtExceptionHandler & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setUncaughtExceptionHandler_77e41a8ba7cd5ddd], a0.this$);
    }

    void Thread::sleep(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_3a8e7649f31fdb20], a0);
    }

    void Thread::sleep(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sleep_bc47df22dc246221], a0, a1);
    }

    void Thread::start() const
    {
      env->callVoidMethod(this$, mids$[mid_start_0fa09c18fee449d5]);
    }

    void Thread::stop() const
    {
      env->callVoidMethod(this$, mids$[mid_stop_0fa09c18fee449d5]);
    }

    void Thread::suspend() const
    {
      env->callVoidMethod(this$, mids$[mid_suspend_0fa09c18fee449d5]);
    }

    ::java::lang::String Thread::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    void Thread::yield()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_yield_0fa09c18fee449d5]);
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
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/io/Serializable.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
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
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_readResolve_4d26fd885228c716] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

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
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint AttributedCharacterIterator$Attribute::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    ::java::lang::String AttributedCharacterIterator$Attribute::toString() const
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
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}
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
