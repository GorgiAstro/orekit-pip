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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_6ba01303bcce0307] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_7c1037ab599ac362] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_221e8e85cb385209] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_221e8e85cb385209] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_00b99a423cfc29b8] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_e9b6f8dd03d71e12] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_00b99a423cfc29b8] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_e9b6f8dd03d71e12] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5f964797772d10ff] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_e9b6f8dd03d71e12] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_5c8006f3f1f9c96f] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_0640e6acf969ed28] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Hashtable::Hashtable() : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Hashtable::Hashtable(jint a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    Hashtable::Hashtable(const ::java::util::Map & a0) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_6ba01303bcce0307, a0.this$)) {}

    Hashtable::Hashtable(jint a0, jfloat a1) : ::java::util::Dictionary(env->newObject(initializeClass, &mids$, mid_init$_7c1037ab599ac362, a0, a1)) {}

    void Hashtable::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object Hashtable::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean Hashtable::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean Hashtable::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_221e8e85cb385209], a0.this$);
    }

    jboolean Hashtable::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_221e8e85cb385209], a0.this$);
    }

    ::java::util::Enumeration Hashtable::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_00b99a423cfc29b8]));
    }

    ::java::util::Set Hashtable::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    jboolean Hashtable::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Hashtable::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object Hashtable::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jint Hashtable::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Hashtable::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Set Hashtable::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    ::java::util::Enumeration Hashtable::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_00b99a423cfc29b8]));
    }

    ::java::lang::Object Hashtable::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    void Hashtable::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
    }

    ::java::lang::Object Hashtable::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::Object Hashtable::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jboolean Hashtable::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_5f964797772d10ff], a0.this$, a1.this$);
    }

    ::java::lang::Object Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jboolean Hashtable::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_5c8006f3f1f9c96f], a0.this$, a1.this$, a2.this$);
    }

    jint Hashtable::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::lang::String Hashtable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::util::Collection Hashtable::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
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
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
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
        mids$[mid_empty_d0ccac9b4c6bdd55] = env->getStaticMethodID(cls, "empty", "()Ljava/util/Optional;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_e661fe3ba2fafb22] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_isPresent_89b302893bdbe1f1] = env->getMethodID(cls, "isPresent", "()Z");
        mids$[mid_of_a5279ad90f7422e8] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_ofNullable_a5279ad90f7422e8] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/Optional;");
        mids$[mid_or_f655b6b80eaffe76] = env->getMethodID(cls, "or", "(Ljava/util/function/Supplier;)Ljava/util/Optional;");
        mids$[mid_orElse_65d69db95c5eb156] = env->getMethodID(cls, "orElse", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_orElseGet_f204f9de7bbbfc88] = env->getMethodID(cls, "orElseGet", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_orElseThrow_e661fe3ba2fafb22] = env->getMethodID(cls, "orElseThrow", "()Ljava/lang/Object;");
        mids$[mid_orElseThrow_f204f9de7bbbfc88] = env->getMethodID(cls, "orElseThrow", "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
        mids$[mid_stream_d7cce92225eb0db2] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Optional Optional::empty()
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_empty_d0ccac9b4c6bdd55]));
    }

    jboolean Optional::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Optional::get$() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_e661fe3ba2fafb22]));
    }

    jint Optional::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Optional::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    jboolean Optional::isPresent() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPresent_89b302893bdbe1f1]);
    }

    Optional Optional::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_of_a5279ad90f7422e8], a0.this$));
    }

    Optional Optional::ofNullable(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Optional(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_a5279ad90f7422e8], a0.this$));
    }

    Optional Optional::or$(const ::java::util::function::Supplier & a0) const
    {
      return Optional(env->callObjectMethod(this$, mids$[mid_or_f655b6b80eaffe76], a0.this$));
    }

    ::java::lang::Object Optional::orElse(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElse_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object Optional::orElseGet(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseGet_f204f9de7bbbfc88], a0.this$));
    }

    ::java::lang::Object Optional::orElseThrow() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Optional::orElseThrow(const ::java::util::function::Supplier & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_orElseThrow_f204f9de7bbbfc88], a0.this$));
    }

    ::java::util::stream::Stream Optional::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_d7cce92225eb0db2]));
    }

    ::java::lang::String Optional::toString() const
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
#include "java/lang/System$Logger.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System$Logger::class$ = NULL;
    jmethodID *System$Logger::mids$ = NULL;
    bool System$Logger::live$ = false;

    jclass System$Logger::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System$Logger");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_isLoggable_d111cb4e3b0e7ab6] = env->getMethodID(cls, "isLoggable", "(Ljava/lang/System$Logger$Level;)Z");
        mids$[mid_log_53a3c18e10b100e3] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V");
        mids$[mid_log_036ea930a288ea07] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V");
        mids$[mid_log_7006f3f1c76dd40c] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V");
        mids$[mid_log_b650d0ff408116b4] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_151b5c30d7c7230d] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_log_a726c9aef73ecc5b] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V");
        mids$[mid_log_c55da14b22e8a35e] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_d89730eb21b326b8] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    jboolean System$Logger::isLoggable(const ::java::lang::System$Logger$Level & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLoggable_d111cb4e3b0e7ab6], a0.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_53a3c18e10b100e3], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_036ea930a288ea07], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_7006f3f1c76dd40c], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_b650d0ff408116b4], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_151b5c30d7c7230d], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_a726c9aef73ecc5b], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const JArray< ::java::lang::Object > & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_c55da14b22e8a35e], a0.this$, a1.this$, a2.this$, a3.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const ::java::lang::Throwable & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_d89730eb21b326b8], a0.this$, a1.this$, a2.this$, a3.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_getName(t_System$Logger *self);
    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg);
    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args);
    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data);
    static PyGetSetDef t_System$Logger__fields_[] = {
      DECLARE_GET_FIELD(t_System$Logger, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System$Logger__methods_[] = {
      DECLARE_METHOD(t_System$Logger, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, getName, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger, isLoggable, METH_O),
      DECLARE_METHOD(t_System$Logger, log, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System$Logger)[] = {
      { Py_tp_methods, t_System$Logger__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System$Logger__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System$Logger)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System$Logger, t_System$Logger, System$Logger);

    void t_System$Logger::install(PyObject *module)
    {
      installType(&PY_TYPE(System$Logger), &PY_TYPE_DEF(System$Logger), module, "System$Logger", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "Level", make_descriptor(&PY_TYPE_DEF(System$Logger$Level)));
    }

    void t_System$Logger::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "class_", make_descriptor(System$Logger::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "wrapfn_", make_descriptor(t_System$Logger::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System$Logger::initializeClass, 1)))
        return NULL;
      return t_System$Logger::wrap_Object(System$Logger(((t_System$Logger *) arg)->object.this$));
    }
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System$Logger::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System$Logger_getName(t_System$Logger *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg)
    {
      ::java::lang::System$Logger$Level a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_))
      {
        OBJ_CALL(result = self->object.isLoggable(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isLoggable", arg);
      return NULL;
    }

    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Ks", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "Ko", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);

          if (!parseArgs(args, "Ks[o", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "Ksk", ::java::lang::System$Logger$Level::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "KKk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          JArray< ::java::lang::Object > a3((jobject) NULL);

          if (!parseArgs(args, "Kks[o", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::Throwable a3((jobject) NULL);

          if (!parseArgs(args, "Kksk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "log", args);
      return NULL;
    }

    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Appendable.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
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
        mids$[mid_append_248283abf10276d1] = env->getMethodID(cls, "append", "(C)Ljava/lang/Appendable;");
        mids$[mid_append_dd8e8c1ababf14e4] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;");
        mids$[mid_append_938115f399e5c06f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Appendable Appendable::append(jchar a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_248283abf10276d1], a0));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_dd8e8c1ababf14e4], a0.this$));
    }

    Appendable Appendable::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Appendable(env->callObjectMethod(this$, mids$[mid_append_938115f399e5c06f], a0.this$, a1, a2));
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
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"
#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
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
        mids$[mid_append_f6082975e180feeb] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_b6ed8a5cb0a2770d] = env->getMethodID(cls, "append", "([C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_082c7f6bb830efdc] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_a7cced13fa82bd5d] = env->getMethodID(cls, "append", "(Z)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_71345092dac66fc6] = env->getMethodID(cls, "append", "(C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_8747da8391566d0d] = env->getMethodID(cls, "append", "(D)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_8b973b79711b9293] = env->getMethodID(cls, "append", "(F)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_04fbb7fbc0c29a33] = env->getMethodID(cls, "append", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_4770ffb3deac32bb] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_5b0f824771e71e37] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_4a647b089cf46e9b] = env->getMethodID(cls, "append", "(J)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_ffa2235235481015] = env->getMethodID(cls, "append", "([CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_append_3fcb810e736e3f72] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_appendCodePoint_04fbb7fbc0c29a33] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_capacity_412668abc8d889e9] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_4affd00329d5d4cf] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0092017e99012694] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0092017e99012694] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_5625cf3db98dadc1] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_delete_2a59179949309dc1] = env->getMethodID(cls, "delete", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_deleteCharAt_04fbb7fbc0c29a33] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_ensureCapacity_a3da1a935cb37f7b] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_def23ac70d649d11] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_a6602ba493f77974] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_90063871a1416a32] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_b5dc80095e63574e] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_7f01e17795c15b49] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_7a3e34ef662e274a] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_67ed86606ca743bf] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_8423a3f832409310] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_2a59179949309dc1] = env->getMethodID(cls, "insert", "(II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_6c5e46b13308829d] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_62ef126560196c10] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_492bac5354193d3d] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_3c9e9a75e8d5e058] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_insert_4c64de8b65936738] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_lastIndexOf_a6602ba493f77974] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_412668abc8d889e9] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_5625cf3db98dadc1] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_07eb9e870078998b] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;");
        mids$[mid_reverse_4300524965bcf09f] = env->getMethodID(cls, "reverse", "()Ljava/lang/AbstractStringBuilder;");
        mids$[mid_setCharAt_e8edb89802967796] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_a3da1a935cb37f7b] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_581d824833fd6c72] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_0f10d4a5e06f61c0] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_637f0334ff6ee92d] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_0640e6acf969ed28] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_f6082975e180feeb], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_b6ed8a5cb0a2770d], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::String & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_082c7f6bb830efdc], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jboolean a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_a7cced13fa82bd5d], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jchar a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_71345092dac66fc6], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jdouble a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_8747da8391566d0d], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jfloat a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_8b973b79711b9293], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_04fbb7fbc0c29a33], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_4770ffb3deac32bb], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::Object & a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_5b0f824771e71e37], a0.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::append(jlong a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_4a647b089cf46e9b], a0));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_ffa2235235481015], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_append_3fcb810e736e3f72], a0.this$, a1, a2));
    }

    AbstractStringBuilder AbstractStringBuilder::appendCodePoint(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_04fbb7fbc0c29a33], a0));
    }

    jint AbstractStringBuilder::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_412668abc8d889e9]);
    }

    jchar AbstractStringBuilder::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_4affd00329d5d4cf], a0);
    }

    jint AbstractStringBuilder::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0092017e99012694], a0);
    }

    jint AbstractStringBuilder::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0092017e99012694], a0);
    }

    jint AbstractStringBuilder::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_5625cf3db98dadc1], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::delete$(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_delete_2a59179949309dc1], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::deleteCharAt(jint a0) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_04fbb7fbc0c29a33], a0));
    }

    void AbstractStringBuilder::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_a3da1a935cb37f7b], a0);
    }

    void AbstractStringBuilder::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_def23ac70d649d11], a0, a1, a2.this$, a3);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_a6602ba493f77974], a0.this$);
    }

    jint AbstractStringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_90063871a1416a32], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_b5dc80095e63574e], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jboolean a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_7f01e17795c15b49], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jchar a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_7a3e34ef662e274a], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jdouble a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_67ed86606ca743bf], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jfloat a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_8423a3f832409310], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jint a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_2a59179949309dc1], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_6c5e46b13308829d], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_62ef126560196c10], a0, a1.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, jlong a1) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_492bac5354193d3d], a0, a1));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_3c9e9a75e8d5e058], a0, a1.this$, a2, a3));
    }

    AbstractStringBuilder AbstractStringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_insert_4c64de8b65936738], a0, a1.this$, a2, a3));
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_a6602ba493f77974], a0.this$);
    }

    jint AbstractStringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint AbstractStringBuilder::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_412668abc8d889e9]);
    }

    jint AbstractStringBuilder::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_5625cf3db98dadc1], a0, a1);
    }

    AbstractStringBuilder AbstractStringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_replace_07eb9e870078998b], a0, a1, a2.this$));
    }

    AbstractStringBuilder AbstractStringBuilder::reverse() const
    {
      return AbstractStringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_4300524965bcf09f]));
    }

    void AbstractStringBuilder::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_e8edb89802967796], a0, a1);
    }

    void AbstractStringBuilder::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_a3da1a935cb37f7b], a0);
    }

    ::java::lang::CharSequence AbstractStringBuilder::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_581d824833fd6c72], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String AbstractStringBuilder::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_637f0334ff6ee92d], a0, a1));
    }

    ::java::lang::String AbstractStringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void AbstractStringBuilder::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_0640e6acf969ed28]);
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
        mids$[mid_accept_634c8f81061b86c4] = env->getMethodID(cls, "accept", "(Ljava/io/File;Ljava/lang/String;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FilenameFilter::accept(const ::java::io::File & a0, const ::java::lang::String & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_634c8f81061b86c4], a0.this$, a1.this$);
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
        mids$[mid_charAt_4affd00329d5d4cf] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_compare_bafd4c74759892c3] = env->getStaticMethodID(cls, "compare", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I");
        mids$[mid_length_412668abc8d889e9] = env->getMethodID(cls, "length", "()I");
        mids$[mid_subSequence_581d824833fd6c72] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jchar CharSequence::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_4affd00329d5d4cf], a0);
    }

    jint CharSequence::compare(const CharSequence & a0, const CharSequence & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_bafd4c74759892c3], a0.this$, a1.this$);
    }

    jint CharSequence::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_412668abc8d889e9]);
    }

    CharSequence CharSequence::subSequence(jint a0, jint a1) const
    {
      return CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_581d824833fd6c72], a0, a1));
    }

    ::java::lang::String CharSequence::toString() const
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalAccessException::IllegalAccessException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    IllegalAccessException::IllegalAccessException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
        mids$[mid_addExports_768b07de71029a04] = env->getMethodID(cls, "addExports", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addOpens_768b07de71029a04] = env->getMethodID(cls, "addOpens", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addReads_1632c3231c2d2707] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addUses_3988c968161dbc37] = env->getMethodID(cls, "addUses", "(Ljava/lang/Class;)Ljava/lang/Module;");
        mids$[mid_canRead_f4ab9de57dd4131f] = env->getMethodID(cls, "canRead", "(Ljava/lang/Module;)Z");
        mids$[mid_canUse_0580a8a10aabb274] = env->getMethodID(cls, "canUse", "(Ljava/lang/Class;)Z");
        mids$[mid_getClassLoader_822bf82dfc5992ba] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getLayer_a9837dd004e81a19] = env->getMethodID(cls, "getLayer", "()Ljava/lang/ModuleLayer;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackages_2dfcbd371d62f4e1] = env->getMethodID(cls, "getPackages", "()Ljava/util/Set;");
        mids$[mid_getResourceAsStream_425095ef57e6735b] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_isExported_fd2162b8a05a22fe] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;)Z");
        mids$[mid_isExported_e455305b1fe72883] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_isNamed_89b302893bdbe1f1] = env->getMethodID(cls, "isNamed", "()Z");
        mids$[mid_isOpen_fd2162b8a05a22fe] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;)Z");
        mids$[mid_isOpen_e455305b1fe72883] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Module Module::addExports(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addExports_768b07de71029a04], a0.this$, a1.this$));
    }

    Module Module::addOpens(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addOpens_768b07de71029a04], a0.this$, a1.this$));
    }

    Module Module::addReads(const Module & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addReads_1632c3231c2d2707], a0.this$));
    }

    Module Module::addUses(const ::java::lang::Class & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addUses_3988c968161dbc37], a0.this$));
    }

    jboolean Module::canRead(const Module & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_f4ab9de57dd4131f], a0.this$);
    }

    jboolean Module::canUse(const ::java::lang::Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canUse_0580a8a10aabb274], a0.this$);
    }

    ::java::lang::ClassLoader Module::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_822bf82dfc5992ba]));
    }

    ::java::lang::ModuleLayer Module::getLayer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_getLayer_a9837dd004e81a19]));
    }

    ::java::lang::String Module::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    ::java::util::Set Module::getPackages() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getPackages_2dfcbd371d62f4e1]));
    }

    ::java::io::InputStream Module::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_425095ef57e6735b], a0.this$));
    }

    jboolean Module::isExported(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_fd2162b8a05a22fe], a0.this$);
    }

    jboolean Module::isExported(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_e455305b1fe72883], a0.this$, a1.this$);
    }

    jboolean Module::isNamed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNamed_89b302893bdbe1f1]);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_fd2162b8a05a22fe], a0.this$);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_e455305b1fe72883], a0.this$, a1.this$);
    }

    ::java::lang::String Module::toString() const
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
#include "java/text/AttributedCharacterIterator.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator::class$ = NULL;
    jmethodID *AttributedCharacterIterator::mids$ = NULL;
    bool AttributedCharacterIterator::live$ = false;

    jclass AttributedCharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAllAttributeKeys_2dfcbd371d62f4e1] = env->getMethodID(cls, "getAllAttributeKeys", "()Ljava/util/Set;");
        mids$[mid_getAttribute_9787e68ba2c9c1c9] = env->getMethodID(cls, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
        mids$[mid_getAttributes_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getAttributes", "()Ljava/util/Map;");
        mids$[mid_getRunLimit_412668abc8d889e9] = env->getMethodID(cls, "getRunLimit", "()I");
        mids$[mid_getRunLimit_f0718cf8fe2061ba] = env->getMethodID(cls, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunLimit_709858000440f433] = env->getMethodID(cls, "getRunLimit", "(Ljava/util/Set;)I");
        mids$[mid_getRunStart_412668abc8d889e9] = env->getMethodID(cls, "getRunStart", "()I");
        mids$[mid_getRunStart_f0718cf8fe2061ba] = env->getMethodID(cls, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunStart_709858000440f433] = env->getMethodID(cls, "getRunStart", "(Ljava/util/Set;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set AttributedCharacterIterator::getAllAttributeKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getAllAttributeKeys_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_9787e68ba2c9c1c9], a0.this$));
    }

    ::java::util::Map AttributedCharacterIterator::getAttributes() const
    {
      return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAttributes_1e62c2f73fbdd1c4]));
    }

    jint AttributedCharacterIterator::getRunLimit() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_412668abc8d889e9]);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_f0718cf8fe2061ba], a0.this$);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_709858000440f433], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_412668abc8d889e9]);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_f0718cf8fe2061ba], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_709858000440f433], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data);
    static PyGetSetDef t_AttributedCharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, allAttributeKeys),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, attributes),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runLimit),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runStart),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AttributedCharacterIterator__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAllAttributeKeys, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttribute, METH_O),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttributes, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunLimit, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunStart, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AttributedCharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator)[] = {
      &PY_TYPE_DEF(::java::text::CharacterIterator),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator, t_AttributedCharacterIterator, AttributedCharacterIterator);

    void t_AttributedCharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator), &PY_TYPE_DEF(AttributedCharacterIterator), module, "AttributedCharacterIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "Attribute", make_descriptor(&PY_TYPE_DEF(AttributedCharacterIterator$Attribute)));
    }

    void t_AttributedCharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "class_", make_descriptor(AttributedCharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "wrapfn_", make_descriptor(t_AttributedCharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator::wrap_Object(AttributedCharacterIterator(((t_AttributedCharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute));
    }

    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg)
    {
      ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.getAttribute(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getAttribute", arg);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunLimit());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunLimit", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunStart());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunStart", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunLimit());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunStart());
      return PyLong_FromLong((long) value);
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
        mids$[mid_compareTo_38a1845c8d44a9b0] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparable::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_38a1845c8d44a9b0], a0.this$);
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
        mids$[mid_comparingByKey_b0b551d4a54c7150] = env->getStaticMethodID(cls, "comparingByKey", "()Ljava/util/Comparator;");
        mids$[mid_comparingByKey_ed7a25767f280242] = env->getStaticMethodID(cls, "comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_comparingByValue_b0b551d4a54c7150] = env->getStaticMethodID(cls, "comparingByValue", "()Ljava/util/Comparator;");
        mids$[mid_comparingByValue_ed7a25767f280242] = env->getStaticMethodID(cls, "comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getKey_e661fe3ba2fafb22] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
        mids$[mid_getValue_e661fe3ba2fafb22] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setValue_65d69db95c5eb156] = env->getMethodID(cls, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator Map$Entry::comparingByKey()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_b0b551d4a54c7150]));
    }

    ::java::util::Comparator Map$Entry::comparingByKey(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_ed7a25767f280242], a0.this$));
    }

    ::java::util::Comparator Map$Entry::comparingByValue()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_b0b551d4a54c7150]));
    }

    ::java::util::Comparator Map$Entry::comparingByValue(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_ed7a25767f280242], a0.this$));
    }

    jboolean Map$Entry::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Map$Entry::getKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Map$Entry::getValue() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_e661fe3ba2fafb22]));
    }

    jint Map$Entry::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    ::java::lang::Object Map$Entry::setValue(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setValue_65d69db95c5eb156], a0.this$));
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NoSuchElementException::NoSuchElementException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    NoSuchElementException::NoSuchElementException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Closeable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
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
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/ObjectOutput.h"
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_put_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "put", "(Ljava/lang/String;Z)V");
        mids$[mid_put_fdad7d6aa0478537] = env->getMethodID(cls, "put", "(Ljava/lang/String;B)V");
        mids$[mid_put_a1bc3d9ec64c6ced] = env->getMethodID(cls, "put", "(Ljava/lang/String;C)V");
        mids$[mid_put_c6843ef8200b1ede] = env->getMethodID(cls, "put", "(Ljava/lang/String;D)V");
        mids$[mid_put_3fef71434b554c3e] = env->getMethodID(cls, "put", "(Ljava/lang/String;F)V");
        mids$[mid_put_358501078068b45e] = env->getMethodID(cls, "put", "(Ljava/lang/String;I)V");
        mids$[mid_put_53d92541fcec0ec7] = env->getMethodID(cls, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_put_09a9cf7c5fc0949e] = env->getMethodID(cls, "put", "(Ljava/lang/String;J)V");
        mids$[mid_put_ce81d28a4d5a5313] = env->getMethodID(cls, "put", "(Ljava/lang/String;S)V");
        mids$[mid_write_e0a1f7a61289c095] = env->getMethodID(cls, "write", "(Ljava/io/ObjectOutput;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream$PutField::ObjectOutputStream$PutField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_e5ca4b97ee6bd2b6], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jbyte a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_fdad7d6aa0478537], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_a1bc3d9ec64c6ced], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jdouble a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_c6843ef8200b1ede], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jfloat a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_3fef71434b554c3e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_358501078068b45e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_53d92541fcec0ec7], a0.this$, a1.this$);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jlong a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_09a9cf7c5fc0949e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jshort a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_ce81d28a4d5a5313], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::write(const ::java::io::ObjectOutput & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e0a1f7a61289c095], a0.this$);
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedEncodingException::UnsupportedEncodingException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    UnsupportedEncodingException::UnsupportedEncodingException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
        mids$[mid_init$_0db3ce164f010509] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_init$_e5e2a5da4cf3e3af] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClassLoaderName_3cffd47377eca18a] = env->getMethodID(cls, "getClassLoaderName", "()Ljava/lang/String;");
        mids$[mid_getClassName_3cffd47377eca18a] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getFileName_3cffd47377eca18a] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
        mids$[mid_getLineNumber_412668abc8d889e9] = env->getMethodID(cls, "getLineNumber", "()I");
        mids$[mid_getMethodName_3cffd47377eca18a] = env->getMethodID(cls, "getMethodName", "()Ljava/lang/String;");
        mids$[mid_getModuleName_3cffd47377eca18a] = env->getMethodID(cls, "getModuleName", "()Ljava/lang/String;");
        mids$[mid_getModuleVersion_3cffd47377eca18a] = env->getMethodID(cls, "getModuleVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isNativeMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isNativeMethod", "()Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0db3ce164f010509, a0.this$, a1.this$, a2.this$, a3)) {}

    StackTraceElement::StackTraceElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e5e2a5da4cf3e3af, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

    jboolean StackTraceElement::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String StackTraceElement::getClassLoaderName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassLoaderName_3cffd47377eca18a]));
    }

    ::java::lang::String StackTraceElement::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_3cffd47377eca18a]));
    }

    ::java::lang::String StackTraceElement::getFileName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_3cffd47377eca18a]));
    }

    jint StackTraceElement::getLineNumber() const
    {
      return env->callIntMethod(this$, mids$[mid_getLineNumber_412668abc8d889e9]);
    }

    ::java::lang::String StackTraceElement::getMethodName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMethodName_3cffd47377eca18a]));
    }

    ::java::lang::String StackTraceElement::getModuleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleName_3cffd47377eca18a]));
    }

    ::java::lang::String StackTraceElement::getModuleVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModuleVersion_3cffd47377eca18a]));
    }

    jint StackTraceElement::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean StackTraceElement::isNativeMethod() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNativeMethod_89b302893bdbe1f1]);
    }

    ::java::lang::String StackTraceElement::toString() const
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileNotFoundException::FileNotFoundException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    FileNotFoundException::FileNotFoundException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/Integer.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
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
        mids$[mid_forEachRemaining_3754a629cec0befc] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/IntConsumer;)V");
        mids$[mid_tryAdvance_71104acc96e68efc] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/IntConsumer;)Z");
        mids$[mid_trySplit_4f49f25d34c34e7d] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfInt;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfInt::forEachRemaining(const ::java::util::function::IntConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_3754a629cec0befc], a0.this$);
    }

    jboolean Spliterator$OfInt::tryAdvance(const ::java::util::function::IntConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_71104acc96e68efc], a0.this$);
    }

    Spliterator$OfInt Spliterator$OfInt::trySplit() const
    {
      return Spliterator$OfInt(env->callObjectMethod(this$, mids$[mid_trySplit_4f49f25d34c34e7d]));
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
        mids$[mid_add_009757f2c0fd9090] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)V");
        mids$[mid_hasNext_89b302893bdbe1f1] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_hasPrevious_89b302893bdbe1f1] = env->getMethodID(cls, "hasPrevious", "()Z");
        mids$[mid_next_e661fe3ba2fafb22] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_nextIndex_412668abc8d889e9] = env->getMethodID(cls, "nextIndex", "()I");
        mids$[mid_previous_e661fe3ba2fafb22] = env->getMethodID(cls, "previous", "()Ljava/lang/Object;");
        mids$[mid_previousIndex_412668abc8d889e9] = env->getMethodID(cls, "previousIndex", "()I");
        mids$[mid_remove_0640e6acf969ed28] = env->getMethodID(cls, "remove", "()V");
        mids$[mid_set_009757f2c0fd9090] = env->getMethodID(cls, "set", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ListIterator::add(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_add_009757f2c0fd9090], a0.this$);
    }

    jboolean ListIterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_89b302893bdbe1f1]);
    }

    jboolean ListIterator::hasPrevious() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasPrevious_89b302893bdbe1f1]);
    }

    ::java::lang::Object ListIterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_e661fe3ba2fafb22]));
    }

    jint ListIterator::nextIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_nextIndex_412668abc8d889e9]);
    }

    ::java::lang::Object ListIterator::previous() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_previous_e661fe3ba2fafb22]));
    }

    jint ListIterator::previousIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_previousIndex_412668abc8d889e9]);
    }

    void ListIterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_0640e6acf969ed28]);
    }

    void ListIterator::set(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_set_009757f2c0fd9090], a0.this$);
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
        mids$[mid_available_412668abc8d889e9] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_67c88f2bf4e7f8b2] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_68a76742c8623fb3] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readObject_e661fe3ba2fafb22] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint ObjectInput::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_412668abc8d889e9]);
    }

    void ObjectInput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    jint ObjectInput::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_67c88f2bf4e7f8b2], a0.this$);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_68a76742c8623fb3], a0.this$, a1, a2);
    }

    ::java::lang::Object ObjectInput::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_e661fe3ba2fafb22]));
    }

    jlong ObjectInput::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
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
        mids$[mid_init$_7c052a0e5fb545b8] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;)V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_90bb37c33b672951] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;I)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBeginIndex_412668abc8d889e9] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_412668abc8d889e9] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getField_412668abc8d889e9] = env->getMethodID(cls, "getField", "()I");
        mids$[mid_getFieldAttribute_bea81de6d2ca4b7c] = env->getMethodID(cls, "getFieldAttribute", "()Ljava/text/Format$Field;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setBeginIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "setBeginIndex", "(I)V");
        mids$[mid_setEndIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "setEndIndex", "(I)V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c052a0e5fb545b8, a0.this$)) {}

    FieldPosition::FieldPosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90bb37c33b672951, a0.this$, a1)) {}

    jboolean FieldPosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint FieldPosition::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_412668abc8d889e9]);
    }

    jint FieldPosition::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_412668abc8d889e9]);
    }

    jint FieldPosition::getField() const
    {
      return env->callIntMethod(this$, mids$[mid_getField_412668abc8d889e9]);
    }

    ::java::text::Format$Field FieldPosition::getFieldAttribute() const
    {
      return ::java::text::Format$Field(env->callObjectMethod(this$, mids$[mid_getFieldAttribute_bea81de6d2ca4b7c]));
    }

    jint FieldPosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    void FieldPosition::setBeginIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setBeginIndex_a3da1a935cb37f7b], a0);
    }

    void FieldPosition::setEndIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setEndIndex_a3da1a935cb37f7b], a0);
    }

    ::java::lang::String FieldPosition::toString() const
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
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator$OfDouble.h"
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
        mids$[mid_forEachRemaining_fda350dd3513069c] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_tryAdvance_6584f80d17f85d7a] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z");
        mids$[mid_trySplit_67e70219587d017f] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfDouble;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_fda350dd3513069c], a0.this$);
    }

    jboolean Spliterator$OfDouble::tryAdvance(const ::java::util::function::DoubleConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_6584f80d17f85d7a], a0.this$);
    }

    Spliterator$OfDouble Spliterator$OfDouble::trySplit() const
    {
      return Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_trySplit_67e70219587d017f]));
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
#include "java/util/SortedMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/SortedMap.h"
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
        mids$[mid_comparator_b0b551d4a54c7150] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_firstKey_e661fe3ba2fafb22] = env->getMethodID(cls, "firstKey", "()Ljava/lang/Object;");
        mids$[mid_headMap_a274b6b212194ae4] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_lastKey_e661fe3ba2fafb22] = env->getMethodID(cls, "lastKey", "()Ljava/lang/Object;");
        mids$[mid_subMap_4cc139291973b971] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_a274b6b212194ae4] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedMap::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_b0b551d4a54c7150]));
    }

    ::java::util::Set SortedMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object SortedMap::firstKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_firstKey_e661fe3ba2fafb22]));
    }

    SortedMap SortedMap::headMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_a274b6b212194ae4], a0.this$));
    }

    ::java::util::Set SortedMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    ::java::lang::Object SortedMap::lastKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lastKey_e661fe3ba2fafb22]));
    }

    SortedMap SortedMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_4cc139291973b971], a0.this$, a1.this$));
    }

    SortedMap SortedMap::tailMap(const ::java::lang::Object & a0) const
    {
      return SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_a274b6b212194ae4], a0.this$));
    }

    ::java::util::Collection SortedMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
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
#include "java/lang/ClassLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Package.h"
#include "java/lang/ClassNotFoundException.h"
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
        mids$[mid_clearAssertionStatus_0640e6acf969ed28] = env->getMethodID(cls, "clearAssertionStatus", "()V");
        mids$[mid_getDefinedPackage_7b9ea2e3cd9b2198] = env->getMethodID(cls, "getDefinedPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getDefinedPackages_fd735c3a2f16936e] = env->getMethodID(cls, "getDefinedPackages", "()[Ljava/lang/Package;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_822bf82dfc5992ba] = env->getMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
        mids$[mid_getPlatformClassLoader_822bf82dfc5992ba] = env->getStaticMethodID(cls, "getPlatformClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getResource_b738586de9814931] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_425095ef57e6735b] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getResources_27bc01b0cf1a3695] = env->getMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getSystemClassLoader_822bf82dfc5992ba] = env->getStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getSystemResource_b738586de9814931] = env->getStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getSystemResourceAsStream_425095ef57e6735b] = env->getStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSystemResources_27bc01b0cf1a3695] = env->getStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getUnnamedModule_04458a8861f7bacc] = env->getMethodID(cls, "getUnnamedModule", "()Ljava/lang/Module;");
        mids$[mid_isRegisteredAsParallelCapable_89b302893bdbe1f1] = env->getMethodID(cls, "isRegisteredAsParallelCapable", "()Z");
        mids$[mid_loadClass_33271d9fced271c1] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resources_0dc60653ff1ab3bd] = env->getMethodID(cls, "resources", "(Ljava/lang/String;)Ljava/util/stream/Stream;");
        mids$[mid_setClassAssertionStatus_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_setDefaultAssertionStatus_ed2afdb8506b9742] = env->getMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
        mids$[mid_setPackageAssertionStatus_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_loadClass_e6ece06a3060ddbb] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;");
        mids$[mid_definePackage_9c42a69023400294] = env->getMethodID(cls, "definePackage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;");
        mids$[mid_getPackage_7b9ea2e3cd9b2198] = env->getMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_setSigners_d918cbcf7c43701a] = env->getMethodID(cls, "setSigners", "(Ljava/lang/Class;[Ljava/lang/Object;)V");
        mids$[mid_findResource_b738586de9814931] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_findResource_a71fec3fc8c959f3] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getClassLoadingLock_86c4b8560f4aa70f] = env->getMethodID(cls, "getClassLoadingLock", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_findLoadedClass_33271d9fced271c1] = env->getMethodID(cls, "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_33271d9fced271c1] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_ef42b063b49029ac] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveClass_80b724d415998d9f] = env->getMethodID(cls, "resolveClass", "(Ljava/lang/Class;)V");
        mids$[mid_defineClass_3f2a7bee506c545c] = env->getMethodID(cls, "defineClass", "([BII)Ljava/lang/Class;");
        mids$[mid_defineClass_792c4f29b3565d21] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;");
        mids$[mid_defineClass_b7c35bde5241f9c4] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_defineClass_4d1acd34d220744d] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_findSystemClass_33271d9fced271c1] = env->getMethodID(cls, "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findResources_27bc01b0cf1a3695] = env->getMethodID(cls, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_registerAsParallelCapable_89b302893bdbe1f1] = env->getStaticMethodID(cls, "registerAsParallelCapable", "()Z");
        mids$[mid_getPackages_fd735c3a2f16936e] = env->getMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_findLibrary_60bb1b490b673cbf] = env->getMethodID(cls, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ClassLoader::clearAssertionStatus() const
    {
      env->callVoidMethod(this$, mids$[mid_clearAssertionStatus_0640e6acf969ed28]);
    }

    ::java::lang::Package ClassLoader::getDefinedPackage(const ::java::lang::String & a0) const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getDefinedPackage_7b9ea2e3cd9b2198], a0.this$));
    }

    JArray< ::java::lang::Package > ClassLoader::getDefinedPackages() const
    {
      return JArray< ::java::lang::Package >(env->callObjectMethod(this$, mids$[mid_getDefinedPackages_fd735c3a2f16936e]));
    }

    ::java::lang::String ClassLoader::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    ClassLoader ClassLoader::getParent() const
    {
      return ClassLoader(env->callObjectMethod(this$, mids$[mid_getParent_822bf82dfc5992ba]));
    }

    ClassLoader ClassLoader::getPlatformClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getPlatformClassLoader_822bf82dfc5992ba]));
    }

    ::java::net::URL ClassLoader::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_b738586de9814931], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_425095ef57e6735b], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getResources(const ::java::lang::String & a0) const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getResources_27bc01b0cf1a3695], a0.this$));
    }

    ClassLoader ClassLoader::getSystemClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getSystemClassLoader_822bf82dfc5992ba]));
    }

    ::java::net::URL ClassLoader::getSystemResource(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::net::URL(env->callStaticObjectMethod(cls, mids$[mid_getSystemResource_b738586de9814931], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getSystemResourceAsStream(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::InputStream(env->callStaticObjectMethod(cls, mids$[mid_getSystemResourceAsStream_425095ef57e6735b], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getSystemResources(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_getSystemResources_27bc01b0cf1a3695], a0.this$));
    }

    ::java::lang::Module ClassLoader::getUnnamedModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getUnnamedModule_04458a8861f7bacc]));
    }

    jboolean ClassLoader::isRegisteredAsParallelCapable() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isRegisteredAsParallelCapable_89b302893bdbe1f1]);
    }

    ::java::lang::Class ClassLoader::loadClass(const ::java::lang::String & a0) const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_loadClass_33271d9fced271c1], a0.this$));
    }

    ::java::util::stream::Stream ClassLoader::resources(const ::java::lang::String & a0) const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_resources_0dc60653ff1ab3bd], a0.this$));
    }

    void ClassLoader::setClassAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setClassAssertionStatus_e5ca4b97ee6bd2b6], a0.this$, a1);
    }

    void ClassLoader::setDefaultAssertionStatus(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDefaultAssertionStatus_ed2afdb8506b9742], a0);
    }

    void ClassLoader::setPackageAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setPackageAssertionStatus_e5ca4b97ee6bd2b6], a0.this$, a1);
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
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
#include "java/util/TimeZone.h"
#include "java/util/Locale.h"
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "java/util/TimeZone.h"
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_getAvailableIDs_5d7d8c500345981d] = env->getStaticMethodID(cls, "getAvailableIDs", "()[Ljava/lang/String;");
        mids$[mid_getAvailableIDs_ca5a49efb19c248d] = env->getStaticMethodID(cls, "getAvailableIDs", "(I)[Ljava/lang/String;");
        mids$[mid_getDSTSavings_412668abc8d889e9] = env->getMethodID(cls, "getDSTSavings", "()I");
        mids$[mid_getDefault_563b8f745e53061a] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/TimeZone;");
        mids$[mid_getDisplayName_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_9fe888b76619a8fc] = env->getMethodID(cls, "getDisplayName", "(ZI)Ljava/lang/String;");
        mids$[mid_getDisplayName_3e08261d24845327] = env->getMethodID(cls, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getID_3cffd47377eca18a] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
        mids$[mid_getOffset_06110d73d878b7ae] = env->getMethodID(cls, "getOffset", "(J)I");
        mids$[mid_getOffset_52f61e804885b536] = env->getMethodID(cls, "getOffset", "(IIIIII)I");
        mids$[mid_getRawOffset_412668abc8d889e9] = env->getMethodID(cls, "getRawOffset", "()I");
        mids$[mid_getTimeZone_86d2eab6e9f4099c] = env->getStaticMethodID(cls, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
        mids$[mid_hasSameRules_3ccea581b2301e3f] = env->getMethodID(cls, "hasSameRules", "(Ljava/util/TimeZone;)Z");
        mids$[mid_inDaylightTime_7bb053a7183a5e9b] = env->getMethodID(cls, "inDaylightTime", "(Ljava/util/Date;)Z");
        mids$[mid_observesDaylightTime_89b302893bdbe1f1] = env->getMethodID(cls, "observesDaylightTime", "()Z");
        mids$[mid_setDefault_49fea68be1a6ef85] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/TimeZone;)V");
        mids$[mid_setID_f5ffdf29129ef90a] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
        mids$[mid_setRawOffset_a3da1a935cb37f7b] = env->getMethodID(cls, "setRawOffset", "(I)V");
        mids$[mid_useDaylightTime_89b302893bdbe1f1] = env->getMethodID(cls, "useDaylightTime", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        LONG = env->getStaticIntField(cls, "LONG");
        SHORT = env->getStaticIntField(cls, "SHORT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TimeZone::TimeZone() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ::java::lang::Object TimeZone::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_5d7d8c500345981d]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_ca5a49efb19c248d], a0));
    }

    jint TimeZone::getDSTSavings() const
    {
      return env->callIntMethod(this$, mids$[mid_getDSTSavings_412668abc8d889e9]);
    }

    TimeZone TimeZone::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getDefault_563b8f745e53061a]));
    }

    ::java::lang::String TimeZone::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cffd47377eca18a]));
    }

    ::java::lang::String TimeZone::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_9fe888b76619a8fc], a0, a1));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1, const ::java::util::Locale & a2) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3e08261d24845327], a0, a1, a2.this$));
    }

    ::java::lang::String TimeZone::getID() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_3cffd47377eca18a]));
    }

    jint TimeZone::getOffset(jlong a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_06110d73d878b7ae], a0);
    }

    jint TimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_52f61e804885b536], a0, a1, a2, a3, a4, a5);
    }

    jint TimeZone::getRawOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getRawOffset_412668abc8d889e9]);
    }

    TimeZone TimeZone::getTimeZone(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getTimeZone_86d2eab6e9f4099c], a0.this$));
    }

    jboolean TimeZone::hasSameRules(const TimeZone & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasSameRules_3ccea581b2301e3f], a0.this$);
    }

    jboolean TimeZone::inDaylightTime(const ::java::util::Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_inDaylightTime_7bb053a7183a5e9b], a0.this$);
    }

    jboolean TimeZone::observesDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_observesDaylightTime_89b302893bdbe1f1]);
    }

    void TimeZone::setDefault(const TimeZone & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_49fea68be1a6ef85], a0.this$);
    }

    void TimeZone::setID(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setID_f5ffdf29129ef90a], a0.this$);
    }

    void TimeZone::setRawOffset(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setRawOffset_a3da1a935cb37f7b], a0);
    }

    jboolean TimeZone::useDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_useDaylightTime_89b302893bdbe1f1]);
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
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_009757f2c0fd9090] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_009757f2c0fd9090] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_834a3801c426326d] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_e661fe3ba2fafb22] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_e661fe3ba2fafb22] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_221e8e85cb385209] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_221e8e85cb385209] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_221e8e85cb385209] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_e661fe3ba2fafb22] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_e661fe3ba2fafb22] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_e661fe3ba2fafb22] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_e661fe3ba2fafb22] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_e661fe3ba2fafb22] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_009757f2c0fd9090] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_e661fe3ba2fafb22] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_221e8e85cb385209] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_e661fe3ba2fafb22] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_221e8e85cb385209] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Deque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean Deque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    void Deque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_009757f2c0fd9090], a0.this$);
    }

    void Deque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_009757f2c0fd9090], a0.this$);
    }

    jboolean Deque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    ::java::util::Iterator Deque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_834a3801c426326d]));
    }

    ::java::lang::Object Deque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_e661fe3ba2fafb22]));
    }

    ::java::util::Iterator Deque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jboolean Deque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_221e8e85cb385209], a0.this$);
    }

    jboolean Deque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_221e8e85cb385209], a0.this$);
    }

    jboolean Deque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Deque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_e661fe3ba2fafb22]));
    }

    ::java::lang::Object Deque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_e661fe3ba2fafb22]));
    }

    void Deque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_009757f2c0fd9090], a0.this$);
    }

    ::java::lang::Object Deque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_e661fe3ba2fafb22]));
    }

    jboolean Deque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Deque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_e661fe3ba2fafb22]));
    }

    jboolean Deque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Deque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_e661fe3ba2fafb22]));
    }

    jboolean Deque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_221e8e85cb385209], a0.this$);
    }

    jint Deque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
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
