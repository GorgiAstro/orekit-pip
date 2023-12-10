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
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidObjectException::InvalidObjectException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/util/TimeZone.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/util/Date.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/TimeZone.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_getAvailableIDs_0f62ccf08eef5924] = env->getStaticMethodID(cls, "getAvailableIDs", "()[Ljava/lang/String;");
        mids$[mid_getAvailableIDs_7a8dea0226b5c4de] = env->getStaticMethodID(cls, "getAvailableIDs", "(I)[Ljava/lang/String;");
        mids$[mid_getDSTSavings_f2f64475e4580546] = env->getMethodID(cls, "getDSTSavings", "()I");
        mids$[mid_getDefault_2bae121e118f90cd] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/TimeZone;");
        mids$[mid_getDisplayName_0090f7797e403f43] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_bab3be9b232acc5a] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_fc552db7a75e88b2] = env->getMethodID(cls, "getDisplayName", "(ZI)Ljava/lang/String;");
        mids$[mid_getDisplayName_9b86a39bda85e3a9] = env->getMethodID(cls, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getID_0090f7797e403f43] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
        mids$[mid_getOffset_81b31113dbb4e784] = env->getMethodID(cls, "getOffset", "(J)I");
        mids$[mid_getOffset_2d3410165b8129ba] = env->getMethodID(cls, "getOffset", "(IIIIII)I");
        mids$[mid_getRawOffset_f2f64475e4580546] = env->getMethodID(cls, "getRawOffset", "()I");
        mids$[mid_getTimeZone_79ef52cf2a3dbdd1] = env->getStaticMethodID(cls, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
        mids$[mid_hasSameRules_f43e15a16368e629] = env->getMethodID(cls, "hasSameRules", "(Ljava/util/TimeZone;)Z");
        mids$[mid_inDaylightTime_7b40bfcd353b1f24] = env->getMethodID(cls, "inDaylightTime", "(Ljava/util/Date;)Z");
        mids$[mid_observesDaylightTime_e470b6d9e0d979db] = env->getMethodID(cls, "observesDaylightTime", "()Z");
        mids$[mid_setDefault_c8bdf74fe0df1c6e] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/TimeZone;)V");
        mids$[mid_setID_e939c6558ae8d313] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
        mids$[mid_setRawOffset_0a2a1ac2721c0336] = env->getMethodID(cls, "setRawOffset", "(I)V");
        mids$[mid_useDaylightTime_e470b6d9e0d979db] = env->getMethodID(cls, "useDaylightTime", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        LONG = env->getStaticIntField(cls, "LONG");
        SHORT = env->getStaticIntField(cls, "SHORT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TimeZone::TimeZone() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ::java::lang::Object TimeZone::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_0f62ccf08eef5924]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_7a8dea0226b5c4de], a0));
    }

    jint TimeZone::getDSTSavings() const
    {
      return env->callIntMethod(this$, mids$[mid_getDSTSavings_f2f64475e4580546]);
    }

    TimeZone TimeZone::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getDefault_2bae121e118f90cd]));
    }

    ::java::lang::String TimeZone::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_0090f7797e403f43]));
    }

    ::java::lang::String TimeZone::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_bab3be9b232acc5a], a0.this$));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_fc552db7a75e88b2], a0, a1));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1, const ::java::util::Locale & a2) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_9b86a39bda85e3a9], a0, a1, a2.this$));
    }

    ::java::lang::String TimeZone::getID() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_0090f7797e403f43]));
    }

    jint TimeZone::getOffset(jlong a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_81b31113dbb4e784], a0);
    }

    jint TimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_2d3410165b8129ba], a0, a1, a2, a3, a4, a5);
    }

    jint TimeZone::getRawOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getRawOffset_f2f64475e4580546]);
    }

    TimeZone TimeZone::getTimeZone(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getTimeZone_79ef52cf2a3dbdd1], a0.this$));
    }

    jboolean TimeZone::hasSameRules(const TimeZone & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasSameRules_f43e15a16368e629], a0.this$);
    }

    jboolean TimeZone::inDaylightTime(const ::java::util::Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_inDaylightTime_7b40bfcd353b1f24], a0.this$);
    }

    jboolean TimeZone::observesDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_observesDaylightTime_e470b6d9e0d979db]);
    }

    void TimeZone::setDefault(const TimeZone & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_c8bdf74fe0df1c6e], a0.this$);
    }

    void TimeZone::setID(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setID_e939c6558ae8d313], a0.this$);
    }

    void TimeZone::setRawOffset(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setRawOffset_0a2a1ac2721c0336], a0);
    }

    jboolean TimeZone::useDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_useDaylightTime_e470b6d9e0d979db]);
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    UnsupportedOperationException::UnsupportedOperationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    UnsupportedOperationException::UnsupportedOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
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
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Flushable::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NumberFormatException::NumberFormatException() : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    NumberFormatException::NumberFormatException(const ::java::lang::String & a0) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/util/Properties.h"
#include "java/io/IOException.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/util/Collection.h"
#include "java/io/PrintStream.h"
#include "java/io/PrintWriter.h"
#include "java/util/Set.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "java/io/Reader.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_229c87223f486349] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_229c87223f486349] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_44964b2b3d187632] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_286de79696ab0806] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getProperty_43625fc1c3d86afe] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_01d87ea922ecee51] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_44964b2b3d187632] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_list_97a189d81f6ca857] = env->getMethodID(cls, "list", "(Ljava/io/PrintStream;)V");
        mids$[mid_list_6f85f82c503eab85] = env->getMethodID(cls, "list", "(Ljava/io/PrintWriter;)V");
        mids$[mid_load_a51aa99816400fdd] = env->getMethodID(cls, "load", "(Ljava/io/InputStream;)V");
        mids$[mid_load_a1c6153fa427d8a7] = env->getMethodID(cls, "load", "(Ljava/io/Reader;)V");
        mids$[mid_loadFromXML_a51aa99816400fdd] = env->getMethodID(cls, "loadFromXML", "(Ljava/io/InputStream;)V");
        mids$[mid_propertyNames_44964b2b3d187632] = env->getMethodID(cls, "propertyNames", "()Ljava/util/Enumeration;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_286de79696ab0806] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_f8c930c8a53ce61d] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_286de79696ab0806] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9f7c677a07c1445a] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_save_5c4f71d269199e10] = env->getMethodID(cls, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_setProperty_9bef492a1e67d8cc] = env->getMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_store_5c4f71d269199e10] = env->getMethodID(cls, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_store_7a07216b63c74a11] = env->getMethodID(cls, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
        mids$[mid_storeToXML_5c4f71d269199e10] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_storeToXML_d898b329cc2135e8] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_stringPropertyNames_e9e1a6780fe94297] = env->getMethodID(cls, "stringPropertyNames", "()Ljava/util/Set;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_7ae3461a92a43152] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Properties::Properties() : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Properties::Properties(jint a0) : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    void Properties::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ::java::lang::Object Properties::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jboolean Properties::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean Properties::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_229c87223f486349], a0.this$);
    }

    jboolean Properties::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_229c87223f486349], a0.this$);
    }

    ::java::util::Enumeration Properties::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_44964b2b3d187632]));
    }

    ::java::util::Set Properties::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    jboolean Properties::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object Properties::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    ::java::lang::Object Properties::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_43625fc1c3d86afe], a0.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_01d87ea922ecee51], a0.this$, a1.this$));
    }

    jint Properties::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Properties::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Set Properties::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    ::java::util::Enumeration Properties::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_44964b2b3d187632]));
    }

    void Properties::list(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_97a189d81f6ca857], a0.this$);
    }

    void Properties::list(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_6f85f82c503eab85], a0.this$);
    }

    void Properties::load(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_a51aa99816400fdd], a0.this$);
    }

    void Properties::load(const ::java::io::Reader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_a1c6153fa427d8a7], a0.this$);
    }

    void Properties::loadFromXML(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_loadFromXML_a51aa99816400fdd], a0.this$);
    }

    ::java::util::Enumeration Properties::propertyNames() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_propertyNames_44964b2b3d187632]));
    }

    ::java::lang::Object Properties::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    void Properties::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
    }

    ::java::lang::Object Properties::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::Object Properties::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jboolean Properties::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_f8c930c8a53ce61d], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_286de79696ab0806], a0.this$, a1.this$));
    }

    jboolean Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9f7c677a07c1445a], a0.this$, a1.this$, a2.this$);
    }

    void Properties::save(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_save_5c4f71d269199e10], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setProperty_9bef492a1e67d8cc], a0.this$, a1.this$));
    }

    jint Properties::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    void Properties::store(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_5c4f71d269199e10], a0.this$, a1.this$);
    }

    void Properties::store(const ::java::io::Writer & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_7a07216b63c74a11], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_5c4f71d269199e10], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_d898b329cc2135e8], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Set Properties::stringPropertyNames() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_stringPropertyNames_e9e1a6780fe94297]));
    }

    ::java::lang::String Properties::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::util::Collection Properties::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
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
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/String.h"
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
        mids$[mid_valueOf_0c48aeaef0e545e1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;");
        mids$[mid_values_d09c53c6a3557102] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$FilteringMode;");

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
      return Locale$FilteringMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0c48aeaef0e545e1], a0.this$));
    }

    JArray< Locale$FilteringMode > Locale$FilteringMode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$FilteringMode >(env->callStaticObjectMethod(cls, mids$[mid_values_d09c53c6a3557102]));
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ReflectiveOperationException::ReflectiveOperationException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
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
        mids$[mid_init$_de8316969b81209c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_getClassName_0090f7797e403f43] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    MissingResourceException::MissingResourceException(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_de8316969b81209c, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::String MissingResourceException::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_0090f7797e403f43]));
    }

    ::java::lang::String MissingResourceException::getKey() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_elements_44964b2b3d187632] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keys_44964b2b3d187632] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Dictionary::Dictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ::java::util::Enumeration Dictionary::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_44964b2b3d187632]));
    }

    ::java::lang::Object Dictionary::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    jboolean Dictionary::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Enumeration Dictionary::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_44964b2b3d187632]));
    }

    ::java::lang::Object Dictionary::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    ::java::lang::Object Dictionary::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jint Dictionary::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileNotFoundException::FileNotFoundException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    FileNotFoundException::FileNotFoundException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/util/NavigableMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/NavigableSet.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
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
        mids$[mid_ceilingEntry_f13324cfba0ff636] = env->getMethodID(cls, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_ceilingKey_ed50a8b49b8274dc] = env->getMethodID(cls, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingKeySet_edb7b61b9a16f086] = env->getMethodID(cls, "descendingKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_descendingMap_08b23a9584a26070] = env->getMethodID(cls, "descendingMap", "()Ljava/util/NavigableMap;");
        mids$[mid_firstEntry_8b1a9307898662e1] = env->getMethodID(cls, "firstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_floorEntry_f13324cfba0ff636] = env->getMethodID(cls, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_floorKey_ed50a8b49b8274dc] = env->getMethodID(cls, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headMap_bdec4bc419d678c0] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_headMap_ad6b06c127162ebe] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_higherEntry_f13324cfba0ff636] = env->getMethodID(cls, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_higherKey_ed50a8b49b8274dc] = env->getMethodID(cls, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_lastEntry_8b1a9307898662e1] = env->getMethodID(cls, "lastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_lowerEntry_f13324cfba0ff636] = env->getMethodID(cls, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_lowerKey_ed50a8b49b8274dc] = env->getMethodID(cls, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_navigableKeySet_edb7b61b9a16f086] = env->getMethodID(cls, "navigableKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_pollFirstEntry_8b1a9307898662e1] = env->getMethodID(cls, "pollFirstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_pollLastEntry_8b1a9307898662e1] = env->getMethodID(cls, "pollLastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_subMap_a46755e50d8df53f] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_subMap_151412da5847cc34] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_tailMap_bdec4bc419d678c0] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_ad6b06c127162ebe] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Map$Entry NavigableMap::ceilingEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_ceilingEntry_f13324cfba0ff636], a0.this$));
    }

    ::java::lang::Object NavigableMap::ceilingKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceilingKey_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::descendingKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingKeySet_edb7b61b9a16f086]));
    }

    NavigableMap NavigableMap::descendingMap() const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_descendingMap_08b23a9584a26070]));
    }

    ::java::util::Map$Entry NavigableMap::firstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_firstEntry_8b1a9307898662e1]));
    }

    ::java::util::Map$Entry NavigableMap::floorEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_floorEntry_f13324cfba0ff636], a0.this$));
    }

    ::java::lang::Object NavigableMap::floorKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floorKey_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::SortedMap NavigableMap::headMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_bdec4bc419d678c0], a0.this$));
    }

    NavigableMap NavigableMap::headMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_headMap_ad6b06c127162ebe], a0.this$, a1));
    }

    ::java::util::Map$Entry NavigableMap::higherEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_higherEntry_f13324cfba0ff636], a0.this$));
    }

    ::java::lang::Object NavigableMap::higherKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higherKey_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::Map$Entry NavigableMap::lastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lastEntry_8b1a9307898662e1]));
    }

    ::java::util::Map$Entry NavigableMap::lowerEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lowerEntry_f13324cfba0ff636], a0.this$));
    }

    ::java::lang::Object NavigableMap::lowerKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lowerKey_ed50a8b49b8274dc], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::navigableKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_navigableKeySet_edb7b61b9a16f086]));
    }

    ::java::util::Map$Entry NavigableMap::pollFirstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollFirstEntry_8b1a9307898662e1]));
    }

    ::java::util::Map$Entry NavigableMap::pollLastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollLastEntry_8b1a9307898662e1]));
    }

    ::java::util::SortedMap NavigableMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_a46755e50d8df53f], a0.this$, a1.this$));
    }

    NavigableMap NavigableMap::subMap(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_subMap_151412da5847cc34], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedMap NavigableMap::tailMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_bdec4bc419d678c0], a0.this$));
    }

    NavigableMap NavigableMap::tailMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_tailMap_ad6b06c127162ebe], a0.this$, a1));
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
#include "java/util/Spliterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/util/Spliterator$OfDouble.h"
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
        mids$[mid_forEachRemaining_46bb77b3436e630a] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_tryAdvance_c19e063446a5bed5] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z");
        mids$[mid_trySplit_ef028836b616dec4] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfDouble;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_46bb77b3436e630a], a0.this$);
    }

    jboolean Spliterator$OfDouble::tryAdvance(const ::java::util::function::DoubleConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_c19e063446a5bed5], a0.this$);
    }

    Spliterator$OfDouble Spliterator$OfDouble::trySplit() const
    {
      return Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_trySplit_ef028836b616dec4]));
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
        mids$[mid_getImplementationTitle_0090f7797e403f43] = env->getMethodID(cls, "getImplementationTitle", "()Ljava/lang/String;");
        mids$[mid_getImplementationVendor_0090f7797e403f43] = env->getMethodID(cls, "getImplementationVendor", "()Ljava/lang/String;");
        mids$[mid_getImplementationVersion_0090f7797e403f43] = env->getMethodID(cls, "getImplementationVersion", "()Ljava/lang/String;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackage_f7c808f242d7007d] = env->getStaticMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getPackages_24dcadba5c7fd8f6] = env->getStaticMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_getSpecificationTitle_0090f7797e403f43] = env->getMethodID(cls, "getSpecificationTitle", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVendor_0090f7797e403f43] = env->getMethodID(cls, "getSpecificationVendor", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVersion_0090f7797e403f43] = env->getMethodID(cls, "getSpecificationVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isCompatibleWith_6b161f495ea569b8] = env->getMethodID(cls, "isCompatibleWith", "(Ljava/lang/String;)Z");
        mids$[mid_isSealed_e470b6d9e0d979db] = env->getMethodID(cls, "isSealed", "()Z");
        mids$[mid_isSealed_44e8a9d7e85e19cd] = env->getMethodID(cls, "isSealed", "(Ljava/net/URL;)Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String Package::getImplementationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationTitle_0090f7797e403f43]));
    }

    ::java::lang::String Package::getImplementationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVendor_0090f7797e403f43]));
    }

    ::java::lang::String Package::getImplementationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVersion_0090f7797e403f43]));
    }

    ::java::lang::String Package::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    Package Package::getPackage(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Package(env->callStaticObjectMethod(cls, mids$[mid_getPackage_f7c808f242d7007d], a0.this$));
    }

    JArray< Package > Package::getPackages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Package >(env->callStaticObjectMethod(cls, mids$[mid_getPackages_24dcadba5c7fd8f6]));
    }

    ::java::lang::String Package::getSpecificationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationTitle_0090f7797e403f43]));
    }

    ::java::lang::String Package::getSpecificationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVendor_0090f7797e403f43]));
    }

    ::java::lang::String Package::getSpecificationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVersion_0090f7797e403f43]));
    }

    jint Package::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Package::isCompatibleWith(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_6b161f495ea569b8], a0.this$);
    }

    jboolean Package::isSealed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_e470b6d9e0d979db]);
    }

    jboolean Package::isSealed(const ::java::net::URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_44e8a9d7e85e19cd], a0.this$);
    }

    ::java::lang::String Package::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InterruptedException::InterruptedException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    InterruptedException::InterruptedException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/io/ObjectStreamConstants.h"
