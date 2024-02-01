#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractMap::class$ = NULL;
    jmethodID *AbstractMap::mids$ = NULL;
    bool AbstractMap::live$ = false;

    jclass AbstractMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_72faff9b05f5ed5e] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_72faff9b05f5ed5e] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AbstractMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean AbstractMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_72faff9b05f5ed5e], a0.this$);
    }

    jboolean AbstractMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_72faff9b05f5ed5e], a0.this$);
    }

    ::java::util::Set AbstractMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    jboolean AbstractMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object AbstractMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    jint AbstractMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean AbstractMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Set AbstractMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    ::java::lang::Object AbstractMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    void AbstractMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
    }

    ::java::lang::Object AbstractMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jint AbstractMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::lang::String AbstractMap::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::util::Collection AbstractMap::values() const
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
    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_clear(t_AbstractMap *self);
    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self);
    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_size(t_AbstractMap *self);
    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_values(t_AbstractMap *self);
    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data);
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data);
    static PyGetSetDef t_AbstractMap__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractMap, empty),
      DECLARE_GET_FIELD(t_AbstractMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractMap__methods_[] = {
      DECLARE_METHOD(t_AbstractMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, containsKey, METH_O),
      DECLARE_METHOD(t_AbstractMap, containsValue, METH_O),
      DECLARE_METHOD(t_AbstractMap, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, get, METH_O),
      DECLARE_METHOD(t_AbstractMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, keySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, put, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, putAll, METH_O),
      DECLARE_METHOD(t_AbstractMap, remove, METH_O),
      DECLARE_METHOD(t_AbstractMap, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractMap)[] = {
      { Py_tp_methods, t_AbstractMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractMap)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractMap, t_AbstractMap, AbstractMap);
    PyObject *t_AbstractMap::wrap_Object(const AbstractMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_AbstractMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_AbstractMap::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractMap), &PY_TYPE_DEF(AbstractMap), module, "AbstractMap", 0);
    }

    void t_AbstractMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "class_", make_descriptor(AbstractMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "wrapfn_", make_descriptor(t_AbstractMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractMap::initializeClass, 1)))
        return NULL;
      return t_AbstractMap::wrap_Object(AbstractMap(((t_AbstractMap *) arg)->object.this$));
    }
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractMap_clear(t_AbstractMap *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg)
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

    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg)
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

    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg)
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

    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args)
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

    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg)
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

    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg)
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

    static PyObject *t_AbstractMap_size(t_AbstractMap *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractMap_values(t_AbstractMap *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractFieldOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractFieldOrbitInterpolator::mids$ = NULL;
      bool AbstractFieldOrbitInterpolator::live$ = false;

      jclass AbstractFieldOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractFieldOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4a8b614955ad3a54] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_getOutputInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_62d6f6ecde70d4d7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldOrbitInterpolator::AbstractFieldOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4a8b614955ad3a54, a0, a1, a2.this$)) {}

      ::org::orekit::frames::Frame AbstractFieldOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_cb151471db4570f0]));
      }

      ::org::orekit::orbits::FieldOrbit AbstractFieldOrbitInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_62d6f6ecde70d4d7], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self);
      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractFieldOrbitInterpolator, t_AbstractFieldOrbitInterpolator, AbstractFieldOrbitInterpolator);
      PyObject *t_AbstractFieldOrbitInterpolator::wrap_Object(const AbstractFieldOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldOrbitInterpolator), &PY_TYPE_DEF(AbstractFieldOrbitInterpolator), module, "AbstractFieldOrbitInterpolator", 0);
      }

      void t_AbstractFieldOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "class_", make_descriptor(AbstractFieldOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldOrbitInterpolator::wrap_Object(AbstractFieldOrbitInterpolator(((t_AbstractFieldOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractFieldOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractFieldOrbitInterpolator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(AbstractFieldOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *ProcessEstimate::class$ = NULL;
        jmethodID *ProcessEstimate::mids$ = NULL;
        bool ProcessEstimate::live$ = false;

        jclass ProcessEstimate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/ProcessEstimate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_66ea8b17e57de689] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_18624603e9d5cc1c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getInnovationCovariance_b2eebabce70526d8] = env->getMethodID(cls, "getInnovationCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_66ea8b17e57de689, a0, a1.this$, a2.this$)) {}

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::linear::RealMatrix & a5, const ::org::hipparchus::linear::RealMatrix & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_18624603e9d5cc1c, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getInnovationCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInnovationCovariance_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector ProcessEstimate::getState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b2eebabce70526d8]));
        }

        jdouble ProcessEstimate::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data);
        static PyGetSetDef t_ProcessEstimate__fields_[] = {
          DECLARE_GET_FIELD(t_ProcessEstimate, covariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, innovationCovariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, kalmanGain),
          DECLARE_GET_FIELD(t_ProcessEstimate, measurementJacobian),
          DECLARE_GET_FIELD(t_ProcessEstimate, state),
          DECLARE_GET_FIELD(t_ProcessEstimate, stateTransitionMatrix),
          DECLARE_GET_FIELD(t_ProcessEstimate, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProcessEstimate__methods_[] = {
          DECLARE_METHOD(t_ProcessEstimate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getInnovationCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getState, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProcessEstimate)[] = {
          { Py_tp_methods, t_ProcessEstimate__methods_ },
          { Py_tp_init, (void *) t_ProcessEstimate_init_ },
          { Py_tp_getset, t_ProcessEstimate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProcessEstimate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProcessEstimate, t_ProcessEstimate, ProcessEstimate);

        void t_ProcessEstimate::install(PyObject *module)
        {
          installType(&PY_TYPE(ProcessEstimate), &PY_TYPE_DEF(ProcessEstimate), module, "ProcessEstimate", 0);
        }

        void t_ProcessEstimate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "class_", make_descriptor(ProcessEstimate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "wrapfn_", make_descriptor(t_ProcessEstimate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProcessEstimate::initializeClass, 1)))
            return NULL;
          return t_ProcessEstimate::wrap_Object(ProcessEstimate(((t_ProcessEstimate *) arg)->object.this$));
        }
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProcessEstimate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a5((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a6((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkkkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToSensorMapping::class$ = NULL;
          jmethodID *SensorToSensorMapping::mids$ = NULL;
          bool SensorToSensorMapping::live$ = false;

          jclass SensorToSensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToSensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_04f72a78f21743a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_init$_e0fb351f45d43efa] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_88bf1472d6acb4e9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_addMapping_c0d62951c4e776a5] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;)V");
              mids$[mid_addMapping_6fb2ffa8e90aef41] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;Ljava/lang/Double;)V");
              mids$[mid_getBodyConstraintWeight_9981f74b2d109da6] = env->getMethodID(cls, "getBodyConstraintWeight", "()D");
              mids$[mid_getBodyDistance_b1c6fd9ba6ac5772] = env->getMethodID(cls, "getBodyDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getBodyDistances_d751c1a57012b438] = env->getMethodID(cls, "getBodyDistances", "()Ljava/util/List;");
              mids$[mid_getLosDistance_b1c6fd9ba6ac5772] = env->getMethodID(cls, "getLosDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getLosDistances_d751c1a57012b438] = env->getMethodID(cls, "getLosDistances", "()Ljava/util/List;");
              mids$[mid_getMapping_6b191a9b12c1004b] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedNameA_d2c8eb4129821f0e] = env->getMethodID(cls, "getRuggedNameA", "()Ljava/lang/String;");
              mids$[mid_getRuggedNameB_d2c8eb4129821f0e] = env->getMethodID(cls, "getRuggedNameB", "()Ljava/lang/String;");
              mids$[mid_getSensorNameA_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorNameA", "()Ljava/lang/String;");
              mids$[mid_getSensorNameB_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorNameB", "()Ljava/lang/String;");
              mids$[mid_setBodyConstraintWeight_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBodyConstraintWeight", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_04f72a78f21743a7, a0.this$, a1.this$, a2)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0fb351f45d43efa, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88bf1472d6acb4e9, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_c0d62951c4e776a5], a0.this$, a1.this$, a2.this$);
          }

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2, const ::java::lang::Double & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_6fb2ffa8e90aef41], a0.this$, a1.this$, a2.this$, a3.this$);
          }

          jdouble SensorToSensorMapping::getBodyConstraintWeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBodyConstraintWeight_9981f74b2d109da6]);
          }

          ::java::lang::Double SensorToSensorMapping::getBodyDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getBodyDistance_b1c6fd9ba6ac5772], a0));
          }

          ::java::util::List SensorToSensorMapping::getBodyDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBodyDistances_d751c1a57012b438]));
          }

          ::java::lang::Double SensorToSensorMapping::getLosDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getLosDistance_b1c6fd9ba6ac5772], a0));
          }

          ::java::util::List SensorToSensorMapping::getLosDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLosDistances_d751c1a57012b438]));
          }

          ::java::util::Set SensorToSensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_6b191a9b12c1004b]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameA_d2c8eb4129821f0e]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameB_d2c8eb4129821f0e]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameA_d2c8eb4129821f0e]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameB_d2c8eb4129821f0e]));
          }

          void SensorToSensorMapping::setBodyConstraintWeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setBodyConstraintWeight_1ad26e8c8c0cd65b], a0);
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args);
          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data);
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data);
          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data);
          static PyGetSetDef t_SensorToSensorMapping__fields_[] = {
            DECLARE_GETSET_FIELD(t_SensorToSensorMapping, bodyConstraintWeight),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, bodyDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, losDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameB),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameB),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToSensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToSensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyConstraintWeight, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, setBodyConstraintWeight, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToSensorMapping)[] = {
            { Py_tp_methods, t_SensorToSensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToSensorMapping_init_ },
            { Py_tp_getset, t_SensorToSensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToSensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToSensorMapping, t_SensorToSensorMapping, SensorToSensorMapping);

          void t_SensorToSensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToSensorMapping), &PY_TYPE_DEF(SensorToSensorMapping), module, "SensorToSensorMapping", 0);
          }

          void t_SensorToSensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "class_", make_descriptor(SensorToSensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "wrapfn_", make_descriptor(t_SensorToSensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToSensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToSensorMapping::wrap_Object(SensorToSensorMapping(((t_SensorToSensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToSensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                jdouble a2;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                jdouble a4;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssssD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3, a4));
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

          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);

                if (!parseArgs(args, "kkO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 4:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);
                ::java::lang::Double a3((jobject) NULL);

                if (!parseArgs(args, "kkOO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), ::java::lang::PY_TYPE(Double), &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2, a3));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getBodyDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBodyDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getLosDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getLosDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setBodyConstraintWeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBodyConstraintWeight", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setBodyConstraintWeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "bodyConstraintWeight", arg);
            return -1;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameB());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameB());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/time/TimeStampedField.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Optional.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftStateInterpolator::class$ = NULL;
      jmethodID *FieldSpacecraftStateInterpolator::mids$ = NULL;
      bool FieldSpacecraftStateInterpolator::live$ = false;

      jclass FieldSpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b764253cc264c047] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_1567a5431e11bb91] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_0aad11dd3e2442fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_8d82f8ecd070a43b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAbsPVAInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOrbitInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_e5fc869b7e9ee70d] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_interpolate_675ec4e0c4a0d4a9] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b764253cc264c047, a0, a1.this$, a2.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1567a5431e11bb91, a0, a1, a2.this$, a3.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0aad11dd3e2442fe, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldSpacecraftStateInterpolator::FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1, const ::org::orekit::time::FieldTimeInterpolator & a2, const ::org::orekit::time::FieldTimeInterpolator & a3, const ::org::orekit::time::FieldTimeInterpolator & a4, const ::org::orekit::time::FieldTimeInterpolator & a5) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8d82f8ecd070a43b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_aa56605e3771f379]));
      }

      ::java::util::Optional FieldSpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_aa56605e3771f379]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_cb151471db4570f0]));
      }

      ::java::util::List FieldSpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldSpacecraftStateInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_e5fc869b7e9ee70d], a0.this$, a1.this$));
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
      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self);
      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_FieldSpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldSpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_FieldSpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_FieldSpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftStateInterpolator, t_FieldSpacecraftStateInterpolator, FieldSpacecraftStateInterpolator);
      PyObject *t_FieldSpacecraftStateInterpolator::wrap_Object(const FieldSpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftStateInterpolator *self = (t_FieldSpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftStateInterpolator), &PY_TYPE_DEF(FieldSpacecraftStateInterpolator), module, "FieldSpacecraftStateInterpolator", 0);
      }

      void t_FieldSpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "class_", make_descriptor(FieldSpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_FieldSpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftStateInterpolator::wrap_Object(FieldSpacecraftStateInterpolator(((t_FieldSpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_of_(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftStateInterpolator_init_(t_FieldSpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldTimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::FieldTimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::FieldTimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            FieldSpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
            {
              INT_CALL(object = FieldSpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldSpacecraftStateInterpolator_getAbsPVAInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAdditionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getAttitudeInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getMassInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOrbitInterpolator(t_FieldSpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getOutputFrame(t_FieldSpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_getSubInterpolators(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_interpolate(t_FieldSpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldSpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_FieldSpacecraftStateInterpolator_get__parameters_(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__absPVAInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__additionalStateInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__attitudeInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__massInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__orbitInterpolator(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__outputFrame(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftStateInterpolator_get__subInterpolators(t_FieldSpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataFormat::class$ = NULL;
          jmethodID *DataFormat::mids$ = NULL;
          bool DataFormat::live$ = false;
          DataFormat *DataFormat::BINEX = NULL;
          DataFormat *DataFormat::CMR = NULL;
          DataFormat *DataFormat::CMR_PLUS = NULL;
          DataFormat *DataFormat::RAW = NULL;
          DataFormat *DataFormat::RINEX = NULL;
          DataFormat *DataFormat::RTCA = NULL;
          DataFormat *DataFormat::RTCM_2 = NULL;
          DataFormat *DataFormat::RTCM_3 = NULL;
          DataFormat *DataFormat::RTCM_SAPOS = NULL;
          DataFormat *DataFormat::SAPOS_ADV = NULL;
          DataFormat *DataFormat::SP3 = NULL;

          jclass DataFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataFormat_9f269d86ad7bb16d] = env->getStaticMethodID(cls, "getDataFormat", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_valueOf_9f269d86ad7bb16d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_values_e8f117a1ac413b6a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/DataFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BINEX = new DataFormat(env->getStaticObjectField(cls, "BINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR = new DataFormat(env->getStaticObjectField(cls, "CMR", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR_PLUS = new DataFormat(env->getStaticObjectField(cls, "CMR_PLUS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RAW = new DataFormat(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RINEX = new DataFormat(env->getStaticObjectField(cls, "RINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCA = new DataFormat(env->getStaticObjectField(cls, "RTCA", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_2 = new DataFormat(env->getStaticObjectField(cls, "RTCM_2", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_3 = new DataFormat(env->getStaticObjectField(cls, "RTCM_3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_SAPOS = new DataFormat(env->getStaticObjectField(cls, "RTCM_SAPOS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SAPOS_ADV = new DataFormat(env->getStaticObjectField(cls, "SAPOS_ADV", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SP3 = new DataFormat(env->getStaticObjectField(cls, "SP3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataFormat DataFormat::getDataFormat(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_getDataFormat_9f269d86ad7bb16d], a0.this$));
          }

          DataFormat DataFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f269d86ad7bb16d], a0.this$));
          }

          JArray< DataFormat > DataFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_e8f117a1ac413b6a]));
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
          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args);
          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataFormat_values(PyTypeObject *type);
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data);
          static PyGetSetDef t_DataFormat__fields_[] = {
            DECLARE_GET_FIELD(t_DataFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataFormat__methods_[] = {
            DECLARE_METHOD(t_DataFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataFormat, getDataFormat, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataFormat)[] = {
            { Py_tp_methods, t_DataFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataFormat, t_DataFormat, DataFormat);
          PyObject *t_DataFormat::wrap_Object(const DataFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(DataFormat), &PY_TYPE_DEF(DataFormat), module, "DataFormat", 0);
          }

          void t_DataFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "class_", make_descriptor(DataFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "wrapfn_", make_descriptor(t_DataFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "BINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::BINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR_PLUS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR_PLUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RAW", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RAW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCA", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_2", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_SAPOS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_SAPOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SAPOS_ADV", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SAPOS_ADV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SP3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SP3)));
          }

          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataFormat::initializeClass, 1)))
              return NULL;
            return t_DataFormat::wrap_Object(DataFormat(((t_DataFormat *) arg)->object.this$));
          }
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::getDataFormat(a0));
              return t_DataFormat::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDataFormat", arg);
            return NULL;
          }

          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::valueOf(a0));
              return t_DataFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataFormat_values(PyTypeObject *type)
          {
            JArray< DataFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::values());
            return JArray<jobject>(result.this$).wrap(t_DataFormat::wrap_jobject);
          }
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader::class$ = NULL;
            jmethodID *DtcDataLoader::mids$ = NULL;
            bool DtcDataLoader::live$ = false;

            jclass DtcDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_815c7115fae241c1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader::DtcDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

            ::java::util::SortedSet DtcDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_815c7115fae241c1]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
            }

            void DtcDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
            }

            jboolean DtcDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args);
            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data);
            static PyGetSetDef t_DtcDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader, dataSet),
              DECLARE_GET_FIELD(t_DtcDataLoader, maxDate),
              DECLARE_GET_FIELD(t_DtcDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_DtcDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader)[] = {
              { Py_tp_methods, t_DtcDataLoader__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader_init_ },
              { Py_tp_getset, t_DtcDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader, t_DtcDataLoader, DtcDataLoader);

            void t_DtcDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader), &PY_TYPE_DEF(DtcDataLoader), module, "DtcDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(DtcDataLoader$LineParameters)));
            }

            void t_DtcDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "class_", make_descriptor(DtcDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "wrapfn_", make_descriptor(t_DtcDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader::wrap_Object(DtcDataLoader(((t_DtcDataLoader *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              DtcDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = DtcDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(DtcDataLoader$LineParameters));
            }

            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args)
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

            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryAttribute::class$ = NULL;
        jmethodID *BoundaryAttribute::mids$ = NULL;
        bool BoundaryAttribute::live$ = false;

        jclass BoundaryAttribute::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryAttribute");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPlusInside_24c5633e830ec593] = env->getMethodID(cls, "getPlusInside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlusOutside_24c5633e830ec593] = env->getMethodID(cls, "getPlusOutside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSplitters_aee8e9a530911700] = env->getMethodID(cls, "getSplitters", "()Lorg/hipparchus/geometry/partitioning/NodesSet;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusInside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusInside_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusOutside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusOutside_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::NodesSet BoundaryAttribute::getSplitters() const
        {
          return ::org::hipparchus::geometry::partitioning::NodesSet(env->callObjectMethod(this$, mids$[mid_getSplitters_aee8e9a530911700]));
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
    namespace geometry {
      namespace partitioning {
        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args);
        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data);
        static PyGetSetDef t_BoundaryAttribute__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusInside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusOutside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, splitters),
          DECLARE_GET_FIELD(t_BoundaryAttribute, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryAttribute__methods_[] = {
          DECLARE_METHOD(t_BoundaryAttribute, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusInside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusOutside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getSplitters, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryAttribute)[] = {
          { Py_tp_methods, t_BoundaryAttribute__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BoundaryAttribute__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryAttribute)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryAttribute, t_BoundaryAttribute, BoundaryAttribute);
        PyObject *t_BoundaryAttribute::wrap_Object(const BoundaryAttribute& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryAttribute::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryAttribute::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryAttribute), &PY_TYPE_DEF(BoundaryAttribute), module, "BoundaryAttribute", 0);
        }

        void t_BoundaryAttribute::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "class_", make_descriptor(BoundaryAttribute::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "wrapfn_", make_descriptor(t_BoundaryAttribute::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryAttribute::initializeClass, 1)))
            return NULL;
          return t_BoundaryAttribute::wrap_Object(BoundaryAttribute(((t_BoundaryAttribute *) arg)->object.this$));
        }
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryAttribute::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cbrt::class$ = NULL;
        jmethodID *Cbrt::mids$ = NULL;
        bool Cbrt::live$ = false;

        jclass Cbrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cbrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cbrt::Cbrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Cbrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cbrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
      namespace function {
        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args);

        static PyMethodDef t_Cbrt__methods_[] = {
          DECLARE_METHOD(t_Cbrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cbrt)[] = {
          { Py_tp_methods, t_Cbrt__methods_ },
          { Py_tp_init, (void *) t_Cbrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cbrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cbrt, t_Cbrt, Cbrt);

        void t_Cbrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Cbrt), &PY_TYPE_DEF(Cbrt), module, "Cbrt", 0);
        }

        void t_Cbrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "class_", make_descriptor(Cbrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "wrapfn_", make_descriptor(t_Cbrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cbrt::initializeClass, 1)))
            return NULL;
          return t_Cbrt::wrap_Object(Cbrt(((t_Cbrt *) arg)->object.this$));
        }
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cbrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds)
        {
          Cbrt object((jobject) NULL);

          INT_CALL(object = Cbrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/FixedPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *FixedPanel::class$ = NULL;
      jmethodID *FixedPanel::mids$ = NULL;
      bool FixedPanel::live$ = false;

      jclass FixedPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/FixedPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ce67d1a7dd3a9b5f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DZDDDD)V");
          mids$[mid_getNormal_ee088fe02cdd6745] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_38283c57554889c0] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedPanel::FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_ce67d1a7dd3a9b5f, a0.this$, a1, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_ee088fe02cdd6745], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_38283c57554889c0], a0.this$));
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
      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args);

      static PyMethodDef t_FixedPanel__methods_[] = {
        DECLARE_METHOD(t_FixedPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedPanel)[] = {
        { Py_tp_methods, t_FixedPanel__methods_ },
        { Py_tp_init, (void *) t_FixedPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(FixedPanel, t_FixedPanel, FixedPanel);

      void t_FixedPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedPanel), &PY_TYPE_DEF(FixedPanel), module, "FixedPanel", 0);
      }

      void t_FixedPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "class_", make_descriptor(FixedPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "wrapfn_", make_descriptor(t_FixedPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedPanel::initializeClass, 1)))
          return NULL;
        return t_FixedPanel::wrap_Object(FixedPanel(((t_FixedPanel *) arg)->object.this$));
      }
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        jboolean a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        FixedPanel object((jobject) NULL);

        if (!parseArgs(args, "kDZDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = FixedPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FixedPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerOrMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerOrMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerOrMultiplexer::live$ = false;

      jclass ConvergenceCheckerOrMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerOrMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_cb974f0dd5d76f8e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerOrMultiplexer::ConvergenceCheckerOrMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

      jboolean ConvergenceCheckerOrMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_cb974f0dd5d76f8e], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerOrMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerOrMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerOrMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerOrMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerOrMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerOrMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerOrMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerOrMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerOrMultiplexer, t_ConvergenceCheckerOrMultiplexer, ConvergenceCheckerOrMultiplexer);
      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_Object(const ConvergenceCheckerOrMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerOrMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerOrMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer), module, "ConvergenceCheckerOrMultiplexer", 0);
      }

      void t_ConvergenceCheckerOrMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "class_", make_descriptor(ConvergenceCheckerOrMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerOrMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerOrMultiplexer::wrap_Object(ConvergenceCheckerOrMultiplexer(((t_ConvergenceCheckerOrMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerOrMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerOrMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateNormalDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateNormalDistribution::mids$ = NULL;
        bool MixtureMultivariateNormalDistribution::live$ = false;

        jclass MixtureMultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_8fdd5e0b7c0b469f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_init$_542f41869eee30e4] = env->getMethodID(cls, "<init>", "([D[[D[[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8fdd5e0b7c0b469f, a0.this$, a1.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< JArray< jdouble > > > & a2) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_542f41869eee30e4, a0.this$, a1.this$, a2.this$)) {}
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args);
        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateNormalDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateNormalDistribution, t_MixtureMultivariateNormalDistribution, MixtureMultivariateNormalDistribution);
        PyObject *t_MixtureMultivariateNormalDistribution::wrap_Object(const MixtureMultivariateNormalDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateNormalDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateNormalDistribution), &PY_TYPE_DEF(MixtureMultivariateNormalDistribution), module, "MixtureMultivariateNormalDistribution", 0);
        }

        void t_MixtureMultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "class_", make_descriptor(MixtureMultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateNormalDistribution::wrap_Object(MixtureMultivariateNormalDistribution(((t_MixtureMultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< JArray< jdouble > > > a2((jobject) NULL);
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D[[[D", &a0, &a1, &a2))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
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
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *TimeSystem::class$ = NULL;
      jmethodID *TimeSystem::mids$ = NULL;
      bool TimeSystem::live$ = false;
      TimeSystem *TimeSystem::BEIDOU = NULL;
      TimeSystem *TimeSystem::GALILEO = NULL;
      TimeSystem *TimeSystem::GLONASS = NULL;
      TimeSystem *TimeSystem::GMT = NULL;
      TimeSystem *TimeSystem::GPS = NULL;
      TimeSystem *TimeSystem::IRNSS = NULL;
      TimeSystem *TimeSystem::QZSS = NULL;
      TimeSystem *TimeSystem::SBAS = NULL;
      TimeSystem *TimeSystem::TAI = NULL;
      TimeSystem *TimeSystem::UNKNOWN = NULL;
      TimeSystem *TimeSystem::UTC = NULL;

      jclass TimeSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/TimeSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getTimeScale_5a5ce7885daa8466] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_parseOneLetterCode_6997b6bf169d294d] = env->getStaticMethodID(cls, "parseOneLetterCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTimeSystem_6997b6bf169d294d] = env->getStaticMethodID(cls, "parseTimeSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTwoLettersCode_6997b6bf169d294d] = env->getStaticMethodID(cls, "parseTwoLettersCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_valueOf_6997b6bf169d294d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_values_5c1f5a36cc7a347b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/TimeSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new TimeSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/TimeSystem;"));
          GALILEO = new TimeSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/TimeSystem;"));
          GLONASS = new TimeSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/TimeSystem;"));
          GMT = new TimeSystem(env->getStaticObjectField(cls, "GMT", "Lorg/orekit/gnss/TimeSystem;"));
          GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/TimeSystem;"));
          IRNSS = new TimeSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/TimeSystem;"));
          QZSS = new TimeSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/TimeSystem;"));
          SBAS = new TimeSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/TimeSystem;"));
          TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/gnss/TimeSystem;"));
          UNKNOWN = new TimeSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/gnss/TimeSystem;"));
          UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/gnss/TimeSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TimeSystem::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
      }

      ::org::orekit::time::TimeScale TimeSystem::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5a5ce7885daa8466], a0.this$));
      }

      TimeSystem TimeSystem::parseOneLetterCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseOneLetterCode_6997b6bf169d294d], a0.this$));
      }

      TimeSystem TimeSystem::parseTimeSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTimeSystem_6997b6bf169d294d], a0.this$));
      }

      TimeSystem TimeSystem::parseTwoLettersCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTwoLettersCode_6997b6bf169d294d], a0.this$));
      }

      TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6997b6bf169d294d], a0.this$));
      }

      JArray< TimeSystem > TimeSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_5c1f5a36cc7a347b]));
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
      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self);
      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg);
      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeSystem_values(PyTypeObject *type);
      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data);
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
      static PyGetSetDef t_TimeSystem__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSystem, key),
        DECLARE_GET_FIELD(t_TimeSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSystem__methods_[] = {
        DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_TimeSystem, getTimeScale, METH_O),
        DECLARE_METHOD(t_TimeSystem, parseOneLetterCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTimeSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTwoLettersCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
        { Py_tp_methods, t_TimeSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
      PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
      }

      void t_TimeSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "BEIDOU", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GALILEO", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GLONASS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "IRNSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "QZSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SBAS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UNKNOWN", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UNKNOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
      }

      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
          return NULL;
        return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
      }
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseOneLetterCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseOneLetterCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTimeSystem(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTimeSystem", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTwoLettersCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTwoLettersCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::valueOf(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_TimeSystem_values(PyTypeObject *type)
      {
        JArray< TimeSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::values());
        return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
      }
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter::class$ = NULL;
              jmethodID *StreamingOemWriter::mids$ = NULL;
              bool StreamingOemWriter::live$ = false;

              jclass StreamingOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9bddc591c356b350] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)V");
                  mids$[mid_init$_84d0e31634d86141] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Z)V");
                  mids$[mid_init$_173d00a575c7ba59] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;ZZ)V");
                  mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_edda82a133394bb2] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9bddc591c356b350, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84d0e31634d86141, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_173d00a575c7ba59, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5)) {}

              void StreamingOemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter StreamingOemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_edda82a133394bb2]));
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
          namespace odm {
            namespace oem {
              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self);
              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self);

              static PyMethodDef t_StreamingOemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter, t_StreamingOemWriter, StreamingOemWriter);

              void t_StreamingOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter), &PY_TYPE_DEF(StreamingOemWriter), module, "StreamingOemWriter", 0);
              }

              void t_StreamingOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "class_", make_descriptor(StreamingOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter::wrap_Object(StreamingOemWriter(((t_StreamingOemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    jboolean a5;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_StreamingOemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouGeo::class$ = NULL;
        jmethodID *BeidouGeo::mids$ = NULL;
        bool BeidouGeo::live$ = false;

        jclass BeidouGeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouGeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f1fb4db65d1e285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouGeo::BeidouGeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1f1fb4db65d1e285, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouGeo__methods_[] = {
          DECLARE_METHOD(t_BeidouGeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouGeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouGeo)[] = {
          { Py_tp_methods, t_BeidouGeo__methods_ },
          { Py_tp_init, (void *) t_BeidouGeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouGeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouGeo, t_BeidouGeo, BeidouGeo);

        void t_BeidouGeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouGeo), &PY_TYPE_DEF(BeidouGeo), module, "BeidouGeo", 0);
        }

        void t_BeidouGeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "class_", make_descriptor(BeidouGeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "wrapfn_", make_descriptor(t_BeidouGeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouGeo::initializeClass, 1)))
            return NULL;
          return t_BeidouGeo::wrap_Object(BeidouGeo(((t_BeidouGeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouGeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouGeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouGeo(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$BooleanConsumer::class$ = NULL;
            jmethodID *ParseToken$BooleanConsumer::mids$ = NULL;
            bool ParseToken$BooleanConsumer::live$ = false;

            jclass ParseToken$BooleanConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_b35db77cae58639e] = env->getMethodID(cls, "accept", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$BooleanConsumer::accept(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_b35db77cae58639e], a0);
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
            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$BooleanConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$BooleanConsumer)[] = {
              { Py_tp_methods, t_ParseToken$BooleanConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$BooleanConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$BooleanConsumer, t_ParseToken$BooleanConsumer, ParseToken$BooleanConsumer);

            void t_ParseToken$BooleanConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$BooleanConsumer), &PY_TYPE_DEF(ParseToken$BooleanConsumer), module, "ParseToken$BooleanConsumer", 0);
            }

            void t_ParseToken$BooleanConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "class_", make_descriptor(ParseToken$BooleanConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "wrapfn_", make_descriptor(t_ParseToken$BooleanConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$BooleanConsumer::wrap_Object(ParseToken$BooleanConsumer(((t_ParseToken$BooleanConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableMatrixFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableMatrixFunction::mids$ = NULL;
        bool UnivariateDifferentiableMatrixFunction::live$ = false;

        jclass UnivariateDifferentiableMatrixFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_83edeb2bcb996292] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > UnivariateDifferentiableMatrixFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > >(env->callObjectMethod(this$, mids$[mid_value_83edeb2bcb996292], a0.this$));
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
      namespace differentiation {
        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableMatrixFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableMatrixFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableMatrixFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableMatrixFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateMatrixFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableMatrixFunction, t_UnivariateDifferentiableMatrixFunction, UnivariateDifferentiableMatrixFunction);

        void t_UnivariateDifferentiableMatrixFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableMatrixFunction), &PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction), module, "UnivariateDifferentiableMatrixFunction", 0);
        }

        void t_UnivariateDifferentiableMatrixFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "class_", make_descriptor(UnivariateDifferentiableMatrixFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableMatrixFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableMatrixFunction::wrap_Object(UnivariateDifferentiableMatrixFunction(((t_UnivariateDifferentiableMatrixFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableMatrixFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *NarrowLaneCombination::class$ = NULL;
          jmethodID *NarrowLaneCombination::mids$ = NULL;
          bool NarrowLaneCombination::live$ = false;

          jclass NarrowLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/NarrowLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_NarrowLaneCombination__methods_[] = {
            DECLARE_METHOD(t_NarrowLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NarrowLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NarrowLaneCombination)[] = {
            { Py_tp_methods, t_NarrowLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NarrowLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(NarrowLaneCombination, t_NarrowLaneCombination, NarrowLaneCombination);

          void t_NarrowLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(NarrowLaneCombination), &PY_TYPE_DEF(NarrowLaneCombination), module, "NarrowLaneCombination", 0);
          }

          void t_NarrowLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "class_", make_descriptor(NarrowLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "wrapfn_", make_descriptor(t_NarrowLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NarrowLaneCombination::initializeClass, 1)))
              return NULL;
            return t_NarrowLaneCombination::wrap_Object(NarrowLaneCombination(((t_NarrowLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NarrowLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedRotation.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedRotation::class$ = NULL;
        jmethodID *FixedRotation::mids$ = NULL;
        bool FixedRotation::live$ = false;

        jclass FixedRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_911ca268004e6492] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_228f1c415ce966c1] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_abcb5ae819a3f86b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedRotation::FixedRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_911ca268004e6492, a0.this$, a1.this$, a2)) {}

        ::java::util::stream::Stream FixedRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_228f1c415ce966c1], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_abcb5ae819a3f86b], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self);
        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args);
        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data);
        static PyGetSetDef t_FixedRotation__fields_[] = {
          DECLARE_GET_FIELD(t_FixedRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedRotation__methods_[] = {
          DECLARE_METHOD(t_FixedRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedRotation)[] = {
          { Py_tp_methods, t_FixedRotation__methods_ },
          { Py_tp_init, (void *) t_FixedRotation_init_ },
          { Py_tp_getset, t_FixedRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedRotation, t_FixedRotation, FixedRotation);

        void t_FixedRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedRotation), &PY_TYPE_DEF(FixedRotation), module, "FixedRotation", 0);
        }

        void t_FixedRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "class_", make_descriptor(FixedRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "wrapfn_", make_descriptor(t_FixedRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedRotation::initializeClass, 1)))
            return NULL;
          return t_FixedRotation::wrap_Object(FixedRotation(((t_FixedRotation *) arg)->object.this$));
        }
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          FixedRotation object((jobject) NULL);

          if (!parseArgs(args, "skD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FixedRotation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmData::class$ = NULL;
              jmethodID *SsrIgmData::mids$ = NULL;
              bool SsrIgmData::live$ = false;

              jclass SsrIgmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmData::SsrIgmData() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIgmData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_d6ab429752e7c267]);
              }

              void SsrIgmData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_8fd427ab23829bf5], a0);
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
              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self);
              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg);
              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data);
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmData__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmData__methods_[] = {
                DECLARE_METHOD(t_SsrIgmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmData)[] = {
                { Py_tp_methods, t_SsrIgmData__methods_ },
                { Py_tp_init, (void *) t_SsrIgmData_init_ },
                { Py_tp_getset, t_SsrIgmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIgmData, t_SsrIgmData, SsrIgmData);

              void t_SsrIgmData::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmData), &PY_TYPE_DEF(SsrIgmData), module, "SsrIgmData", 0);
              }

              void t_SsrIgmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "class_", make_descriptor(SsrIgmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "wrapfn_", make_descriptor(t_SsrIgmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmData::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmData::wrap_Object(SsrIgmData(((t_SsrIgmData *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmData object((jobject) NULL);

                INT_CALL(object = SsrIgmData());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
                return -1;
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
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreGaussIntegrator::live$ = false;

        jclass IterativeLegendreGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aaed259e1b5f1153] = env->getMethodID(cls, "<init>", "(IDD)V");
            mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_init$_afba34ea3008b8dd] = env->getMethodID(cls, "<init>", "(IDDII)V");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aaed259e1b5f1153, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_afba34ea3008b8dd, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_IterativeLegendreGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreGaussIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreGaussIntegrator, t_IterativeLegendreGaussIntegrator, IterativeLegendreGaussIntegrator);

        void t_IterativeLegendreGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreGaussIntegrator), module, "IterativeLegendreGaussIntegrator", 0);
        }

        void t_IterativeLegendreGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "class_", make_descriptor(IterativeLegendreGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreGaussIntegrator::wrap_Object(IterativeLegendreGaussIntegrator(((t_IterativeLegendreGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jint a1;
              jint a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDII", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2, a3, a4));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonMappingFunction::class$ = NULL;
          jmethodID *PythonMappingFunction::mids$ = NULL;
          bool PythonMappingFunction::live$ = false;

          jclass PythonMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMappingFunction::PythonMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMappingFunction::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self);
          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data);
          static PyGetSetDef t_PythonMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMappingFunction)[] = {
            { Py_tp_methods, t_PythonMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonMappingFunction_init_ },
            { Py_tp_getset, t_PythonMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMappingFunction, t_PythonMappingFunction, PythonMappingFunction);

          void t_PythonMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMappingFunction), &PY_TYPE_DEF(PythonMappingFunction), module, "PythonMappingFunction", 1);
          }

          void t_PythonMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "class_", make_descriptor(PythonMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "wrapfn_", make_descriptor(t_PythonMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonMappingFunction_mappingFactors0 },
              { "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonMappingFunction_mappingFactors1 },
              { "pythonDecRef", "()V", (void *) t_PythonMappingFunction_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonMappingFunction::wrap_Object(PythonMappingFunction(((t_PythonMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMappingFunction_init_(t_PythonMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMappingFunction_finalize(t_PythonMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMappingFunction_pythonExtension(t_PythonMappingFunction *self, PyObject *args)
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors0(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "dOO", (double) a0, o1, o2);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("mappingFactors", result);
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

          static jobject JNICALL t_PythonMappingFunction_mappingFactors1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactors", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactors", result);
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

          static void JNICALL t_PythonMappingFunction_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMappingFunction::mids$[PythonMappingFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMappingFunction_get__self(t_PythonMappingFunction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeWriter::class$ = NULL;
              jmethodID *AttitudeWriter::mids$ = NULL;
              bool AttitudeWriter::live$ = false;

              jclass AttitudeWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c48c8a784d3f8fab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_14fbf989f0a2cdb3] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeWriter::AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a0, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c48c8a784d3f8fab, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void AttitudeWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_14fbf989f0a2cdb3], a0.this$, a1.this$);
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
              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args);

              static PyMethodDef t_AttitudeWriter__methods_[] = {
                DECLARE_METHOD(t_AttitudeWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeWriter)[] = {
                { Py_tp_methods, t_AttitudeWriter__methods_ },
                { Py_tp_init, (void *) t_AttitudeWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeWriter, t_AttitudeWriter, AttitudeWriter);

              void t_AttitudeWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeWriter), &PY_TYPE_DEF(AttitudeWriter), module, "AttitudeWriter", 0);
              }

              void t_AttitudeWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "class_", make_descriptor(AttitudeWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "wrapfn_", make_descriptor(t_AttitudeWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeWriter::initializeClass, 1)))
                  return NULL;
                return t_AttitudeWriter::wrap_Object(AttitudeWriter(((t_AttitudeWriter *) arg)->object.this$));
              }
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                AttitudeWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = AttitudeWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
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
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MassDepletionDelay::class$ = NULL;
          jmethodID *MassDepletionDelay::mids$ = NULL;
          bool MassDepletionDelay::live$ = false;
          ::java::lang::String *MassDepletionDelay::PREFIX$ = NULL;

          jclass MassDepletionDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MassDepletionDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aab438abe28484a1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;)V");
              mids$[mid_combinedDerivatives_3642c368f508585f] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREFIX$ = new ::java::lang::String(env->getStaticObjectField(cls, "PREFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MassDepletionDelay::MassDepletionDelay(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::forces::maneuvers::Maneuver & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aab438abe28484a1, a0.this$, a1, a2.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives MassDepletionDelay::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_3642c368f508585f], a0.this$));
          }

          jint MassDepletionDelay::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          ::java::lang::String MassDepletionDelay::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          void MassDepletionDelay::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        namespace jacobians {
          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg);
          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args);
          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data);
          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data);
          static PyGetSetDef t_MassDepletionDelay__fields_[] = {
            DECLARE_GET_FIELD(t_MassDepletionDelay, dimension),
            DECLARE_GET_FIELD(t_MassDepletionDelay, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MassDepletionDelay__methods_[] = {
            DECLARE_METHOD(t_MassDepletionDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_MassDepletionDelay, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, getName, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MassDepletionDelay)[] = {
            { Py_tp_methods, t_MassDepletionDelay__methods_ },
            { Py_tp_init, (void *) t_MassDepletionDelay_init_ },
            { Py_tp_getset, t_MassDepletionDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MassDepletionDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MassDepletionDelay, t_MassDepletionDelay, MassDepletionDelay);

          void t_MassDepletionDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(MassDepletionDelay), &PY_TYPE_DEF(MassDepletionDelay), module, "MassDepletionDelay", 0);
          }

          void t_MassDepletionDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "class_", make_descriptor(MassDepletionDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "wrapfn_", make_descriptor(t_MassDepletionDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "boxfn_", make_descriptor(boxObject));
            env->getClass(MassDepletionDelay::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "PREFIX", make_descriptor(j2p(*MassDepletionDelay::PREFIX$)));
          }

          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MassDepletionDelay::initializeClass, 1)))
              return NULL;
            return t_MassDepletionDelay::wrap_Object(MassDepletionDelay(((t_MassDepletionDelay *) arg)->object.this$));
          }
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MassDepletionDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::forces::maneuvers::Maneuver a2((jobject) NULL);
            MassDepletionDelay object((jobject) NULL);

            if (!parseArgs(args, "sZk", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MassDepletionDelay(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args)
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

          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *FieldMultivariateVectorFunction::mids$ = NULL;
      bool FieldMultivariateVectorFunction::live$ = false;

      jclass FieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateVectorFunction_fa86f4f36e82d28c] = env->getMethodID(cls, "toCalculusFieldMultivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateVectorFunction;");
          mids$[mid_value_38b803e86c0bea36] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction FieldMultivariateVectorFunction::toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateVectorFunction_fa86f4f36e82d28c], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_38b803e86c0bea36], a0.this$));
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
      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, toCalculusFieldMultivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateVectorFunction, t_FieldMultivariateVectorFunction, FieldMultivariateVectorFunction);

      void t_FieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateVectorFunction), &PY_TYPE_DEF(FieldMultivariateVectorFunction), module, "FieldMultivariateVectorFunction", 0);
      }

      void t_FieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "class_", make_descriptor(FieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateVectorFunction::wrap_Object(FieldMultivariateVectorFunction(((t_FieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log::class$ = NULL;
        jmethodID *Log::mids$ = NULL;
        bool Log::live$ = false;

        jclass Log::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log::Log() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Log::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
      namespace function {
        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log_value(t_Log *self, PyObject *args);

        static PyMethodDef t_Log__methods_[] = {
          DECLARE_METHOD(t_Log, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log)[] = {
          { Py_tp_methods, t_Log__methods_ },
          { Py_tp_init, (void *) t_Log_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log, t_Log, Log);

        void t_Log::install(PyObject *module)
        {
          installType(&PY_TYPE(Log), &PY_TYPE_DEF(Log), module, "Log", 0);
        }

        void t_Log::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "class_", make_descriptor(Log::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "wrapfn_", make_descriptor(t_Log::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log::initializeClass, 1)))
            return NULL;
          return t_Log::wrap_Object(Log(((t_Log *) arg)->object.this$));
        }
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds)
        {
          Log object((jobject) NULL);

          INT_CALL(object = Log());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log_value(t_Log *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *AbstractSelfFeedingLoader::mids$ = NULL;
      bool AbstractSelfFeedingLoader::live$ = false;

      jclass AbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_feed_80470b81e91fe5f9] = env->getMethodID(cls, "feed", "(Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_setSupportedNames_105e1eadb709d9ac] = env->getMethodID(cls, "setSupportedNames", "(Ljava/lang/String;)V");
          mids$[mid_getDataProvidersManager_f0a5ee63a7def5aa] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractSelfFeedingLoader::AbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_AbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractSelfFeedingLoader, t_AbstractSelfFeedingLoader, AbstractSelfFeedingLoader);

      void t_AbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractSelfFeedingLoader), &PY_TYPE_DEF(AbstractSelfFeedingLoader), module, "AbstractSelfFeedingLoader", 0);
      }

      void t_AbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "class_", make_descriptor(AbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_AbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractSelfFeedingLoader::wrap_Object(AbstractSelfFeedingLoader(((t_AbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        AbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = AbstractSelfFeedingLoader(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$EphemerisSegment::class$ = NULL;
        jmethodID *EphemerisFile$EphemerisSegment::mids$ = NULL;
        bool EphemerisFile$EphemerisSegment::live$ = false;

        jclass EphemerisFile$EphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$EphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_6c7bb9da59d24b03] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_b59efa08d1230cd1] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::CartesianDerivativesFilter EphemerisFile$EphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::java::util::List EphemerisFile$EphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::frames::Frame EphemerisFile$EphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
        }

        jint EphemerisFile$EphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble EphemerisFile$EphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6c7bb9da59d24b03]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$EphemerisSegment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_b59efa08d1230cd1], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$EphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data);
        static PyGetSetDef t_EphemerisFile$EphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, frame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, start),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$EphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$EphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$EphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$EphemerisSegment)[] = {
          { Py_tp_methods, t_EphemerisFile$EphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$EphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$EphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$EphemerisSegment, t_EphemerisFile$EphemerisSegment, EphemerisFile$EphemerisSegment);
        PyObject *t_EphemerisFile$EphemerisSegment::wrap_Object(const EphemerisFile$EphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$EphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFile$EphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$EphemerisSegment *self = (t_EphemerisFile$EphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFile$EphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$EphemerisSegment), &PY_TYPE_DEF(EphemerisFile$EphemerisSegment), module, "EphemerisFile$EphemerisSegment", 0);
        }

        void t_EphemerisFile$EphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "class_", make_descriptor(EphemerisFile$EphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "wrapfn_", make_descriptor(t_EphemerisFile$EphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$EphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$EphemerisSegment::wrap_Object(EphemerisFile$EphemerisSegment(((t_EphemerisFile$EphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$EphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_of_(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getAvailableDerivatives(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getCoordinates(t_EphemerisFile$EphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInertialFrame(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getInterpolationSamples(t_EphemerisFile$EphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getMu(t_EphemerisFile$EphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getPropagator(t_EphemerisFile$EphemerisSegment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStart(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_getStop(t_EphemerisFile$EphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$EphemerisSegment_get__parameters_(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__availableDerivatives(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__coordinates(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__frame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__inertialFrame(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__interpolationSamples(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__mu(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__propagator(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__start(t_EphemerisFile$EphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$EphemerisSegment_get__stop(t_EphemerisFile$EphemerisSegment *self, void *data)
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
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbit::class$ = NULL;
      jmethodID *FieldOrbit::mids$ = NULL;
      bool FieldOrbit::live$ = false;

      jclass FieldOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_210d5c728d3233b4] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_08d37e3f77b7239d] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_08d37e3f77b7239d] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getJacobianWrtCartesian_27db980f74f195ac] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getJacobianWrtParameters_27db980f74f195ac] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getKeplerianMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_08d37e3f77b7239d] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDotWrtA_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_08d37e3f77b7239d] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_cb22ebaaad002a3b] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_d1b42a6748e907f9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_04c84225ba0acc81] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_eee3de00fe971136] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_84983ae5cc779277] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_toOrbit_fb241cd44f6e41bc] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getZero_08d37e3f77b7239d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOne_08d37e3f77b7239d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_d1b42a6748e907f9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_fillHalfRow_62c0eed563eac9c0] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_46329c3a295ba685] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_af0cc434d96536f1] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_69539f597b368614] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_956e41155816d382] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_fillHalfRow_23e2c3dbac059c05] = env->getMethodID(cls, "fillHalfRow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;I)V");
          mids$[mid_hasNonKeplerianAcceleration_ba66721b6dca6a2a] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Z");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_210d5c728d3233b4], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_08d37e3f77b7239d]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldOrbit::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d]));
      }

      ::org::orekit::frames::Frame FieldOrbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_08d37e3f77b7239d]));
      }

      void FieldOrbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_27db980f74f195ac], a0.this$, a1.this$);
      }

      void FieldOrbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_27db980f74f195ac], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMeanAnomalyDotWrtA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldOrbit::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_08d37e3f77b7239d]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_be698fa91827b9b2]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cb22ebaaad002a3b], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrbit::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldOrbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_04c84225ba0acc81], a0.this$));
      }

      ::org::orekit::orbits::OrbitType FieldOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean FieldOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      jboolean FieldOrbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_eee3de00fe971136]);
      }

      FieldOrbit FieldOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_84983ae5cc779277], a0.this$));
      }

      ::org::orekit::orbits::Orbit FieldOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_toOrbit_fb241cd44f6e41bc]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args);
      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg);
      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self);
      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data);
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data);
      static PyGetSetDef t_FieldOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbit, a),
        DECLARE_GET_FIELD(t_FieldOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldOrbit, date),
        DECLARE_GET_FIELD(t_FieldOrbit, e),
        DECLARE_GET_FIELD(t_FieldOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldOrbit, elliptical),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, frame),
        DECLARE_GET_FIELD(t_FieldOrbit, hx),
        DECLARE_GET_FIELD(t_FieldOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldOrbit, hy),
        DECLARE_GET_FIELD(t_FieldOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldOrbit, i),
        DECLARE_GET_FIELD(t_FieldOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldOrbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldOrbit, lE),
        DECLARE_GET_FIELD(t_FieldOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lM),
        DECLARE_GET_FIELD(t_FieldOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldOrbit, lv),
        DECLARE_GET_FIELD(t_FieldOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldOrbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_FieldOrbit, mu),
        DECLARE_GET_FIELD(t_FieldOrbit, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldOrbit, position),
        DECLARE_GET_FIELD(t_FieldOrbit, type),
        DECLARE_GET_FIELD(t_FieldOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrbit, shiftedBy, METH_O),
        DECLARE_METHOD(t_FieldOrbit, toOrbit, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbit)[] = {
        { Py_tp_methods, t_FieldOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrbit, t_FieldOrbit, FieldOrbit);
      PyObject *t_FieldOrbit::wrap_Object(const FieldOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbit *self = (t_FieldOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbit), &PY_TYPE_DEF(FieldOrbit), module, "FieldOrbit", 0);
      }

      void t_FieldOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "class_", make_descriptor(FieldOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "wrapfn_", make_descriptor(t_FieldOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldOrbit::wrap_Object(FieldOrbit(((t_FieldOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbit_of_(t_FieldOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrbit_addKeplerContribution(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getADot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getADot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getDate(t_FieldOrbit *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldOrbit_getE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialExDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getEquinoctialEyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getFrame(t_FieldOrbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHx(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHxDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHxDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHy(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getHyDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getI(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getIDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getIDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getJacobianWrtCartesian(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getJacobianWrtParameters(t_FieldOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getKeplerianMeanMotion(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getKeplerianPeriod(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLE(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLEDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLM(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLMDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLv(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getLvDot(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLvDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMeanAnomalyDotWrtA(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getMu(t_FieldOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_getPVCoordinates(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getPosition(t_FieldOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldOrbit_getType(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldOrbit_hasDerivatives(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_isElliptical(t_FieldOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldOrbit_shiftedBy(t_FieldOrbit *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldOrbit result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldOrbit_toOrbit(t_FieldOrbit *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }
      static PyObject *t_FieldOrbit_get__parameters_(t_FieldOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbit_get__a(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__aDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__date(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__e(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__eDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__elliptical(t_FieldOrbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialExDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__equinoctialEyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__frame(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hx(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hxDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hy(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__hyDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__i(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__iDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianMeanMotion(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__keplerianPeriod(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lE(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lEDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lM(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lMDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lv(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__lvDot(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__meanAnomalyDotWrtA(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__mu(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__pVCoordinates(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__position(t_FieldOrbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldOrbit_get__type(t_FieldOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonODEIntegratorBuilder::mids$ = NULL;
        bool PythonODEIntegratorBuilder::live$ = false;

        jclass PythonODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonODEIntegratorBuilder::PythonODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace conversion {
        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self);
        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonODEIntegratorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonODEIntegratorBuilder, t_PythonODEIntegratorBuilder, PythonODEIntegratorBuilder);

        void t_PythonODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonODEIntegratorBuilder), &PY_TYPE_DEF(PythonODEIntegratorBuilder), module, "PythonODEIntegratorBuilder", 1);
        }

        void t_PythonODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "class_", make_descriptor(PythonODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;", (void *) t_PythonODEIntegratorBuilder_buildIntegrator0 },
            { "pythonDecRef", "()V", (void *) t_PythonODEIntegratorBuilder_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonODEIntegratorBuilder::wrap_Object(PythonODEIntegratorBuilder(((t_PythonODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmWriter::class$ = NULL;
              jmethodID *OcmWriter::mids$ = NULL;
              bool OcmWriter::live$ = false;
              jdouble OcmWriter::CCSDS_OCM_VERS = (jdouble) 0;
              jint OcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cf7b4d6b4ef27960] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;)V");
                  mids$[mid_getEquatorialRadius_9981f74b2d109da6] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFlattening_9981f74b2d109da6] = env->getMethodID(cls, "getFlattening", "()D");
                  mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OCM_VERS = env->getStaticDoubleField(cls, "CCSDS_OCM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmWriter::OcmWriter(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_cf7b4d6b4ef27960, a0.this$, a1, a2, a3.this$)) {}

              jdouble OcmWriter::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_9981f74b2d109da6]);
              }

              jdouble OcmWriter::getFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFlattening_9981f74b2d109da6]);
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args);
              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self);
              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self);
              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data);
              static PyGetSetDef t_OcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OcmWriter, equatorialRadius),
                DECLARE_GET_FIELD(t_OcmWriter, flattening),
                DECLARE_GET_FIELD(t_OcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmWriter__methods_[] = {
                DECLARE_METHOD(t_OcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmWriter, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_OcmWriter, getFlattening, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmWriter)[] = {
                { Py_tp_methods, t_OcmWriter__methods_ },
                { Py_tp_init, (void *) t_OcmWriter_init_ },
                { Py_tp_getset, t_OcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OcmWriter, t_OcmWriter, OcmWriter);
              PyObject *t_OcmWriter::wrap_Object(const OcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmWriter), &PY_TYPE_DEF(OcmWriter), module, "OcmWriter", 0);
              }

              void t_OcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "class_", make_descriptor(OcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "wrapfn_", make_descriptor(t_OcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "CCSDS_OCM_VERS", make_descriptor(OcmWriter::CCSDS_OCM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "KVN_PADDING_WIDTH", make_descriptor(OcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmWriter::initializeClass, 1)))
                  return NULL;
                return t_OcmWriter::wrap_Object(OcmWriter(((t_OcmWriter *) arg)->object.this$));
              }
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                jdouble a2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                OcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KDDk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = OcmWriter(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(Ocm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlattening());
                return PyFloat_FromDouble((double) result);
              }
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFlattening());
                return PyFloat_FromDouble((double) value);
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
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *FieldButcherArrayProvider::class$ = NULL;
        jmethodID *FieldButcherArrayProvider::mids$ = NULL;
        bool FieldButcherArrayProvider::live$ = false;

        jclass FieldButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/FieldButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldButcherArrayProvider::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
      namespace nonstiff {
        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args);
        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data);
        static PyGetSetDef t_FieldButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, c),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_FieldButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldButcherArrayProvider)[] = {
          { Py_tp_methods, t_FieldButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldButcherArrayProvider, t_FieldButcherArrayProvider, FieldButcherArrayProvider);
        PyObject *t_FieldButcherArrayProvider::wrap_Object(const FieldButcherArrayProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldButcherArrayProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldButcherArrayProvider), &PY_TYPE_DEF(FieldButcherArrayProvider), module, "FieldButcherArrayProvider", 0);
        }

        void t_FieldButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "class_", make_descriptor(FieldButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "wrapfn_", make_descriptor(t_FieldButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_FieldButcherArrayProvider::wrap_Object(FieldButcherArrayProvider(((t_FieldButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