#include "java/lang/Class.h"
#include "java/io/SerializablePermission.h"
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NotActiveException::NotActiveException() : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    NotActiveException::NotActiveException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AutoCloseable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InstantiationException::InstantiationException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    InstantiationException::InstantiationException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
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
#include "java/util/Locale$IsoCountryCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/util/Locale$IsoCountryCode.h"
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
        mids$[mid_valueOf_e07100500c5955b4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;");
        mids$[mid_values_57bc5228f757395b] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$IsoCountryCode;");

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
      return Locale$IsoCountryCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e07100500c5955b4], a0.this$));
    }

    JArray< Locale$IsoCountryCode > Locale$IsoCountryCode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$IsoCountryCode >(env->callStaticObjectMethod(cls, mids$[mid_values_57bc5228f757395b]));
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
#include "java/lang/System$Logger.h"
#include "java/util/function/Supplier.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Throwable.h"
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
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_isLoggable_d2398debbb1ec9e8] = env->getMethodID(cls, "isLoggable", "(Ljava/lang/System$Logger$Level;)Z");
        mids$[mid_log_f0ae47de5a67b038] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V");
        mids$[mid_log_fabecddcbbadaef3] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V");
        mids$[mid_log_9eed3a1f1fa8cc1b] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V");
        mids$[mid_log_2b0b3c09aa053b0d] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_c9e130c9d91b8eef] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_log_852b65df48ee4059] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V");
        mids$[mid_log_466b7dc1a86f0a08] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_7131407ab05fa67e] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    jboolean System$Logger::isLoggable(const ::java::lang::System$Logger$Level & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLoggable_d2398debbb1ec9e8], a0.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_f0ae47de5a67b038], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_fabecddcbbadaef3], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_9eed3a1f1fa8cc1b], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_2b0b3c09aa053b0d], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_c9e130c9d91b8eef], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_852b65df48ee4059], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const JArray< ::java::lang::Object > & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_466b7dc1a86f0a08], a0.this$, a1.this$, a2.this$, a3.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const ::java::lang::Throwable & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_7131407ab05fa67e], a0.this$, a1.this$, a2.this$, a3.this$);
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
        mids$[mid_forEachRemaining_46bb77b3436e630a] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_next_78bf89a0cf45ae1d] = env->getMethodID(cls, "next", "()Ljava/lang/Double;");
        mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_46bb77b3436e630a], a0.this$);
    }

    ::java::lang::Double PrimitiveIterator$OfDouble::next() const
    {
      return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_next_78bf89a0cf45ae1d]));
    }

    jdouble PrimitiveIterator$OfDouble::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_d77f10dac029c69d] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_57c70f71f2367c30] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
        mids$[mid_append_1cddcd4cde4f0228] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuffer;");
        mids$[mid_append_648d5173f9653196] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_append_92ed7440a231bd8e] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuffer;");
        mids$[mid_append_6709bae0613860a1] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuffer;");
        mids$[mid_append_2dbfa38bc898b70b] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuffer;");
        mids$[mid_append_35e96278c06ac341] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuffer;");
        mids$[mid_append_36c92fb928d8ac3d] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_append_6785dcf8b9fc8b93] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_append_615df75cc02d182e] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_append_66899a876bc84d80] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuffer;");
        mids$[mid_append_bf45c8407c15aea6] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuffer;");
        mids$[mid_append_0a8a7e1784a5d0de] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_appendCodePoint_36c92fb928d8ac3d] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_capacity_f2f64475e4580546] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_52047e692b58eb87] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_38565d58479aa24a] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_38565d58479aa24a] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_d9790ac9eecfe931] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_b89723a79bf3d461] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuffer;)I");
        mids$[mid_delete_86aaf45d47b94be5] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_deleteCharAt_36c92fb928d8ac3d] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_ensureCapacity_0a2a1ac2721c0336] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_6a4fae412727af3a] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_4918d8aef83f928e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_7a711016174c8c92] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuffer;");
        mids$[mid_insert_85ef637eed308a73] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_21c73412c0f0304a] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_7141cc402a547b1d] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuffer;");
        mids$[mid_insert_c0698c06976c6df0] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuffer;");
        mids$[mid_insert_7300e96d123991a9] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuffer;");
        mids$[mid_insert_86aaf45d47b94be5] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_insert_b5df3623094760b7] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_84b53a0d98d40b65] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_22f0afa5aaffec92] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_d40746eaa44e7d0d] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuffer;");
        mids$[mid_insert_296378f8d412950b] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_lastIndexOf_5d6fce34d596f8f0] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_4918d8aef83f928e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_f2f64475e4580546] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_d9790ac9eecfe931] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_cde24e08eb8fd5d9] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_reverse_d50cbf6320007b5d] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuffer;");
        mids$[mid_setCharAt_897ba55cae2e4418] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_0a2a1ac2721c0336] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_d0ccff93b0cd9262] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_90cbcc0b7a5ddae9] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_a1a389fa4c946a7a] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_7ae3461a92a43152] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuffer::StringBuffer() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    StringBuffer::StringBuffer(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    StringBuffer::StringBuffer(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    StringBuffer::StringBuffer(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_d77f10dac029c69d, a0.this$)) {}

    StringBuffer StringBuffer::append(const StringBuffer & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_57c70f71f2367c30], a0.this$));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_1cddcd4cde4f0228], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::String & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_648d5173f9653196], a0.this$));
    }

    StringBuffer StringBuffer::append(jboolean a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_92ed7440a231bd8e], a0));
    }

    StringBuffer StringBuffer::append(jchar a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_6709bae0613860a1], a0));
    }

    StringBuffer StringBuffer::append(jdouble a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_2dbfa38bc898b70b], a0));
    }

    StringBuffer StringBuffer::append(jfloat a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_35e96278c06ac341], a0));
    }

    StringBuffer StringBuffer::append(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_36c92fb928d8ac3d], a0));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_6785dcf8b9fc8b93], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::Object & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_615df75cc02d182e], a0.this$));
    }

    StringBuffer StringBuffer::append(jlong a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_66899a876bc84d80], a0));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_bf45c8407c15aea6], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_0a8a7e1784a5d0de], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::appendCodePoint(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_appendCodePoint_36c92fb928d8ac3d], a0));
    }

    jint StringBuffer::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_f2f64475e4580546]);
    }

    jchar StringBuffer::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_52047e692b58eb87], a0);
    }

    jint StringBuffer::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_38565d58479aa24a], a0);
    }

    jint StringBuffer::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_38565d58479aa24a], a0);
    }

    jint StringBuffer::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_d9790ac9eecfe931], a0, a1);
    }

    jint StringBuffer::compareTo(const StringBuffer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b89723a79bf3d461], a0.this$);
    }

    StringBuffer StringBuffer::delete$(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_delete_86aaf45d47b94be5], a0, a1));
    }

    StringBuffer StringBuffer::deleteCharAt(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_deleteCharAt_36c92fb928d8ac3d], a0));
    }

    void StringBuffer::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_0a2a1ac2721c0336], a0);
    }

    void StringBuffer::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_6a4fae412727af3a], a0, a1, a2.this$, a3);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_4918d8aef83f928e], a0.this$, a1);
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_7a711016174c8c92], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_85ef637eed308a73], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jboolean a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_21c73412c0f0304a], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jchar a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_7141cc402a547b1d], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jdouble a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_c0698c06976c6df0], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jfloat a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_7300e96d123991a9], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_86aaf45d47b94be5], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_b5df3623094760b7], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_84b53a0d98d40b65], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jlong a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_22f0afa5aaffec92], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_d40746eaa44e7d0d], a0, a1.this$, a2, a3));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_296378f8d412950b], a0, a1.this$, a2, a3));
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_5d6fce34d596f8f0], a0.this$);
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_4918d8aef83f928e], a0.this$, a1);
    }

    jint StringBuffer::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_f2f64475e4580546]);
    }

    jint StringBuffer::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_d9790ac9eecfe931], a0, a1);
    }

    StringBuffer StringBuffer::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_replace_cde24e08eb8fd5d9], a0, a1, a2.this$));
    }

    StringBuffer StringBuffer::reverse() const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_reverse_d50cbf6320007b5d]));
    }

    void StringBuffer::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_897ba55cae2e4418], a0, a1);
    }

    void StringBuffer::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_0a2a1ac2721c0336], a0);
    }

    ::java::lang::CharSequence StringBuffer::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_d0ccff93b0cd9262], a0, a1));
    }

    ::java::lang::String StringBuffer::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_90cbcc0b7a5ddae9], a0));
    }

    ::java::lang::String StringBuffer::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_a1a389fa4c946a7a], a0, a1));
    }

    ::java::lang::String StringBuffer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    void StringBuffer::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_7ae3461a92a43152]);
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
        mids$[mid_compare_635c62272e86b001] = env->getMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_naturalOrder_838794f9a43cf98e] = env->getStaticMethodID(cls, "naturalOrder", "()Ljava/util/Comparator;");
        mids$[mid_nullsFirst_3d37843ecb21deb5] = env->getStaticMethodID(cls, "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_nullsLast_3d37843ecb21deb5] = env->getStaticMethodID(cls, "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_reverseOrder_838794f9a43cf98e] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reversed_838794f9a43cf98e] = env->getMethodID(cls, "reversed", "()Ljava/util/Comparator;");
        mids$[mid_thenComparing_3d37843ecb21deb5] = env->getMethodID(cls, "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparator::compare(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callIntMethod(this$, mids$[mid_compare_635c62272e86b001], a0.this$, a1.this$);
    }

    jboolean Comparator::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    Comparator Comparator::naturalOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_naturalOrder_838794f9a43cf98e]));
    }

    Comparator Comparator::nullsFirst(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsFirst_3d37843ecb21deb5], a0.this$));
    }

    Comparator Comparator::nullsLast(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsLast_3d37843ecb21deb5], a0.this$));
    }

    Comparator Comparator::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_838794f9a43cf98e]));
    }

    Comparator Comparator::reversed() const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_reversed_838794f9a43cf98e]));
    }

    Comparator Comparator::thenComparing(const Comparator & a0) const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_thenComparing_3d37843ecb21deb5], a0.this$));
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
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityException::SecurityException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
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
